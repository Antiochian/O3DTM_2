/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: my_geodetic2aer.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "my_geodetic2aer.h"
#include "cosd.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "sind.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * HARDCODED TO WORK WITH DEGREES ONLY
 * Arguments    : double lat
 *                double lon
 *                double h
 *                double lat0
 *                double lon0
 *                double h0
 *                double spheroid_Radius
 *                double spheroid_Flattening
 *                double *az
 *                double *elev
 *                double *slantRange
 * Return Type  : void
 */
void my_geodetic2aer(double lat, double lon, double h, double lat0, double lon0,
                     double h0, double spheroid_Radius, double
                     spheroid_Flattening, double *az, double *elev, double
                     *slantRange)
{
  double c1_tmp;
  double c2;
  double dx;
  double dy;
  double dz;
  double p1;
  double p1_tmp;
  double p2;
  double q1;
  double q1_tmp;
  double q2;
  double s1_tmp;
  double s2;
  double t;

  /* GEODETIC2AER Geodetic to local spherical AER */
  /*  */
  /*    [AZ, ELEV, slantRange] = GEODETIC2AER(LAT, LON, H, LAT0, LON0, H0, ... */
  /*        SPHEROID) transforms point locations from geodetic coordinates */
  /*    (LAT, LON, H) to local spherical coordinates (azimuth angle, elevation */
  /*    angle, slant range), given a local coordinate system defined by the */
  /*    geodetic coordinates of its origin (LAT0, LON0, H0).  The geodetic */
  /*    coordinates refer to the reference body specified by the spheroid */
  /*    object, SPHEROID.  Ellipsoidal heights H and H0 must be expressed in */
  /*    the same length unit as the spheroid.  The slant range will be */
  /*    expressed in this unit, also.  The input latitude and longitude angles, */
  /*    and output azimuth and elevation angles, are in degrees by default. */
  /*  */
  /*    [...] = GEODETIC2AER(..., angleUnit) uses angleUnit, which matches */
  /*    either 'degrees' or 'radians', to specify the units of the latitude, */
  /*    longitude, azimuth, and elevation angles. */
  /*  */
  /*    Class support for inputs LAT, LON, H, LAT0, LON0, H0: */
  /*       float: double, single */
  /*  */
  /*    See also AER2GEODETIC, ECEF2AER, GEODETIC2ENU, GEODETIC2NED  */
  /*  Copyright 2012-2019 The MathWorks, Inc. */
  /* Here we assume inDegrees is always true and hardcode a bunch of functions */
  /* to avoid having to invoke a ReferenceSphere object -Henry */
  /* CONVERT TO ENU CORDS (geodetic2enuFormula) */
  /*  Cartesian offset vector from local origin to (LAT, LON, H). */
  s1_tmp = lat0;
  b_sind(&s1_tmp);
  c1_tmp = lat0;
  b_cosd(&c1_tmp);
  s2 = lat;
  b_sind(&s2);
  c2 = lat;
  b_cosd(&c2);
  p1_tmp = lon0;
  b_cosd(&p1_tmp);
  p1 = c1_tmp * p1_tmp;
  t = lon;
  b_cosd(&t);
  p2 = c2 * t;
  q1_tmp = lon0;
  b_sind(&q1_tmp);
  q1 = c1_tmp * q1_tmp;
  t = lon;
  b_sind(&t);
  q2 = c2 * t;
  if (spheroid_Flattening == 0.0) {
    /*  Spherical case */
    dx = spheroid_Radius * (p2 - p1) + (h * p2 - h0 * p1);
    dy = spheroid_Radius * (q2 - q1) + (h * q2 - h0 * q1);
    dz = spheroid_Radius * (s2 - s1_tmp) + (h * s2 - h0 * s1_tmp);
  }

  /* ECEF TO ENU FORMULAT (ecef2enucFormula) */
  /*  Offset vector from local system origin, rotated from ECEF to ENU. */
  t = p1_tmp * dx + q1_tmp * dy;
  s2 = -q1_tmp * dx + p1_tmp * dy;
  c2 = c1_tmp * t + s1_tmp * dz;
  q2 = -s1_tmp * t + c1_tmp * dz;

  /* GET VECTOR (enu2aerFormula) */
  t = rt_hypotd_snf(s2, q2);
  *slantRange = rt_hypotd_snf(t, c2);
  *elev = 57.295779513082323 * rt_atan2d_snf(c2, t);
  t = 57.295779513082323 * rt_atan2d_snf(s2, q2);
  if (rtIsNaN(t) || rtIsInf(t)) {
    *az = rtNaN;
  } else if (t == 0.0) {
    *az = 0.0;
  } else {
    *az = fmod(t, 360.0);
    if (*az == 0.0) {
      *az = 0.0;
    } else {
      if (t < 0.0) {
        *az += 360.0;
      }
    }
  }
}

/*
 * File trailer for my_geodetic2aer.c
 *
 * [EOF]
 */
