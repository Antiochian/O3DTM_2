function data = generate_crater_environment(crater_name)
% GENERATE_CRATER_ENVIRONMET generates crater environment data used for 3D
% modelling. Crater names and lat/long limits are defined below.


%% Set up
if nargin == 0
    crater_name = 'all';
    warning("No crater selected. Defaulting to: %s", crater_name);
end

%% Set up crater
% Nasty legacy code which selects one of (many) hardcoded locations on the
% moon. Some have unique names (eg: 'blagg', 'bruce', 'erlanger'), but most
% follow the format 'lsX_Yppd' where:
%                       X = ID number of crater
%                       Y = pixels-per-degree (resolution) of sim
%
% Also the suffix "_wide" can be appended for a wider plot of land.

switch crater_name
    %% Unique pre-programmed crater names
    case 'all'
        generate_crater_environment('61n');
        generate_crater_environment('88s');
        generate_crater_environment('bruce');
        generate_crater_environment('blagg');
        generate_crater_environment('erlanger');
        return
    case 'bruce'
        lat_min = 1.0;
        lat_max = 1.4;
        long_min = 0.2;
        long_max = 0.6;
        ppd = 128;
    case 'blagg'
        lat_min = 1.09;
        lat_max = 1.34;
        long_min = 1.35;
        long_max = 1.6;
        ppd = 128;
    case 'blagg4' %ultra-small 4ppd version of blagg
        lat_min = 0.95;
        lat_max = 1.55;
        long_min = 1.20;
        long_max = 1.80;
        ppd = 4;
    case 'blagg16'
        lat_min = 0.95;
        lat_max = 1.55;
        long_min = 1.20;
        long_max = 1.80;
        ppd = 16;
    case 'blagg16_large'
        lat_min = 0.3;
        lat_max = 2.5;
        long_min = 0.01;
        long_max = 6.95;
        ppd = 16;
    case 'erlanger'
        lat_min = 86.7;
        lat_max = 87.2;
        long_min = 24.7;
        long_max = 32.7;
        ppd = 128;
    case '88s'
        lat_min = -88.45;
        lat_max = -88.14;
        long_min = 153;
        long_max = 161;
        ppd = 128;
    case '61n'
        lat_min = 61.59;
        lat_max = 61.75;
        long_min = -2.08;
        long_max = -1.80;
        ppd = 128;

    otherwise
        %% Crater ID #s
        if strcmp(crater_name(1:2), 'ls')
            uscore_idx = strfind(crater_name, '_');
            crater_numel = crater_name(3:uscore_idx-1);
            % *** ADD NEW CRATER ENVIRONMENTS HERE ***
            switch crater_numel
                case '1'
                    ls_lat = -79.30;
                    ls_long = -56.00;
                case '2'
                    ls_lat = -80.56;
                    ls_long = -37.10;
                case '3'
                    ls_lat = -81.24;
                    ls_long = 68.99;
                case '4'
                    ls_lat = -81.35;
                    ls_long = 22.80;
                case '5'
                    ls_lat = -84.25;
                    ls_long = -4.65;
                case '6'
                    ls_lat = -84.33;
                    ls_long = 33.19;
                case '7'
                    ls_lat = -85.33;
                    ls_long = -4.78;
                case '8'
                    ls_lat = -82.70;
                    ls_long = 33.50;
                case '992'
                    ls_lat = -82;
                    ls_long = 30;
                otherwise
                    error('Unknown crater')
            end
            %% Decide resolution of simulation
            if strcmp(crater_name(end-4:end), '_4ppd')
               lat_buffer = 2;
               long_buffer = 2;
               ppd = 4;
            elseif strcmp(crater_name(end-5:end), '_16ppd')
                lat_buffer = 2;
                long_buffer = 2;
                ppd = 16;
            elseif strcmp(crater_name(end-6:end), '_128ppd')
                lat_buffer = 2;
                long_buffer = 2;
                ppd = 128;
            elseif strcmp(crater_name(end-11:end), '_128ppd_wide')
                lat_buffer = 2;
                long_buffer = 10;
                ppd = 128;
            elseif strcmp(crater_name(end-12:end), '_128ppd_strip')
                lat_buffer = 2;
                long_buffer = 0.70/2;
                ppd = 128;
            elseif strcmp(crater_name(end-13:end), '_128ppd_crater')
                ls_lat = ls_lat + 2;
                lat_buffer = 2;
                long_buffer = 4;
                ppd = 128;
            elseif strcmp(crater_name(end-10:end), '_16ppd_wide')
                lat_buffer = 2;
                long_buffer = 10;
                ppd = 16;
            elseif strcmp(crater_name(end-9:end), '_4ppd_wide')
                lat_buffer = 2;
                long_buffer = 10;
                ppd = 4;
            elseif strcmp(crater_name(end-11:end), '_4ppd_narrow')
                lat_buffer = 0.25;
                long_buffer = 1.25;
                ppd = 4;
            elseif strcmp(crater_name(end-11:end), '_4ppd_crater')
                ls_lat = ls_lat + 2;
                lat_buffer = 2;
                long_buffer = 4;
                ppd = 4;
            end
            lat_min = ls_lat - lat_buffer;
            lat_max = ls_lat + lat_buffer;
            long_min = ls_long - long_buffer;
            long_max = ls_long + long_buffer;
        else
            error('Unknown crater')
        end
end
%% Load LOLA data
%reads in elevation data for various lat/longs taken from LOLA measurements
fprintf('Loading LOLA elevation data... ')
[elevation_matrix, lat_arr, long_arr] = read_lola_height_data(ppd, [lat_min, lat_max], [long_min, long_max]);

% get distances
%converts the lat/lon measurements into cartesian X-Y coordinates which
%are loaded into xEast and yNorth such that the cartesian coordinates for
%point "i" are [xEast(lat(i), lon(i) , yNorth(lat(i), lon(i))]
ref_sphere = referenceSphere('moon');
center_lat = mean(lat_arr);
center_long = mean(long_arr);
ns_matrix = NaN(size(elevation_matrix));
ew_matrix = NaN(size(elevation_matrix));
for lat_idx = 1:numel(lat_arr)
    lat = lat_arr(lat_idx);
    for long_idx = 1:numel(long_arr)
        long = long_arr(long_idx);
        [xEast,yNorth,~] = geodetic2enu(lat,long,0,center_lat,center_long,0,ref_sphere);
        ew_matrix(lat_idx, long_idx) = xEast;
        ns_matrix(lat_idx, long_idx) = yNorth;
    end
end

fprintf('Done\n')

%% Get A0 data
fprintf('Calculating albedo data... ')
if ppd > 4
    albedo_ppd = 8; %Lola doesnt have 16ppd data
else
    albedo_ppd = 4;
end
[albedo_matrix, albedo_lat_arr, albedo_long_arr] = read_lola_A0_data(albedo_ppd); % use highest resolution albedo data possible
%note here that the albedo_lat_arr, etc are the ALL lat/lons read by lola,
%so (a) we need only a few of them and (b) some interpolation is required
parameters = define_parameters; %get physical constants
albedo_matrix = scale_data(albedo_matrix, parameters.A0); %scale LOLA data so average albedo matches bond albedo at normal solar incedence
[albedo_long_matrix, albedo_lat_matrix] = meshgrid(albedo_long_arr, albedo_lat_arr);
[long_matrix, lat_matrix] = meshgrid(long_arr, lat_arr);
%interpolation step to provide albedo_matrix that matches long/lat_matrix
albedo_matrix = interp2(albedo_long_matrix, albedo_lat_matrix, albedo_matrix, long_matrix, lat_matrix);
A0 = mean(albedo_matrix(:)); %Why do we set A0 like this? Shouldn't we scale it like we did in line 229?
fprintf('Done\n')

%% Load Diviner data
fprintf('Loading Diviner temperature data...\n')
[Tmax_matrix, Tmin_matrix, Tmax_ltim_matrix, Tmin_ltim_matrix, Tmax_dtm_matrix, Tmin_dtm_matrix, ~, ~, Tmean_matrix] = find_diviner_extreme_temperatures(ppd, lat_arr, long_arr, true);
%

%% Save data
fprintf('Generating environment for "%s"... ', crater_name)
data = struct;
data.crater_name = crater_name;
data.lat_arr = lat_arr;
data.long_arr = long_arr;
data.ew_matrix = ew_matrix;
data.ns_matrix = ns_matrix;
data.center_lat = mean(lat_arr);
data.center_long = mean(long_arr);
data.elevation_matrix = elevation_matrix;
data.Tmax_matrix = Tmax_matrix;
data.Tmax_ltim_matrix = Tmax_ltim_matrix;
data.Tmax_dtm_matrix = Tmax_dtm_matrix;
data.Tmin_matrix = Tmin_matrix;
data.Tmin_ltim_matrix = Tmin_ltim_matrix;
data.Tmin_dtm_matrix = Tmin_dtm_matrix;
data.Tmean_matrix = Tmean_matrix;
data.A0 = A0;
data.ppd = ppd;
data.description = 'Data for lunar crater';
data.created = datetime;

target_name = create_static_path(sprintf('crater_environments/%s.mat', crater_name));
save(target_name, 'data')
fprintf('Done\n')
end