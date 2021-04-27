function [lat, lon, h] = my_aer2geodetic( ...
    az, elev, slantRange, lat0, lon0, h0, spheroid, angleUnit)
%AER2GEODETIC Local spherical AER to geodetic
%
%   [LAT, LON, H] = AER2GEODETIC(AZ, ELEV, SLANTRANGE, LAT0, LON0, H0, ...
%       SPHEROID) transforms point locations in 3-D from local spherical
%   coordinates (azimuth angle, elevation angle, slant range) to geodetic
%   coordinates (LAT, LON, H), given a local coordinate system defined by
%   the geodetic coordinates of its origin (LAT0, LON0, H0).  The geodetic
%   coordinates refer to the reference body specified by the spheroid
%   object, SPHEROID. The slant range and ellipsoidal height H0 must be
%   expressed in the same length unit as the spheroid.  Ellipsoidal height
%   H will be expressed in this unit, also.  The input azimuth and
%   elevation angles, and input and output latitude and longitude angles,
%   are in degrees by default.
%
%   [...] = AER2GEODETIC(..., angleUnit) uses angleUnit, which matches
%   either 'degrees' or 'radians', to specify the units of the azimuth,
%   elevation, latitude, and longitude angles.
%
%   Class support for inputs AZ, ELEV, SLANTRANGE, LAT0, LON0, H0:
%      float: double, single
%
%   See also AER2ECEF, ENU2GEODETIC, GEODETIC2AER, NED2GEODETIC

% Copyright 2012-2019 The MathWorks, Inc.

%[x, y, z] = aer2ecefFormula(az, elev, slantRange, lat0, lon0, h0, spheroid, inDegrees);
    %[xEast, yNorth, zUp] = aer2enuFormula(az, elev, slantRange, sinfun, cosfun);
        zUp = slantRange .* sind(elev);
        r   = slantRange .* cosd(elev);
        xEast  = r .* sind(az);
        yNorth = r .* cosd(az);
    % Offset vector from local system origin, rotated from ENU to ECEF.
    %[dx, dy, dz] = enu2ecefvFormula(xEast, yNorth, zUp, lat0, lon0, sinfun, cosfun);
        cosPhi = cosd(lat0);
        sinPhi = sind(lat0);
        cosLambda = cosd(lon0);
        sinLambda = sind(lon0);

        t = cosPhi .* zUp - sinPhi .* yNorth;
        
        dz = sinPhi .* zUp + cosPhi .* yNorth;
        dx = cosLambda .* t - sinLambda .* xEast;
        dy = sinLambda .* t + cosLambda .* xEast;
        
    % Origin of local system in geocentric coordinates.
    %[x0, y0, z0] = geodetic2ecefFormula(spheroid, lat0, lon0, h0, inDegrees);
            a = spheroid.MeanRadius;
			f = spheroid.Flattening;
			
			if f == 0
				r = h0 + a;
                rho = r .* cosd(lat0);
                z0 = r .* sind(lat0);
			else
				error("Non-zero flattening breaks hardcoded features");
			end
			x0 = rho .* cosd(lon0);
			y0 = rho .* sind(lon0);
    % Origin + offset from origin equals position in ECEF.
    x = x0 + dx;
    y = y0 + dy;
    z = z0 + dz;

%[lat, lon, h] = ecef2geodetic(spheroid, x, y, z);
    rho = hypot(x,y);
    a = spheroid.MeanRadius;
    f = spheroid.Flattening;
    if f == 0
        lat = atan2d(z,rho);
        h = hypot(z,rho) - a;
    else
        error("Non-zero flattening breaks hardcoded features");
    end
    lon = atan2d(y,x);
end
