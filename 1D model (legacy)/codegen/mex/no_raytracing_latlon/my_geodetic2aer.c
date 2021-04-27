/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * my_geodetic2aer.c
 *
 * Code generation for function 'my_geodetic2aer'
 *
 */

/* Include files */
#include "my_geodetic2aer.h"
#include "cosd.h"
#include "mod1.h"
#include "rt_nonfinite.h"
#include "sind.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo if_emlrtRSI = { 59, /* lineNo */
  "my_geodetic2aer",                   /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\my_geodetic2aer.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo rg_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void my_geodetic2aer(const emlrtStack *sp, real_T lat, real_T lon, real_T h,
                     real_T lat0, real_T lon0, real_T h0, real_T spheroid_Radius,
                     real_T spheroid_Flattening, real_T *az, real_T *elev,
                     real_T *slantRange)
{
  static const int32_T iv[2] = { 1, 46 };

  static const char_T u[46] = { 'N', 'o', 'n', '-', 's', 'p', 'h', 'e', 'r', 'i',
    'c', 'a', 'l', ' ', 'o', 'b', 'j', 'e', 'c', 't', ' ', 'b', 'r', 'e', 'a',
    'k', 's', ' ', 'h', 'a', 'r', 'd', 'c', 'o', 'd', 'e', 'd', ' ', 'f', 'e',
    'a', 't', 'u', 'r', 'e', 's' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *propValues[1];
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  real_T c1_tmp;
  real_T c2;
  real_T dx;
  real_T dy;
  real_T dz;
  real_T p1;
  real_T p1_tmp;
  real_T p2;
  real_T q1;
  real_T q1_tmp;
  real_T q2;
  real_T s1_tmp;
  real_T s2;
  real_T t;
  const char_T *propClasses[1] = { "coder.internal.string" };

  const char_T *propNames[1] = { "Value" };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* HARDCODED TO WORK WITH DEGREES ONLY */
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
  } else {
    st.site = &if_emlrtRSI;
    y = NULL;
    m = NULL;
    emlrtAssign(&y, emlrtCreateClassInstance("coder.internal.string"));
    m = NULL;
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 46, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    emlrtAssign(&m, b_y);
    propValues[0] = m;
    emlrtSetAllProperties(&st, &y, 0, 1, propNames, propClasses, propValues);
    emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(&st, y, 0,
      "coder.internal.string"));
    b_st.site = &rg_emlrtRSI;
    error(&b_st, y, &d_emlrtMCI);
  }

  /* ECEF TO ENU FORMULAT (ecef2enucFormula) */
  /*  Offset vector from local system origin, rotated from ECEF to ENU. */
  t = p1_tmp * dx + q1_tmp * dy;
  s2 = -q1_tmp * dx + p1_tmp * dy;
  c2 = c1_tmp * t + s1_tmp * dz;
  q2 = -s1_tmp * t + c1_tmp * dz;

  /* GET VECTOR (enu2aerFormula) */
  t = muDoubleScalarHypot(s2, q2);
  *slantRange = muDoubleScalarHypot(t, c2);
  *elev = 57.295779513082323 * muDoubleScalarAtan2(c2, t);
  *az = d_mod(57.295779513082323 * muDoubleScalarAtan2(s2, q2), 360.0);
}

/* End of code generation (my_geodetic2aer.c) */
