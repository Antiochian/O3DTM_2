function [T_new_arr, bottom_layer_idx_local, depth_update_wait_t_local] = temperature_sim_pixel_tick(T_prev_arr, temperature_parameters, local_temperature_params, theta_local, bottom_layer_idx_local, depth_update_wait_t_local, t_relative_sec, dz_arr)
 
T_arr = T_prev_arr(1,1,:);
T_new_arr = NaN(size(T_prev_arr));
dz = temperature_parameters.dz;
Q = temperature_parameters.Q;
stefans_constant = temperature_parameters.stefans_constant;
Chi_OVER_350_POWER_3 = temperature_parameters.Chi_OVER_350_POWER_3;
S_OVER_R_AU2 = temperature_parameters.S_OVER_R_AU2;

dt = temperature_parameters.dt;

surface_bc_test_difference = temperature_parameters.surface_bc_test_difference;
surface_bc_break_counter = temperature_parameters.surface_bc_break_counter;
num_layers = temperature_parameters.num_layers;
p_arr = temperature_parameters.p_arr;
q_arr = temperature_parameters.q_arr;

c0 = temperature_parameters.c0;
c1 = temperature_parameters.c1;
c2 = temperature_parameters.c2;
c3 = temperature_parameters.c3;
c4 = temperature_parameters.c4;

depth_update_t_interval = temperature_parameters.depth_update_t_interval;

%%unpack local params
A0_local = local_temperature_params.A0_local;
a_OVER_pi_OVER_4_POWER_3_local = local_temperature_params.a_OVER_pi_OVER_4_POWER_3_local;
b_OVER_pi_OVER_2_POWER_8_local = local_temperature_params.b_OVER_pi_OVER_2_POWER_8_local;

thermal_emission_local = local_temperature_params.thermal_emission_local;
B_surface_local = local_temperature_params.B_surface_local;
Kc_3dmat_local = local_temperature_params.Kc_3dmat_local;
rho_matrix_local = local_temperature_params.rho_matrix_local;
% vis_flux_local = local_temperature_params.vis_flux_local;
% ir_flux_local = local_temperature_params.ir_flux_local;


%% Increase simulation depth
if bottom_layer_idx_local < num_layers && t_relative_sec > depth_update_wait_t_local
    % extend simulation by 1 layer, using bottom BC to define new
    % temperature
    depth_update_wait_t_local = depth_update_wait_t_local + depth_update_t_interval;
    bottom_layer_idx_local = bottom_layer_idx_local + 1;
    % T_arr or T_3dmat_local???
    T_above_matrix = T_arr(1,bottom_layer_idx_local-1);
    T_arr(1,1,bottom_layer_idx_local) = T_above_matrix + (dz_arr(bottom_layer_idx_local-1)*Q)./(Kc_3dmat_local(bottom_layer_idx_local-1).*(1 + Chi_OVER_350_POWER_3.*T_above_matrix.*T_above_matrix.*T_above_matrix));
end

%% Calculate Q_local
cos_theta = cos(theta_local);
solar_albedo = A0_local + a_OVER_pi_OVER_4_POWER_3_local*(theta_local^3) + b_OVER_pi_OVER_2_POWER_8_local*(theta_local^8);
Qsun = (1-solar_albedo)*S_OVER_R_AU2*cos_theta;
Qsun(isnan(Qsun)) = 0;
% Qsun_scattered = solar_albedo*S_OVER_R_AU2*cos_theta;
% Qsun_scattered(isnan(Qsun_scattered)) = 0;
% sigmaT4 = stefans_constant*T_arr(1);
% Qabsorbed_vis = vis_flux_local*Qsun_scattered;
% Qabsorbed_ir = ir_flux_local*sigmaT4;

%convert to double?
% Q_surface = double(Qabsorbed_ir + Qabsorbed_vis + Qsun);
Q_surface = double(Qsun);
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
T_new_arr(1) = T_new; %surface temperature


%% Bottom BC
T_above = T_arr(bottom_layer_idx_local-1);
T_new_arr(bottom_layer_idx_local) = T_above + dz_arr(bottom_layer_idx_local-1)*Q/(Kc_3dmat_local(bottom_layer_idx_local-1)*(1 + Chi_OVER_350_POWER_3*T_above*T_above*T_above));

%% Middle layers
for layer_idx = 2:bottom_layer_idx_local-1
    T = T_arr(layer_idx);
    T_above = T_arr(layer_idx-1);
    alpha_var = p_arr(layer_idx)*Kc_3dmat_local(layer_idx-1)*(1 + Chi_OVER_350_POWER_3*T_above*T_above*T_above);
    beta_var = q_arr(layer_idx)*Kc_3dmat_local(layer_idx)*(1 + Chi_OVER_350_POWER_3*T*T*T);
    c_p_value = c0 + c1*T + c2*T*T + c3*T*T*T + c4*T*T*T*T;
    T_new_arr(layer_idx) = T + (dt/(rho_matrix_local(layer_idx)*c_p_value))*(alpha_var*T_above - (alpha_var+beta_var)*T + beta_var*T_arr(layer_idx+1));
end



