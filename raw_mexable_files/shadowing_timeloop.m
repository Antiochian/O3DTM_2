function [Tmin_local, Tmax_local, sample_timepoints_local, T_error_local] = shadowing_timeloop(T_arr, dz_arr, temperature_parameters, local_temperature_params, raytracing_params, local_raytracing_params, lat, long, sample_timepoints_local, sample_surface_temperatures_local)

        

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
% ref_sphere = raytracing_params.ref_sphere;
% extended_elevation_matrix = raytracing_params.extended_elevation_matrix;

% const_decl = raytracing_params.const_decl;
% public_raster_struct = raytracing_params.public_raster_struct;

% height_px = local_raytracing_params.height_px;
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
%weight them such that for target times EG: [1.3, 6.8, 7.0] we have:
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
if ~isempty(sample_t_idx)
    sample_t_idx(end) = 0; %dummy value, never reached
    
    %track the currently-in-demand t_idx using a pointer index "upcoming_sample_idx_ptr"
    % and "upcoming_sample_idx" for the actual value (save lookup time)
    upcoming_sample_idx_ptr = 1; %this redundant phrasing is to demonstrate how the update process works
    upcoming_sample_idx = sample_t_idx(1);
else
    upcoming_sample_idx_ptr = -1;
    upcoming_sample_idx = -1; %never reach
end



%% RAYTRACING STEP
theta_arr = raytrace_pixel(lat, long, raytracing_params, local_raytracing_params);

HAS_EVER_BEEN_ILLUMINATED = false; %Bool to check if sunlight *EVER* reaches this point.
%% do time sim
for t_idx = 1:numel(t_arr)
    t_relative_sec = t_arr(t_idx); %seconds since diviner start data

    %% Calculate theta
    theta_local = theta_arr(t_idx);
    
    if ~HAS_EVER_BEEN_ILLUMINATED
        if ~isnan(theta_local)
            HAS_EVER_BEEN_ILLUMINATED = true;
        end
    end
    %% Calculate temps
    [T_new_arr, bottom_layer_idx_local, depth_update_wait_t_local] = temperature_sim_pixel_tick(T_new_arr, temperature_parameters, local_temperature_params, theta_local, bottom_layer_idx_local, depth_update_wait_t_local,  t_relative_sec, dz_arr);
% %% FIND TEST ERRORS
    if t_idx == upcoming_sample_idx
        sample_T_bounds(upcoming_sample_idx_ptr) = T_new_arr(1);
        upcoming_sample_idx_ptr = upcoming_sample_idx_ptr + 1;
        upcoming_sample_idx = sample_t_idx(upcoming_sample_idx_ptr);
    end
    if t_relative_sec >= P*t_wait && HAS_EVER_BEEN_ILLUMINATED %don't save min/max unless element has been illuminated at least once
        candidate = reshape(T_new_arr, 1,1,numel(T_new_arr));
        Tmin_local = min(Tmin_local, candidate);
        Tmax_local = max(Tmax_local, candidate);
    end
end

%% Interpolate errors
if HAS_EVER_BEEN_ILLUMINATED
    %save errors like normal
    for sample_idx = 1:numel(sample_timepoints_local)
        T_measured = sample_surface_temperatures_local(sample_idx);
        T_pred_tuple = sample_T_bounds(2*sample_idx-1 : 2*sample_idx);
        weight = sample_weights(sample_idx);

        T_pred_interpolated = T_pred_tuple(1) + weight*(T_pred_tuple(2)-T_pred_tuple(1));

        T_error_local(sample_idx) = T_pred_interpolated - T_measured;
    end
else
    %don't save errors, leave NaN
    for sample_idx = 1:numel(sample_timepoints_local)
        T_error_local(sample_idx) = NaN;
    end
end