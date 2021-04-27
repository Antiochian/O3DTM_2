/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: my_aer2geodetic.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "my_aer2geodetic.h"
#include "cosd.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "sind.h"

/* Function Definitions */
/*
 * AER2GEODETIC Local spherical AER to geodetic
 *
 *    [LAT, LON, H] = AER2GEODETIC(AZ, ELEV, SLANTRANGE, LAT0, LON0, H0, ...
 *        SPHEROID) transforms point locations in 3-D from local spherical
 *    coordinates (azimuth angle, elevation angle, slant range) to geodetic
 *    coordinates (LAT, LON, H), given a local coordinate system defined by
 *    the geodetic coordinates of its origin (LAT0, LON0, H0).  The geodetic
 *    coordinates refer to the reference body specified by the spheroid
 *    object, SPHEROID. The slant range and ellipsoidal height H0 must be
 *    expressed in the same length unit as the spheroid.  Ellipsoidal height
 *    H will be expressed in this unit, also.  The input azimuth and
 *    elevation angles, and input and output latitude and longitude angles,
 *    are in degrees by default.
 *
 *    [...] = AER2GEODETIC(..., angleUnit) uses angleUnit, which matches
 *    either 'degrees' or 'radians', to specify the units of the azimuth,
 *    elevation, latitude, and longitude angles.
 *
 *    Class support for inputs AZ, ELEV, SLANTRANGE, LAT0, LON0, H0:
 *       float: double, single
 *
 *    See also AER2ECEF, ENU2GEODETIC, GEODETIC2AER, NED2GEODETIC
 * Arguments    : const emxArray_real_T *az
 *                const emxArray_real_T *elev
 *                double slantRange
 *                double lat0
 *                double lon0
 *                double h0
 *                double spheroid_MeanRadius
 *                double spheroid_Flattening
 *                emxArray_real_T *lat
 *                emxArray_real_T *lon
 *                emxArray_real_T *h
 * Return Type  : void
 */
void my_aer2geodetic(const emxArray_real_T *az, const emxArray_real_T *elev,
                     double slantRange, double lat0, double lon0, double h0,
                     double spheroid_MeanRadius, double spheroid_Flattening,
                     emxArray_real_T *lat, emxArray_real_T *lon, emxArray_real_T
                     *h)
{
  emxArray_real_T *b_rho;
  emxArray_real_T *r;
  emxArray_real_T *t;
  emxArray_real_T *x;
  emxArray_real_T *xEast;
  emxArray_real_T *zUp;
  double b_r;
  double cosLambda_tmp;
  double cosPhi_tmp;
  double rho;
  double sinLambda_tmp;
  double sinPhi_tmp;
  double x0;
  double z0;
  int k;
  int nx;
  emxInit_real_T(&zUp, 2);

  /*  Copyright 2012-2019 The MathWorks, Inc. */
  /* [x, y, z] = aer2ecefFormula(az, elev, slantRange, lat0, lon0, h0, spheroid, inDegrees); */
  /* [xEast, yNorth, zUp] = aer2enuFormula(az, elev, slantRange, sinfun, cosfun); */
  k = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  zUp->size[1] = elev->size[1];
  emxEnsureCapacity_real_T(zUp, k);
  nx = elev->size[0] * elev->size[1];
  for (k = 0; k < nx; k++) {
    zUp->data[k] = elev->data[k];
  }

  c_sind(zUp);
  k = zUp->size[0] * zUp->size[1];
  nx = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  emxEnsureCapacity_real_T(zUp, nx);
  nx = k - 1;
  for (k = 0; k <= nx; k++) {
    zUp->data[k] *= slantRange;
  }

  emxInit_real_T(&r, 2);
  k = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = elev->size[1];
  emxEnsureCapacity_real_T(r, k);
  nx = elev->size[0] * elev->size[1];
  for (k = 0; k < nx; k++) {
    r->data[k] = elev->data[k];
  }

  c_cosd(r);
  k = r->size[0] * r->size[1];
  nx = r->size[0] * r->size[1];
  r->size[0] = 1;
  emxEnsureCapacity_real_T(r, nx);
  nx = k - 1;
  for (k = 0; k <= nx; k++) {
    r->data[k] *= slantRange;
  }

  emxInit_real_T(&xEast, 2);
  k = xEast->size[0] * xEast->size[1];
  xEast->size[0] = 1;
  xEast->size[1] = az->size[1];
  emxEnsureCapacity_real_T(xEast, k);
  nx = az->size[0] * az->size[1];
  for (k = 0; k < nx; k++) {
    xEast->data[k] = az->data[k];
  }

  c_sind(xEast);
  k = xEast->size[0] * xEast->size[1];
  xEast->size[0] = 1;
  xEast->size[1] = r->size[1];
  emxEnsureCapacity_real_T(xEast, k);
  nx = r->size[0] * r->size[1] - 1;
  for (k = 0; k <= nx; k++) {
    xEast->data[k] *= r->data[k];
  }

  emxInit_real_T(&t, 2);
  k = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = az->size[1];
  emxEnsureCapacity_real_T(t, k);
  nx = az->size[0] * az->size[1];
  for (k = 0; k < nx; k++) {
    t->data[k] = az->data[k];
  }

  c_cosd(t);
  k = r->size[0] * r->size[1];
  nx = r->size[0] * r->size[1];
  r->size[0] = 1;
  emxEnsureCapacity_real_T(r, nx);
  nx = k - 1;
  for (k = 0; k <= nx; k++) {
    r->data[k] *= t->data[k];
  }

  /*  Offset vector from local system origin, rotated from ENU to ECEF. */
  /* [dx, dy, dz] = enu2ecefvFormula(xEast, yNorth, zUp, lat0, lon0, sinfun, cosfun); */
  cosPhi_tmp = lat0;
  b_cosd(&cosPhi_tmp);
  sinPhi_tmp = lat0;
  b_sind(&sinPhi_tmp);
  cosLambda_tmp = lon0;
  b_cosd(&cosLambda_tmp);
  sinLambda_tmp = lon0;
  b_sind(&sinLambda_tmp);
  k = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = zUp->size[1];
  emxEnsureCapacity_real_T(t, k);
  nx = zUp->size[0] * zUp->size[1];
  for (k = 0; k < nx; k++) {
    t->data[k] = cosPhi_tmp * zUp->data[k] - sinPhi_tmp * r->data[k];
  }

  /*  Origin of local system in geocentric coordinates. */
  /* [x0, y0, z0] = geodetic2ecefFormula(spheroid, lat0, lon0, h0, inDegrees); */
  if (spheroid_Flattening == 0.0) {
    b_r = h0 + spheroid_MeanRadius;
    rho = b_r * cosPhi_tmp;
    z0 = b_r * sinPhi_tmp;
  }

  emxInit_real_T(&x, 2);
  x0 = rho * cosLambda_tmp;
  b_r = rho * sinLambda_tmp;

  /*  Origin + offset from origin equals position in ECEF. */
  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = t->size[1];
  emxEnsureCapacity_real_T(x, k);
  nx = t->size[0] * t->size[1];
  for (k = 0; k < nx; k++) {
    x->data[k] = x0 + (cosLambda_tmp * t->data[k] - sinLambda_tmp * xEast->
                       data[k]);
  }

  k = t->size[0] * t->size[1];
  nx = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity_real_T(t, nx);
  nx = k - 1;
  for (k = 0; k <= nx; k++) {
    t->data[k] = b_r + (sinLambda_tmp * t->data[k] + cosLambda_tmp * xEast->
                        data[k]);
  }

  emxFree_real_T(&xEast);
  k = zUp->size[0] * zUp->size[1];
  nx = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  emxEnsureCapacity_real_T(zUp, nx);
  nx = k - 1;
  for (k = 0; k <= nx; k++) {
    zUp->data[k] = z0 + (sinPhi_tmp * zUp->data[k] + cosPhi_tmp * r->data[k]);
  }

  emxFree_real_T(&r);
  emxInit_real_T(&b_rho, 2);

  /* [lat, lon, h] = ecef2geodetic(spheroid, x, y, z); */
  k = b_rho->size[0] * b_rho->size[1];
  b_rho->size[0] = 1;
  if (x->size[1] <= t->size[1]) {
    b_rho->size[1] = x->size[1];
  } else {
    b_rho->size[1] = t->size[1];
  }

  emxEnsureCapacity_real_T(b_rho, k);
  if (x->size[1] <= t->size[1]) {
    nx = x->size[1];
  } else {
    nx = t->size[1];
  }

  for (k = 0; k < nx; k++) {
    b_rho->data[k] = rt_hypotd_snf(x->data[k], t->data[k]);
  }

  if (spheroid_Flattening == 0.0) {
    k = lat->size[0] * lat->size[1];
    lat->size[0] = 1;
    if (zUp->size[1] <= b_rho->size[1]) {
      lat->size[1] = zUp->size[1];
    } else {
      lat->size[1] = b_rho->size[1];
    }

    emxEnsureCapacity_real_T(lat, k);
    if (zUp->size[1] <= b_rho->size[1]) {
      nx = zUp->size[1];
    } else {
      nx = b_rho->size[1];
    }

    for (k = 0; k < nx; k++) {
      lat->data[k] = 57.295779513082323 * rt_atan2d_snf(zUp->data[k],
        b_rho->data[k]);
    }

    k = h->size[0] * h->size[1];
    h->size[0] = 1;
    if (zUp->size[1] <= b_rho->size[1]) {
      h->size[1] = zUp->size[1];
    } else {
      h->size[1] = b_rho->size[1];
    }

    emxEnsureCapacity_real_T(h, k);
    if (zUp->size[1] <= b_rho->size[1]) {
      nx = zUp->size[1];
    } else {
      nx = b_rho->size[1];
    }

    for (k = 0; k < nx; k++) {
      h->data[k] = rt_hypotd_snf(zUp->data[k], b_rho->data[k]);
    }

    k = h->size[0] * h->size[1];
    nx = h->size[0] * h->size[1];
    h->size[0] = 1;
    emxEnsureCapacity_real_T(h, nx);
    nx = k - 1;
    for (k = 0; k <= nx; k++) {
      h->data[k] -= spheroid_MeanRadius;
    }
  }

  emxFree_real_T(&b_rho);
  emxFree_real_T(&zUp);
  k = lon->size[0] * lon->size[1];
  lon->size[0] = 1;
  if (t->size[1] <= x->size[1]) {
    lon->size[1] = t->size[1];
  } else {
    lon->size[1] = x->size[1];
  }

  emxEnsureCapacity_real_T(lon, k);
  if (t->size[1] <= x->size[1]) {
    nx = t->size[1];
  } else {
    nx = x->size[1];
  }

  for (k = 0; k < nx; k++) {
    lon->data[k] = 57.295779513082323 * rt_atan2d_snf(t->data[k], x->data[k]);
  }

  emxFree_real_T(&x);
  emxFree_real_T(&t);
}

/*
 * File trailer for my_aer2geodetic.c
 *
 * [EOF]
 */
