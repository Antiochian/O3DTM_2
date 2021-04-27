/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * raytrace_tick.c
 *
 * Code generation for function 'raytrace_tick'
 *
 */

/* Include files */
#include "raytrace_tick.h"
#include "cosd.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "mexable_los2.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sind.h"
#include "tand.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo nc_emlrtRSI = { 22, /* lineNo */
  "raytrace_tick",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 23, /* lineNo */
  "raytrace_tick",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 49, /* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 133,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 194,/* lineNo */
  "colMajorFlatIter",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 10, /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 12, /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 5,  /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 16, /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 28, /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 30, /* lineNo */
  "raytrace_pixel_tick",               /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 57, /* lineNo */
  "my_aer2geodetic",                   /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\my_aer2geodetic.m"/* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 14,/* lineNo */
  9,                                   /* colNo */
  "acos",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  23,                                  /* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel_tick",               /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  22,                                  /* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel_tick",               /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel_tick.m"/* pName */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  43,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  34,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  37,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  28,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  21,                                  /* colNo */
  "long_arr",                          /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 17, /* lineNo */
  21,                                  /* colNo */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo m_emlrtRTEI = { 12,/* lineNo */
  17,                                  /* colNo */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m"/* pName */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  11,                                  /* colNo */
  "lat_arr",                           /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 16, /* lineNo */
  11,                                  /* colNo */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  13,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  5,                                   /* colNo */
  "theta_arr",                         /* aName */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo od_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "raytrace_tick",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_tick.m"/* pName */
};

/* Function Definitions */
void raytrace_tick(const emlrtStack *sp, real_T decl, real_T raytrace_h, const
                   emxArray_real_T *lat_arr, const emxArray_real_T *long_arr,
                   const emxArray_real_T *elevation_matrix, const
                   emxArray_real_T *extended_elevation_matrix, const
                   emxArray_real_T *slope_matrix, const emxArray_real_T
                   *aspect_matrix, real_T ref_sphere_MeanRadius, real_T
                   ref_sphere_Flattening, real_T max_distance, const struct2_T
                   *public_raster_struct, real_T r_moon, real_T sample_dens,
                   emxArray_real_T *theta_arr)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T tmp_data[1];
  real_T b_x;
  real_T h_tmp;
  real_T lat;
  real_T r;
  real_T r_tmp;
  real_T rho;
  real_T sinPhi_tmp;
  real_T slantRange;
  real_T t;
  real_T theta_z;
  real_T x;
  real_T xEast;
  real_T y;
  real_T yNorth;
  real_T z;
  real_T z0;
  real_T zUp;
  int32_T Nlat;
  int32_T i;
  int32_T loop_ub;
  int32_T pixel_idx;
  int32_T trueCount;
  int32_T vlen;
  real32_T gamma_s;
  real32_T theta_local;
  int8_T iv[1];
  int8_T b_unnamed_idx_0;
  int8_T unnamed_idx_0;
  boolean_T b;
  boolean_T c_unnamed_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  i = theta_arr->size[0] * theta_arr->size[1];
  theta_arr->size[0] = 1;
  theta_arr->size[1] = elevation_matrix->size[0] * elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, theta_arr, i, &od_emlrtRTEI);
  loop_ub = elevation_matrix->size[0] * elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    theta_arr->data[i] = rtNaN;
  }

  /*  Currently it just iterates over every pixel in turn for simplicity. */
  /*  There is probably some decent savings to be made via vectorization for */
  /*  this */
  Nlat = lat_arr->size[1];

  /*  You CAN change this to a parfor loop (in fact this is why the loop is 1D */
  /*  instead of 2D), but there is so much overhead broadcasting it */
  /*  significantly *reduces* performance and isn't worth it. */
  yNorth = (real_T)lat_arr->size[1] * (real_T)long_arr->size[1];
  i = (int32_T)yNorth;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, yNorth, mxDOUBLE_CLASS, (int32_T)
    yNorth, &m_emlrtRTEI, sp);
  if (0 <= (int32_T)yNorth - 1) {
    b = true;
    vlen = long_arr->size[1];
    slantRange = 1.1 * max_distance;
  }

  for (pixel_idx = 0; pixel_idx < i; pixel_idx++) {
    x = muDoubleScalarFloor((((real_T)pixel_idx + 1.0) - 1.0) / (real_T)Nlat);
    r_tmp = muDoubleScalarRem(((real_T)pixel_idx + 1.0) - 1.0, Nlat);

    /*  for lat_idx = 1:Nlat */
    if (r_tmp + 1.0 != (int32_T)(r_tmp + 1.0)) {
      emlrtIntegerCheckR2012b(r_tmp + 1.0, &hb_emlrtDCI, sp);
    }

    if (((int32_T)(r_tmp + 1.0) < 1) || ((int32_T)(r_tmp + 1.0) > lat_arr->size
         [1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(r_tmp + 1.0), 1, lat_arr->size[1],
        &rd_emlrtBCI, sp);
    }

    lat = lat_arr->data[(int32_T)(r_tmp + 1.0) - 1];
    if (x + 1.0 != (int32_T)(x + 1.0)) {
      emlrtIntegerCheckR2012b(x + 1.0, &gb_emlrtDCI, sp);
    }

    if (((int32_T)(x + 1.0) < 1) || ((int32_T)(x + 1.0) > long_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(x + 1.0), 1, long_arr->size[1],
        &qd_emlrtBCI, sp);
    }

    /* pixel-specific quantities: */
    if (((int32_T)(r_tmp + 1.0) < 1) || ((int32_T)(r_tmp + 1.0) >
         slope_matrix->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(r_tmp + 1.0), 1,
        slope_matrix->size[0], &sd_emlrtBCI, sp);
    }

    if (((int32_T)(x + 1.0) < 1) || ((int32_T)(x + 1.0) > slope_matrix->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(x + 1.0), 1, slope_matrix->size[1],
        &sd_emlrtBCI, sp);
    }

    b_x = slope_matrix->data[((int32_T)(r_tmp + 1.0) + slope_matrix->size[0] *
      ((int32_T)(x + 1.0) - 1)) - 1];
    if (((int32_T)(r_tmp + 1.0) < 1) || ((int32_T)(r_tmp + 1.0) >
         aspect_matrix->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(r_tmp + 1.0), 1,
        aspect_matrix->size[0], &pd_emlrtBCI, sp);
    }

    if (((int32_T)(x + 1.0) < 1) || ((int32_T)(x + 1.0) > aspect_matrix->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(x + 1.0), 1, aspect_matrix->size[1],
        &od_emlrtBCI, sp);
    }

    if (((int32_T)(r_tmp + 1.0) < 1) || ((int32_T)(r_tmp + 1.0) >
         elevation_matrix->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(r_tmp + 1.0), 1,
        elevation_matrix->size[0], &nd_emlrtBCI, sp);
    }

    if (((int32_T)(x + 1.0) < 1) || ((int32_T)(x + 1.0) > elevation_matrix->
         size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(x + 1.0), 1,
        elevation_matrix->size[1], &md_emlrtBCI, sp);
    }

    st.site = &nc_emlrtRSI;
    if (!b) {
      emlrtErrorWithMessageIdR2018a(&st, &k_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    b_st.site = &pc_emlrtRSI;
    if (long_arr->size[1] == 0) {
      y = 0.0;
    } else {
      c_st.site = &qc_emlrtRSI;
      y = long_arr->data[0];
      d_st.site = &rc_emlrtRSI;
      if ((2 <= long_arr->size[1]) && (long_arr->size[1] > 2147483646)) {
        e_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
        y += long_arr->data[loop_ub - 1];
      }
    }

    h_tmp = long_arr->data[(int32_T)(x + 1.0) - 1];
    z = (raytrace_h + h_tmp) - y / (real_T)long_arr->size[1];
    st.site = &oc_emlrtRSI;
    if (muDoubleScalarIsNaN(z + 180.0) || muDoubleScalarIsInf(z + 180.0)) {
      r = rtNaN;
    } else if (z + 180.0 == 0.0) {
      r = 0.0;
    } else {
      r = muDoubleScalarRem(z + 180.0, 360.0);
      if (r == 0.0) {
        r = 0.0;
      } else {
        if (z + 180.0 < 0.0) {
          r += 360.0;
        }
      }
    }

    /* solar hour angle, degrees */
    iv[0] = 1;
    sinPhi_tmp = lat_arr->data[(int32_T)(r_tmp + 1.0) - 1];
    yNorth = sinPhi_tmp;
    b_tand(&yNorth);
    z = decl;
    b_tand(&z);
    b_st.site = &uc_emlrtRSI;
    loop_ub = 0;
    if (muDoubleScalarAbs(r - 180.0) > 57.295779513082323 * muDoubleScalarAcos
        (muDoubleScalarMin(muDoubleScalarMax(1.0 / yNorth * z, -1.0), 1.0))) {
      loop_ub = 1;
    }

    if (0 <= loop_ub - 1) {
      iv[0] = -1;
    }

    unnamed_idx_0 = 1;
    b_unnamed_idx_0 = 1;
    if (lat * (lat - decl) < 0.0) {
      unnamed_idx_0 = -1;
    }

    if (r - 180.0 < 0.0) {
      b_unnamed_idx_0 = -1;
    }

    b_st.site = &sc_emlrtRSI;
    xEast = decl;
    b_cosd(&xEast);
    yNorth = decl;
    b_sind(&yNorth);
    z = sinPhi_tmp;
    b_sind(&z);
    y = sinPhi_tmp;
    b_cosd(&y);
    t = r - 180.0;
    b_cosd(&t);
    theta_z = yNorth * z + xEast * y * t;
    if ((theta_z < -1.0) || (theta_z > 1.0)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "acos");
    }

    theta_z = muDoubleScalarAcos(theta_z);

    /* rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES )) */
    yNorth = r - 180.0;
    b_sind(&yNorth);
    b_st.site = &tc_emlrtRSI;
    z = muDoubleScalarSin(theta_z);
    y = 57.295779513082323 * muDoubleScalarAsin(muDoubleScalarMin(1.0,
      muDoubleScalarMax(-1.0, yNorth * xEast / z)));
    if (theta_z == 0.0) {
      y = 0.0;
    }

    /*  Avoid division by 0 error */
    loop_ub = iv[0] * unnamed_idx_0;
    gamma_s = (real32_T)loop_ub * (real32_T)y + (1.0F - (real32_T)loop_ub) /
      2.0F * (real32_T)b_unnamed_idx_0 * 180.0F;
    b_st.site = &vc_emlrtRSI;
    yNorth = b_x;
    b_cosd(&yNorth);
    b_sind(&b_x);
    theta_local = gamma_s - (real32_T)aspect_matrix->data[((int32_T)(r_tmp + 1.0)
      + aspect_matrix->size[0] * ((int32_T)(x + 1.0) - 1)) - 1];
    c_cosd(&theta_local);
    theta_local = (real32_T)(muDoubleScalarCos(theta_z) * yNorth) + (real32_T)(z
      * b_x) * theta_local;
    if ((theta_local < -1.0F) || (theta_local > 1.0F)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "acos");
    }

    theta_local = muSingleScalarAcos(theta_local);
    if (theta_z > 1.5707963267948966) {
      theta_local = rtNaNF;
    }

    loop_ub = 0;
    if (theta_local > 1.5707963267948966) {
      theta_local = rtNaNF;
    }

    if (!(lat < decl)) {
      loop_ub = 1;
    }

    if (0 <= loop_ub - 1) {
      tmp_data[0] = gamma_s + 180.0F;
    }

    trueCount = 0;
    if (!(lat < decl)) {
      trueCount = 1;
    }

    if (trueCount != loop_ub) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, loop_ub, &m_emlrtECI, &st);
    }

    y = rtNaN;
    loop_ub = 0;
    if (!(lat < decl)) {
      y = tmp_data[0];
    }

    if (lat < decl) {
      loop_ub = 1;
    }

    if (0 <= loop_ub - 1) {
      tmp_data[0] = -gamma_s;
    }

    trueCount = 0;
    if (lat < decl) {
      trueCount = 1;
    }

    if (trueCount != loop_ub) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, loop_ub, &l_emlrtECI, &st);
    }

    if (lat < decl) {
      y = tmp_data[0];
    }

    z = 57.295779513082323 * theta_z;

    /*  ensure outside of grid */
    /*  no longer necessary to switch to double with rewritten builtins */
    b_st.site = &wc_emlrtRSI;

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
    yNorth = 90.0 - z;
    b_sind(&yNorth);
    zUp = slantRange * yNorth;
    yNorth = 90.0 - z;
    b_cosd(&yNorth);
    r = slantRange * yNorth;
    yNorth = y;
    b_sind(&yNorth);
    xEast = r * yNorth;
    b_cosd(&y);
    yNorth = r * y;

    /*  Offset vector from local system origin, rotated from ENU to ECEF. */
    /* [dx, dy, dz] = enu2ecefvFormula(xEast, yNorth, zUp, lat0, lon0, sinfun, cosfun); */
    lat = sinPhi_tmp;
    b_cosd(&lat);
    b_sind(&sinPhi_tmp);
    z = h_tmp;
    b_cosd(&z);
    b_sind(&h_tmp);
    t = lat * zUp - sinPhi_tmp * yNorth;

    /*  Origin of local system in geocentric coordinates. */
    /* [x0, y0, z0] = geodetic2ecefFormula(spheroid, lat0, lon0, h0, inDegrees); */
    if (ref_sphere_Flattening == 0.0) {
      r = elevation_matrix->data[((int32_T)(r_tmp + 1.0) +
        elevation_matrix->size[0] * ((int32_T)(x + 1.0) - 1)) - 1] +
        ref_sphere_MeanRadius;
      rho = r * lat;
      z0 = r * sinPhi_tmp;
    } else {
      c_st.site = &yc_emlrtRSI;
      error(&c_st);
    }

    /*  Origin + offset from origin equals position in ECEF. */
    b_x = rho * z + (z * t - h_tmp * xEast);
    y = rho * h_tmp + (h_tmp * t + z * xEast);
    z = z0 + (sinPhi_tmp * zUp + lat * yNorth);

    /* [lat, lon, h] = ecef2geodetic(spheroid, x, y, z); */
    rho = muDoubleScalarHypot(b_x, y);
    b_st.site = &xc_emlrtRSI;
    c_unnamed_idx_0 = mexable_los2(&b_st, extended_elevation_matrix,
      lat_arr->data[(int32_T)(r_tmp + 1.0) - 1], long_arr->data[(int32_T)(x +
      1.0) - 1], 57.295779513082323 * muDoubleScalarAtan2(z, rho),
      57.295779513082323 * muDoubleScalarAtan2(y, b_x), muDoubleScalarHypot(z,
      rho) - ref_sphere_MeanRadius, r_moon, sample_dens, public_raster_struct);
    c_unnamed_idx_0 = ((theta_z == 0.0) || c_unnamed_idx_0);
    if (!c_unnamed_idx_0) {
      theta_local = rtNaNF;
    }

    if (((int32_T)(pixel_idx + 1U) < 1) || ((int32_T)(pixel_idx + 1U) >
         theta_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(pixel_idx + 1U), 1,
        theta_arr->size[1], &td_emlrtBCI, sp);
    }

    theta_arr->data[pixel_idx] = theta_local;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (raytrace_tick.c) */
