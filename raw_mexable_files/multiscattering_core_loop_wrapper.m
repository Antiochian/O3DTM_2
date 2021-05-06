function [ Tmax_3dmat, Tmin_3dmat, sample_timepoints , T_error_3dmat ] = multiscattering_core_loop_wrapper(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, vis_flux_matrix, ir_flux_matrix, dz_arr,dz, parameters, init_temps, raytracing_params,  start_jd, end_jd, diviner_data, recent_only )

%% Mark diviner testpoints for error comparison
[ sample_timepoints, sample_surface_temperatures ] = mark_diviner_testpoints(start_jd, end_jd, lat_arr, long_arr, diviner_data, recent_only);


%% Unpack raytracing_params
elevation_matrix = raytracing_params.elevation_matrix;
slope_matrix = raytracing_params.slope_matrix;
aspect_matrix = raytracing_params.aspect_matrix;

decl_arr = raytracing_params.decl_arr;
raytracing_h_arr = raytracing_params.h_arr;

%% Get parameters
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
% %% Generate vis normalisation matrix
% mA = A0_matrix;
% mB = a_matrix./((pi/4)^3);
% mC = b_matrix./((pi/2)^8);
% %hardcoded solution to integral to avoid using symbolic variables
% vis_normalisation_matrix = 1./( mA + 3*mB*(pi^2 - 8)/4 + mC*(40320 - 20160*pi + 840*pi^3 - 10.5*pi^5 + pi^7 /16) );
% %clearvars mA mB mC;

%% Old prog starts

Tmax_3dmat = ones(size(T_3dmat))*-300; 
% Tmax_dtm_3dmat = NaN(size(T_3dmat));
Tmin_3dmat = ones(size(T_3dmat))*600;
% Tmin_dtm_3dmat = NaN(size(T_3dmat));

t_steps = P/dt;
dh = 360/t_steps;


%% Prepare for loop
% Prepare for loop by pre-calculating constant values which do not need to
% be calculated every iteration (therefore increasing performance)
% progress_message = '';
% coder.varsize('progress_message');
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




%% GENERAL PARAMETER
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
t_arr = 0:dt:t_limit;
temperature_parameters.t_arr = t_arr;
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


temperature_parameters.A0_nx1 = reshape(A0_matrix, [], 1);
temperature_parameters.a_OVER_pi_OVER_4_POWER_3_nx1 = reshape(a_OVER_pi_OVER_4_POWER_3_matrix, [], 1);
temperature_parameters.b_OVER_pi_OVER_2_POWER_8_nx1 = reshape(b_OVER_pi_OVER_2_POWER_8_matrix, [], 1);

temperature_parameters.thermal_emission_matrix = thermal_emission_matrix;
temperature_parameters.B_surface_matrix = B_surface_matrix;
temperature_parameters.Kc_3dmat = Kc_3dmat;
%% Initialise error output matrices
sz_lat = numel(lat_arr);
sz_long = numel(long_arr);
jd_error_3dmat = cell(sz_lat, sz_long);
T_error_3dmat = cell(sz_lat, sz_long);
%% Decide when to check for errors
fprintf("Reordering Diviner comparison measurements... ");
%count number of total values to allow for preallocation of memory
num_samples = 0;
for lat_idx = 1:sz_lat
    for long_idx = 1:sz_long
        num_samples = num_samples + numel(sample_surface_temperatures{lat_idx, long_idx});
    end
end
sample_T = NaN(1,num_samples);
sample_t_idx = NaN(1,num_samples);
sample_weights = NaN(1,num_samples);
sample_jds = NaN(1,num_samples);
sample_lat = NaN(1,num_samples);
sample_long = NaN(1,num_samples);

jd_start = raytracing_params.start_julian_date;
dj = dt/86400;

ptr = 1; %indicates where to insert next value
for lat_idx = 1:sz_lat
    for long_idx = 1:sz_long
        local_temps = sample_surface_temperatures{lat_idx, long_idx};
        local_time = sample_timepoints{lat_idx, long_idx};
        sz = numel(local_temps);
        T_error_3dmat{lat_idx, long_idx} = NaN(1,sz);
        jd_error_3dmat{lat_idx, long_idx} = NaN(1,sz);
        for sample_idx = 1:sz
            target_jd = local_time(sample_idx);
            exact_idx = (target_jd - jd_start)/dj;
            lower_idx = floor(exact_idx);
            upper_idx = ceil(exact_idx);
            remainder = exact_idx - lower_idx;

            sample_jds(ptr) = target_jd;
            sample_t_idx(ptr) = upper_idx;
            sample_weights(ptr) = remainder;  
            ptr = ptr + 1;
        end
        sample_lat(ptr-sz : ptr-1) = lat_idx;
        sample_long(ptr-sz : ptr-1) = long_idx;
        sample_T(ptr-sz : ptr-1) = local_temps;
    end
end
%sort everything by time. If this step takes too long, the "recent_only"
%flag in the mark_diviner_testpoints function will hugely reduce the amoutn
%that needs to be sorted by only flagging the most recent year's worth of
%measurements
[sample_t_idx,increasing_time_order] = sort(sample_t_idx);
sample_T = sample_T(increasing_time_order);
sample_weights = sample_weights(increasing_time_order);
sample_lat = sample_lat(increasing_time_order);
sample_long = sample_long(increasing_time_order);
% sample_jds = sample_jds(increasing_time_order);

sample_t_idx = [sample_t_idx, 0];

local_ptr_matrix = ones(size(elevation_matrix));
sample_ptr = 1; %tells you which error is to be evaluated next
next_sample_idx = sample_t_idx(sample_ptr); %slightly redundant phrasing here to illustrate the purpose of the pointer
fprintf("Done\n ");
%% TIME LOOP
% t_print = raytracing_params.t_calculation_step_length;
t_print = 1;
t_print_step = ceil(numel(t_arr)/1000); %print approx every 0.1%

% A0_nx1 = reshape(A0_matrix, [], 1);
% a_OVER_pi_OVER_4_POWER_3_nx1 = reshape(a_OVER_pi_OVER_4_POWER_3_matrix, [], 1);
% b_OVER_pi_OVER_2_POWER_8_nx1 = reshape(b_OVER_pi_OVER_2_POWER_8_matrix, [], 1);

PROG_MESSAGE_LENGTH = 44;

fprintf(repmat(' ', 1, PROG_MESSAGE_LENGTH));
tic;
old_surface_T = NaN(size(T_3dmat(:,:,1)));
for t_idx = 1:numel(t_arr)
    t_relative_sec = t_arr(t_idx); %seconds since diviner start data
    decl = decl_arr(t_idx);
    raytrace_h = raytracing_h_arr(t_idx);
    
    if bottom_layer_idx < num_layers && t_relative_sec > depth_update_wait_t
        % extend simulation by 1 layer, using bottom BC to define new
        % temperature
        depth_update_wait_t = depth_update_wait_t + depth_update_t_interval;
        bottom_layer_idx = bottom_layer_idx + 1;
        T_above_matrix = T_3dmat(:,:,bottom_layer_idx-1);
        T_3dmat(:,:,bottom_layer_idx) = T_above_matrix + (dz_arr(bottom_layer_idx-1)*Q)./(Kc_3dmat(:,:,bottom_layer_idx-1).*(1 + Chi_OVER_350_POWER_3.*T_above_matrix.*T_above_matrix.*T_above_matrix));
    end
    if t_idx == next_sample_idx-1
        old_surface_T = T_3dmat(:,:,1); %used for upcoming sample comparison
    end
    [T_3dmat] = multiscattering_core_loop(T_3dmat, bottom_layer_idx,  decl, raytrace_h, num_layers, rho_matrix, lat_arr, long_arr, vis_flux_matrix, ir_flux_matrix, dz_arr,dz, elevation_matrix,slope_matrix, aspect_matrix, raytracing_params, temperature_parameters);
    %% Process implications of new T_3dmat
    max_mask = ( Tmax_3dmat< T_3dmat);
    min_mask = ( Tmin_3dmat > T_3dmat); 
    Tmax_3dmat(max_mask) = T_3dmat(max_mask);
    Tmin_3dmat(min_mask) = T_3dmat(min_mask);
    
    %% Track and interpolate errors
    while t_idx == next_sample_idx 
    %"while" not "for" because there might be multiple samples for a single
    %t_idx value (i.e. measurements at the same time but at different locations)
        slat = sample_lat(sample_ptr);
        slong = sample_long(sample_ptr); 

        T_measured = sample_T(sample_ptr);
        weight = sample_weights(sample_ptr);

        T_pred_interpolated = old_surface_T(slat, slong, 1) + weight*(T_3dmat(slat, slong, 1) - old_surface_T(slat, slong, 1));
        local_ptr = local_ptr_matrix(slat, slong);
        %if you enjoy living dangerously you could easily just save
        %T_pred_interpolated into the T_error_3dmat matrix here
        T_error_3dmat{slat, slong}(local_ptr) = T_pred_interpolated - T_measured;
        local_ptr_matrix(slat, slong) = local_ptr + 1;
        sample_ptr = sample_ptr+1;
        next_sample_idx = sample_t_idx(sample_ptr);
    end

    if t_idx == t_print
        
        if t_idx == 1
            fprintf('\n1st tick out of %9d done in %4f s', int32(numel(t_arr)), toc);
         else
            time_so_far = int32(toc);
            fprintf(repmat('\b', 1, PROG_MESSAGE_LENGTH)); %hard coded length of string = 46 chars
            fprintf('Finished %7.2f percent in %7d seconds\n', 100*(t_idx)/numel(t_arr), time_so_far);
        end
        t_print = t_print + t_print_step;
    end
    
    % process outputs, set T_3dmin, T_3dmax, error comparisons, etc
end
% %% Interpolate errors
% for sample_idx = 1:numel(sample_timepoints_local)
%     T_measured = sample_surface_temperatures_local(sample_idx);
%     T_pred_tuple = sample_T_bounds(2*sample_idx-1 : 2*sample_idx);
%     weight = sample_weights(sample_idx);
%     
%     T_pred_interpolated = T_pred_tuple(1) + weight*(T_pred_tuple(2)-T_pred_tuple(1));
%     
%     T_error_local(sample_idx) = T_pred_interpolated - T_measured;
% end
