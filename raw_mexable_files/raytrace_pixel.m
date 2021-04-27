function theta_arr = raytrace_pixel(lat, long, raytracing_params, local_raytracing_params) 

%% Unpack raytracing params
t_calculation_steps = raytracing_params.t_calculation_steps;
t_calculation_step_length = raytracing_params.t_calculation_step_length;

max_distance = raytracing_params.max_distance;

ref_sphere = raytracing_params.ref_sphere;
extended_elevation_matrix = raytracing_params.extended_elevation_matrix;
r_moon = ref_sphere.Radius;

sample_dens = raytracing_params.extended_sample_dens;
const_decl = raytracing_params.const_decl;
public_raster_struct = raytracing_params.public_raster_struct;


t_steps = raytracing_params.t_steps;


%% unpack local params
height_px = local_raytracing_params.height_px;

aspect = local_raytracing_params.aspect;
slope = local_raytracing_params.slope;

h_arr_local = local_raytracing_params.h_arr_local;
decl_arr_local = local_raytracing_params.decl_arr_local;

dh = 360/t_steps;
theta_matrix = zeros(t_calculation_steps, t_calculation_step_length);

%% Time loop
parfor t_calculation_step_idx = 1:t_calculation_steps
    theta = NaN(1,t_calculation_step_length);
    t_arr_start = 1+(t_calculation_step_idx-1)*t_calculation_step_length;
    t_arr_end = t_arr_start + t_calculation_step_length-1;
    if t_arr_end > t_steps
        t_arr_end = t_steps;
    end
    t_arr = t_arr_start:t_arr_end; % array of time values to calculate for at this iteration
    if numel(t_arr) == 0
        continue %catch exception
    end
    h = double(NaN);
    decl = decl_arr_local(t_arr);
    h = h_arr_local(t_arr);

    h = mod(h + 180, 360) - 180;
    sigma_ew = ones(size(t_arr), 'single');
    sigma_ew(abs(h) > acosd(min(max(cotd(lat).*tand(decl),-1),1)) ) = -1;
    sigma_ns = ones(size(t_arr), 'single');
    sigma_ns(lat*(lat-decl) < 0) = -1;
    sigma_w = ones(size(t_arr), 'single');
    sigma_w(h < 0) = -1;
    theta_z = acos(sind(decl).*sind(lat) + cosd(decl).*cosd(lat).*cosd(h));
    %rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES ))
    gamma_so = asind(min(1, max(-1,(sind(h).*cosd(decl)./sin(theta_z))))); 
    gamma_so(theta_z == 0) = 0; % Avoid division by 0 error
    
    gamma_s = sigma_ew.*sigma_ns.*gamma_so + ((1-sigma_ew.*sigma_ns)/2).*sigma_w*180;
    theta(1:size(decl,2)) = acos(cos(theta_z).*cosd(slope) + sin(theta_z).*sind(slope).*cosd(gamma_s - aspect));
    theta(theta_z > pi/2) = NaN;
    theta(theta > pi/2) = NaN;

    az_sun = NaN(size(t_arr));
    mask = lat < decl;
    az_sun(~mask) = 180+gamma_s(~mask);
    az_sun(mask) = -gamma_s(mask);
    elev_sun = 90-rad2deg(theta_z);
    slant_range = 1.1*max_distance; % ensure outside of grid

    % no longer necessary to switch to double with rewritten builtins
    [lat_sun,long_sun,height_sun] = my_aer2geodetic(az_sun,elev_sun,slant_range,lat,long,height_px,ref_sphere);

    sun_vis = mexable_los2(extended_elevation_matrix, 0, lat*ones(size(lat_sun)), long*ones(size(lat_sun)), lat_sun, long_sun, 0, height_sun, 'AGL', 'MSL', r_moon, sample_dens, public_raster_struct);
    sun_vis(theta_z == 0) = true;
    theta(~sun_vis) = NaN;
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
return