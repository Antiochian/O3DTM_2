function [az, elev, slantRange] = my_geodetic2aer( ...
    lat, lon, h, lat0, lon0, h0, spheroid, angleUnit)
%HARDCODED TO WORK WITH DEGREES ONLY

%GEODETIC2AER Geodetic to local spherical AER
%
%   [AZ, ELEV, slantRange] = GEODETIC2AER(LAT, LON, H, LAT0, LON0, H0, ...
%       SPHEROID) transforms point locations from geodetic coordinates
%   (LAT, LON, H) to local spherical coordinates (azimuth angle, elevation
%   angle, slant range), given a local coordinate system defined by the
%   geodetic coordinates of its origin (LAT0, LON0, H0).  The geodetic
%   coordinates refer to the reference body specified by the spheroid
%   object, SPHEROID.  Ellipsoidal heights H and H0 must be expressed in
%   the same length unit as the spheroid.  The slant range will be
%   expressed in this unit, also.  The input latitude and longitude angles,
%   and output azimuth and elevation angles, are in degrees by default.
%
%   [...] = GEODETIC2AER(..., angleUnit) uses angleUnit, which matches
%   either 'degrees' or 'radians', to specify the units of the latitude,
%   longitude, azimuth, and elevation angles.
%
%   Class support for inputs LAT, LON, H, LAT0, LON0, H0:
%      float: double, single
%
%   See also AER2GEODETIC, ECEF2AER, GEODETIC2ENU, GEODETIC2NED 

% Copyright 2012-2019 The MathWorks, Inc.

%Here we assume inDegrees is always true and hardcode a bunch of functions
%to avoid having to invoke a ReferenceSphere object -Henry

%CONVERT TO ENU CORDS (geodetic2enuFormula)
% Cartesian offset vector from local origin to (LAT, LON, H).
phi1 = lat0;
phi2 = lat;
lambda1 = lon0;
lambda2 = lon;
h1 = h0;
h2 = h;
a = spheroid.Radius;
f = spheroid.Flattening;
s1 = sind(phi1);
c1 = cosd(phi1);

s2 = sind(phi2);
c2 = cosd(phi2);

p1 = c1 .* cosd(lambda1);
p2 = c2 .* cosd(lambda2);

q1 = c1 .* sind(lambda1);
q2 = c2 .* sind(lambda2);
if f == 0
        % Spherical case
        dx = a * (p2 - p1) + (h2 .* p2 - h1 .* p1);
        dy = a * (q2 - q1) + (h2 .* q2 - h1 .* q1);
        dz = a * (s2 - s1) + (h2 .* s2 - h1 .* s1);
else
    error("Non-spherical object breaks hardcoded features");
end
%ECEF TO ENU FORMULAT (ecef2enucFormula)
% Offset vector from local system origin, rotated from ECEF to ENU.
cosPhi = cosd(lat0);
sinPhi = sind(lat0);
cosLambda = cosd(lon0);
sinLambda = sind(lon0);

t     =  cosLambda .* dx + sinLambda .* dy;
xEast = -sinLambda .* dx + cosLambda .* dy;

zUp    =  cosPhi .* t + sinPhi .* dz;
yNorth = -sinPhi .* t + cosPhi .* dz;

%GET VECTOR (enu2aerFormula)
deg360 = 2*atan2d(0,-1);
r = hypot(xEast,yNorth);
slantRange = hypot(r,zUp);
elev = atan2d(zUp,r);
az = mod(atan2d(xEast,yNorth),deg360);

end
