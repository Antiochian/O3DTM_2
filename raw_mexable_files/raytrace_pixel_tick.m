function [theta] = raytrace_pixel_tick(decl, h, lat, long, extended_elevation_matrix, slope, aspect, height_px, ref_sphere, max_distance, public_raster_struct, r_moon, sample_dens) 

h = mod(h + 180, 360) - 180; %solar hour angle, degrees
sigma_ew = single(1);
sigma_ew(abs(h) > acosd(min(max(cotd(lat).*tand(decl),-1),1)) ) = -1;
sigma_ns = single(1);
sigma_ns(lat*(lat-decl) < 0) = -1;
sigma_w = single(1);
sigma_w(h < 0) = -1;
theta_z = acos(sind(decl).*sind(lat) + cosd(decl).*cosd(lat).*cosd(h));
%rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES ))
gamma_so = asind(min(1, max(-1,(sind(h).*cosd(decl)./sin(theta_z))))); 
gamma_so(theta_z == 0) = 0; % Avoid division by 0 error

gamma_s = sigma_ew.*sigma_ns.*gamma_so + ((1-sigma_ew.*sigma_ns)/2).*sigma_w*180;
theta = acos(cos(theta_z).*cosd(slope) + sin(theta_z).*sind(slope).*cosd(gamma_s - aspect));
theta(theta_z > pi/2) = NaN;
theta(theta > pi/2) = NaN;

az_sun = NaN;
mask = lat < decl;
az_sun(~mask) = 180+gamma_s(~mask);
az_sun(mask) = -gamma_s(mask);
elev_sun = 90-rad2deg(theta_z);
slant_range = 1.1*max_distance; % ensure outside of grid

% no longer necessary to switch to double with rewritten builtins
[lat_sun,long_sun,height_sun] = my_aer2geodetic(az_sun,elev_sun,slant_range,lat,long,height_px,ref_sphere);

sun_vis = mexable_los2(extended_elevation_matrix, 0, lat, long, lat_sun, long_sun, 0, height_sun, 'AGL', 'MSL', r_moon, sample_dens, public_raster_struct);
sun_vis(theta_z == 0) = true;
theta(~sun_vis) = NaN;
