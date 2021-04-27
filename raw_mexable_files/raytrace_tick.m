function [theta_arr] = raytrace_tick(decl, raytrace_h, lat_arr, long_arr, elevation_matrix, extended_elevation_matrix, slope_matrix, aspect_matrix, ref_sphere, max_distance, public_raster_struct, r_moon, sample_dens) 
theta_arr = NaN(1,numel(elevation_matrix));
% Currently it just iterates over every pixel in turn for simplicity.
% There is probably some decent savings to be made via vectorization for
% this
Nlat = numel(lat_arr);
Nlong = numel(long_arr);

% You CAN change this to a parfor loop (in fact this is why the loop is 1D
% instead of 2D), but there is so much overhead broadcasting it
% significantly *reduces* performance and isn't worth it.
for pixel_idx = 1:Nlat*Nlong
    long_idx = 1+ floor( (pixel_idx-1)/Nlat); %unflatten
    lat_idx = rem(pixel_idx-1, Nlat) + 1; %unflatten
% for lat_idx = 1:Nlat
    lat = lat_arr(lat_idx);
    long = long_arr(long_idx);
    %pixel-specific quantities:
    slope = slope_matrix(lat_idx, long_idx);
    aspect = aspect_matrix(lat_idx, long_idx);
    height_px = elevation_matrix(lat_idx, long_idx);
    h = raytrace_h + long - mean(long_arr);
    [theta_local] = raytrace_pixel_tick(decl, h, lat, long, extended_elevation_matrix, slope, aspect, height_px, ref_sphere, max_distance, public_raster_struct, r_moon, sample_dens); 
    theta_arr(pixel_idx) = theta_local;
end
end

function [lat_idx, long_idx] = unflatten_index(pixel_idx, Nlat, Nlong)
%converts between flattned and 2dimensional indices.
% you cant actually call this function inside the parfor loop, but i have
% left it here as illustration to what is going on
long_idx = 1+ floor( (pixel_idx-1)/Nlat);
lat_idx = rem(pixel_idx-1, Nlat) + 1;
end

function [pixel_idx] = flatten_index(lat_idx, long_idx, Nlat, Nlong)
    pixel_idx = lat_idx + (long_idx-1)*Nlat;
end