function [vis0, dist, h, lattrk, lontrk, x1, z1, x2, z2] ...
    = mexable_calculateLOS(Z, R, lat1, lon1, lat2, lon2, oalt, talt, ...
        observerAltitudeIsAGL, targetAltitudeIsAGL, actualradius, apparentradius, sample_dens, public_raster_struct)
% Perform the line-of-sight computations needed by LOS2 and VIEWSHED.

% Copyright 2014-2015 The MathWorks, Inc.

% Sample at slightly less than the elevation grid spacing.
spacingInDegrees = 0.9 / sample_dens;

% Intermediate points along the great circle arc between start and end.
[lattrk, lontrk, arclenInRadians] ...
    = sampleGreatCircle(lat1, lon1, lat2, lon2, spacingInDegrees);

dist = actualradius(1) * arclenInRadians;

% Elevation profile between the start and end points.
h = interpolate(Z, lattrk, lontrk, public_raster_struct);

% Visibility of points along the profile between the start and end points.
[vis0, x1, z1, x2, z2] = losprofile(dist, h, oalt, talt, ...
    observerAltitudeIsAGL, targetAltitudeIsAGL, apparentradius);

%--------------------------------------------------------------------------

function [lat, lon, arclenInRadians] ...
    = sampleGreatCircle(lat1, lon1, lat2, lon2, spacingInDegrees)

%  Compute sort of maximum angular distance between the end points.
maxdist = max(abs(lat2 - lat1), abs(lon2 - lon1));

if maxdist > spacingInDegrees
    %  Insert points using linear interpolation.
    npts = 1 + ceil(maxdist/spacingInDegrees);
    
    [lat, lon, arclenInRadians] = doTrack2(deg2rad(lat1), deg2rad(lon1), ...
        deg2rad(lat2), deg2rad(lon2), npts);
    
    lat = rad2deg(lat);
    lon = rad2deg(lon);
    
    %  Use exact endpoint.
    lat(end) = lat2;
    lon(end) = lon2;
else
    lat = [lat1; lat2];
    lon = [lon1; lon2];
    arclenInRadians = greatcircleinv(deg2rad(lat1), deg2rad(lon1), ...
        deg2rad(lat2), deg2rad(lon2));
end

%--------------------------------------------------------------------------

function [phiTrack, lambdaTrack, arclenInRadians] ...
    = doTrack2(phi1, lambda1, phi2, lambda2, npts)
% Interpolate regularly spaced points along a great circle.

[fullArcLength, az] = greatcircleinv(phi1, lambda1, phi2, lambda2);
arclenInRadians = linspace(0, fullArcLength(1), npts(1))';

[phiTrack, lambdaTrack] = greatcirclefwd(...
    phi1, lambda1, az, arclenInRadians);

% lambdaTrack = wrapToPi(lambdaTrack);

q = (lambdaTrack < -pi) | (pi < lambdaTrack);
lambdaTrack(q) = mexable_wrapTo2Pi(lambdaTrack(q) + pi) - pi;
%--------------------------------------------------------------------------
function [ lambda ] =  mexable_wrapTo2Pi( lambda )
positiveInput = (lambda > 0);
lambda = mod(lambda, 2*pi);
lambda((lambda == 0) & positiveInput) = 2*pi;
%--------------------------------------------------------------------------

function [arclen, az] = greatcircleinv(phi1, lambda1, phi2, lambda2)
% Great circle distance and azimuth between points on a sphere, using the
% Haversine Formula for distance.  All angles are in radians.

cosphi1 = cos(phi1);
cosphi2 = cos(phi2);

h = sin((phi2-phi1)/2).^2 ...
    + cosphi1 .* cosphi2 .* sin((lambda2-lambda1)/2).^2;
arclen = double(NaN);
arclen = 2 * asin(sqrt(h));

if nargout > 1
    az = atan2(cosphi2 .* sin(lambda2-lambda1),...
        cosphi1 .* sin(phi2) - sin(phi1) .* cosphi2 .* cos(lambda2-lambda1));
end

%--------------------------------------------------------------------------

function [phi, lambda] = greatcirclefwd(phi0, lambda0, az, arclen)
% Points on a great circles given specified start point, azimuths and
% spherical distances.  All angles are in radians.

% Reference
% ---------
% J. P. Snyder, "Map Projections - A Working Manual,"  US Geological Survey
% Professional Paper 1395, US Government Printing Office, Washington, DC,
% 1987, pp. 29-32.

cosPhi0 = cos(phi0);
sinPhi0 = sin(phi0);
cosAz = cos(az);
cosDelta = cos(arclen);
sinDelta = sin(arclen);

phi = asin( sinPhi0.*cosDelta + cosPhi0.*sinDelta.*cosAz );

lambda = lambda0 + atan2( sinDelta.*sin(az),...
                      cosPhi0.*cosDelta - sinPhi0.*sin(arclen).*cosAz );

%--------------------------------------------------------------------------

function yi1 = mexable_latitudeToIntrinsicY(pR, lat)
	%latitudeToIntrinsicY Convert from latitude to intrinsic Y
	%
	%   yIntrinsic = latitudeToIntrinsicY(R, LAT) returns the
	%   intrinsic Y value of the line corresponding to the small
	%   circle at latitude LAT, based on the relationship
	%   defined by the referencing object R. The input may
	%   include values that fall completely outside the latitude
	%   limits of the raster (or image). In this case yIntrinsic
	%   is either extrapolated outside the intrinsic Y limits --
	%   for elements of LAT that fall within the interval
	%   [-90 90] degrees, or set to NaN -- for elements of LAT
	%   that do not correspond to valid latitudes. NaN-valued
	%   elements of LAT map to NaNs in yIntrinsic.
	
	% Elements of LAT are less than -90 degrees or
	% that exceed +90 degrees should map to NaN.
	lat(lat < -90 | 90 < lat) = NaN;
	
	% Shift and scale latitude
	yi1 = pR.YIntrinsicLimits(1) + (lat - pR.FirstCornerLatitude) ...
		.* pR.DeltaLatitudeDenominator ./ pR.DeltaLatitudeNumerator;
    
%--------------------------------------------------------------------------
function xi1 = mexable_longitudeToIntrinsicX(pR, lon)
	%longitudeToIntrinsicX Convert from longitude to intrinsic X
	%
	%   xIntrinsic = longitudeToIntrinsicX(R, LON) returns the
	%   intrinsic X value of the line corresponding to the
	%   meridian at longitude LON, based on the relationship
	%   defined by the referencing object R. The input may
	%   include values that fall completely outside the
	%   longitude limits of the raster (or image). In this case
	%   xIntrinsic is extrapolated outside the intrinsic X
	%   limits. NaN-valued elements of LON map to NaNs in
	%   xIntrinsic.
	
	lonlim = pR.pLongitudeLimits;
	w = lonlim(1);
	e = lonlim(2);
	
	% Adjust longitude wrapping to get within the limits,
	% whenever possible.
	if (e - w) <= pR.FullCycle
		rowsRunWestToEast = (pR.DeltaLongitudeNumerator > 0);
		if rowsRunWestToEast
			% Wrap to interval R.FirstCornerLongitude + [0 360]
            %lon = w + R.WrapToCycleFcn(lon - w); etc
			lon = w + mod(lon - w, pR.FullCycle);
		else
			% Wrap to interval R.FirstCornerLongitude + [-360 0]
			lon = e - mod(e - lon, pR.FullCycle);
		end
	else
		% Any longitude can be wrapped to fall within the
		% interval [w e], and in fact there's more than one
		% solution for certain longitudes. Resolve the ambiguity
		% by moving longitudes that are west of the western
		% limit the minimal number of cycles to the east that
		% puts them within the limits. Likewise, move longitudes
		% that exceed the eastern limit the minimum number of
		% cycles to the west.
		offToWest = lon < w;
		lon(offToWest) = ...
			w + mod(lon(offToWest) - w, pR.FullCycle);
		
		offToEast = lon > e;
		t = e - pR.FullCycle;
		lon(offToEast) ...
			= t + mod(lon(offToEast) - t, pR.FullCycle);
	end
	
	% Shift and scale longitude
	xi1 = pR.XIntrinsicLimits(1) + (lon - pR.FirstCornerLongitude) ...
		.* pR.DeltaLongitudeDenominator ./ pR.DeltaLongitudeNumerator;
%--------------------------------------------------------------------------

function v =  interpolate(Z, lat, lon, pR)
% Use the griddentInterpolant object F which is defined in the intrinsic
% coordinate system referred to by raster reference object R.

% Interpolate bilinearly in intrinsic coordinates.
yi = mexable_latitudeToIntrinsicY(pR, lat);
xi = mexable_longitudeToIntrinsicX(pR, lon);


% Snap in all points that fall within distance 0.5 of an edge, so that
% we get a non-NaN value for them from interp2.
xi(0.5 <= xi & xi < 1) = 1;
yi(0.5 <= yi & yi < 1) = 1;

sz = pR.RasterSize;
M = sz(1);
N = sz(2);

xi(N < xi & xi <= N + 0.5) = N;
yi(M < yi & yi <= M + 0.5) = M;
% testF = griddedInterpolant(Z);
% testF.ExtrapolationMethod = 'none';
% v = testF(yi, xi);
%linearly interpolates inside of elevation map Z
v = interp2(Z, xi, yi);

% testF = griddedInterpolant(Z);
% testF.ExtrapolationMethod = 'none';
% testv = testF(yi, xi);
% 
% if testv ~= v
%     fprintf("ow!");
% end

%--------------------------------------------------------------------------
function [vis, x, z, x2, z2] = losprofile(arclen, zin, oalt, talt, ...
    observerAltitudeIsAGL, targetAltitudeIsAGL, apparentradius)

arclen = arclen(:)';
zin = zin(:)';

if ~isinf(apparentradius)
    [x, z] = adjustterrain(arclen, zin, apparentradius);
else
    x = arclen;
    z = zin;
end

% Convert AGL observer altitude to MSL 
if observerAltitudeIsAGL
    %  Observer is at first location
    oalt =  z(1) + oalt;
end

% Shift terrain so observer is at altitude 0, and terrain altitudes are relative
% to the observer

z = z - oalt;  % Observer is at first location

% Compute the angles of sight from the observer to each point on the profile.
% measured positive up from the center of the sphere

ang = pi + atan2(z,x);
if x(1) == 0 && z(1) == 0
    ang(1) = pi/2;  % Look straight down at observer's location
end

% Find the cumulative maximum:  maxtohere(k) equals max(ang(1:k))
maxangtohere = cummax(ang);

% Adjust the angles for the altitude of the target height above ground level 
% or sea level and redo calculation of angles. This makes the obscuring factor
% the terrain only, and not any target height. To model stuff above the terrain 
% like a forest canopy, pass in a z vector that has the added heights.

if targetAltitudeIsAGL
    if ~isinf(apparentradius)
        [x2, z2] = adjustterrain(arclen, zin + talt, apparentradius);
        z2 = z2 - oalt;
    else
        z2 = z + talt;
        x2 = x;
    end
else
    if ~isinf(apparentradius)
        [x2, z2] = adjustterrain(arclen, talt + zeros(size(zin)), apparentradius);
        z2 = z2 - oalt;
    else
        z2 = (talt)*ones(size(zin)) - oalt;
        x2 = x;
    end
end

% Compute line of sight angles again.

ang2 = pi + atan2(z2,x2);
if x2(1) == 0 && z2(1) == 0
    ang2(1) = pi/2;  % Look straight down at observer's location
end

% Visible are points that rise above the maximum angle of LOS of intervening 
% terrain.

vis = (ang2 >= maxangtohere);

% Visibility of first point below terrain needs a special test, since
% it always passes the "angles of terrain up to here" test.

if (z2(1) < z(1)) && (z(1) < 0)
    vis(1) = false;
end

vis = vis(:);

%-----------------------------------------------------------------------

function [x, z] = adjustterrain(arclen, zin, apparentradius)

% Adjust the terrain slice for the curvature of the sphere. The radius
% may potentially be different from the actual body, for example to
% model refraction of radio waves.

r = apparentradius + zin;
phi0 = arclen/apparentradius;
if isscalar(phi0)
    phi = repelem(phi0, size(r,2));
else
    phi = phi0;
end
x = (r .* sin(phi));
z = (r .* cos(phi) - apparentradius);



