function [z_arr, dz_arr, dz, rho_matrix, num_layers, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval] = generate_temperature_grid(parameters,  H_matrix, sz_lat, sz_long)
% Use smallest expected skin depth, zs_min to define thickness of layers
% and use largest expected skin depth, zs_max to define total number of
% layers to use

% See end of prog for K and c_p_function definition

%% Unpack parameters
% This explicit extraction of parameters is mostly just for clarity
P = parameters.P;

T_max = parameters.T_max;
T_min = parameters.T_min;

rho_d = parameters.rho_d;
rho_s = parameters.rho_s;

m = parameters.m;
n = parameters.n;

initial_depth_t_wait = parameters.initial_depth_t_wait;
grow_depth_t_wait = parameters.grow_depth_t_wait;
max_depth = parameters.max_depth;
initial_num_skin_depths = parameters.initial_num_skin_depths;
num_skin_depths = parameters.num_skin_depths;

%% Actual function code
zs_max = sqrt((K_function(T_max, rho_d, parameters)/(rho_s*c_p_function(T_max, parameters)))*P/pi);
zs_min = sqrt((K_function(T_min, rho_s, parameters)/(rho_s*c_p_function(T_min, parameters)))*P/pi);
layer_idx = 0;
dz = zs_min/m;
z = 0;
max_depth_bool = true;

z_arr = [];
dz_arr = [];
while (z < zs_max*(num_skin_depths + 1)) || max_depth_bool
    layer_idx = layer_idx + 1;
    z_arr(layer_idx) = z;
    dz_arr(layer_idx) = dz;
    for lat_idx = 1:sz_lat
        for long_idx = 1:sz_long
            if H_matrix(lat_idx, long_idx) == 0 && z == 0
                rho_matrix(lat_idx, long_idx, layer_idx) = rho_s;
            else
                rho_matrix(lat_idx, long_idx, layer_idx) = rho_d - (rho_d - rho_s)*exp(-z/H_matrix(lat_idx, long_idx));
            end
        end
    end
    dz = dz*(1+1/n);
    if z > max_depth
        max_depth_bool = false; % ensure have both at least max depth & sufficient skin depths
    end
    z = z + dz;
end

num_layers = layer_idx;

initial_depth = zs_max*initial_num_skin_depths;
bottom_layer_idx = round(interp1(z_arr, 1:numel(z_arr), initial_depth));
depth_update_wait_t = initial_depth_t_wait;
depth_update_t_interval = grow_depth_t_wait/(num_layers - bottom_layer_idx - 1);

end

%% Helper subfunctions
function [K_value] = K_function(T, rho, par)
        Kc_value = par.Kd - (par.Kd - par.Ks)*(par.rho_d - rho)/(par.rho_d - par.rho_s);
        K_value = Kc_value*(1 + par.Chi*(T/350)^3);
end

function [c_p_value] = c_p_function(T, par)
    c_p_value = par.c0 + par.c1*T + par.c2*T^2 + par.c3*T^3 + par.c4*T^4;
end