function [vismap, R] = mexable_viewshed(Z, ~, lat1, lon1, oalt, talt, oaltopt, taltopt, actualradius, apparentradius, sample_dens, public_raster_struct)
%VIEWSHED Areas visible from point on terrain elevation grid

R = [];
oaltopt = validatestring(oaltopt, {'AGL','MSL'}, 'VIEWSHED', 'ALT1OPT', 9);
observerAltitudeIsAGL = strcmp(oaltopt,'AGL');

taltopt = validatestring(taltopt, {'AGL','MSL'}, 'VIEWSHED', 'ALT2OPT', 10);
targetAltitudeIsAGL = strcmp(taltopt, 'AGL');

[nr,nc] = size(Z);
vismap = NaN(nr,nc);

x2 = [ones(1,nr-2) nc+zeros(1,nr-2)    (1:nc)          (1:nc)    ];
y2 = [   (2:nr-1)     (2:nr-1)       ones(1,nc)    nr+zeros(1,nc)];

% lat2 = intrinsicYToLatitude(R, y2);
% lon2 = intrinsicXToLongitude(R, x2);
lat2 = mexable_intrinsicYToLatitude(public_raster_struct, y2);
lon2 = mexable_intrinsicXToLongitude(public_raster_struct, x2);


for k = 1:numel(lat2)
   [visprofile,~,~,lat,lon] = mexable_calculateLOS(Z,[],lat1,lon1,lat2(k),lon2(k),oalt,talt,observerAltitudeIsAGL,targetAltitudeIsAGL,actualradius,apparentradius,sample_dens, public_raster_struct);
     
   vismap = embed(lat,lon,visprofile,vismap,public_raster_struct);
end

% Calculate LOS directly to fill in any remaining unassigned (NaN-valued)
% elements of vismap.

[row, col] = find(isnan(vismap));
lat2 = mexable_intrinsicYToLatitude(public_raster_struct, col);
lon2 = mexable_intrinsicXToLongitude(public_raster_struct, row);
vis = false(size(row));

for k = 1:numel(row)
    visprofile = mexable_calculateLOS(Z,[],lat1,lon1,lat2(k),lon2(k),oalt,talt,...
        observerAltitudeIsAGL,targetAltitudeIsAGL,actualradius,apparentradius, sample_dens, public_raster_struct);
    vis(k) = visprofile(end);
end

indx = (col - 1)*size(vismap,1) + row;
vismap(indx) = vis;
%--------------------------------------------------------------------------

function Z = embed(lat, lon, value, Z, pR)
%EMBED  Encode data points into regular data grid
%
%   Streamlined version of the public IMBEDM function
%
%   Z = EMBED(LAT, LON, VALUE, Z, R) resets certain entries of a regular
%   data grid, Z.  R is a geographic raster reference object.  Its
%   RasterSize property must be consistent with size(Z). The entries to be
%   reset correspond to the locations defined by the latitude and longitude
%   position vectors LAT and LON. The entries are reset to the same number
%   if VALUE is a scalar, or to individually specified numbers if VALUE is
%   a vector the same size as LAT and LON. If any points lie outside the
%   input grid, a warning is issued.  All input angles are in degrees.

%  Eliminate NaNs from the input data
qNaN = isnan(lat) | isnan(lon);
lat(qNaN) = [];
lon(qNaN) = [];
value(qNaN) = [];

%  Convert the lat and lon data to cell positions
%    [r, c] = geographicToDiscrete(R, lat, lon);
%    qOutside = isnan(r);

%  As an optimization, avoid [r, c] = geographicToDiscrete(R, lat, lon);
%  because it takes time to validate its latitude-longitude inputs.

xi = mexable_longitudeToIntrinsicX(pR, lon);
yi = mexable_latitudeToIntrinsicY(pR, lat);

xIntrinsicLimits = pR.XIntrinsicLimits;
yIntrinsicLimits = pR.YIntrinsicLimits;

qOutside = (xi < xIntrinsicLimits(1)) | (xIntrinsicLimits(2) < xi) ...
         | (yi < yIntrinsicLimits(1)) | (yIntrinsicLimits(2) < yi);

c = min(round(xi), pR.RasterSize(2)); % <-- ***** Error fix that will be corrected in next MATLAB version *****
r = min(round(yi), pR.RasterSize(1)); % <-- ***** Error fix that will be corrected in next MATLAB version *****


% Remove any points that fall outside the grid
r(qOutside) = [];
c(qOutside) = [];
value(qOutside) = [];

%  Embed the points into the grid
indx = (c-1)*size(Z,1) + r;
Z(indx) = value;

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
%---------------------------------------------------  
function lon = mexable_intrinsicXToLongitude(pR, xi)
    d = pR.DeltaLongitudeDenominator;
    xIntrinsicLimits1 = pR.XIntrinsicLimits(1);

    lon = (pR.DeltaLongitudeNumerator .* (xi - xIntrinsicLimits1) ...
        + d .* pR.FirstCornerLongitude) ./ d;

    % Ensure perfect consistency with the first corner longitude.
    lon(xi == xIntrinsicLimits1) = pR.FirstCornerLongitude;

%---------------------------------------------------
function lat = mexable_intrinsicYToLatitude(pR, yi)
    d = pR.DeltaLatitudeDenominator;
    yIntrinsicLimits1 = pR.YIntrinsicLimits(1);

    lat = (pR.DeltaLatitudeNumerator .* (yi - yIntrinsicLimits1) ...
        + d .* pR.FirstCornerLatitude) ./ d;

    % Ensure perfect consistency with the first corner latitude.
    lat(yi == yIntrinsicLimits1) = pR.FirstCornerLatitude;
    
    lat(lat < -pR.NorthPoleLatitude | pR.NorthPoleLatitude < lat) = NaN;   