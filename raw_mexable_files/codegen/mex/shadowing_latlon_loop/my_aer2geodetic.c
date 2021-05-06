/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * my_aer2geodetic.c
 *
 * Code generation for function 'my_aer2geodetic'
 *
 */

/* Include files */
#include "my_aer2geodetic.h"
#include "atan2d.h"
#include "cosd.h"
#include "hypot.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_mexutil.h"
#include "shadowing_latlon_loop_types.h"
#include "sind.h"

/* Variable Definitions */
static emlrtRSInfo kg_emlrtRSI = { 30, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 31, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 32, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 33, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 57, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 67, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 71, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 72, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 76, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 27,/* lineNo */
  11,                                  /* colNo */
  "error",                             /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtECInfo sb_emlrtECI = { 2,  /* nDims */
  45,                                  /* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { 2,  /* nDims */
  44,                                  /* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { 2,  /* nDims */
  43,                                  /* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { 2,  /* nDims */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 2,  /* nDims */
  33,                                  /* lineNo */
  18,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { 2,  /* nDims */
  32,                                  /* lineNo */
  18,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 30,/* lineNo */
  29,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 30,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 31,/* lineNo */
  29,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 31,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 32,/* lineNo */
  23,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 33,/* lineNo */
  23,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 33,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 41,/* lineNo */
  13,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 41,/* lineNo */
  29,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 41,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 43,/* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 43,/* lineNo */
  30,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 44,/* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 44,/* lineNo */
  31,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 45,/* lineNo */
  14,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 45,/* lineNo */
  31,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 62,/* lineNo */
  5,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 63,/* lineNo */
  5,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 64,/* lineNo */
  5,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 1,/* lineNo */
  26,                                  /* colNo */
  "my_aer2geodetic",                   /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\my_aer2geodetic.m"/* pName */
};

/* Function Definitions */
void my_aer2geodetic(const emlrtStack *sp, const emxArray_real_T *az, const
                     emxArray_real_T *elev, real_T slantRange, real_T lat0,
                     real_T lon0, real_T h0, real_T spheroid_MeanRadius, real_T
                     spheroid_Flattening, emxArray_real_T *lat, emxArray_real_T *
                     lon, emxArray_real_T *h)
{
  static const int32_T iv[2] = { 1, 45 };

  static const char_T u[45] = { 'N', 'o', 'n', '-', 'z', 'e', 'r', 'o', ' ', 'f',
    'l', 'a', 't', 't', 'e', 'n', 'i', 'n', 'g', ' ', 'b', 'r', 'e', 'a', 'k',
    's', ' ', 'h', 'a', 'r', 'd', 'c', 'o', 'd', 'e', 'd', ' ', 'f', 'e', 'a',
    't', 'u', 'r', 'e', 's' };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *b_r;
  emxArray_real_T *r;
  emxArray_real_T *t;
  emxArray_real_T *x;
  emxArray_real_T *xEast;
  emxArray_real_T *zUp;
  const mxArray *propValues[1];
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  real_T c_r;
  real_T cosLambda_tmp;
  real_T rho;
  real_T sinLambda_tmp;
  real_T sinPhi_tmp;
  real_T x0;
  real_T z0;
  int32_T i;
  int32_T loop_ub;
  const char_T *propClasses[1] = { "coder.internal.string" };

  const char_T *propNames[1] = { "Value" };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &zUp, 2, &bj_emlrtRTEI, true);

  /* AER2GEODETIC Local spherical AER to geodetic */
  /*  */
  /*    [LAT, LON, H] = AER2GEODETIC(AZ, ELEV, SLANTRANGE, LAT0, LON0, H0, ... */
  /*        SPHEROID) transforms point locations in 3-D from local spherical */
  /*    coordinates (azimuth angle, elevation angle, slant range) to geodetic */
  /*    coordinates (LAT, LON, H), given a local coordinate system defined by */
  /*    the geodetic coordinates of its origin (LAT0, LON0, H0).  The geodetic */
  /*    coordinates refer to the reference body specified by the spheroid */
  /*    object, SPHEROID. The slant range and ellipsoidal height H0 must be */
  /*    expressed in the same length unit as the spheroid.  Ellipsoidal height */
  /*    H will be expressed in this unit, also.  The input azimuth and */
  /*    elevation angles, and input and output latitude and longitude angles, */
  /*    are in degrees by default. */
  /*  */
  /*    [...] = AER2GEODETIC(..., angleUnit) uses angleUnit, which matches */
  /*    either 'degrees' or 'radians', to specify the units of the azimuth, */
  /*    elevation, latitude, and longitude angles. */
  /*  */
  /*    Class support for inputs AZ, ELEV, SLANTRANGE, LAT0, LON0, H0: */
  /*       float: double, single */
  /*  */
  /*    See also AER2ECEF, ENU2GEODETIC, GEODETIC2AER, NED2GEODETIC */
  /*  Copyright 2012-2019 The MathWorks, Inc. */
  /* [x, y, z] = aer2ecefFormula(az, elev, slantRange, lat0, lon0, h0, spheroid, inDegrees); */
  /* [xEast, yNorth, zUp] = aer2enuFormula(az, elev, slantRange, sinfun, cosfun); */
  i = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  zUp->size[1] = elev->size[1];
  emxEnsureCapacity_real_T(sp, zUp, i, &aj_emlrtRTEI);
  loop_ub = elev->size[0] * elev->size[1];
  for (i = 0; i < loop_ub; i++) {
    zUp->data[i] = elev->data[i];
  }

  st.site = &kg_emlrtRSI;
  c_sind(&st, zUp);
  i = zUp->size[0] * zUp->size[1];
  loop_ub = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  emxEnsureCapacity_real_T(sp, zUp, loop_ub, &bj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    zUp->data[i] *= slantRange;
  }

  emxInit_real_T(sp, &r, 2, &dj_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = elev->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &cj_emlrtRTEI);
  loop_ub = elev->size[0] * elev->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = elev->data[i];
  }

  st.site = &lg_emlrtRSI;
  c_cosd(&st, r);
  i = r->size[0] * r->size[1];
  loop_ub = r->size[0] * r->size[1];
  r->size[0] = 1;
  emxEnsureCapacity_real_T(sp, r, loop_ub, &dj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    r->data[i] *= slantRange;
  }

  emxInit_real_T(sp, &xEast, 2, &fj_emlrtRTEI, true);
  i = xEast->size[0] * xEast->size[1];
  xEast->size[0] = 1;
  xEast->size[1] = az->size[1];
  emxEnsureCapacity_real_T(sp, xEast, i, &ej_emlrtRTEI);
  loop_ub = az->size[0] * az->size[1];
  for (i = 0; i < loop_ub; i++) {
    xEast->data[i] = az->data[i];
  }

  st.site = &mg_emlrtRSI;
  c_sind(&st, xEast);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])
    xEast->size, &xb_emlrtECI, sp);
  i = xEast->size[0] * xEast->size[1];
  xEast->size[0] = 1;
  xEast->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, xEast, i, &fj_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    xEast->data[i] *= r->data[i];
  }

  emxInit_real_T(sp, &b_r, 2, &vj_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = az->size[1];
  emxEnsureCapacity_real_T(sp, b_r, i, &gj_emlrtRTEI);
  loop_ub = az->size[0] * az->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = az->data[i];
  }

  st.site = &ng_emlrtRSI;
  c_cosd(&st, b_r);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])b_r->size,
    &wb_emlrtECI, sp);
  i = r->size[0] * r->size[1];
  loop_ub = r->size[0] * r->size[1];
  r->size[0] = 1;
  emxEnsureCapacity_real_T(sp, r, loop_ub, &hj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    r->data[i] *= b_r->data[i];
  }

  emxInit_real_T(sp, &t, 2, &kj_emlrtRTEI, true);

  /*  Offset vector from local system origin, rotated from ENU to ECEF. */
  /* [dx, dy, dz] = enu2ecefvFormula(xEast, yNorth, zUp, lat0, lon0, sinfun, cosfun); */
  x0 = lat0;
  b_cosd(&x0);
  sinPhi_tmp = lat0;
  b_sind(&sinPhi_tmp);
  cosLambda_tmp = lon0;
  b_cosd(&cosLambda_tmp);
  sinLambda_tmp = lon0;
  b_sind(&sinLambda_tmp);
  i = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = zUp->size[1];
  emxEnsureCapacity_real_T(sp, t, i, &ij_emlrtRTEI);
  loop_ub = zUp->size[0] * zUp->size[1];
  for (i = 0; i < loop_ub; i++) {
    t->data[i] = x0 * zUp->data[i];
  }

  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, b_r, i, &jj_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = sinPhi_tmp * r->data[i];
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])t->size, *(int32_T (*)[2])b_r->size,
    &vb_emlrtECI, sp);
  i = t->size[0] * t->size[1];
  loop_ub = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity_real_T(sp, t, loop_ub, &kj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    t->data[i] -= b_r->data[i];
  }

  i = zUp->size[0] * zUp->size[1];
  loop_ub = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  emxEnsureCapacity_real_T(sp, zUp, loop_ub, &lj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    zUp->data[i] *= sinPhi_tmp;
  }

  i = r->size[0] * r->size[1];
  loop_ub = r->size[0] * r->size[1];
  r->size[0] = 1;
  emxEnsureCapacity_real_T(sp, r, loop_ub, &mj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    r->data[i] *= x0;
  }

  emxInit_real_T(sp, &x, 2, &rj_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])zUp->size, *(int32_T (*)[2])r->size,
    &ub_emlrtECI, sp);
  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = t->size[1];
  emxEnsureCapacity_real_T(sp, x, i, &nj_emlrtRTEI);
  loop_ub = t->size[0] * t->size[1];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = cosLambda_tmp * t->data[i];
  }

  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = xEast->size[1];
  emxEnsureCapacity_real_T(sp, b_r, i, &oj_emlrtRTEI);
  loop_ub = xEast->size[0] * xEast->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = sinLambda_tmp * xEast->data[i];
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])x->size, *(int32_T (*)[2])b_r->size,
    &tb_emlrtECI, sp);
  i = t->size[0] * t->size[1];
  loop_ub = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity_real_T(sp, t, loop_ub, &pj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    t->data[i] *= sinLambda_tmp;
  }

  i = xEast->size[0] * xEast->size[1];
  loop_ub = xEast->size[0] * xEast->size[1];
  xEast->size[0] = 1;
  emxEnsureCapacity_real_T(sp, xEast, loop_ub, &qj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    xEast->data[i] *= cosLambda_tmp;
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])t->size, *(int32_T (*)[2])
    xEast->size, &sb_emlrtECI, sp);

  /*  Origin of local system in geocentric coordinates. */
  /* [x0, y0, z0] = geodetic2ecefFormula(spheroid, lat0, lon0, h0, inDegrees); */
  if (spheroid_Flattening == 0.0) {
    c_r = h0 + spheroid_MeanRadius;
    rho = c_r * x0;
    z0 = c_r * sinPhi_tmp;
  } else {
    st.site = &og_emlrtRSI;
    emlrtAssertMATLABThread(&st, &b_emlrtRTEI);
    y = NULL;
    m = NULL;
    emlrtAssertMATLABThread(&st, &c_emlrtRTEI);
    emlrtAssign(&y, emlrtCreateClassInstance("coder.internal.string"));
    m = NULL;
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    emlrtAssign(&m, b_y);
    propValues[0] = m;
    emlrtSetAllProperties(&st, &y, 0, 1, propNames, propClasses, propValues);
    emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(&st, y, 0,
      "coder.internal.string"));
    b_st.site = &oh_emlrtRSI;
    error(&b_st, y, &d_emlrtMCI);
  }

  x0 = rho * cosLambda_tmp;
  c_r = rho * sinLambda_tmp;

  /*  Origin + offset from origin equals position in ECEF. */
  i = x->size[0] * x->size[1];
  loop_ub = x->size[0] * x->size[1];
  x->size[0] = 1;
  emxEnsureCapacity_real_T(sp, x, loop_ub, &rj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    x->data[i] = x0 + (x->data[i] - b_r->data[i]);
  }

  emxFree_real_T(&b_r);
  i = t->size[0] * t->size[1];
  loop_ub = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity_real_T(sp, t, loop_ub, &sj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    t->data[i] = c_r + (t->data[i] + xEast->data[i]);
  }

  emxFree_real_T(&xEast);
  i = zUp->size[0] * zUp->size[1];
  loop_ub = zUp->size[0] * zUp->size[1];
  zUp->size[0] = 1;
  emxEnsureCapacity_real_T(sp, zUp, loop_ub, &tj_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    zUp->data[i] = z0 + (zUp->data[i] + r->data[i]);
  }

  /* [lat, lon, h] = ecef2geodetic(spheroid, x, y, z); */
  st.site = &pg_emlrtRSI;
  b_hypot(&st, x, t, r);
  st.site = &qg_emlrtRSI;
  b_atan2d(&st, zUp, r, lat);
  st.site = &rg_emlrtRSI;
  b_hypot(&st, zUp, r, h);
  i = h->size[0] * h->size[1];
  loop_ub = h->size[0] * h->size[1];
  h->size[0] = 1;
  emxEnsureCapacity_real_T(sp, h, loop_ub, &uj_emlrtRTEI);
  loop_ub = i - 1;
  emxFree_real_T(&r);
  emxFree_real_T(&zUp);
  for (i = 0; i <= loop_ub; i++) {
    h->data[i] -= spheroid_MeanRadius;
  }

  st.site = &sg_emlrtRSI;
  b_atan2d(&st, t, x, lon);
  emxFree_real_T(&x);
  emxFree_real_T(&t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (my_aer2geodetic.c) */
