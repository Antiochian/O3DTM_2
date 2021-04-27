function [ absorbed_vis_coeff_4dmat, scattered_vis_coeff_4dmat, emitted_absorbed_ir_coeff_4dmat, emitted_scattered_ir_coeff_4dmat, scattered_absorbed_ir_coeff_4dmat, scattered_scattered_ir_coeff_4dmat ] = combo_get_flux_coefficients(lat_arr, long_arr, slope_matrix, aspect_matrix, elevation_matrix, r_moon, sample_dens, public_raster_struct, ew_matrix, ns_matrix, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, a_matrix, b_matrix, emissivity_matrix, scattering_power)

absorbed_vis_coeff_4dmat = zeros(numel(lat_arr), numel(long_arr), numel(lat_arr), numel(long_arr));
scattered_vis_coeff_4dmat = zeros(size(absorbed_vis_coeff_4dmat));
emitted_absorbed_ir_coeff_4dmat = zeros(size(absorbed_vis_coeff_4dmat));
emitted_scattered_ir_coeff_4dmat = zeros(size(absorbed_vis_coeff_4dmat));
scattered_absorbed_ir_coeff_4dmat = zeros(size(absorbed_vis_coeff_4dmat));
scattered_scattered_ir_coeff_4dmat = zeros(size(absorbed_vis_coeff_4dmat));

ir_normalisation = 1/(scattering_power+1);

mA = A0_matrix;
mB = a_matrix./((pi/4)^3);
mC = b_matrix./((pi/2)^8);
%hardcoded solution to integral to avoid using symbolic variables
vis_normalisation_matrix = 1./( mA + 3*mB*(pi^2 - 8)/4 + mC*(40320 - 20160*pi + 840*pi^3 - 10.5*pi^5 + pi^7 /16) );
%clearvars mA mB mC;


for lat1_idx = 1:numel(lat_arr)
    lat1 = lat_arr(lat1_idx);

    %% Prepare for parfor iteration
    % Set up local copies so parfor works (if using parfor version of code)
        %Reverted this for the stripped ver.
    for long1_idx = 1:numel(long_arr)
        long1 = long_arr(long1_idx);
        
        %% Get information about current location
        slope1 = slope_matrix(lat1_idx, long1_idx);
        aspect1 = aspect_matrix(lat1_idx, long1_idx);
        h1 = elevation_matrix(lat1_idx, long1_idx);
                
        %% Calculate flux coefficients
        % Calculate which pixels are visible from the current pixel and
        % calculate values to be used in flux coeff calculation
%         vis_matrix = squeeze(vis_4dmat(lat1_idx, long1_idx, :, :));
        vis_matrix = mexable_viewshed(elevation_matrix, 0, lat1, long1, 0, 0, 'AGL', 'AGL', r_moon,r_moon, sample_dens, public_raster_struct);    

        ew_dist = ew_matrix(lat1_idx, 2) - ew_matrix(lat1_idx, 1);
        ns_dist = ns_matrix(1, long1_idx) - ns_matrix(2, long1_idx);
        emission_area = abs(ew_dist*ns_dist/cosd(slope_matrix(lat1_idx, long1_idx)));
        
        % Calculate flux coefficients for each pixel visible from current
        % pixel (i.e. radiation emitted from px1 which is absorbed by px2
        % and which is scattered from px2)
        curr_vis_normalisation = vis_normalisation_matrix(lat1_idx, long1_idx);
        for lat2_idx = 1:numel(lat_arr)
            lat2 = lat_arr(lat2_idx);
            for long2_idx = 1:numel(long_arr)
                long2 = long_arr(long2_idx);
                if lat1 == lat2 && long1 == long2
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
                    
                    
                    [ absorbed_vis_coeff, scattered_vis_coeff, emitted_absorbed_ir_coeff, emitted_scattered_ir_coeff, scattered_absorbed_ir_coeff, scattered_scattered_ir_coeff ] = scattering_coefficients(lat1, long1, lat2, long2, lat1_idx, long1_idx, lat2_idx, long2_idx, h1, h2, slope1, slope2, aspect1, aspect2, emission_area, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, curr_vis_normalisation, ir_normalisation, emissivity_matrix, scattering_power);
                    absorbed_vis_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = absorbed_vis_coeff;                    
                    scattered_vis_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = scattered_vis_coeff;

                    emitted_absorbed_ir_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = emitted_absorbed_ir_coeff;
                    emitted_scattered_ir_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = emitted_scattered_ir_coeff;
                    scattered_absorbed_ir_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = scattered_absorbed_ir_coeff;
                    scattered_scattered_ir_coeff_4dmat(lat1_idx, long1_idx, lat2_idx, long2_idx) = scattered_scattered_ir_coeff;

                    %% #################################################################################################################
                end
            end
        end
    end
    fprintf('\b#\n');
end