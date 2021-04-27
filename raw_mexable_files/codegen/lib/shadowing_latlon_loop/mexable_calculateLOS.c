/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_calculateLOS.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "mexable_calculateLOS.h"
#include "interp2.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static void adjustterrain(const emxArray_real_T *arclen, const emxArray_real_T
  *zin, double apparentradius, emxArray_real_T *x, emxArray_real_T *z);

/* Function Definitions */
/*
 * Adjust the terrain slice for the curvature of the sphere. The radius
 *  may potentially be different from the actual body, for example to
 *  model refraction of radio waves.
 * Arguments    : const emxArray_real_T *arclen
 *                const emxArray_real_T *zin
 *                double apparentradius
 *                emxArray_real_T *x
 *                emxArray_real_T *z
 * Return Type  : void
 */
static void adjustterrain(const emxArray_real_T *arclen, const emxArray_real_T
  *zin, double apparentradius, emxArray_real_T *x, emxArray_real_T *z)
{
  emxArray_real_T *phi;
  emxArray_real_T *phi0;
  int i;
  int idx;
  int j;

  /* ----------------------------------------------------------------------- */
  i = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = zin->size[1];
  emxEnsureCapacity_real_T(z, i);
  idx = zin->size[0] * zin->size[1];
  for (i = 0; i < idx; i++) {
    z->data[i] = apparentradius + zin->data[i];
  }

  emxInit_real_T(&phi0, 2);
  i = phi0->size[0] * phi0->size[1];
  phi0->size[0] = 1;
  phi0->size[1] = arclen->size[1];
  emxEnsureCapacity_real_T(phi0, i);
  idx = arclen->size[0] * arclen->size[1];
  for (i = 0; i < idx; i++) {
    phi0->data[i] = arclen->data[i] / apparentradius;
  }

  emxInit_real_T(&phi, 2);
  if (phi0->size[1] == 1) {
    i = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = z->size[1];
    emxEnsureCapacity_real_T(phi, i);
    idx = -1;
    i = z->size[1];
    for (j = 0; j < i; j++) {
      idx++;
      phi->data[idx] = phi0->data[0];
    }
  } else {
    i = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = phi0->size[1];
    emxEnsureCapacity_real_T(phi, i);
    idx = phi0->size[0] * phi0->size[1];
    for (i = 0; i < idx; i++) {
      phi->data[i] = phi0->data[i];
    }
  }

  emxFree_real_T(&phi0);
  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = phi->size[1];
  emxEnsureCapacity_real_T(x, i);
  idx = phi->size[0] * phi->size[1];
  for (i = 0; i < idx; i++) {
    x->data[i] = phi->data[i];
  }

  idx = phi->size[1];
  for (j = 0; j < idx; j++) {
    x->data[j] = sin(x->data[j]);
  }

  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = z->size[1];
  emxEnsureCapacity_real_T(x, i);
  idx = z->size[0] * z->size[1] - 1;
  for (i = 0; i <= idx; i++) {
    x->data[i] *= z->data[i];
  }

  idx = phi->size[1];
  for (j = 0; j < idx; j++) {
    phi->data[j] = cos(phi->data[j]);
  }

  i = z->size[0] * z->size[1];
  idx = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(z, idx);
  idx = i - 1;
  for (i = 0; i <= idx; i++) {
    z->data[i] = z->data[i] * phi->data[i] - apparentradius;
  }

  emxFree_real_T(&phi);
}

/*
 * Use the griddentInterpolant object F which is defined in the intrinsic
 *  coordinate system referred to by raster reference object R.
 * Arguments    : const emxArray_real_T *Z
 *                const emxArray_real_T *lat
 *                const emxArray_real_T *lon
 *                const double pR_RasterSize[2]
 *                double pR_FullCycle
 *                const double pR_XIntrinsicLimits[2]
 *                const double pR_YIntrinsicLimits[2]
 *                const double pR_pLongitudeLimits[2]
 *                double pR_FirstCornerLatitude
 *                double pR_FirstCornerLongitude
 *                double pR_DeltaLatitudeNumerator
 *                double pR_DeltaLatitudeDenominator
 *                double pR_DeltaLongitudeNumerator
 *                double pR_DeltaLongitudeDenominator
 *                emxArray_real_T *v
 * Return Type  : void
 */
void interpolate(const emxArray_real_T *Z, const emxArray_real_T *lat, const
                 emxArray_real_T *lon, const double pR_RasterSize[2], double
                 pR_FullCycle, const double pR_XIntrinsicLimits[2], const double
                 pR_YIntrinsicLimits[2], const double pR_pLongitudeLimits[2],
                 double pR_FirstCornerLatitude, double pR_FirstCornerLongitude,
                 double pR_DeltaLatitudeNumerator, double
                 pR_DeltaLatitudeDenominator, double pR_DeltaLongitudeNumerator,
                 double pR_DeltaLongitudeDenominator, emxArray_real_T *v)
{
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_real_T *b_lon;
  emxArray_real_T *xi;
  emxArray_real_T *yi;
  int i;
  int loop_ub;
  emxInit_real_T(&yi, 1);

  /* -------------------------------------------------------------------------- */
  /*  Interpolate bilinearly in intrinsic coordinates. */
  i = yi->size[0];
  yi->size[0] = lat->size[0];
  emxEnsureCapacity_real_T(yi, i);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = lat->data[i];
  }

  emxInit_boolean_T(&r, 1);

  /* latitudeToIntrinsicY Convert from latitude to intrinsic Y */
  /*  */
  /*    yIntrinsic = latitudeToIntrinsicY(R, LAT) returns the */
  /*    intrinsic Y value of the line corresponding to the small */
  /*    circle at latitude LAT, based on the relationship */
  /*    defined by the referencing object R. The input may */
  /*    include values that fall completely outside the latitude */
  /*    limits of the raster (or image). In this case yIntrinsic */
  /*    is either extrapolated outside the intrinsic Y limits -- */
  /*    for elements of LAT that fall within the interval */
  /*    [-90 90] degrees, or set to NaN -- for elements of LAT */
  /*    that do not correspond to valid latitudes. NaN-valued */
  /*    elements of LAT map to NaNs in yIntrinsic. */
  /* -------------------------------------------------------------------------- */
  /*  Elements of LAT are less than -90 degrees or */
  /*  that exceed +90 degrees should map to NaN. */
  i = r->size[0];
  r->size[0] = lat->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (lat->data[i] < -90.0);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] || (90.0 < lat->data[i])) {
      yi->data[i] = rtNaN;
    }
  }

  /*  Shift and scale latitude */
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = pR_YIntrinsicLimits[0] + (yi->data[i] - pR_FirstCornerLatitude)
      * pR_DeltaLatitudeDenominator / pR_DeltaLatitudeNumerator;
  }

  emxInit_real_T(&b_lon, 1);
  i = b_lon->size[0];
  b_lon->size[0] = lon->size[0];
  emxEnsureCapacity_real_T(b_lon, i);
  loop_ub = lon->size[0] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_lon->data[i] = lon->data[i];
  }

  emxInit_real_T(&xi, 1);
  mexable_longitudeToIntrinsicX(pR_FullCycle, pR_XIntrinsicLimits,
    pR_pLongitudeLimits, pR_FirstCornerLongitude, pR_DeltaLongitudeNumerator,
    pR_DeltaLongitudeDenominator, b_lon, xi);

  /*  Snap in all points that fall within distance 0.5 of an edge, so that */
  /*  we get a non-NaN value for them from interp2. */
  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = xi->size[0];
  emxFree_real_T(&b_lon);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= xi->data[i]);
  }

  emxInit_boolean_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] < 1.0);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      xi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] < 1.0);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      yi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (pR_RasterSize[1] < xi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] <= pR_RasterSize[1] + 0.5);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      xi->data[i] = pR_RasterSize[1];
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (pR_RasterSize[0] < yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] <= pR_RasterSize[0] + 0.5);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      yi->data[i] = pR_RasterSize[0];
    }
  }

  emxFree_boolean_T(&r);
  emxFree_boolean_T(&r1);

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  v = testF(yi, xi); */
  /* linearly interpolates inside of elevation map Z */
  interp2_local(Z, xi, yi, v);
  emxFree_real_T(&xi);
  emxFree_real_T(&yi);
}

/*
 * Arguments    : const emxArray_real_T *arclen
 *                const emxArray_real_T *zin
 *                double apparentradius
 *                emxArray_boolean_T *vis
 *                emxArray_real_T *x
 *                emxArray_real_T *z
 *                emxArray_real_T *x2
 *                emxArray_real_T *z2
 * Return Type  : void
 */
void losprofile(const emxArray_real_T *arclen, const emxArray_real_T *zin,
                double apparentradius, emxArray_boolean_T *vis, emxArray_real_T *
                x, emxArray_real_T *z, emxArray_real_T *x2, emxArray_real_T *z2)
{
  emxArray_boolean_T *b_vis;
  emxArray_real_T *ang;
  emxArray_real_T *ang2;
  emxArray_real_T *b_zin;
  double b_z;
  double oalt;
  int i;
  int k;
  int nx;
  boolean_T b;

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  testv = testF(yi, xi); */
  /*   */
  /*  if testv ~= v */
  /*      fprintf("ow!"); */
  /*  end */
  /* -------------------------------------------------------------------------- */
  b = rtIsInf(apparentradius);
  emxInit_real_T(&ang2, 2);
  emxInit_real_T(&b_zin, 2);
  if (!b) {
    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(ang2, i);
    nx = arclen->size[0];
    for (i = 0; i < nx; i++) {
      ang2->data[i] = arclen->data[i];
    }

    i = b_zin->size[0] * b_zin->size[1];
    b_zin->size[0] = 1;
    b_zin->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(b_zin, i);
    nx = zin->size[0];
    for (i = 0; i < nx; i++) {
      b_zin->data[i] = zin->data[i];
    }

    adjustterrain(ang2, b_zin, apparentradius, x, z);
  } else {
    i = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(x, i);
    nx = arclen->size[0];
    for (i = 0; i < nx; i++) {
      x->data[i] = arclen->data[i];
    }

    i = z->size[0] * z->size[1];
    z->size[0] = 1;
    z->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(z, i);
    nx = zin->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = zin->data[i];
    }
  }

  /*  Convert AGL observer altitude to MSL  */
  /*   Observer is at first location */
  oalt = z->data[0];

  /*  Shift terrain so observer is at altitude 0, and terrain altitudes are relative */
  /*  to the observer */
  b_z = z->data[0];
  nx = z->size[0] * z->size[1] - 1;
  i = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(z, i);
  for (i = 0; i <= nx; i++) {
    z->data[i] -= b_z;
  }

  emxInit_real_T(&ang, 2);

  /*  Observer is at first location */
  /*  Compute the angles of sight from the observer to each point on the profile. */
  /*  measured positive up from the center of the sphere */
  i = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  if (z->size[1] <= x->size[1]) {
    ang->size[1] = z->size[1];
  } else {
    ang->size[1] = x->size[1];
  }

  emxEnsureCapacity_real_T(ang, i);
  if (z->size[1] <= x->size[1]) {
    nx = z->size[1];
  } else {
    nx = x->size[1];
  }

  for (k = 0; k < nx; k++) {
    ang->data[k] = rt_atan2d_snf(z->data[k], x->data[k]);
  }

  i = ang->size[0] * ang->size[1];
  nx = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  emxEnsureCapacity_real_T(ang, nx);
  nx = i - 1;
  for (i = 0; i <= nx; i++) {
    ang->data[i] += 3.1415926535897931;
  }

  if ((x->data[0] == 0.0) && (z->data[0] == 0.0)) {
    ang->data[0] = 1.5707963267948966;

    /*  Look straight down at observer's location */
  }

  /*  Find the cumulative maximum:  maxtohere(k) equals max(ang(1:k)) */
  if ((ang->size[1] != 0) && (ang->size[1] != 1)) {
    i = ang->size[1];
    for (k = 0; k <= i - 2; k++) {
      ang->data[k + 1] = fmax(ang->data[k], ang->data[k + 1]);
    }
  }

  /*  Adjust the angles for the altitude of the target height above ground level  */
  /*  or sea level and redo calculation of angles. This makes the obscuring factor */
  /*  the terrain only, and not any target height. To model stuff above the terrain  */
  /*  like a forest canopy, pass in a z vector that has the added heights. */
  if (!b) {
    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(ang2, i);
    nx = arclen->size[0];
    for (i = 0; i < nx; i++) {
      ang2->data[i] = arclen->data[i];
    }

    i = b_zin->size[0] * b_zin->size[1];
    b_zin->size[0] = 1;
    b_zin->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(b_zin, i);
    nx = zin->size[0];
    for (i = 0; i < nx; i++) {
      b_zin->data[i] = zin->data[i];
    }

    adjustterrain(ang2, b_zin, apparentradius, x2, z2);
    i = z2->size[0] * z2->size[1];
    nx = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    emxEnsureCapacity_real_T(z2, nx);
    nx = i - 1;
    for (i = 0; i <= nx; i++) {
      z2->data[i] -= oalt;
    }
  } else {
    i = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    z2->size[1] = z->size[1];
    emxEnsureCapacity_real_T(z2, i);
    nx = z->size[0] * z->size[1];
    for (i = 0; i < nx; i++) {
      z2->data[i] = z->data[i];
    }

    i = x2->size[0] * x2->size[1];
    x2->size[0] = 1;
    x2->size[1] = x->size[1];
    emxEnsureCapacity_real_T(x2, i);
    nx = x->size[0] * x->size[1];
    for (i = 0; i < nx; i++) {
      x2->data[i] = x->data[i];
    }
  }

  emxFree_real_T(&b_zin);

  /*  Compute line of sight angles again. */
  i = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  if (z2->size[1] <= x2->size[1]) {
    ang2->size[1] = z2->size[1];
  } else {
    ang2->size[1] = x2->size[1];
  }

  emxEnsureCapacity_real_T(ang2, i);
  if (z2->size[1] <= x2->size[1]) {
    nx = z2->size[1];
  } else {
    nx = x2->size[1];
  }

  for (k = 0; k < nx; k++) {
    ang2->data[k] = rt_atan2d_snf(z2->data[k], x2->data[k]);
  }

  i = ang2->size[0] * ang2->size[1];
  nx = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  emxEnsureCapacity_real_T(ang2, nx);
  nx = i - 1;
  for (i = 0; i <= nx; i++) {
    ang2->data[i] += 3.1415926535897931;
  }

  if ((x2->data[0] == 0.0) && (z2->data[0] == 0.0)) {
    ang2->data[0] = 1.5707963267948966;

    /*  Look straight down at observer's location */
  }

  emxInit_boolean_T(&b_vis, 2);

  /*  Visible are points that rise above the maximum angle of LOS of intervening  */
  /*  terrain. */
  i = b_vis->size[0] * b_vis->size[1];
  b_vis->size[0] = 1;
  b_vis->size[1] = ang2->size[1];
  emxEnsureCapacity_boolean_T(b_vis, i);
  nx = ang2->size[0] * ang2->size[1];
  for (i = 0; i < nx; i++) {
    b_vis->data[i] = (ang2->data[i] >= ang->data[i]);
  }

  emxFree_real_T(&ang2);
  emxFree_real_T(&ang);

  /*  Visibility of first point below terrain needs a special test, since */
  /*  it always passes the "angles of terrain up to here" test. */
  if ((z2->data[0] < z->data[0]) && (z->data[0] < 0.0)) {
    b_vis->data[0] = false;
  }

  i = vis->size[0];
  vis->size[0] = b_vis->size[1];
  emxEnsureCapacity_boolean_T(vis, i);
  nx = b_vis->size[1];
  for (i = 0; i < nx; i++) {
    vis->data[i] = b_vis->data[i];
  }

  emxFree_boolean_T(&b_vis);
}

/*
 * Perform the line-of-sight computations needed by LOS2 and VIEWSHED.
 * Arguments    : const emxArray_real_T *Z
 *                double lat1
 *                double lon1
 *                double lat2
 *                double lon2
 *                double talt
 *                double actualradius
 *                double apparentradius
 *                double sample_dens
 *                const struct2_T *public_raster_struct
 *                emxArray_boolean_T *vis0
 *                emxArray_real_T *dist
 *                emxArray_real_T *h
 *                emxArray_real_T *lattrk
 *                emxArray_real_T *lontrk
 *                emxArray_real_T *x1
 *                emxArray_real_T *z1
 *                emxArray_real_T *x2
 *                emxArray_real_T *z2
 * Return Type  : void
 */
void mexable_calculateLOS(const emxArray_real_T *Z, double lat1, double lon1,
  double lat2, double lon2, double talt, double actualradius, double
  apparentradius, double sample_dens, const struct2_T *public_raster_struct,
  emxArray_boolean_T *vis0, emxArray_real_T *dist, emxArray_real_T *h,
  emxArray_real_T *lattrk, emxArray_real_T *lontrk, emxArray_real_T *x1,
  emxArray_real_T *z1, emxArray_real_T *x2, emxArray_real_T *z2)
{
  emxArray_boolean_T *vis;
  emxArray_real_T *ang;
  emxArray_real_T *ang2;
  emxArray_real_T *b_dist;
  double b_z1;
  double oalt;
  int i;
  int k;
  int nx;
  boolean_T b;

  /*  Copyright 2014-2015 The MathWorks, Inc. */
  /*  Sample at slightly less than the elevation grid spacing. */
  /*  Intermediate points along the great circle arc between start and end. */
  sampleGreatCircle(lat1, lon1, lat2, lon2, 0.9 / sample_dens, lattrk, lontrk,
                    dist);
  nx = dist->size[0];
  for (i = 0; i < nx; i++) {
    dist->data[i] *= actualradius;
  }

  /*  Elevation profile between the start and end points. */
  interpolate(Z, lattrk, lontrk, public_raster_struct->RasterSize,
              public_raster_struct->FullCycle,
              public_raster_struct->XIntrinsicLimits,
              public_raster_struct->YIntrinsicLimits,
              public_raster_struct->pLongitudeLimits,
              public_raster_struct->FirstCornerLatitude,
              public_raster_struct->FirstCornerLongitude,
              public_raster_struct->DeltaLatitudeNumerator,
              public_raster_struct->DeltaLatitudeDenominator,
              public_raster_struct->DeltaLongitudeNumerator,
              public_raster_struct->DeltaLongitudeDenominator, h);

  /*  Visibility of points along the profile between the start and end points. */
  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  testv = testF(yi, xi); */
  /*   */
  /*  if testv ~= v */
  /*      fprintf("ow!"); */
  /*  end */
  /* -------------------------------------------------------------------------- */
  b = rtIsInf(apparentradius);
  emxInit_real_T(&ang2, 2);
  emxInit_real_T(&b_dist, 2);
  if (!b) {
    i = b_dist->size[0] * b_dist->size[1];
    b_dist->size[0] = 1;
    b_dist->size[1] = dist->size[0];
    emxEnsureCapacity_real_T(b_dist, i);
    nx = dist->size[0];
    for (i = 0; i < nx; i++) {
      b_dist->data[i] = dist->data[i];
    }

    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = h->size[0];
    emxEnsureCapacity_real_T(ang2, i);
    nx = h->size[0];
    for (i = 0; i < nx; i++) {
      ang2->data[i] = h->data[i];
    }

    adjustterrain(b_dist, ang2, apparentradius, x1, z1);
  } else {
    i = x1->size[0] * x1->size[1];
    x1->size[0] = 1;
    x1->size[1] = dist->size[0];
    emxEnsureCapacity_real_T(x1, i);
    nx = dist->size[0];
    for (i = 0; i < nx; i++) {
      x1->data[i] = dist->data[i];
    }

    i = z1->size[0] * z1->size[1];
    z1->size[0] = 1;
    z1->size[1] = h->size[0];
    emxEnsureCapacity_real_T(z1, i);
    nx = h->size[0];
    for (i = 0; i < nx; i++) {
      z1->data[i] = h->data[i];
    }
  }

  /*  Convert AGL observer altitude to MSL  */
  /*   Observer is at first location */
  oalt = z1->data[0];

  /*  Shift terrain so observer is at altitude 0, and terrain altitudes are relative */
  /*  to the observer */
  b_z1 = z1->data[0];
  nx = z1->size[0] * z1->size[1] - 1;
  i = z1->size[0] * z1->size[1];
  z1->size[0] = 1;
  emxEnsureCapacity_real_T(z1, i);
  for (i = 0; i <= nx; i++) {
    z1->data[i] -= b_z1;
  }

  emxInit_real_T(&ang, 2);

  /*  Observer is at first location */
  /*  Compute the angles of sight from the observer to each point on the profile. */
  /*  measured positive up from the center of the sphere */
  i = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  if (z1->size[1] <= x1->size[1]) {
    ang->size[1] = z1->size[1];
  } else {
    ang->size[1] = x1->size[1];
  }

  emxEnsureCapacity_real_T(ang, i);
  if (z1->size[1] <= x1->size[1]) {
    nx = z1->size[1];
  } else {
    nx = x1->size[1];
  }

  for (k = 0; k < nx; k++) {
    ang->data[k] = rt_atan2d_snf(z1->data[k], x1->data[k]);
  }

  i = ang->size[0] * ang->size[1];
  nx = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  emxEnsureCapacity_real_T(ang, nx);
  nx = i - 1;
  for (i = 0; i <= nx; i++) {
    ang->data[i] += 3.1415926535897931;
  }

  if ((x1->data[0] == 0.0) && (z1->data[0] == 0.0)) {
    ang->data[0] = 1.5707963267948966;

    /*  Look straight down at observer's location */
  }

  /*  Find the cumulative maximum:  maxtohere(k) equals max(ang(1:k)) */
  if ((ang->size[1] != 0) && (ang->size[1] != 1)) {
    i = ang->size[1];
    for (k = 0; k <= i - 2; k++) {
      ang->data[k + 1] = fmax(ang->data[k], ang->data[k + 1]);
    }
  }

  /*  Adjust the angles for the altitude of the target height above ground level  */
  /*  or sea level and redo calculation of angles. This makes the obscuring factor */
  /*  the terrain only, and not any target height. To model stuff above the terrain  */
  /*  like a forest canopy, pass in a z vector that has the added heights. */
  if (!b) {
    i = b_dist->size[0] * b_dist->size[1];
    b_dist->size[0] = 1;
    b_dist->size[1] = dist->size[0];
    emxEnsureCapacity_real_T(b_dist, i);
    nx = dist->size[0];
    for (i = 0; i < nx; i++) {
      b_dist->data[i] = dist->data[i];
    }

    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = h->size[0];
    emxEnsureCapacity_real_T(ang2, i);
    nx = h->size[0];
    for (i = 0; i < nx; i++) {
      ang2->data[i] = talt;
    }

    adjustterrain(b_dist, ang2, apparentradius, x2, z2);
    i = z2->size[0] * z2->size[1];
    nx = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    emxEnsureCapacity_real_T(z2, nx);
    nx = i - 1;
    for (i = 0; i <= nx; i++) {
      z2->data[i] -= oalt;
    }
  } else {
    i = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    z2->size[1] = h->size[0];
    emxEnsureCapacity_real_T(z2, i);
    nx = h->size[0];
    for (i = 0; i < nx; i++) {
      z2->data[i] = talt - oalt;
    }

    i = x2->size[0] * x2->size[1];
    x2->size[0] = 1;
    x2->size[1] = x1->size[1];
    emxEnsureCapacity_real_T(x2, i);
    nx = x1->size[0] * x1->size[1];
    for (i = 0; i < nx; i++) {
      x2->data[i] = x1->data[i];
    }
  }

  emxFree_real_T(&b_dist);

  /*  Compute line of sight angles again. */
  i = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  if (z2->size[1] <= x2->size[1]) {
    ang2->size[1] = z2->size[1];
  } else {
    ang2->size[1] = x2->size[1];
  }

  emxEnsureCapacity_real_T(ang2, i);
  if (z2->size[1] <= x2->size[1]) {
    nx = z2->size[1];
  } else {
    nx = x2->size[1];
  }

  for (k = 0; k < nx; k++) {
    ang2->data[k] = rt_atan2d_snf(z2->data[k], x2->data[k]);
  }

  i = ang2->size[0] * ang2->size[1];
  nx = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  emxEnsureCapacity_real_T(ang2, nx);
  nx = i - 1;
  for (i = 0; i <= nx; i++) {
    ang2->data[i] += 3.1415926535897931;
  }

  if ((x2->data[0] == 0.0) && (z2->data[0] == 0.0)) {
    ang2->data[0] = 1.5707963267948966;

    /*  Look straight down at observer's location */
  }

  emxInit_boolean_T(&vis, 2);

  /*  Visible are points that rise above the maximum angle of LOS of intervening  */
  /*  terrain. */
  i = vis->size[0] * vis->size[1];
  vis->size[0] = 1;
  vis->size[1] = ang2->size[1];
  emxEnsureCapacity_boolean_T(vis, i);
  nx = ang2->size[0] * ang2->size[1];
  for (i = 0; i < nx; i++) {
    vis->data[i] = (ang2->data[i] >= ang->data[i]);
  }

  emxFree_real_T(&ang2);
  emxFree_real_T(&ang);

  /*  Visibility of first point below terrain needs a special test, since */
  /*  it always passes the "angles of terrain up to here" test. */
  if ((z2->data[0] < z1->data[0]) && (z1->data[0] < 0.0)) {
    vis->data[0] = false;
  }

  i = vis0->size[0];
  vis0->size[0] = vis->size[1];
  emxEnsureCapacity_boolean_T(vis0, i);
  nx = vis->size[1];
  for (i = 0; i < nx; i++) {
    vis0->data[i] = vis->data[i];
  }

  emxFree_boolean_T(&vis);
}

/*
 * longitudeToIntrinsicX Convert from longitude to intrinsic X
 *
 *    xIntrinsic = longitudeToIntrinsicX(R, LON) returns the
 *    intrinsic X value of the line corresponding to the
 *    meridian at longitude LON, based on the relationship
 *    defined by the referencing object R. The input may
 *    include values that fall completely outside the
 *    longitude limits of the raster (or image). In this case
 *    xIntrinsic is extrapolated outside the intrinsic X
 *    limits. NaN-valued elements of LON map to NaNs in
 *    xIntrinsic.
 * Arguments    : double pR_FullCycle
 *                const double pR_XIntrinsicLimits[2]
 *                const double pR_pLongitudeLimits[2]
 *                double pR_FirstCornerLongitude
 *                double pR_DeltaLongitudeNumerator
 *                double pR_DeltaLongitudeDenominator
 *                emxArray_real_T *lon
 *                emxArray_real_T *xi1
 * Return Type  : void
 */
void mexable_longitudeToIntrinsicX(double pR_FullCycle, const double
  pR_XIntrinsicLimits[2], const double pR_pLongitudeLimits[2], double
  pR_FirstCornerLongitude, double pR_DeltaLongitudeNumerator, double
  pR_DeltaLongitudeDenominator, emxArray_real_T *lon, emxArray_real_T *xi1)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *r1;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  double e;
  double w;
  int end;
  int i;
  int nx;

  /* -------------------------------------------------------------------------- */
  w = pR_pLongitudeLimits[0];
  e = pR_pLongitudeLimits[1];

  /*  Adjust longitude wrapping to get within the limits, */
  /*  whenever possible. */
  emxInit_real_T(&x, 1);
  if (pR_pLongitudeLimits[1] - pR_pLongitudeLimits[0] <= pR_FullCycle) {
    if (pR_DeltaLongitudeNumerator > 0.0) {
      /*  Wrap to interval R.FirstCornerLongitude + [0 360] */
      /* lon = w + R.WrapToCycleFcn(lon - w); etc */
      nx = lon->size[0];
      for (i = 0; i < nx; i++) {
        lon->data[i] -= pR_pLongitudeLimits[0];
      }

      i = x->size[0];
      x->size[0] = lon->size[0];
      emxEnsureCapacity_real_T(x, i);
      nx = lon->size[0];
      for (end = 0; end < nx; end++) {
        x->data[end] = b_mod(lon->data[end], pR_FullCycle);
      }

      i = lon->size[0];
      lon->size[0] = x->size[0];
      emxEnsureCapacity_real_T(lon, i);
      nx = x->size[0];
      for (i = 0; i < nx; i++) {
        lon->data[i] = pR_pLongitudeLimits[0] + x->data[i];
      }
    } else {
      /*  Wrap to interval R.FirstCornerLongitude + [-360 0] */
      nx = lon->size[0];
      for (i = 0; i < nx; i++) {
        lon->data[i] = pR_pLongitudeLimits[1] - lon->data[i];
      }

      i = x->size[0];
      x->size[0] = lon->size[0];
      emxEnsureCapacity_real_T(x, i);
      nx = lon->size[0];
      for (end = 0; end < nx; end++) {
        x->data[end] = b_mod(lon->data[end], pR_FullCycle);
      }

      i = lon->size[0];
      lon->size[0] = x->size[0];
      emxEnsureCapacity_real_T(lon, i);
      nx = x->size[0];
      for (i = 0; i < nx; i++) {
        lon->data[i] = pR_pLongitudeLimits[1] - x->data[i];
      }
    }
  } else {
    /*  Any longitude can be wrapped to fall within the */
    /*  interval [w e], and in fact there's more than one */
    /*  solution for certain longitudes. Resolve the ambiguity */
    /*  by moving longitudes that are west of the western */
    /*  limit the minimal number of cycles to the east that */
    /*  puts them within the limits. Likewise, move longitudes */
    /*  that exceed the eastern limit the minimum number of */
    /*  cycles to the west. */
    end = lon->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] < w) {
        nx++;
      }
    }

    emxInit_int32_T(&r, 1);
    i = r->size[0];
    r->size[0] = nx;
    emxEnsureCapacity_int32_T(r, i);
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] < w) {
        r->data[nx] = i + 1;
        nx++;
      }
    }

    i = x->size[0];
    x->size[0] = r->size[0];
    emxEnsureCapacity_real_T(x, i);
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      x->data[i] = lon->data[r->data[i] - 1] - pR_pLongitudeLimits[0];
    }

    emxFree_int32_T(&r);
    emxInit_real_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = x->size[0];
    emxEnsureCapacity_real_T(r1, i);
    nx = x->size[0];
    for (end = 0; end < nx; end++) {
      r1->data[end] = b_mod(x->data[end], pR_FullCycle);
    }

    end = lon->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] < w) {
        lon->data[i] = w + r1->data[nx];
        nx++;
      }
    }

    emxFree_real_T(&r1);
    w = pR_pLongitudeLimits[1] - pR_FullCycle;
    end = lon->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] > e) {
        nx++;
      }
    }

    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i);
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] > e) {
        r2->data[nx] = i + 1;
        nx++;
      }
    }

    i = x->size[0];
    x->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(x, i);
    nx = r2->size[0];
    for (i = 0; i < nx; i++) {
      x->data[i] = lon->data[r2->data[i] - 1] - w;
    }

    emxFree_int32_T(&r2);
    emxInit_real_T(&r3, 1);
    i = r3->size[0];
    r3->size[0] = x->size[0];
    emxEnsureCapacity_real_T(r3, i);
    nx = x->size[0];
    for (end = 0; end < nx; end++) {
      r3->data[end] = b_mod(x->data[end], pR_FullCycle);
    }

    end = lon->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] > e) {
        lon->data[i] = w + r3->data[nx];
        nx++;
      }
    }

    emxFree_real_T(&r3);
  }

  emxFree_real_T(&x);

  /*  Shift and scale longitude */
  i = xi1->size[0];
  xi1->size[0] = lon->size[0];
  emxEnsureCapacity_real_T(xi1, i);
  nx = lon->size[0];
  for (i = 0; i < nx; i++) {
    xi1->data[i] = pR_XIntrinsicLimits[0] + (lon->data[i] -
      pR_FirstCornerLongitude) * pR_DeltaLongitudeDenominator /
      pR_DeltaLongitudeNumerator;
  }
}

/*
 * Compute sort of maximum angular distance between the end points.
 * Arguments    : double lat1
 *                double lon1
 *                double lat2
 *                double lon2
 *                double spacingInDegrees
 *                emxArray_real_T *lat
 *                emxArray_real_T *lon
 *                emxArray_real_T *arclenInRadians
 * Return Type  : void
 */
void sampleGreatCircle(double lat1, double lon1, double lat2, double lon2,
  double spacingInDegrees, emxArray_real_T *lat, emxArray_real_T *lon,
  emxArray_real_T *arclenInRadians)
{
  emxArray_boolean_T *positiveInput;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r3;
  emxArray_int32_T *r2;
  emxArray_real_T *b_y;
  emxArray_real_T *cosDelta;
  emxArray_real_T *sinDelta;
  emxArray_real_T *y;
  double a;
  double a_tmp;
  double cosphi1_tmp;
  double cosphi2;
  double lambda1;
  double maxdist;
  double phi1;
  double phi2;
  double x;
  int i;
  int k;
  int nx;

  /* -------------------------------------------------------------------------- */
  maxdist = fmax(fabs(lat2 - lat1), fabs(lon2 - lon1));
  if (maxdist > spacingInDegrees) {
    emxInit_real_T(&y, 2);

    /*   Insert points using linear interpolation. */
    x = ceil(maxdist / spacingInDegrees);
    phi1 = 0.017453292519943295 * lat1;
    lambda1 = 0.017453292519943295 * lon1;
    phi2 = 0.017453292519943295 * lat2;

    /*  Interpolate regularly spaced points along a great circle. */
    /* -------------------------------------------------------------------------- */
    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    /* -------------------------------------------------------------------------- */
    cosphi1_tmp = cos(phi1);
    cosphi2 = cos(phi2);
    maxdist = sin((phi2 - phi1) / 2.0);
    a_tmp = 0.017453292519943295 * lon2 - lambda1;
    a = sin(a_tmp / 2.0);
    maxdist = 2.0 * asin(sqrt(maxdist * maxdist + cosphi1_tmp * cosphi2 * (a * a)));
    phi1 = sin(phi1);
    a = rt_atan2d_snf(cosphi2 * sin(a_tmp), cosphi1_tmp * sin(phi2) - phi1 *
                      cosphi2 * cos(a_tmp));
    if (!(x + 1.0 >= 0.0)) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int)(x + 1.0);
      emxEnsureCapacity_real_T(y, i);
      if ((int)(x + 1.0) >= 1) {
        nx = (int)(x + 1.0) - 1;
        y->data[(int)(x + 1.0) - 1] = maxdist;
        if (y->size[1] >= 2) {
          y->data[0] = 0.0;
          if (y->size[1] >= 3) {
            if ((0.0 == -maxdist) && ((int)(x + 1.0) > 2)) {
              for (k = 2; k <= nx; k++) {
                y->data[k - 1] = maxdist * ((double)(((k << 1) - (int)(x + 1.0))
                  - 1) / ((double)(int)(x + 1.0) - 1.0));
              }

              if (((int)(x + 1.0) & 1) == 1) {
                y->data[(int)(x + 1.0) >> 1] = 0.0;
              }
            } else if ((maxdist < 0.0) && (fabs(maxdist) >
                        8.9884656743115785E+307)) {
              maxdist /= (double)y->size[1] - 1.0;
              i = y->size[1];
              for (k = 0; k <= i - 3; k++) {
                y->data[k + 1] = maxdist * ((double)k + 1.0);
              }
            } else {
              maxdist /= (double)y->size[1] - 1.0;
              i = y->size[1];
              for (k = 0; k <= i - 3; k++) {
                y->data[k + 1] = ((double)k + 1.0) * maxdist;
              }
            }
          }
        }
      }
    }

    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = y->size[1];
    emxEnsureCapacity_real_T(arclenInRadians, i);
    nx = y->size[1];
    for (i = 0; i < nx; i++) {
      arclenInRadians->data[i] = y->data[i];
    }

    emxFree_real_T(&y);
    emxInit_real_T(&cosDelta, 1);

    /*  Points on a great circles given specified start point, azimuths and */
    /*  spherical distances.  All angles are in radians. */
    /* -------------------------------------------------------------------------- */
    /*  Reference */
    /*  --------- */
    /*  J. P. Snyder, "Map Projections - A Working Manual,"  US Geological Survey */
    /*  Professional Paper 1395, US Government Printing Office, Washington, DC, */
    /*  1987, pp. 29-32. */
    maxdist = cos(a);
    i = cosDelta->size[0];
    cosDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(cosDelta, i);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] = arclenInRadians->data[i];
    }

    nx = arclenInRadians->size[0];
    for (k = 0; k < nx; k++) {
      cosDelta->data[k] = cos(cosDelta->data[k]);
    }

    emxInit_real_T(&sinDelta, 1);
    i = sinDelta->size[0];
    sinDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(sinDelta, i);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] = arclenInRadians->data[i];
    }

    nx = arclenInRadians->size[0];
    for (k = 0; k < nx; k++) {
      sinDelta->data[k] = sin(sinDelta->data[k]);
    }

    i = lat->size[0];
    lat->size[0] = cosDelta->size[0];
    emxEnsureCapacity_real_T(lat, i);
    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] = phi1 * cosDelta->data[i] + cosphi1_tmp * sinDelta->data[i] *
        maxdist;
    }

    nx = lat->size[0];
    for (k = 0; k < nx; k++) {
      lat->data[k] = asin(lat->data[k]);
    }

    emxInit_real_T(&b_y, 1);
    x = sin(a);
    i = b_y->size[0];
    b_y->size[0] = sinDelta->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      b_y->data[i] = sinDelta->data[i] * x;
    }

    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] = cosphi1_tmp * cosDelta->data[i] - phi1 *
        sinDelta->data[i] * maxdist;
    }

    i = lon->size[0];
    if (b_y->size[0] <= cosDelta->size[0]) {
      lon->size[0] = b_y->size[0];
    } else {
      lon->size[0] = cosDelta->size[0];
    }

    emxEnsureCapacity_real_T(lon, i);
    if (b_y->size[0] <= cosDelta->size[0]) {
      nx = b_y->size[0];
    } else {
      nx = cosDelta->size[0];
    }

    for (k = 0; k < nx; k++) {
      lon->data[k] = rt_atan2d_snf(b_y->data[k], cosDelta->data[k]);
    }

    emxFree_real_T(&b_y);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] += lambda1;
    }

    emxInit_boolean_T(&r, 1);

    /*  lambdaTrack = wrapToPi(lambdaTrack); */
    i = r->size[0];
    r->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r->data[i] = (lon->data[i] < -3.1415926535897931);
    }

    emxInit_boolean_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r1->data[i] = (3.1415926535897931 < lon->data[i]);
    }

    k = r->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r->data[i] || r1->data[i]) {
        nx++;
      }
    }

    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r->data[i] || r1->data[i]) {
        r2->data[nx] = i + 1;
        nx++;
      }
    }

    i = sinDelta->size[0];
    sinDelta->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(sinDelta, i);
    nx = r2->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] = lon->data[r2->data[i] - 1] + 3.1415926535897931;
    }

    emxFree_int32_T(&r2);
    emxInit_boolean_T(&positiveInput, 1);

    /* -------------------------------------------------------------------------- */
    i = positiveInput->size[0];
    positiveInput->size[0] = sinDelta->size[0];
    emxEnsureCapacity_boolean_T(positiveInput, i);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      positiveInput->data[i] = (sinDelta->data[i] > 0.0);
    }

    i = cosDelta->size[0];
    cosDelta->size[0] = sinDelta->size[0];
    emxEnsureCapacity_real_T(cosDelta, i);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] = sinDelta->data[i];
    }

    nx = sinDelta->size[0];
    for (k = 0; k < nx; k++) {
      sinDelta->data[k] = b_mod(cosDelta->data[k], 6.2831853071795862);
    }

    emxFree_real_T(&cosDelta);
    emxInit_boolean_T(&r3, 1);
    i = r3->size[0];
    r3->size[0] = sinDelta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      r3->data[i] = (sinDelta->data[i] == 0.0);
    }

    k = r3->size[0];
    for (i = 0; i < k; i++) {
      if (r3->data[i] && positiveInput->data[i]) {
        sinDelta->data[i] = 6.2831853071795862;
      }
    }

    emxFree_boolean_T(&r3);
    emxFree_boolean_T(&positiveInput);
    k = r->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (r->data[i] || r1->data[i]) {
        lon->data[i] = sinDelta->data[nx] - 3.1415926535897931;
        nx++;
      }
    }

    emxFree_real_T(&sinDelta);
    emxFree_boolean_T(&r1);
    emxFree_boolean_T(&r);
    nx = lat->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] *= 57.295779513082323;
    }

    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] *= 57.295779513082323;
    }

    /*   Use exact endpoint. */
    lat->data[lat->size[0] - 1] = lat2;
    lon->data[lon->size[0] - 1] = lon2;
  } else {
    i = lat->size[0];
    lat->size[0] = 2;
    emxEnsureCapacity_real_T(lat, i);
    lat->data[0] = lat1;
    lat->data[1] = lat2;
    i = lon->size[0];
    lon->size[0] = 2;
    emxEnsureCapacity_real_T(lon, i);
    lon->data[0] = lon1;
    lon->data[1] = lon2;
    phi1 = 0.017453292519943295 * lat1;
    phi2 = 0.017453292519943295 * lat2;

    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    /* -------------------------------------------------------------------------- */
    maxdist = sin((phi2 - phi1) / 2.0);
    a = sin((0.017453292519943295 * lon2 - 0.017453292519943295 * lon1) / 2.0);
    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = 1;
    emxEnsureCapacity_real_T(arclenInRadians, i);
    arclenInRadians->data[0] = 2.0 * asin(sqrt(maxdist * maxdist + cos(phi1) *
      cos(phi2) * (a * a)));
  }
}

/*
 * File trailer for mexable_calculateLOS.c
 *
 * [EOF]
 */
