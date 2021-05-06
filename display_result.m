function display_result(crater_name, model_type)

% 
cutoff_value = 112; %above this temperature, ice volatiles cant exist (we assume)

if nargin() == 0
    crater_name = 'ls4_4ppd';
end

if nargin() < 2
    model_type = 'shadowing';
end

switch model_type
    case 'shadowing'
        target_path = create_static_path(sprintf('outputs/combo_temperatures/no_scattering/%s.mat',crater_name));
        output_filename = [create_static_path('plots\combo_output\'), crater_name, '_no_scattering.png' ];
    case 'multiscattering'
        target_path = create_static_path(sprintf('outputs/combo_temperatures/scattering/%s.mat',crater_name));
        output_filename = [create_static_path('plots\combo_output\'), crater_name, '_scattering.png' ];    
    case '1D'
        target_path = create_static_path(sprintf('outputs/combo_temperatures/1D/%s.mat',crater_name));
        output_filename = [create_static_path('plots\combo_output\'), crater_name, '1D.png' ];
end

fprintf("Evaluating errors for crater name: %s using model type: %s\n", crater_name, model_type);


%load data
data = load(target_path);
ew_matrix = data.output.metadata.crater_data.ew_matrix;
ns_matrix = data.output.metadata.crater_data.ns_matrix;
elevation_matrix = data.output.metadata.crater_data.elevation_matrix;

metadata = data.output.metadata;
lat_arr = metadata.crater_data.lat_arr;
long_arr = metadata.crater_data.long_arr;
z_arr = metadata.z_arr;

Tmax_3dmat = data.output.extremes.Tmax_3dmat;
error_data = data.output.errors;


end_time = 0;
total_numel = 0;
for lat_idx = 1:numel(lat_arr)
    for long_idx = 1:numel(long_arr)
        end_time = max(end_time, max(error_data.jd_error_3dmat{lat_idx, long_idx}));
        total_numel = total_numel + numel(error_data.jd_error_3dmat{lat_idx, long_idx});
    end
end
yr_cutoff = end_time - 365;

num_of_samples = 0;
all_errors = NaN(1, total_numel);
all_times = NaN(1, total_numel);
all_ptr = 1;

recent_mean_error_matrix = NaN(numel(lat_arr), numel(long_arr));
mean_error_matrix = NaN(numel(lat_arr), numel(long_arr));
mean_std_matrix = NaN(numel(lat_arr), numel(long_arr));

abs_error_matrix = NaN(size(recent_mean_error_matrix));
pixelcount = 0;
for lat_idx = 1:numel(lat_arr)
    lat = lat_arr(lat_idx);
    for long_idx = 1:numel(long_arr)
        long = long_arr(long_idx);
        
        local_error = error_data.T_error_3dmat{lat_idx, long_idx};
        local_error_times = error_data.jd_error_3dmat{lat_idx, long_idx};
        local_numel = numel(local_error);
        
        mean_error_matrix(lat_idx, long_idx) = nanmean(local_error);
        abs_error_matrix(lat_idx, long_idx) = nanmean(abs(local_error));
        mean_std_matrix(lat_idx, long_idx) = std(local_error, 'omitnan');
        recent_mean_error_matrix(lat_idx, long_idx) = nanmean(local_error(local_error_times>yr_cutoff));
        num_of_samples = num_of_samples+numel(local_error);
        
        all_errors(all_ptr: all_ptr + local_numel-1) = local_error;
        all_times(all_ptr: all_ptr + local_numel-1)  = local_error_times;
        all_ptr = all_ptr + local_numel;
        pixelcount = pixelcount + 1;
    end
end

% Find worst pixel
[max_error_arr, max_row] = max(abs_error_matrix);
[max_abs_error, max_col] = max(max_error_arr);
bad_lat_idx = max_row(max_col);
bad_long_idx = max_col;

worst_mean_error = mean_error_matrix(max_row(max_col), max_col);
fprintf("Worst pixel (abs) mean error: (%.2f) %.2f Kelvin , (at lat/lon: %.1f/%.1f ) \n", max_abs_error, worst_mean_error, lat_arr(max_row(max_col)), long_arr(max_col));

% Find center pixel
centre_lat_idx = ceil(numel(lat_arr)/2); %ceil not floor so that 1pixel-sized regions resolve to 1 and not zero (index error)
centre_long_idx = ceil(numel(long_arr)/2); 
fprintf("Centre pixel (abs) mean error: (%.2f) %.2f Kelvin, (at lat/lon: %.1f/%.1f ) \n", abs_error_matrix(centre_lat_idx, centre_long_idx), mean_error_matrix(centre_lat_idx, centre_long_idx), lat_arr(centre_lat_idx), long_arr(centre_long_idx));


title_error_string = sprintf("Overall mean error/absolute error:      %.1f K / %.1f K",nanmean(all_errors), nanmean(abs(all_errors)));
%% START PLOTTING
clf;
sgtitle(sprintf("%s - %s -  %s", strrep(crater_name,'_',' '),model_type, title_error_string));
%% Make plots
%% Min constant temperature
ax_T = subplot(2,2,1);
data_matrix = NaN(size(elevation_matrix));
for lat_idx = 1:numel(lat_arr)
    for long_idx = 1:numel(long_arr)
        data_matrix(lat_idx, long_idx) =  min(Tmax_3dmat(lat_idx, long_idx, :));
    end
end
plot_h = surf(ew_matrix/1e3, ns_matrix/1e3, elevation_matrix/1e3,data_matrix);
plot_h.LineWidth = 0.1;
plot_h.EdgeAlpha = 0.33;
axis equal
box on
c = colorbar;
c.Label.String = sprintf('Minimum sub-surface constant temperature (K)');
caxis([25, 200])
step_colormap(spectral, 0.5, cutoff_value);
label_subroutine(true)
hold on;
plot3(ew_matrix(bad_lat_idx, bad_long_idx)/1e3,ns_matrix(bad_lat_idx,bad_long_idx)/1e3,elevation_matrix(bad_lat_idx, bad_long_idx)/1e3,'r.', 'markersize',10);
plot3(ew_matrix(centre_lat_idx, centre_long_idx)/1e3,ns_matrix(centre_lat_idx,centre_long_idx)/1e3,elevation_matrix(centre_lat_idx, centre_long_idx)/1e3,'g.', 'markersize',10);
hold off;

%% Min stable depth
ax = subplot(2,2,2);
data_matrix = NaN(size(elevation_matrix));
for lat_idx = 1:numel(lat_arr)
    for long_idx = 1:numel(long_arr)
        if ~isnan(Tmax_3dmat(lat_idx, long_idx, 1))
            dz = 0.01; % 1cm 
            z_interp_arr = min(z_arr):dz:max(z_arr);
            T_arr = interp1(z_arr, squeeze(Tmax_3dmat(lat_idx, long_idx, :)), z_interp_arr, 'spline');
            z_stable_arr = z_interp_arr(T_arr < cutoff_value);
            plot_value = min(z_stable_arr);
            if numel(plot_value) == 0
                plot_value = NaN;
            end
        else
            plot_value = NaN;
        end
        data_matrix(lat_idx, long_idx) = plot_value;
    end
end
plot_h = surf(ew_matrix/1e3, ns_matrix/1e3, elevation_matrix/1e3,data_matrix);
plot_h.LineWidth = 0.1;
plot_h.EdgeAlpha = 0.33;
axis equal
box on
c = colorbar;
colormap(ax,parula);
c.Label.String = sprintf('Minimum stable depth (m)');
% step_colormap(spectral, 0.5, cutoff_value);
label_subroutine(true)
hold on;
plot3(ew_matrix(bad_lat_idx, bad_long_idx)/1e3,ns_matrix(bad_lat_idx,bad_long_idx)/1e3,elevation_matrix(bad_lat_idx, bad_long_idx)/1e3,'r.', 'markersize',10);
plot3(ew_matrix(centre_lat_idx, centre_long_idx)/1e3,ns_matrix(centre_lat_idx,centre_long_idx)/1e3,elevation_matrix(centre_lat_idx, centre_long_idx)/1e3,'g.', 'markersize',10);
hold off;


%% Mean abs. error surf
subplot(2,2,3);
plot_h = surf(ew_matrix/1e3, ns_matrix/1e3, elevation_matrix/1e3,abs_error_matrix);
plot_h.LineWidth = 0.1;
plot_h.EdgeAlpha = 0.33;
axis equal
box on
caxis([0, 50]);
c = colorbar;
c.Label.String = 'Mean absolute error (K)';
title(sprintf("Mean absolute error (avg: %.2f K)",nanmean(abs(all_errors))));
label_subroutine(true);
hold on;
plot3(ew_matrix(bad_lat_idx, bad_long_idx)/1e3,ns_matrix(bad_lat_idx,bad_long_idx)/1e3,elevation_matrix(bad_lat_idx, bad_long_idx)/1e3,'r.', 'markersize',10);
plot3(ew_matrix(centre_lat_idx, centre_long_idx)/1e3,ns_matrix(centre_lat_idx,centre_long_idx)/1e3,elevation_matrix(centre_lat_idx, centre_long_idx)/1e3,'g.', 'markersize',10);
hold off;

%% Scatter plot
subplot(2,2,4);
hold on;
% scatter(datetime(all_times,'convertfrom','juliandate'), all_errors,[],[.7,.7,.7]);
x1_arr = datetime(error_data.jd_error_3dmat{bad_lat_idx, bad_long_idx},'convertfrom','juliandate');
y1_arr = error_data.T_error_3dmat{bad_lat_idx, bad_long_idx};
scatter(x1_arr,y1_arr, [],'r');
scatter(datetime(error_data.jd_error_3dmat{centre_lat_idx, centre_long_idx},'convertfrom','juliandate') , error_data.T_error_3dmat{centre_lat_idx, centre_long_idx}, [], 'g');
yline(0);
hold off;
worst_label = sprintf("Worst pixel (abs) mean error: (%.2f K) %.2f K \n", max_abs_error, worst_mean_error);
centre_label = sprintf("Centre pixel (abs) mean error: (%.2f K) %.2f K \n", abs_error_matrix(centre_lat_idx, centre_long_idx), mean_error_matrix(centre_lat_idx, centre_long_idx));
legend([worst_label, centre_label]);
ylabel('Temperature error (K)')
title("Selected pixels' error data")
% scatter(all_times, all_errors);
% xline(yr_cutoff);

set(gcf, 'Position',  [0, 0, 500, 400]);
%% Disused functions
%%MEAN ERROR MAP
% subplot(2,2,3);
% plot_h = surf(ew_matrix/1e3, ns_matrix/1e3, elevation_matrix/1e3,mean_error_matrix);
% plot_h.EdgeAlpha = 0.33;
% plot_h.LineWidth = 0.1;
% axis equal
% box on
% caxis( [-50, 50]);
% c = colorbar;
% c.Label.String = 'Mean error (K)';
% title(sprintf("Mean error (avg: %.2f K)",nanmean(all_errors)));
% label_subroutine(true);
% hold on;
% plot3(ew_matrix(bad_lat_idx, bad_long_idx)/1e3,ns_matrix(bad_lat_idx,bad_long_idx)/1e3,elevation_matrix(bad_lat_idx, bad_long_idx)/1e3,'r.', 'markersize',10);
% plot3(ew_matrix(centre_lat_idx, centre_long_idx)/1e3,ns_matrix(centre_lat_idx,centre_long_idx)/1e3,elevation_matrix(centre_lat_idx, centre_long_idx)/1e3,'g.', 'markersize',10);
% 



width = 12;
height = 9;
fig = gcf;
fig.PaperUnits = 'inches';
fig.PaperPosition = [0 0 width height];
fig.Units = 'inches';
fig.Position = [fig.Position(1) fig.Position(2) 0 0] + fig.PaperPosition;
drawnow

saveas(gcf, output_filename);
fprintf("Plot saved to %s", output_filename);

%% Helper subroutines
function label_subroutine(axis_labels)
        if axis_labels
            yh = ylabel('\leftarrow North');
            set(yh, 'Rotation', -35);
        end
        zlabel('')
        title('')
        ztickformat('%gkm')
        xtickformat('%gkm')
        ytickformat('%gkm')
        xticks(yticks)
        yticks(xticks)
        zticks([])
        view([-45,45])
        %         view([0,90])
        box on
%         grid off
end
end