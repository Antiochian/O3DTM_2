function [output, z_arr, crater_data] = calculate_temperature_extremes(crater_name, model_type , USE_MEX, recent_errors_only, scattering_power, num_bounces, custom_parameters, print_progress)
% O3DTM - Calculates temperature extremes via a 3D thermal model
% incorporating subsurface temperatures and insolation effects. See README
% for more information

%  Arguments:
%  ----------
%     crater_name
%         The name of the lunar site to be simulated. See README for details 
%         on adding new target sites.
%
%     model_type
%         Which of three model variants to use. Accepts '1D', 'shadowing'
%         or 'multiscattering'.
%
%  Optional Arguments:
%  -------------------
%  USE_MEX = use compiled-C code functions (faster) or raw MATLAB ones (default = true)
%
%  scattering_power = emissivity scattering power (default = 0)
%
%  num_bounces = max. number of bounces for scattered radiation (default = inf)
%
%  recent_errors_only = only save errors for the last year of simulation
%       instead of saving all errors (default = false)
%
%  custom_parameters = struct of custom parameters for code, A0, a, b, H
%       and emissivity can be matrices (e.g. albedo varying across map)
%
%  print_progress = time step interval to print progress, 0 supresses all
%       output, 1 prints progress for every time step, a larger integer results
%       in (slightly) faster execution (default = 360)
%
%
% Originally by Oliver King, 2018. Revised by Antiochian, 2021

narginchk(1,inf)

simulation_start_dtm = datetime;
fprintf('Simulation started %s\n', datestr(simulation_start_dtm));

%% Handle inputs
if nargin < 2 || isempty(model_type)
    model_type = 'shadowing';
%     model_type = 'multiscattering';
%     model_type = '1D';
end
if nargin < 3 || isempty(USE_MEX)
    USE_MEX = true;
end

if nargin < 4 || isempty(recent_errors_only)
    recent_errors_only = false;
end

if nargin < 5 || isempty(scattering_power)
    scattering_power = 0; % default to isotropic emission
end
if nargin < 6 || isempty(num_bounces)
    num_bounces = inf;
end
if nargin < 7 || isempty(custom_parameters)
    custom_parameters = struct();
end
if nargin < 8 || isempty(print_progress)
    fprintf('setting print_prog');
    print_progress = 3600;
end

if strcmp(model_type,'all')
    calculate_temperature_extremes(crater_name, '1D' ,recent_errors_only);
    calculate_temperature_extremes(crater_name, 'shadowing' ,recent_errors_only);
    calculate_temperature_extremes(crater_name, 'multiscattering' ,recent_errors_only);
    return
end

if ~USE_MEX
    warning("Not using MEX-files! Execution will be slow.");
end

if print_progress
    fprintf('3D model: "%s",model_type=%s, scattering_power=%g, num_bounces=%g\n', crater_name, model_type, scattering_power, num_bounces)
end



%% PREPARE TEMPERATURE COMPONENT
%% Load crater data
source_path = create_static_path(sprintf('crater_environments/%s.mat', crater_name));
try
    crater_data = load(source_path);
catch ME
    if strcmp(ME.identifier, 'MATLAB:load:couldNotReadFile')
        fprintf('\nNo crater environment found. Generating...\n');
        generate_crater_environment(crater_name);
        crater_data = load(source_path);
    else
        error(ME.message)
    end
end
crater_data = crater_data.data;
fprintf('Crater environment loaded. Generating...\n');
lat_arr = crater_data.lat_arr;
long_arr = crater_data.long_arr;
elevation_matrix = crater_data.elevation_matrix;

init_temps = crater_data.Tmean_matrix;

ew_matrix = crater_data.ew_matrix;
ns_matrix = crater_data.ns_matrix;
% center_lat = crater_data.center_lat;
% center_long = crater_data.center_long;

if ~isfield(custom_parameters, 'A0') && isfield(crater_data, 'A0')
    custom_parameters.A0 = crater_data.A0;
end


%% Process info from inputs
% Get information about terrain and linear distances etc.
ref_sphere = struct;
ref_sphere.Name = 'Moon';
ref_sphere.LengthUnit = 'meter';
ref_sphere.Radius = 1738000;
ref_sphere.SemimajorAxis = 1738000;
ref_sphere.SemiminorAxis = 1738000;
ref_sphere.Eccentricity = 0;
ref_sphere.MeanRadius = 1738000;
ref_sphere.Flattening = 0;

r_moon = ref_sphere.Radius; % moon radius in m

elevation_matrix = elevation_matrix - r_moon;

%% Load parameters
parameters = define_parameters(custom_parameters);
% load parameters from define_parameters and convert to individual
% variables to increase code legibility and performance (e.g. using
% parameters.P is slower than using P)
P = parameters.P;

const_decl = parameters.decl;
phase_start_dtm = parameters.phase_start_dtm;
phase_end_dtm = parameters.phase_end_dtm;
% 
% rho_s = parameters.rho_s;
% rho_d = parameters.rho_d;
H_matrix = parameters.H;
% stefans_constant = parameters.stefans_constant;
emissivity_matrix = parameters.emissivity;
% S = parameters.S;
% R_AU = parameters.R_AU;
% Q = parameters.Q;
A0_matrix = parameters.A0;
a_matrix = parameters.a;
b_matrix = parameters.b;
% Chi = parameters.Chi;
% Ks = parameters.Ks;
% Kd = parameters.Kd;
% c0 = parameters.c0;
% c1 = parameters.c1;
% c2 = parameters.c2;
% c3 = parameters.c3;
% c4 = parameters.c4;
% m = parameters.m;
% n = parameters.n;
% num_skin_depths = parameters.num_skin_depths;
% max_depth = parameters.max_depth;
% T_min = parameters.T_min;
% T_max = parameters.T_max;
% T_bottom_limit = parameters.T_bottom_limit;
% surface_bc_test_difference = parameters.surface_bc_test_difference;
% surface_bc_break_counter = parameters.surface_bc_break_counter;
dt = parameters.dt;
diviner_start_dtm = parameters.diviner_start_dtm;
diviner_end_dtm = parameters.diviner_end_dtm;
% time_series_interval = parameters.time_series_interval;
% initial_depth_t_wait = parameters.initial_depth_t_wait;
% grow_depth_t_wait = parameters.grow_depth_t_wait;
% initial_num_skin_depths = parameters.initial_num_skin_depths;


% If given scalar values for a parameter, expand them to uniform matrices
if numel(A0_matrix) == 1
    A0_matrix = A0_matrix*ones(size(elevation_matrix));
end
if numel(a_matrix) == 1
    a_matrix = a_matrix*ones(size(elevation_matrix));
end
if numel(b_matrix) == 1
    b_matrix = b_matrix*ones(size(elevation_matrix));
end
if numel(emissivity_matrix) == 1
    emissivity_matrix = emissivity_matrix*ones(size(elevation_matrix));
end
if numel(H_matrix) == 1
    H_matrix = H_matrix*ones(size(elevation_matrix));
end

% pre-calculate constant parameters
% S_OVER_R_AU2 = S/R_AU^2;
% thermal_emission_matrix = emissivity_matrix*stefans_constant;
% Chi_OVER_350_POWER_3 = Chi*(1/350)^3;
a_OVER_pi_OVER_4_POWER_3_matrix = a_matrix*(1/(pi/4))^3;
b_OVER_pi_OVER_2_POWER_8_matrix = b_matrix*(1/(pi/2))^8;

%% Generate raytracing raster refs etc

raster_ref = georefcells([min(lat_arr), max(lat_arr)], [min(long_arr), max(long_arr)], size(elevation_matrix), 'ColumnsStartFrom', 'north', 'RowsStartFrom', 'west');
[aspect_matrix, slope_matrix] = convert_height_to_slope(elevation_matrix, lat_arr, long_arr);
[~,~,max_distance] = my_geodetic2aer(...
    lat_arr(1), long_arr(1), min(reshape(elevation_matrix,[],1)),...
    lat_arr(end), long_arr(end), max(reshape(elevation_matrix,[],1)),...
    ref_sphere);

%% Generate (extended) raytracing grid
% Slightly larger grid ensures floating point errors do not break shadowing
% calculations at the edge of the grid
extended_elevation_matrix = zeros(size(elevation_matrix) + [2,2]);
extended_elevation_matrix(2:end-1,2:end-1) = elevation_matrix;
extended_elevation_matrix(2:end-1,1) = elevation_matrix(:,1);
extended_elevation_matrix(2:end-1,end) = elevation_matrix(:,end);
extended_elevation_matrix(1,2:end-1) = elevation_matrix(1,:);
extended_elevation_matrix(end,2:end-1) = elevation_matrix(end,:);
extended_elevation_matrix(1,1) = elevation_matrix(1,1);
extended_elevation_matrix(1,end) = elevation_matrix(1,end);
extended_elevation_matrix(end,1) = elevation_matrix(end,1);
extended_elevation_matrix(end,end) = elevation_matrix(end,end);

d_lat = abs(lat_arr(1) - lat_arr(2));
d_long = abs(long_arr(1) - long_arr(2));
extended_raster_ref = georefcells([min(lat_arr)-d_lat, max(lat_arr)+d_lat], [min(long_arr)-d_long, max(long_arr)+d_long], size(extended_elevation_matrix), 'ColumnsStartFrom', 'north', 'RowsStartFrom', 'west');

extended_public_raster_struct = gen_raster_struct(extended_elevation_matrix, lat_arr, long_arr);
extended_sample_dens = sampleDensity(extended_raster_ref); %this doesnt vary within the parfor and is mex-incompatible, so we bring it out here

public_raster_struct = gen_raster_struct(elevation_matrix, lat_arr, long_arr);
sample_dens = sampleDensity(raster_ref);

%% Prepare declination data for raytracing
% Process declination data for use in simulation
long = mean(long_arr);
[raw_dtm_arr, sub_sun_long_arr, decl_arr] = read_horizons_data();
long_interp_arr = sub_sun_long_arr((raw_dtm_arr > phase_start_dtm) & (raw_dtm_arr < phase_end_dtm));
dtm_interp_arr = raw_dtm_arr((raw_dtm_arr > phase_start_dtm) & (raw_dtm_arr < phase_end_dtm));
% ensure both have consistent ranges
long = mod(long + 180, 360) - 180;
long_interp_arr = mod(long_interp_arr + 180, 360) - 180;
[long_interp_arr, unique_idx_arr] = unique(long_interp_arr);
dtm_interp_arr = dtm_interp_arr(unique_idx_arr);
start_dtm = interp1(long_interp_arr(2:end-1), dtm_interp_arr(2:end-1), long); % start simulation at local midday
end_dtm = raw_dtm_arr(end);
time_series_dtm_arr = start_dtm:seconds(dt):end_dtm;
decl_arr = interp1(raw_dtm_arr, decl_arr, time_series_dtm_arr);
sub_sun_long_arr = interp1(raw_dtm_arr, sub_sun_long_arr, time_series_dtm_arr);
h_arr = long - sub_sun_long_arr;
h_arr = mod(h_arr + 180, 360) - 180;

clear raw_dtm_arr dtm_interp_arr sub_sun_long_arr

%% Generate temperature grid
% Use smallest expected skin depth, zs_min to define thickness of layers
% and use largest expected skin depth, zs_max to define total number of
% layers to use
sz_lat = numel(lat_arr);
sz_long = numel(long_arr);
[z_arr, dz_arr, dz, rho_matrix, num_layers, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval] = generate_temperature_grid(parameters, H_matrix, sz_lat, sz_long);
%% Calculate simulation duration

% fix start and end time of simulation
start_dtm = time_series_dtm_arr(1); %note that actual temperatures wont be recorded until after t_wait has passed
end_dtm = diviner_end_dtm;

% run over whole period (max/min)
t_wait = seconds(diviner_start_dtm - start_dtm)/P; %dont start saving temperatures until the Diviner timeperiod (gives model time to stabilize)
t_limit = seconds(end_dtm - start_dtm); %total time simulated

%% Setup raytracing parameters
raytracing_params = setup_raytracing_params(scattering_power, public_raster_struct, extended_public_raster_struct, sample_dens, extended_sample_dens, ref_sphere, slope_matrix, aspect_matrix, elevation_matrix, extended_elevation_matrix, h_arr, decl_arr, P, const_decl, max_distance, dt);
raytracing_params.start_julian_date = juliandate(start_dtm);

start_jd = juliandate(start_dtm);
end_jd = juliandate(end_dtm);

diviner_temperatures_path = create_static_path(sprintf('crater_environments/diviner_temperatures/%s_diviner_temperatures.mat', crater_name));
try
    full_diviner_data = load(diviner_temperatures_path);
catch ME
    if strcmp(ME.identifier, 'MATLAB:load:couldNotReadFile')
        fprintf('\nNo diviner temperatures found. Saving...\n');
        full_diviner_data.output = save_ls_diviner_temperatures(crater_name);
        fprintf('Diviner temperatures saved.\n')
    else
        error(ME.message)
    end
end


diviner_data = struct();
diviner_data.lat_arr = full_diviner_data.output.lat_arr;
diviner_data.long_arr = full_diviner_data.output.long_arr;
diviner_data.T_arr = full_diviner_data.output.T_arr;
diviner_data.jd_arr = full_diviner_data.output.jd_arr;
%only need lat_arr, long_arr, T_arr, jd_arr

% t_arr = 0:dt:t_limit;

%% MODEL BRANCH POINT
switch model_type
    case 'shadowing'
       % For no scattering, we can compute absorbtion coefficients on-the-fly
        if print_progress
            fprintf('\tRunning simulation\n')
        end
        simulation_t_start_dtm = datetime;
        if print_progress
            fprintf('\tStarted by-pixel (shadowing) sim at %s\n\n', datestr(simulation_t_start_dtm, 'HH:MM:SS dd-mmm'));
        end

        if USE_MEX
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = shadowing_latlon_loop_mex(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, dz_arr,dz, parameters, init_temps, raytracing_params,ew_matrix, ns_matrix,  start_jd, end_jd, diviner_data, recent_errors_only);                                                                        
        else
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = shadowing_latlon_loop(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, dz_arr,dz, parameters, init_temps, raytracing_params,ew_matrix, ns_matrix,  start_jd, end_jd, diviner_data, recent_errors_only);                                                                        
        end

    case 'multiscattering'
    %% Precompute flux coefficients
        %% Pre-calculate information about each pixel
        if print_progress
            fprintf('\tCalculating flux coefficients')
            fprintf([repmat('.',1,numel(lat_arr)-numel('Calculating flux coefficients')), '\n\t\n']);
            flux_calculation_start = datetime;
            fprintf('Calculation started at %s\n', datestr(flux_calculation_start));
        end
        if USE_MEX
            [ absorbed_vis_coeff_4dmat, scattered_vis_coeff_4dmat, emitted_absorbed_ir_coeff_4dmat, emitted_scattered_ir_coeff_4dmat, scattered_absorbed_ir_coeff_4dmat, scattered_scattered_ir_coeff_4dmat ] = combo_get_flux_coefficients_mex(lat_arr, long_arr, slope_matrix, aspect_matrix, elevation_matrix, r_moon, sample_dens, public_raster_struct, ew_matrix, ns_matrix, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, a_matrix, b_matrix, emissivity_matrix, scattering_power);
        else
            [ absorbed_vis_coeff_4dmat, scattered_vis_coeff_4dmat, emitted_absorbed_ir_coeff_4dmat, emitted_scattered_ir_coeff_4dmat, scattered_absorbed_ir_coeff_4dmat, scattered_scattered_ir_coeff_4dmat ] = combo_get_flux_coefficients(lat_arr, long_arr, slope_matrix, aspect_matrix, elevation_matrix, r_moon, sample_dens, public_raster_struct, ew_matrix, ns_matrix, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, a_matrix, b_matrix, emissivity_matrix, scattering_power);
        end
       
        fprintf('Finished in %s\n', datestr(datetime- flux_calculation_start, 'HH:MM:SS'));
            %% Perform multiple scattering calculations
        % Re-index as 2d matrix
        num_px = numel(lat_arr)*numel(long_arr);
        absorbed_vis_flux_matrix = reshape(absorbed_vis_coeff_4dmat, num_px, num_px);
        scattered_vis_flux_matrix = reshape(scattered_vis_coeff_4dmat, size(absorbed_vis_flux_matrix));
        emitted_absorbed_ir_flux_matrix = reshape(emitted_absorbed_ir_coeff_4dmat, size(absorbed_vis_flux_matrix));
        emitted_scattered_ir_flux_matrix = reshape(emitted_scattered_ir_coeff_4dmat, size(absorbed_vis_flux_matrix));
        scattered_absorbed_ir_flux_matrix = reshape(scattered_absorbed_ir_coeff_4dmat, size(absorbed_vis_flux_matrix));
        scattered_scattered_ir_flux_matrix = reshape(scattered_scattered_ir_coeff_4dmat, size(absorbed_vis_flux_matrix));


        % save memory for large craters
        clear absorbed_vis_coeff_4dmat scattered_vis_coeff_4dmat
        clear emitted_absorbed_ir_coeff_4dmat emitted_scattered_ir_coeff_4dmat
        clear emitted_absorbed_ir_coeff_4dmat emitted_scattered_ir_coeff_4dmat

        if num_bounces < 0
            % Re-absorb radiation into surface
            num_bounces = -num_bounces;
            emitted_absorbed_ir_flux_matrix = emitted_absorbed_ir_flux_matrix/ir_normalisation;
            emitted_scattered_ir_flux_matrix = emitted_scattered_ir_flux_matrix/ir_normalisation;
            emitted_absorbed_ir_flux_matrix = emitted_absorbed_ir_flux_matrix + eye(size(emitted_absorbed_ir_flux_matrix))*(ir_normalisation-1)/ir_normalisation;    
        end

        if num_bounces == 0
            vis_flux_matrix = zeros(size(absorbed_vis_flux_matrix));
            ir_flux_matrix = zeros(size(emitted_absorbed_ir_flux_matrix));
        elseif num_bounces == 1
            vis_flux_matrix = absorbed_vis_flux_matrix;
            ir_flux_matrix = emitted_absorbed_ir_flux_matrix;
        else
            if isinf(num_bounces)
                multiple_vis_scatter_matrix = (eye(size(scattered_vis_flux_matrix)) - scattered_vis_flux_matrix)^-1; % geometric series sum to infinity
                multiple_ir_scatter_matrix = (eye(size(scattered_scattered_ir_flux_matrix)) - scattered_scattered_ir_flux_matrix)^-1; % geometric series sum to infinity
            else
                multiple_vis_scatter_matrix = (eye(size(scattered_vis_flux_matrix)) - scattered_vis_flux_matrix^(num_bounces-1))*(eye(size(scattered_vis_flux_matrix)) - scattered_vis_flux_matrix)^-1;
                multiple_ir_scatter_matrix = (eye(size(scattered_scattered_ir_flux_matrix)) - scattered_scattered_ir_flux_matrix^(num_bounces-1))*(eye(size(scattered_scattered_ir_flux_matrix)) - scattered_scattered_ir_flux_matrix)^-1;
            end
            vis_flux_matrix = absorbed_vis_flux_matrix + scattered_vis_flux_matrix*multiple_vis_scatter_matrix*absorbed_vis_flux_matrix;
            ir_flux_matrix = emitted_absorbed_ir_flux_matrix + emitted_scattered_ir_flux_matrix*multiple_ir_scatter_matrix*scattered_absorbed_ir_flux_matrix;
        end
        % deal with floating point errors etc. to ensure flux coefficents never negative
        vis_flux_matrix(vis_flux_matrix < 0) = 0;
        ir_flux_matrix(ir_flux_matrix < 0) = 0;
        clear absorbed_vis_flux_matrix scattered_vis_flux_matrix
        clear emitted_absorbed_ir_flux_matrix emitted_scattered_ir_flux_matrix
        clear emitted_absorbed_ir_flux_matrix emitted_scattered_ir_flux_matrix
        %% Main combination sim loop
        if print_progress
            fprintf('\tRunning simulation\n')
        end
        simulation_t_start_dtm = datetime;
        if print_progress
            fprintf('\tStarted by-timestep (multiscattering) sim at %s\n\n', datestr(simulation_t_start_dtm, 'HH:MM:SS dd-mmm'));
        end

        if USE_MEX 
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = multiscattering_core_loop_wrapper_mex(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, vis_flux_matrix, ir_flux_matrix, dz_arr,dz, parameters, init_temps, raytracing_params,  start_jd, end_jd, diviner_data, recent_errors_only );
        else
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = multiscattering_core_loop_wrapper(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, vis_flux_matrix, ir_flux_matrix, dz_arr,dz, parameters, init_temps, raytracing_params,  start_jd, end_jd, diviner_data, recent_errors_only );
        end
    case '1D'
        if print_progress
            fprintf('\tRunning simulation\n')
        end
        simulation_t_start_dtm = datetime;
        if print_progress
            fprintf('\tStarted by-pixel (1D) sim at %s\n\n', datestr(simulation_t_start_dtm, 'HH:MM:SS dd-mmm'));
        end
        
        if USE_MEX
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = no_raytracing_latlon_mex(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, dz_arr,dz, parameters, init_temps, raytracing_params,ew_matrix, ns_matrix,  start_jd, end_jd, diviner_data, recent_errors_only);
        else
            [ Tmax_3dmat, Tmin_3dmat, jd_error_3dmat , T_error_3dmat ] = no_raytracing_latlon(z_arr, bottom_layer_idx, depth_update_wait_t, depth_update_t_interval, num_layers, t_limit, t_wait, rho_matrix, lat_arr, long_arr, dz_arr,dz, parameters, init_temps, raytracing_params,ew_matrix, ns_matrix,  start_jd, end_jd, diviner_data, recent_errors_only);
        end
        
    otherwise
        error("Invalid model_type: %s \nValid options are: \n\tshadowing\n\tmultiscattering\n\t1D\n", model_type);
end


%% Manage outputs

if print_progress
    simulation_duration = datetime - simulation_t_start_dtm;
    total_duration = datetime - simulation_start_dtm;
    fprintf('\tSimulation done in %s (%s total overhead)\n', simulation_duration, total_duration);
end

    % Create output structure
output = struct;
output.crater_name = crater_name;
    % Extreme temperatures
output.extremes.Tmax_3dmat = Tmax_3dmat;
output.extremes.Tmin_3dmat = Tmin_3dmat;
output.extremes.description = 'Max/min temperatures and associated datetimes for each point in the simulation. The three dimensions of the matrices give latitude, longitude and depth respectively, with the corresponding lat/long values given in metadata.crater_data and corresponding depth values given in metadata.z_arr.';

output.errors.jd_error_3dmat = jd_error_3dmat;
output.errors.T_error_3dmat = T_error_3dmat;
output.errors.recent_only = recent_errors_only;

output.metadata.crater_data = crater_data;
output.metadata.z_arr = z_arr;
output.metadata.t_wait = t_wait;
output.metadata.scattering_power = scattering_power;
output.metadata.num_bounces = num_bounces;
output.metadata.custom_parameters = custom_parameters;
output.metadata.parameters = parameters;
output.metadata.description = 'Temperature data for location on moon, created with combo_calculate_extremes.';
output.metadata.created = datetime;
output.metadata.simulation_duration =  simulation_duration;
output.metadata.total_duration = total_duration;
output.metadata.model_type = model_type;
output.metadata.time_series_dtm_arr = time_series_dtm_arr;

switch model_type
    case 'shadowing'
    target_path = create_static_path(sprintf('outputs/combo_temperatures/no_scattering/%s.mat',crater_name));
    case 'multiscattering'
    target_path = create_static_path(sprintf('outputs/combo_temperatures/scattering/%s.mat',crater_name));
    case '1D'
    target_path = create_static_path(sprintf('outputs/combo_temperatures/1D/%s.mat',crater_name));   
end

save(target_path, 'output')
fprintf("Results saved. Generating output plot...\n");
display_result(crater_name, model_type);
end