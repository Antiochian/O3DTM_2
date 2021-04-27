function [ absorbed_vis_coeff, scattered_vis_coeff, emitted_absorbed_ir_coeff, emitted_scattered_ir_coeff, scattered_absorbed_ir_coeff, scattered_scattered_ir_coeff ] = scattering_coefficients(lat1, long1, lat2, long2, lat1_idx, long1_idx, lat2_idx, long2_idx, h1, h2, slope1, slope2, aspect1, aspect2, emission_area, ref_sphere, A0_matrix, a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, curr_vis_normalisation,ir_normalisation, emissivity_matrix, scattering_power)

% THINGS TO REPLACE
%   A0_matrix(lat1_idx, long1_idx) 
%       -> polled for lat1, lon1 AND lat2, lon2, so cant change this one
%   a_OVER_pi_OVER_4_POWER_3_matrix(lat1_idx, long1_idx)
%   b_OVER_pi_OVER_2_POWER_8_matrix(lat1_idx, long1_idx)
%   vis_normalisation_matrix(lat1_idx, long1_idx)
%   emissivity_matrix(lat1_idx, long1_idx)



[az12,elev12,dist] = my_geodetic2aer(lat1,long1,h1,lat2,long2,h2,ref_sphere);
[az21,elev21,~] = my_geodetic2aer(lat2,long2,h2,lat1,long1,h1,ref_sphere);
% calculate flux coefficients          


elev12 = 90 - abs(elev12);
elev21 = 90 - abs(elev21);

cos_theta1 = cosd(elev12)*cosd(slope1) + sind(elev12)*sind(slope1)*cosd(az12-aspect1);
cos_theta2 = cosd(elev21)*cosd(slope2) + sind(elev21)*sind(slope2)*cosd(az21-aspect2);

theta1 = acos(cos_theta1);
theta2 = acos(cos_theta2);

%% SCATTERING FUNCTION #############################################################################################
% geometric_flux_coeff is fraction of radiation emitted
% from px1 which can be absorbed by px2 (assuming
% perfect zero albedo)
% absorbed_flux_coeff is fraction of radiation emitted
% from px1 which is absorbed by px2 (accounting for
% albedo)
% scattered_flux_coeff is fraction of radiation from
% px1 which is incident on px2 but is re-scattered due
% to albedo


%% Geometric
geometric_flux_coeff = cos_theta1*cos_theta2*emission_area/(4*pi*dist^2);

if geometric_flux_coeff < 0 || geometric_flux_coeff > 1 || cos_theta1 < 0 || cos_theta2 < 0 || ~isreal(geometric_flux_coeff)
    % run check to ensure physical coefficient
    geometric_flux_coeff = 0;
end

%% Visible
albedo1 = A0_matrix(lat1_idx, long1_idx) + a_OVER_pi_OVER_4_POWER_3_matrix(lat1_idx, long1_idx)*theta1*theta1*theta1 + b_OVER_pi_OVER_2_POWER_8_matrix(lat1_idx, long1_idx)*theta1*theta1*theta1*theta1*theta1*theta1*theta1*theta1;
albedo2 = A0_matrix(lat2_idx, long2_idx) + a_OVER_pi_OVER_4_POWER_3_matrix(lat2_idx, long2_idx)*theta2*theta2*theta2 + b_OVER_pi_OVER_2_POWER_8_matrix(lat2_idx, long2_idx)*theta2*theta2*theta2*theta2*theta2*theta2*theta2*theta2;

absorbed_vis_coeff = curr_vis_normalisation*albedo1*geometric_flux_coeff*(1-albedo2); % scattered from 1, absorbed by 2
scattered_vis_coeff = curr_vis_normalisation*albedo1*geometric_flux_coeff*(albedo2); % scattered from 1, scattered by 2


%% IR
emissivity1 = emissivity_matrix(lat1_idx, long1_idx)*cos_theta1^scattering_power;
emissivity2 = emissivity_matrix(lat2_idx, long2_idx)*cos_theta2^scattering_power;

emitted_absorbed_ir_coeff = ir_normalisation*(emissivity1)*geometric_flux_coeff*(emissivity2); % emitted from 1, absorbed by 2
emitted_scattered_ir_coeff = ir_normalisation*(emissivity1)*geometric_flux_coeff*(1-emissivity2); % emitted from 1, scattered by 2
scattered_absorbed_ir_coeff = (1-emissivity1)*geometric_flux_coeff*(emissivity2); % scattered from 1, absorbed by 2
scattered_scattered_ir_coeff = (1-emissivity1)*geometric_flux_coeff*(1-emissivity2); % scattered from 1, scattered by 2