/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_los2.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "mexable_los2.h"
#include "mexable_calculateLOS.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Function Definitions */
/*
 * Z, R, lat1, lon1, lat2, lon2, oalt, talt, oaltopt, talopt, r_moon)
 * LOS2 Line of sight visibility between two points in terrain
 *
 *    LOS2 computes the mutual visibility between two points on a displayed
 *    digital elevation map.  LOS2 uses the current object if it is a regular
 *    data grid, or the first regular data grid found on the current axes.
 *    The grid's zdata is used for the profile.  The color data is used in
 *    the absence of data in z.  The two points are selected by clicking on
 *    the map. The result is displayed in a new figure.  Markers indicate
 *    visible and obscured points along the profile.  The profile is shown in
 *    a Cartesian coordinate system with the origin at the observer's
 *    location.  The displayed z coordinate accounts for the elevation of the
 *    terrain and the curvature of the body.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2) computes the mutual visibility
 *    between pairs of points on a digital elevation map.  The elevations are
 *    provided as a regular data grid Z containing elevations in units of
 *    meters.  The two points are provided as vectors of latitudes and
 *    longitudes in units of degrees.  The resulting logical variable VIS is
 *    equal to one when the two points are visible to each other, and zero
 *    when the line of sight is obscured by terrain.  If any of the  input
 *    arguments are empty, LOS2 attempts to gather the data from the current
 *    axes.  With one or more output arguments, no figures are created and
 *    only the data is returned.  R can be a geographic raster reference
 *    object, a referencing vector, or a referencing matrix.
 *
 *    If R is a geographic raster reference object, its RasterSize property
 *    must be consistent with size(Z).
 *
 *    If R is a referencing vector, it must be a 1-by-3 with elements:
 *
 *      [cells/degree northern_latitude_limit western_longitude_limit]
 *
 *    If R is a referencing matrix, it must be 3-by-2 and transform raster
 *    row and column indices to/from geographic coordinates according to:
 *
 *                      [lon lat] = [row col 1] * R.
 *
 *    If R is a referencing matrix, it must define a (non-rotational,
 *    non-skewed) relationship in which each column of the data grid falls
 *    along a meridian and each row falls along a parallel.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1) places the first
 *    point at the specified altitude in meters above the surface (on a
 *    tower, for instance).  This is equivalent to putting the point on a
 *    tower.  If omitted, point 1 is assumed to be on the surface.  ALT1 may
 *    be either a scalar or a vector with the same length as LAT1, LON1,
 *    LAT2, and LON2.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2) places both
 *    points at a specified altitudes in meters above the surface.  ALT2 may
 *    be either a scalar or a vector with the same length as LAT1, LON1,
 *    LAT2, and LON2.  If ALT2 is omitted, point 2 is assumed to be on the
 *    surface.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT)
 *    controls the interpretation of ALT1 as either a relative altitude
 *    (ALT1OPT equals 'AGL', the default) or an absolute altitude (ALT1OPT
 *    equals 'MSL').  If the altitude option is 'AGL', ALT1 is interpreted as
 *    the altitude of point 1 in meters above the terrain ("above ground
 *    level").  If ALT1OPT is 'MSL', ALT1 is interpreted as altitude above
 *    zero ("mean sea level").
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT, ALT2OPT)
 *    controls the interpretation ALT2.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,...
 *    ALT2OPT, ACTUALRADIUS) does the visibility calculation on a sphere with
 *    the specified radius.  If omitted, the radius of the earth in meters is
 *    assumed.  The altitudes, elevations and the radius should be in the
 *    same units.  This calling form is most useful for computations on
 *    bodies other than the earth.
 *
 *    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,...
 *    ALT2OPT, ACTUALRADIUS, EFFECTIVERADIUS) assumes a larger radius for
 *    propagation of the line of sight.  This can account for the curvature
 *    of the signal path due to refraction in the atmosphere.  For example,
 *    radio propagation in the atmosphere is commonly treated as straight
 *    line propagation on a sphere with 4/3rds the radius of the earth.  In
 *    that case the last two arguments would be R_e and 4/3*R_e, where R_e is
 *    the radius of the earth.  Use Inf as the effective radius for flat
 *    earth visibility calculations.  The altitudes, elevations and the radii
 *    should be in the same units.
 *
 *    [VIS, VISPROFILE, DIST, H, LATTRK, LONTRK] = LOS2(...), for scalar
 *    inputs (LAT1, LON1, etc.), returns vectors of points along the path
 *    between the two points.  VISPROFILE is a logical vector containing true
 *    (logical(1) where the intermediate points are visible and false
 *    (logical(0)) otherwise.  DIST is the distance along the path (in meters
 *    or the units of the radius).  H contains the terrain profile relative
 *    to the vertical datum along the path.  LATTRK and LONTRK are the
 *    latitudes and longitudes of the points along the path.  For vector
 *    inputs LOS2 returns VISPROFILE, DIST, H, LATTRK, and LONTRK as cell
 *    arrays, with one cell per element of LAT1, LON1, etc.
 *
 *    LOS2(...), with no output arguments, displays the visibility profile
 *    between the two points in a new figure.
 *
 *    Example
 *    -------
 *    Z = 500*peaks(100);
 *    latlim = [-0.1 0.0];
 *    lonlim = [ 0.0 0.1];
 *    R = georefcells(latlim,lonlim,size(Z));
 *    lat1 = -0.027;
 *    lon1 =  0.050;
 *    lat2 = -0.093;
 *    lon2 =  0.042;
 *
 *    los2(Z,R,lat1,lon1,lat2,lon2,100);
 *
 *    figure;
 *    axesm('globe','geoid',earthRadius('meters'))
 *    meshm(Z,R,size(Z),Z)
 *    axis tight
 *    camposm(-10,-10,1e6)
 *    camupm(0,0)
 *    demcmap('inc',Z,1000)
 *    shading interp
 *    camlight
 *
 *    [vis,visprofile,dist,h,lattrk,lontrk] = los2(Z,R,lat1,lon1,lat2,lon2,100);
 *    plot3m(lattrk([1;end]),lontrk([1; end]),h([1; end])+[100; 0],'r','linewidth',2)
 *    plotm(lattrk(~visprofile),lontrk(~visprofile),h(~visprofile),'r.','markersize',10)
 *    plotm(lattrk(visprofile),lontrk(visprofile),h(visprofile),'g.','markersize',10)
 *
 *    See also VIEWSHED
 * Arguments    : const emxArray_real_T *Z
 *                const emxArray_real_T *lat1
 *                const emxArray_real_T *lon1
 *                const emxArray_real_T *lat2
 *                const emxArray_real_T *lon2
 *                const emxArray_real_T *inp_talt
 *                double actualradius
 *                double sample_dens
 *                const struct2_T *public_raster_struct
 *                emxArray_boolean_T *vis
 * Return Type  : void
 */
void mexable_los2(const emxArray_real_T *Z, const emxArray_real_T *lat1, const
                  emxArray_real_T *lon1, const emxArray_real_T *lat2, const
                  emxArray_real_T *lon2, const emxArray_real_T *inp_talt, double
                  actualradius, double sample_dens, const struct2_T
                  *public_raster_struct, emxArray_boolean_T *vis)
{
  emxArray_boolean_T *visprofile_row;
  emxArray_real_T *talt;
  emxArray_real_T *unusedU8;
  emxArray_real_T *unusedU9;
  emxArray_real_T *unusedUa;
  emxArray_real_T *unusedUb;
  emxArray_real_T *unusedUc;
  emxArray_real_T *unusedUd;
  emxArray_real_T *unusedUe;
  emxArray_real_T *unusedUf;
  int jtilecol;
  int ntilecols;

  /*  Copyright 1996-2020 The MathWorks, Inc. */
  /*  Original version written by Walter Stumpf */
  emxInit_real_T(&talt, 2);
  if (inp_talt->size[1] == 1) {
    jtilecol = talt->size[0] * talt->size[1];
    talt->size[0] = 1;
    talt->size[1] = lat1->size[1];
    emxEnsureCapacity_real_T(talt, jtilecol);
    ntilecols = lat1->size[1];
    for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
      talt->data[jtilecol] = inp_talt->data[0];
    }
  } else {
    jtilecol = talt->size[0] * talt->size[1];
    talt->size[0] = 1;
    talt->size[1] = inp_talt->size[1];
    emxEnsureCapacity_real_T(talt, jtilecol);
    ntilecols = inp_talt->size[0] * inp_talt->size[1];
    for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
      talt->data[jtilecol] = inp_talt->data[jtilecol];
    }
  }

  /*  If R is already spatial referencing object, validate it. Otherwise */
  /*  convert the input referencing vector or matrix. And construct a */
  /*  non-extrapolating default-grid griddedInterpolant for Z. */
  /*  R = internal.map.convertToGeoRasterRef( ... */
  /*      R, size(Z), 'degrees', mfilename, 'R', 2); */
  /*  F = griddedInterpolant(Z); */
  /*  F.ExtrapolationMethod = 'none'; */
  /*  loop over pairs of observer and target locations */
  emxInit_real_T(&unusedU8, 1);
  emxInit_real_T(&unusedU9, 1);
  emxInit_real_T(&unusedUa, 1);
  emxInit_real_T(&unusedUb, 1);
  emxInit_real_T(&unusedUc, 2);
  emxInit_real_T(&unusedUd, 2);
  emxInit_real_T(&unusedUe, 2);
  emxInit_real_T(&unusedUf, 2);
  emxInit_boolean_T(&visprofile_row, 1);
  if (lat1->size[1] == 1) {
    /*  Single pair of points: */
    /*     Output 1 is a logical scalar */
    /*     Output 2 is a logical array */
    /*     Outputs 3-6 are numerical arrays */
    mexable_calculateLOS(Z, lat1->data[0], lon1->data[0], lat2->data[0],
                         lon2->data[0], talt->data[0], actualradius,
                         actualradius, sample_dens, public_raster_struct,
                         visprofile_row, unusedU8, unusedU9, unusedUa, unusedUb,
                         unusedUc, unusedUd, unusedUe, unusedUf);
    jtilecol = vis->size[0] * vis->size[1];
    vis->size[0] = 1;
    vis->size[1] = 1;
    emxEnsureCapacity_boolean_T(vis, jtilecol);
    vis->data[0] = visprofile_row->data[visprofile_row->size[0] - 1];
  } else {
    /*  Multiple pairs of points: */
    /*    Output 1 is a logical array */
    /*    Outputs 2-6 are cell arrays that contain */
    /*       logical or numerical arrays */
    jtilecol = vis->size[0] * vis->size[1];
    vis->size[0] = 1;
    vis->size[1] = lat1->size[1];
    emxEnsureCapacity_boolean_T(vis, jtilecol);

    /*      h      = cell(1, cell_N); */
    /*      dist   = cell(1, cell_N); */
    /*      lattrk = cell(1, cell_N); */
    /*      lontrk = cell(1, cell_N); */
    /*      F = griddedInterpolant(Z); */
    /*      F.ExtrapolationMethod = 'none'; */
    jtilecol = lat1->size[1];
    for (ntilecols = 0; ntilecols < jtilecol; ntilecols++) {
      /*          [A1, B1, C1, D1, E1, F1, G1, H1, I1] = mexable_calculateLOS(Z, R, lat1(i), lon1(i), lat2(i), lon2(i), oalt(i), talt(i), observerAltitudeIsAGL, targetAltitudeIsAGL, actualradius, apparentradius, sample_dens, public_raster_struct); */
      /*   */
      /*           */
      /*          [A2, B2, C2, D2, E2, F2, G2, H2, I2] = my_calculateLOS(F, R, lat1(i), lon1(i), lat2(i), lon2(i), oalt(i), talt(i), observerAltitudeIsAGL, targetAltitudeIsAGL, actualradius, apparentradius); */
      /*           */
      /*          if A1 ~= A2 */
      /*              error_i = i */
      /*              error("Failed test!") */
      /*          end */
      /*          [visprofile_row, dist{i}, h{i}, lattrk{i}, lontrk{i}, x1, z1, x2, z2] ... */
      mexable_calculateLOS(Z, lat1->data[ntilecols], lon1->data[ntilecols],
                           lat2->data[ntilecols], lon2->data[ntilecols],
                           talt->data[ntilecols], actualradius, actualradius,
                           sample_dens, public_raster_struct, visprofile_row,
                           unusedU8, unusedU9, unusedUa, unusedUb, unusedUc,
                           unusedUd, unusedUe, unusedUf);
      vis->data[ntilecols] = visprofile_row->data[visprofile_row->size[0] - 1];
    }
  }

  emxFree_real_T(&talt);
  emxFree_boolean_T(&visprofile_row);
  emxFree_real_T(&unusedUf);
  emxFree_real_T(&unusedUe);
  emxFree_real_T(&unusedUd);
  emxFree_real_T(&unusedUc);
  emxFree_real_T(&unusedUb);
  emxFree_real_T(&unusedUa);
  emxFree_real_T(&unusedU9);
  emxFree_real_T(&unusedU8);
}

/*
 * File trailer for mexable_los2.c
 *
 * [EOF]
 */
