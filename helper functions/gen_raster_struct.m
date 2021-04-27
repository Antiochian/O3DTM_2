function output_struct = gen_raster_struct(elev_matrix, lat_arr, long_arr )
% This function generates a struct that contains the same information
% as the equivalent raster ref object. The struct is designed so that
% you can pass it instead of a raster ref to most builtins and MATLAB
% won't even notice.
%
% The motivation behind this is that raster refs are not MEX-compatible,
% but structs are.


output_struct = struct;
output_struct.RasterSize = size(elev_matrix);

output_struct.FullCycle = 360;
output_struct.XIntrinsicLimits = [0.5, 0.5+size(elev_matrix,1)];
output_struct.YIntrinsicLimits = [0.5, 0.5+size(elev_matrix,2)];

output_struct.pLongitudeLimits = [min(long_arr), max(long_arr)];
output_struct.pLatitudeLimits = [min(lat_arr), max(lat_arr)];

output_struct.FirstCornerLatitude = lat_arr(1);
output_struct.FirstCornerLongitude = long_arr(1);
output_struct.DeltaLatitudeNumerator = - (max(lat_arr) - min(lat_arr)); %this is negative due to the coordinate convention
output_struct.DeltaLatitudeDenominator = size(lat_arr, 2);

output_struct.DeltaLongitudeNumerator = max(long_arr) - min(long_arr);
output_struct.DeltaLongitudeDenominator = size(long_arr, 2);

output_struct.NorthPoleLatitude = 90; % why is this a field??? Isn't the north pole always at 90?