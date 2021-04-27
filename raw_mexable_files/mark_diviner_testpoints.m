function [ sample_timepoints, sample_surface_temperatures ] = mark_diviner_testpoints(start_jd, end_jd, lat_arr, long_arr, diviner_data, recent_only)

% This function reads the diviner dataset and saves some temperatures to be
% used as test points during the code's execution. The code by default
% saves the max/min temperatures, throwing away all other calculated values
% to save space - this function provides a list of "calibration" timepoints
% to save as well.
% 
% It returns two latxlon cell arrays, where each component corresponds to a
% pixel and contains a variable-length list of values. The first cell array contains a
% list of timepoints in julian date format, the second contains a list of
% surface temperatures in Kelvin.
%
% These are the EXACT timestamps of the Diviner dataset, and may not line
% up with the model. Later on in the raytrace_pixel subroutine
% interpolation will be done to bring them into alignment

% diviner_data = load(create_static_path(sprintf('crater_environments/diviner_temperatures/%s_diviner_temperatures.mat', crater_name)));
% diviner_data = diviner_data.output;

sz_lat = numel(lat_arr);
sz_long = numel(long_arr);

sample_timepoints = cell(sz_lat, sz_long);
sample_surface_temperatures = cell(sz_lat, sz_long);


if recent_only
    min_jd = end_jd - 360;
    max_jd = end_jd;
else
    min_jd = start_jd;
    max_jd = end_jd;
end

min_jd_repl = repmat(min_jd, size(diviner_data.jd_arr));
max_jd_repl = repmat(max_jd, size(diviner_data.jd_arr));
for lat_idx = 1:sz_lat
    lat = lat_arr(lat_idx);
    lat_repl = repmat(lat, size(diviner_data.lat_arr));
    for long_idx = 1:sz_long
        long = long_arr(long_idx);
        long_repl = repmat(long, size(diviner_data.long_arr));
        within_timerange = diviner_data.lat_arr == lat_repl & diviner_data.long_arr == long_repl & diviner_data.jd_arr >= min_jd_repl & diviner_data.jd_arr <= max_jd_repl;
        
        %Select all relevant measurements
        pixel_surface_temperatures = diviner_data.T_arr(within_timerange);
        pixel_timepoints = diviner_data.jd_arr(within_timerange);
        
        %save results for this pixel into cell array
        sample_timepoints{lat_idx, long_idx} = pixel_timepoints;
        sample_surface_temperatures{lat_idx, long_idx} = pixel_surface_temperatures;
    end
end