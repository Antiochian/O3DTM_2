function [ T_3dmat ] = multiscattering_core_loop(T_3dmat, bottom_layer_idx,  decl, raytrace_h, num_layers, rho_matrix, lat_arr, long_arr, vis_flux_matrix, ir_flux_matrix, dz_arr,dz, elevation_matrix,slope_matrix, aspect_matrix, raytracing_params, temperature_parameters)
                                                 
%% Unpack global params
% Unpack temperature params

Q = temperature_parameters.Q;
thermal_emission_matrix = temperature_parameters.thermal_emission_matrix;
B_surface_matrix = temperature_parameters.B_surface_matrix;
Kc_3dmat = temperature_parameters.Kc_3dmat;
% rho_matrix_local = rho_matrix(lat_idx, long_idx, :);

stefans_constant = temperature_parameters.stefans_constant;
Chi_OVER_350_POWER_3 = temperature_parameters.Chi_OVER_350_POWER_3;
S_OVER_R_AU2 = temperature_parameters.S_OVER_R_AU2;

a_OVER_pi_OVER_4_POWER_3_nx1 = temperature_parameters.a_OVER_pi_OVER_4_POWER_3_nx1;
b_OVER_pi_OVER_2_POWER_8_nx1 = temperature_parameters.b_OVER_pi_OVER_2_POWER_8_nx1;
A0_nx1 = temperature_parameters.A0_nx1;

c0 = temperature_parameters.c0;
c1 = temperature_parameters.c1;
c2 = temperature_parameters.c2;
c3 = temperature_parameters.c3;
c4 = temperature_parameters.c4;


p_arr = temperature_parameters.p_arr;
q_arr = temperature_parameters.q_arr;

surface_bc_break_counter = temperature_parameters.surface_bc_break_counter;
surface_bc_test_difference = temperature_parameters.surface_bc_test_difference;

% dh = temperature_parameters.dh;
dt = temperature_parameters.dt;

%% Unpack raytracing params
max_distance = raytracing_params.max_distance;

ref_sphere = raytracing_params.ref_sphere;
extended_elevation_matrix = raytracing_params.extended_elevation_matrix;

% const_decl = raytracing_params.const_decl;
public_raster_struct = raytracing_params.public_raster_struct;

r_moon = ref_sphere.Radius;
sample_dens = raytracing_params.sample_dens;

%% GET ALL ANGLES FOR CURRENT TIMESTEP
[theta_arr] = raytrace_tick(decl, raytrace_h, lat_arr, long_arr, elevation_matrix, extended_elevation_matrix, slope_matrix, aspect_matrix, ref_sphere, max_distance, public_raster_struct, r_moon, sample_dens); 

theta_nx1 = double(theta_arr.'); % convert back up from single precision
solar_albedo_nx1 = A0_nx1 + a_OVER_pi_OVER_4_POWER_3_nx1.*theta_nx1.*theta_nx1.*theta_nx1 + b_OVER_pi_OVER_2_POWER_8_nx1.*theta_nx1.*theta_nx1.*theta_nx1.*theta_nx1.*theta_nx1.*theta_nx1.*theta_nx1.*theta_nx1;
Qsun_nx1 = (1 - solar_albedo_nx1).*S_OVER_R_AU2.*cos(theta_nx1); % direct solar flux absorbed by each px
Qsun_scattered_nx1 = solar_albedo_nx1.*S_OVER_R_AU2.*cos(theta_nx1);
Qsun_nx1(isnan(Qsun_nx1)) = 0; % deal with NaN values represention no solar illumination
Qsun_scattered_nx1(isnan(Qsun_scattered_nx1)) = 0;
sigmaT4_nx1 = reshape(stefans_constant*T_3dmat(:,:,1).^4, [], 1);
Qabsorbed_vis_nx1 = vis_flux_matrix*Qsun_scattered_nx1; % scattered vis flux absorbed by each px
Qabsorbed_ir_nx1 = ir_flux_matrix*sigmaT4_nx1; % scattered ir flux absorbed by each px
Q_arr = Qabsorbed_ir_nx1 + Qabsorbed_vis_nx1 + Qsun_nx1; % total flux absorbed by each px

for lat_idx = 1:numel(lat_arr)
%     lat = lat_arr(lat_idx);
    for long_idx = 1:numel(long_arr)
%         long = long_arr(long_idx);
        
        %% TEMPERATURE PREP SEGMENT
        T_arr = T_3dmat(lat_idx, long_idx, :);
        
        thermal_emission_local = thermal_emission_matrix(lat_idx, long_idx);
        B_surface_local = B_surface_matrix(lat_idx, long_idx);
        Kc_3dmat_local = Kc_3dmat(lat_idx, long_idx, :);
        rho_matrix_local = rho_matrix(lat_idx, long_idx, :);
        
        Q_surface = Q_arr(lat_idx + (long_idx-1)*numel(lat_arr));
        %% Temperature pixel tick

        
        %% Surface BC
        break_iter = 0;
        difference = surface_bc_test_difference + 1;
        T = T_arr(1); %surface temperature
        % Root finding
        T_new = T;
        while difference > surface_bc_test_difference
            K_value = Kc_3dmat_local(1)*(1 + Chi_OVER_350_POWER_3*T*T*T);
            func = thermal_emission_local*T*T*T*T - Q_surface - K_value*((-3*T + 4*T_arr(2) - T_arr(3))/(2*dz_arr(1)));
            diff = 4*thermal_emission_local*T*T*T - 3*B_surface_local*T*T*((4*T_arr(2) - 3*T - T_arr(3))/(2*dz)) + (3/(2*dz_arr(1)))*K_value;

            T_new = T - func/diff;
            if T_new <= 0
                %fprintf('\nNegative T in surface BC, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx)
                fprintf('\nNegative T in surface BC, returning NaN\n');
                T_new = NaN;
                break
            end
            difference = abs(T_new - T);
            T = T_new;
            break_iter = break_iter + 1;
            if break_iter > surface_bc_break_counter
                %fprintf('\nSurface BC iteration limit, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx)
                fprintf('\nSurface BC iteration limit, returning NaN\n')
                T_new = NaN;
                break
            end
        end %WHILE LOOP END
        T_new_arr = NaN(1,1,num_layers);
        T_new_arr(1) = T_new; %surface temperature

        %% Bottom BC
        T_above = T_arr(bottom_layer_idx-1);
        T_new_arr(bottom_layer_idx) = T_above + dz_arr(bottom_layer_idx-1)*Q/(Kc_3dmat_local(bottom_layer_idx-1)*(1 + Chi_OVER_350_POWER_3*T_above*T_above*T_above));

        %% Middle layers
        for layer_idx = 2:bottom_layer_idx-1
            T = T_arr(layer_idx);
            T_above = T_arr(layer_idx-1);
            alpha_var = p_arr(layer_idx)*Kc_3dmat_local(layer_idx-1)*(1 + Chi_OVER_350_POWER_3*T_above*T_above*T_above);
            beta_var = q_arr(layer_idx)*Kc_3dmat_local(layer_idx)*(1 + Chi_OVER_350_POWER_3*T*T*T);
            c_p_value = c0 + c1*T + c2*T*T + c3*T*T*T + c4*T*T*T*T;
            T_new_arr(layer_idx) = T + (dt/(rho_matrix_local(layer_idx)*c_p_value))*(alpha_var*T_above - (alpha_var+beta_var)*T + beta_var*T_arr(layer_idx+1));
        end

    T_3dmat(lat_idx, long_idx, :) = T_new_arr;  
        
        
        
    end %end long
end %end lat
