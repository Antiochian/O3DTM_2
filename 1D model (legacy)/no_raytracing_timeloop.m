function [Tmin_local, Tmax_local, sample_timepoints_local, T_error_local] = no_raytracing_timeloop(T_arr, dz_arr, temperature_parameters, local_temperature_params, raytracing_params, local_raytracing_params, lat, long, sample_timepoints_local, sample_surface_temperatures_local)

        

%% Unpack temperature params
%unpack global params


t_arr = temperature_parameters.t_arr; %seconds from 19-Feb-2000 21:10:27

depth_update_wait_t_local = temperature_parameters.depth_update_wait_t_local;
bottom_layer_idx_local = temperature_parameters.bottom_layer_idx_local;

% dh = temperature_parameters.dh;
dt = temperature_parameters.dt;
P = temperature_parameters.P;
t_wait = temperature_parameters.t_wait;

%% Initialise temperature arrays from T_arr
T_new_arr = T_arr;
Tmax_local = NaN(size(T_arr));
Tmin_local = NaN(size(T_arr));

%% Unpack raytracing params
% max_distance = raytracing_params.max_distance;
t_steps = raytracing_params.t_steps;
t_calculation_steps = raytracing_params.t_calculation_steps;
t_calculation_step_length = raytracing_params.t_calculation_step_length;
% ref_sphere = raytracing_params.ref_sphere;
% extended_elevation_matrix = raytracing_params.extended_elevation_matrix;

% const_decl = raytracing_params.const_decl;
% public_raster_struct = raytracing_params.public_raster_struct;


% height_px = local_raytracing_params.height_px;
% 
% aspect = local_raytracing_params.aspect;
% slope = local_raytracing_params.slope;
% h_arr_local = local_raytracing_params.h_arr_local;
% decl_arr_local = local_raytracing_params.decl_arr_local;
% 
% r_moon = ref_sphere.Radius;
% sample_dens = raytracing_params.sample_dens;
% theta_arr = raytrace_pixel(lat, long, raytracing_params, local_raytracing_params, use_seasons);

%% Initialise error calculating
%Decide which timesteps need to be remembered
%for every target jd, find the timestep ahead and behind it, and also
%weight them such that for target times 1.3, 6.8, 7.0 we have:
% sample_T_bounds = [t1,t2 , t6,t7 , t7,t7,   ... ]
% sample_t_idx    = [ 1,2  ,  6,7  ,  7,7,    ... ]
% sample_weights  = [ 0.3  ,  0.8  ,  0.0,    ... ]
% 
% Note that the weights arr is half as long as the sampletime array

jd_start = raytracing_params.start_julian_date;
dj = dt/86400;
% jd_error_local = NaN(size(sample_timepoints_local));
T_error_local = NaN(size(sample_timepoints_local));


sample_t_idx = NaN(1,2*numel(sample_timepoints_local));
sample_weights = NaN(size(sample_timepoints_local));
sample_T_bounds = NaN(size(sample_t_idx));

for sample_idx = 1:numel(sample_timepoints_local)
    target_jd = sample_timepoints_local(sample_idx);
    exact_idx = (target_jd - jd_start)/dj;
    lower_idx = floor(exact_idx);
    upper_idx = ceil(exact_idx);
    remainder = exact_idx - lower_idx;
    
    sample_t_idx(2*sample_idx-1 : 2*sample_idx) = [lower_idx, upper_idx];
    sample_weights(sample_idx) = remainder;  
end
sample_t_idx(end) = 0; %dummy value, never reached

%track the currently-in-demand t_idx using a pointer index "upcoming_sample_idx_ptr"
% and "upcoming_sample_idx" for the actual value (save lookup time)

upcoming_sample_idx_ptr = 1; %this redundant phrasing is to demonstrate how the update process works
upcoming_sample_idx = sample_t_idx(1);
%% do crippled raytracing

%% unpack local params
% height_px = local_raytracing_params.height_px;

aspect = local_raytracing_params.aspect;
slope = local_raytracing_params.slope;

h_arr_local = local_raytracing_params.h_arr_local;
decl_arr_local = local_raytracing_params.decl_arr_local;

dh = 360/t_steps;
theta_arr = NaN(1,t_steps);
%% Time loop

%% do time sim
theta_matrix = NaN(t_calculation_steps, t_calculation_step_length);
parfor t_calculation_step_idx = 1:t_calculation_steps
    theta = NaN(1,t_calculation_step_length);
    t_arr_start = 1+(t_calculation_step_idx-1)*t_calculation_step_length;
    t_arr_end = t_arr_start + t_calculation_step_length-1;
    if t_arr_end > t_steps
        t_arr_end = t_steps;
    end
    step_t_arr = t_arr_start:t_arr_end; % array of time values to calculate for at this iteration
    if numel(step_t_arr) == 0
        continue %catch exception
    end
    h = double(NaN);

    decl = decl_arr_local(step_t_arr);
    h = h_arr_local(step_t_arr);

    h = mod(h + 180, 360) - 180;
    sigma_ew = ones(size(step_t_arr), 'single');
    sigma_ew(abs(h) > acosd(min(max(cotd(lat).*tand(decl),-1),1)) ) = -1;
    sigma_ns = ones(size(step_t_arr), 'single');
    sigma_ns(lat*(lat-decl) < 0) = -1;
    sigma_w = ones(size(step_t_arr), 'single');
    sigma_w(h < 0) = -1;
    theta_z = acos(sind(decl).*sind(lat) + cosd(decl).*cosd(lat).*cosd(h));
    %rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES ))
    gamma_so = asind(min(1, max(-1,(sind(h).*cosd(decl)./sin(theta_z))))); 
    gamma_so(theta_z == 0) = 0; % Avoid division by 0 error
    
    gamma_s = sigma_ew.*sigma_ns.*gamma_so + ((1-sigma_ew.*sigma_ns)/2).*sigma_w*180;
    theta(1:size(decl,2)) = acos(cos(theta_z).*cosd(slope) + sin(theta_z).*sind(slope).*cosd(gamma_s - aspect));
    theta(theta_z > pi/2) = NaN;
    theta(theta > pi/2) = NaN;

    if numel(theta) < t_calculation_step_length
        theta(end+1:t_calculation_step_length) = NaN;
    end
    theta_matrix(t_calculation_step_idx, :) = theta;
end

theta_arr = NaN(1, t_calculation_step_length*t_calculation_steps);
for idx = 1:t_calculation_steps
    % get values in correct order for time series
    theta_arr(t_calculation_step_length*(idx-1)+1:t_calculation_step_length*idx) = theta_matrix(idx,:);
end
    
theta_arr = theta_arr(1:raytracing_params.t_steps);
%% do time sim
for t_idx = 1:numel(t_arr)
    t_relative_sec = t_arr(t_idx); %seconds since diviner start data

    %% Retrieve theta
    theta_local = theta_arr(t_idx);
    %% Calculate temps
    [T_new_arr, bottom_layer_idx_local, depth_update_wait_t_local] = temperature_sim_pixel_tick(T_new_arr, temperature_parameters, local_temperature_params, theta_local, bottom_layer_idx_local, depth_update_wait_t_local,  t_relative_sec, dz_arr);
% %% FIND TEST ERRORS
    if t_idx == upcoming_sample_idx
        sample_T_bounds(upcoming_sample_idx_ptr) = T_new_arr(1);
        upcoming_sample_idx_ptr = upcoming_sample_idx_ptr + 1;
        upcoming_sample_idx = sample_t_idx(upcoming_sample_idx_ptr);
    end
    if t_relative_sec >= P*t_wait
        candidate = reshape(T_new_arr, 1,1,numel(T_new_arr));
        Tmin_local = min(Tmin_local, candidate);
        Tmax_local = max(Tmax_local, candidate);
    end
end

%% Interpolate errors
for sample_idx = 1:numel(sample_timepoints_local)
    T_measured = sample_surface_temperatures_local(sample_idx);
    T_pred_tuple = sample_T_bounds(2*sample_idx-1 : 2*sample_idx);
    weight = sample_weights(sample_idx);
    
    T_pred_interpolated = T_pred_tuple(1) + weight*(T_pred_tuple(2)-T_pred_tuple(1));
    
    T_error_local(sample_idx) = T_pred_interpolated - T_measured;
end