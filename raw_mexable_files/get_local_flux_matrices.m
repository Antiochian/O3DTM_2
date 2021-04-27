function [ vis_flux_local, ir_flux_local ] = get_local_flux_matrices(lat, long, lat_idx, long_idx, raytracing_params, vis_normalisation_matrix)

elevation_matrix = raytracing_params.elevation_matrix;

slope1 = raytracing_params.slope_matrix(lat_idx, long_idx);
aspect1 = raytracing_params.aspect_matrix(lat_idx, long_idx);
h1 = raytracing_params.elevation_matrix(lat_idx, long_idx);
% need vis_normalisation matrixs
sample_dens = raytracing_params.sample_dens;
r_moon = raytracing_params.ref_sphere.Radius;

public_raster_struct = raytracing_params.public_raster_struct;
vis_matrix = mexable_viewshed(elevation_matrix, 0, lat, long, 0, 0, 'AGL', 'AGL', r_moon,r_moon, sample_dens, public_raster_struct);    
ew_dist = ew_matrix(lat_idx, 2) - ew_matrix(lat_idx, 1);
ns_dist = ns_matrix(1, long_idx) - ns_matrix(2, long_idx);
emission_area = abs(ew_dist*ns_dist/cosd(slope1));

curr_vis_normalisation = vis_normalisation_matrix(lat_idx, long_idx);

absorbed_vis_coeff_local = NaN(size(elevation_matrix));                    
emitted_absorbed_ir_coeff_local = NaN(size(elevation_matrix));

for lat2_idx = 1:numel(lat_arr)
    lat2 = lat_arr(lat2_idx);
    for long2_idx = 1:numel(long_arr)
        long2 = long_arr(long2_idx);
        if lat == lat2 && long == long2
            % Values not needed for current pixel
            continue
        elseif vis_matrix(lat2_idx, long2_idx) == 0
            % Values not needed for pixels not visible from current
            % pixel
            continue
        else   
            h2 = elevation_matrix(lat2_idx, long2_idx);
            slope2 = slope_matrix(lat2_idx, long2_idx);
            aspect2 = aspect_matrix(lat2_idx, long2_idx);


            [ absorbed_vis_coeff, ~, emitted_absorbed_ir_coeff, ~, ~, ~ ] = scattering_coefficients(lat, long, lat2, long2, lat_idx, long_idx, lat2_idx, long2_idx, h1, h2, slope1, slope2, aspect1, aspect2, emission_area, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, curr_vis_normalisation, ir_normalisation, emissivity_matrix, scattering_power);
            
            absorbed_vis_coeff_local(lat2_idx, long2_idx) = absorbed_vis_coeff;                    
            emitted_absorbed_ir_coeff_local(lat2_idx, long2_idx) = emitted_absorbed_ir_coeff;

        end
    end
end


num_px = numel(lat_arr)*numel(long_arr);
absorbed_vis_flux_matrix = reshape(absorbed_vis_coeff_4dmat, num_px, num_px);
emitted_absorbed_ir_flux_matrix = reshape(emitted_absorbed_ir_coeff_4dmat, size(absorbed_vis_flux_matrix));

vis_flux_local = absorbed_vis_flux_matrix;
ir_flux_local = emitted_absorbed_ir_flux_matrix;

vis_flux_local(vis_flux_local < 0) = 0;
ir_flux_local(ir_flux_local < 0) = 0;
