function [ raytracing_params ] = setup_raytracing_params(scattering_power, public_raster_struct, extended_public_raster_struct, sample_dens, extended_sample_dens, ref_sphere, slope_matrix, aspect_matrix, elevation_matrix, extended_elevation_matrix, h_arr, decl_arr, P, const_decl, max_distance, dt, t_limit)
% Builds raytracing params struct

t_steps = numel(decl_arr); % seasonal timesteps

%Non-seasonal t_steps (depreciated):
% t_steps = P/dt; %P is the lunar diurnal period, in seconds (see https://en.wikipedia.org/wiki/Lunar_day)

raytracing_params = struct();

t_calculation_step_length = floor(t_steps/10); % calculate 1000 time steps at a time using parfor loop
t_calculation_steps = ceil(t_steps/t_calculation_step_length);

raytracing_params.scattering_power = scattering_power;

raytracing_params.t_calculation_step_length = t_calculation_step_length;
raytracing_params.t_calculation_steps = t_calculation_steps;
raytracing_params.t_steps = t_steps;

raytracing_params.public_raster_struct = public_raster_struct;
raytracing_params.extended_public_raster_struct = extended_public_raster_struct;
raytracing_params.sample_dens = sample_dens;
raytracing_params.extended_sample_dens = extended_sample_dens;
raytracing_params.ref_sphere = ref_sphere;
raytracing_params.slope_matrix = slope_matrix;
raytracing_params.aspect_matrix = aspect_matrix;
raytracing_params.elevation_matrix = elevation_matrix;
raytracing_params.extended_elevation_matrix = extended_elevation_matrix;
raytracing_params.h_arr = h_arr;
raytracing_params.decl_arr = decl_arr;
raytracing_params.P = P;
raytracing_params.const_decl = const_decl;
raytracing_params.max_distance = max_distance;

raytracing_params.dt = dt;

% The start_julian_date variable is initialised here and filled in just after this function is called
% inside "combo_calculate_extremes", circa line 463. This is disgusting,
% but keeps the "setup_raytracing" function mex-compatible, as juliandate()
% is not supported currently. It should be quite easy to handwrite an
% alternative if you are minded though. May God forgive me for my sins etc.
raytracing_params.start_julian_date = NaN; 
