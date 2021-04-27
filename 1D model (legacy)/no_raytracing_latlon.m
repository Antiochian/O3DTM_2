function [ Tmax_3dmat, Tmin_3dmat, sample_timepoints , T_error_3dmat ] = no_raytracing_latlon(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, dz_arr,dz, parameters, init_temps, raytracing_params,ew_matrix, ns_matrix,  start_jd, end_jd, diviner_data, recent_only)


% [ sample_timepoints, sample_surface_temperatures ] = mark_diviner_testpoints(start_jd, end_jd, lat_arr, long_arr, diviner_data, recent_only);
[ sample_timepoints, sample_surface_temperatures ] = mark_diviner_testpoints(start_jd, end_jd, lat_arr, long_arr, diviner_data, recent_only);


%% Unpack raytracing params
public_raster_struct = raytracing_params.public_raster_struct;
ref_sphere = raytracing_params.ref_sphere;
r_moon = ref_sphere.Radius;
sample_dens = raytracing_params.sample_dens;
scattering_power = raytracing_params.scattering_power;
ir_normalisation = 1/scattering_power+1;

elevation_matrix = raytracing_params.elevation_matrix;
aspect_matrix = raytracing_params.aspect_matrix;
slope_matrix = raytracing_params.slope_matrix;
%% Unpack general parameters
% custom_parameters
P = parameters.P;

rho_s = parameters.rho_s;
rho_d = parameters.rho_d;
inp_H_matrix = parameters.H;
stefans_constant = parameters.stefans_constant;
inp_emissivity_matrix = parameters.emissivity;
S = parameters.S;
R_AU = parameters.R_AU;
Q = parameters.Q;
inp_A0_matrix = parameters.A0;
inp_a_matrix = parameters.a;
inp_b_matrix = parameters.b;
Chi = parameters.Chi;
Ks = parameters.Ks;
Kd = parameters.Kd;
c0 = parameters.c0;
c1 = parameters.c1;
c2 = parameters.c2;
c3 = parameters.c3;
c4 = parameters.c4;

T_bottom_limit = parameters.T_bottom_limit;
surface_bc_test_difference = parameters.surface_bc_test_difference;
surface_bc_break_counter = parameters.surface_bc_break_counter;
dt = parameters.dt;
diviner_start_dtm = parameters.diviner_start_dtm;
diviner_end_dtm = parameters.diviner_end_dtm;


% generate matrices if needed
if numel(inp_A0_matrix) == 1
    A0_matrix = inp_A0_matrix*ones(size(elevation_matrix));
else
    A0_matrix = inp_A0_matrix;
end
if numel(inp_a_matrix) == 1
    a_matrix = inp_a_matrix*ones(size(elevation_matrix));
else
    a_matrix = inp_a_matrix;
end

if numel(inp_b_matrix) == 1
    b_matrix = inp_b_matrix*ones(size(elevation_matrix));
else
    b_matrix = inp_b_matrix;
end

if numel(inp_emissivity_matrix) == 1
    emissivity_matrix = inp_emissivity_matrix*ones(size(elevation_matrix));
else
    emissivity_matrix = inp_emissivity_matrix;
end

if numel(inp_H_matrix) == 1
    H_matrix = inp_H_matrix*ones(size(elevation_matrix));
else
    H_matrix = inp_H_matrix;
end

% pre-calculate constant parameters
S_OVER_R_AU2 = S/R_AU^2;
thermal_emission_matrix = emissivity_matrix*stefans_constant;
Chi_OVER_350_POWER_3 = Chi*(1/350)^3;
a_OVER_pi_OVER_4_POWER_3_matrix = a_matrix*(1/(pi/4))^3;
b_OVER_pi_OVER_2_POWER_8_matrix = b_matrix*(1/(pi/2))^8;


%% Initialise Temperatures
T_3dmat = NaN(numel(lat_arr), numel(long_arr), num_layers);
for lat1_idx = 1:numel(lat_arr)
    %% Prepare for parfor iteration
    for long1_idx = 1:numel(long_arr)
        T0 = init_temps(lat1_idx, long1_idx);
        TN = T0/sqrt(2);
        if TN < T_bottom_limit
            % set roughly constant initial temperature profile for very
            % cold regions
            TN = T_bottom_limit;
        end
        for layer_idx = 1:num_layers
            z = z_arr(layer_idx);
            if H_matrix(lat1_idx, long1_idx) == 0 && z == 0
                T_3dmat(lat1_idx, long1_idx, layer_idx) = T0;
            else
                T_3dmat(lat1_idx, long1_idx, layer_idx) = TN - (TN - T0)*exp(-z/H_matrix(lat1_idx, long1_idx));
            end
        end
    end
end
%% Generate vis normalisation matrix
mA = A0_matrix;
mB = a_matrix./((pi/4)^3);
mC = b_matrix./((pi/2)^8);
%hardcoded solution to integral to avoid using symbolic variables
vis_normalisation_matrix = 1./( mA + 3*mB*(pi^2 - 8)/4 + mC*(40320 - 20160*pi + 840*pi^3 - 10.5*pi^5 + pi^7 /16) );
%clearvars mA mB mC;

%% Old prog starts

Tmax_3dmat = ones(size(T_3dmat))*-300;
Tmin_3dmat = ones(size(T_3dmat))*600;

t_steps = P/dt;
dh = 360/t_steps;


sz_lat = numel(lat_arr);
sz_long = numel(long_arr);

jd_error_3dmat = cell(sz_lat, sz_long);
T_error_3dmat = cell(sz_lat, sz_long);


%% Prepare for loop
% Prepare for loop by pre-calculating constant values which do not need to
% be calculated every iteration (therefore increasing performance)
progress_message = '';
coder.varsize('progress_message');
Kc_3dmat = NaN(numel(lat_arr), numel(long_arr), num_layers);
B_surface_matrix = zeros(numel(lat_arr), numel(long_arr)); %PREALLOC
for lat_idx = 1:numel(lat_arr)
    for long_idx = 1:numel(long_arr)
        for layer_idx = 1:num_layers
            Kc_3dmat(lat_idx, long_idx, layer_idx) = Kd - (Kd - Ks)*(rho_d - rho_matrix(lat_idx, long_idx, layer_idx))/(rho_d - rho_s);
        end
        B_surface_matrix(lat_idx, long_idx) = Kc_3dmat(lat_idx, long_idx, 1)*Chi_OVER_350_POWER_3;
    end
end

p_arr = NaN(1,num_layers);
q_arr = NaN(1,num_layers);
for layer_idx = 2:num_layers-1
    d3z = dz_arr(layer_idx)*dz_arr(layer_idx-1)*(dz_arr(layer_idx) + dz_arr(layer_idx-1));
    p = 2*dz_arr(layer_idx)/d3z;
    q = 2*dz_arr(layer_idx-1)/d3z;
    p_arr(layer_idx) = p;
    q_arr(layer_idx) = q;
end




%% CREATE TEMPERATURE PARAMETERS
% set general parameters

temperature_parameters = struct();

temperature_parameters.dz = dz;
temperature_parameters.dh = dh;
temperature_parameters.dt = dt;
temperature_parameters.P = P;
temperature_parameters.Q = Q;
temperature_parameters.stefans_constant = stefans_constant;
temperature_parameters.Chi_OVER_350_POWER_3 = Chi_OVER_350_POWER_3;
temperature_parameters.S_OVER_R_AU2 = S_OVER_R_AU2;

temperature_parameters.t_wait = t_wait;
temperature_parameters.t_arr = 0:dt:t_limit;
temperature_parameters.t_limit = t_limit;

temperature_parameters.depth_update_wait_t_local = depth_update_wait_t;
temperature_parameters.depth_update_t_interval = depth_update_t_interval;
temperature_parameters.bottom_layer_idx_local = bottom_layer_idx;
        
temperature_parameters.surface_bc_test_difference = surface_bc_test_difference;
temperature_parameters.surface_bc_break_counter = surface_bc_break_counter;
temperature_parameters.num_layers = num_layers;
temperature_parameters.p_arr = p_arr;
temperature_parameters.q_arr = q_arr;

temperature_parameters.c0 = c0;
temperature_parameters.c1 = c1;
temperature_parameters.c2 = c2;
temperature_parameters.c3 = c3;
temperature_parameters.c4 = c4;

local_temperature_params = struct();
local_raytracing_params = struct();
%% SIMULATION START

pixel_count = int16(0);
total_pixels = int16(numel(lat_arr)*numel(long_arr));
PROG_MESSAGE_LENGTH = 50;
fprintf('Started  pixel:  %5d / %5d in %7d seconds\n', int16(0),total_pixels,int16(0));
tic;

for lat_idx = 1:sz_lat
    lat = lat_arr(lat_idx);
    for long_idx = 1:sz_long
%         long = long_arr(long_idx);
        %% RAYTRACING PREP SEGMENT
        long = long_arr(long_idx);
        slope1 = slope_matrix(lat_idx, long_idx);
        aspect1 = aspect_matrix(lat_idx, long_idx);
        h1 = elevation_matrix(lat_idx, long_idx);
        local_raytracing_params.height_px = elevation_matrix(lat_idx, long_idx);
        if lat >= 0
            local_raytracing_params.aspect = aspect1;
            local_raytracing_params.slope = slope1;
        else
            local_raytracing_params.aspect = -aspect1;
            local_raytracing_params.slope = -slope1;
        end

        local_raytracing_params.h_arr_local = raytracing_params.h_arr + long - mean(long_arr); %what is this?
        local_raytracing_params.decl_arr_local = raytracing_params.decl_arr;

        sample_timepoints_local = sample_timepoints{lat_idx, long_idx};
        sample_surface_temperatures_local = sample_surface_temperatures{lat_idx, long_idx};
        
        %% TEMPERATURE PREP SEGMENT
        T_arr = T_3dmat(lat_idx, long_idx, :);
      
        
        
        local_temperature_params.A0_local = A0_matrix(lat_idx, long_idx);
        local_temperature_params.a_OVER_pi_OVER_4_POWER_3_local = a_OVER_pi_OVER_4_POWER_3_matrix(lat_idx, long_idx);
        local_temperature_params.b_OVER_pi_OVER_2_POWER_8_local = b_OVER_pi_OVER_2_POWER_8_matrix(lat_idx, long_idx);
        
        local_temperature_params.thermal_emission_local = thermal_emission_matrix(lat_idx, long_idx);
        local_temperature_params.B_surface_local = B_surface_matrix(lat_idx, long_idx);
        local_temperature_params.Kc_3dmat_local = Kc_3dmat(lat_idx, long_idx, :);
        local_temperature_params.rho_matrix_local = rho_matrix(lat_idx, long_idx, :);
        
        
        %% GENERATE 1-BOUNCE FLUX COEFFICIENT ON-THE-FLY
        vis_matrix = mexable_viewshed(elevation_matrix, 0, lat, long, 0, 0, 'AGL', 'AGL', r_moon,r_moon, sample_dens, public_raster_struct);    
        ew_dist = ew_matrix(lat_idx, 2) - ew_matrix(lat_idx, 1);
        ns_dist = ns_matrix(1, long_idx) - ns_matrix(2, long_idx);
        emission_area = abs(ew_dist*ns_dist/cosd(slope1));

        curr_vis_normalisation = vis_normalisation_matrix(lat_idx, long_idx);

        absorbed_vis_coeff_local = NaN(size(elevation_matrix));                    
        emitted_absorbed_ir_coeff_local = NaN(size(elevation_matrix));

        for lat2_idx = 1:numel(lat_arr)
            lat2 = lat_arr(lat2_idx);
            for long2_idx = 1:numel(long_arr)
                long2 = long_arr(long2_idx);
                if lat == lat2 && long == long2
                    % Values not needed for current pixel
                    continue
                elseif vis_matrix(lat2_idx, long2_idx) == 0
                    % Values not needed for pixels not visible from current
                    % pixel
                    continue
                else   
                    h2 = elevation_matrix(lat2_idx, long2_idx);
                    slope2 = slope_matrix(lat2_idx, long2_idx);
                    aspect2 = aspect_matrix(lat2_idx, long2_idx);


                    [ absorbed_vis_coeff, ~, emitted_absorbed_ir_coeff, ~, ~, ~ ] = scattering_coefficients(lat, long, lat2, long2, lat_idx, long_idx, lat2_idx, long2_idx, h1, h2, slope1, slope2, aspect1, aspect2, emission_area, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, curr_vis_normalisation, ir_normalisation, emissivity_matrix, scattering_power);

                    absorbed_vis_coeff_local(lat2_idx, long2_idx) = absorbed_vis_coeff;                    
                    emitted_absorbed_ir_coeff_local(lat2_idx, long2_idx) = emitted_absorbed_ir_coeff;

                end
            end
        end

        local_temperature_params.vis_flux_local = absorbed_vis_coeff_local;
        local_temperature_params.ir_flux_local = emitted_absorbed_ir_coeff_local;

        
        %% TIME LOOP
        [Tmin_local, Tmax_local, jd_error_local, T_error_local] = no_raytracing_timeloop(T_arr, dz_arr, temperature_parameters,local_temperature_params, raytracing_params, local_raytracing_params, lat, long, sample_timepoints_local, sample_surface_temperatures_local);
        Tmin_3dmat(lat_idx, long_idx, :) = Tmin_local;
        Tmax_3dmat(lat_idx, long_idx, :) = Tmax_local;
        jd_error_3dmat{lat_idx, long_idx} = jd_error_local;
        T_error_3dmat{lat_idx, long_idx} = T_error_local;
        pixel_count = pixel_count + 1;
        time_so_far = int32(toc);
        fprintf(repmat('\b', 1, PROG_MESSAGE_LENGTH)); %hard coded length of string = 46 chars
        fprintf('Finished pixel:  %5d / %5d in %7d seconds\n', pixel_count, total_pixels, time_so_far);
        
    end %end long
end %end lat
