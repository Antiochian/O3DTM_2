/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * raytrace_pixel.c
 *
 * Code generation for function 'raytrace_pixel'
 *
 */

/* Include files */
#include "raytrace_pixel.h"
#include "abs.h"
#include "acos.h"
#include "acosd.h"
#include "asind.h"
#include "colon.h"
#include "cos.h"
#include "cosd.h"
#include "cotd.h"
#include "eml_int_forloop_overflow_check.h"
#include "mexable_los2.h"
#include "mod.h"
#include "my_aer2geodetic.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "sin.h"
#include "sind.h"
#include "tand.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo of_emlrtRSI = { 41, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 49, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 56, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 58, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 51, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 62, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 74, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 76, /* lineNo */
  "raytrace_pixel",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 28, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 174,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRTEInfo w_emlrtRTEI = { 20,/* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  29,                                  /* colNo */
  "gamma_s",                           /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  33,                                  /* colNo */
  "gamma_s",                           /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  25,                                  /* colNo */
  "theta_arr",                         /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 92,  /* lineNo */
  25,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  92,                                  /* lineNo */
  23,                                  /* colNo */
  "theta_arr",                         /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  89,                                  /* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  51,                                  /* colNo */
  "theta_arr",                         /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  15,                                  /* colNo */
  "theta_arr",                         /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 89,  /* lineNo */
  15,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  97,                                  /* colNo */
  "theta_matrix",                      /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  82,                                  /* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  18,                                  /* colNo */
  "theta_matrix",                      /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 87,/* lineNo */
  11,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  21,                                  /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  15,                                  /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  62,                                  /* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  13,                                  /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  11,                                  /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { 2,  /* nDims */
  62,                                  /* lineNo */
  34,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  62,                                  /* lineNo */
  62,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  61,                                  /* lineNo */
  15,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 2,  /* nDims */
  61,                                  /* lineNo */
  46,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  61,                                  /* lineNo */
  50,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo ob_emlrtECI = { 2,  /* nDims */
  51,                                  /* lineNo */
  14,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo pb_emlrtECI = { 2,  /* nDims */
  58,                                  /* lineNo */
  37,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo qb_emlrtECI = { 2,  /* nDims */
  56,                                  /* lineNo */
  20,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtECInfo rb_emlrtECI = { 2,  /* nDims */
  56,                                  /* lineNo */
  44,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 34,/* lineNo */
  33,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtDCInfo o_emlrtDCI = { 34,  /* lineNo */
  35,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 31,  /* lineNo */
  22,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 31,  /* lineNo */
  22,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 31,  /* lineNo */
  43,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 31,  /* lineNo */
  43,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 86,  /* lineNo */
  20,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 86,  /* lineNo */
  20,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 35,  /* lineNo */
  19,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 31,  /* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 86,  /* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 35,  /* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  27,                                  /* colNo */
  "decl_arr_local",                    /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 46, /* lineNo */
  27,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  21,                                  /* colNo */
  "h_arr_local",                       /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  5,                                   /* colNo */
  "sigma_ew",                          /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  5,                                   /* colNo */
  "sigma_ns",                          /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  5,                                   /* colNo */
  "sigma_w",                           /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  5,                                   /* colNo */
  "gamma_so",                          /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  5,                                   /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  5,                                   /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  5,                                   /* colNo */
  "az_sun",                            /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  5,                                   /* colNo */
  "az_sun",                            /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  5,                                   /* colNo */
  "sun_vis",                           /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  5,                                   /* colNo */
  "theta",                             /* aName */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo nh_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 86,/* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 92,/* lineNo */
  1,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 35,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 49,/* lineNo */
  13,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 49,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 50,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 51,/* lineNo */
  37,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 53,/* lineNo */
  14,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 1,/* lineNo */
  22,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 54,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 56,/* lineNo */
  44,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 56,/* lineNo */
  67,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 56,/* lineNo */
  20,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 56,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 58,/* lineNo */
  46,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 58,/* lineNo */
  37,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 58,/* lineNo */
  58,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 61,/* lineNo */
  47,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 61,/* lineNo */
  46,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 62,/* lineNo */
  62,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 62,/* lineNo */
  89,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 62,/* lineNo */
  34,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 62,/* lineNo */
  29,                                  /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 62,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 66,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 70,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 76,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "raytrace_pixel",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\raytrace_pixel.m"/* pName */
};

/* Function Definitions */
void raytrace_pixel(const emlrtStack *sp, real_T lat, real_T b_long, real_T
                    c_raytracing_params_t_calculati, real_T
                    d_raytracing_params_t_calculati, real_T
                    raytracing_params_t_steps, const struct2_T
                    *c_raytracing_params_public_rast, real_T
                    c_raytracing_params_extended_sa, const struct3_T
                    raytracing_params_ref_sphere, const emxArray_real_T
                    *c_raytracing_params_extended_el, real_T
                    raytracing_params_max_distance, real_T
                    c_local_raytracing_params_heigh, real_T
                    local_raytracing_params_aspect, real_T
                    local_raytracing_params_slope, const emxArray_real_T
                    *c_local_raytracing_params_h_arr, const emxArray_real_T
                    *c_local_raytracing_params_decl_, emxArray_real_T *theta_arr)
{
  jmp_buf b_emlrtJBEnviron;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *sun_vis;
  emxArray_int32_T *r;
  emxArray_int8_T *sigma_ew;
  emxArray_int8_T *sigma_w;
  emxArray_real32_T *gamma_s;
  emxArray_real32_T *sigma_ns;
  emxArray_real_T *az_sun;
  emxArray_real_T *decl;
  emxArray_real_T *elev_sun;
  emxArray_real_T *gamma_so;
  emxArray_real_T *lat_sun;
  emxArray_real_T *long_sun;
  emxArray_real_T *t_arr;
  emxArray_real_T *theta;
  emxArray_real_T *theta_matrix;
  emxArray_real_T *theta_z;
  real_T d;
  real_T d1;
  real_T r_moon;
  real_T slant_range;
  real_T t_arr_start;
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  int32_T t_calculation_step_idx;
  uint32_T unnamed_idx_1;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &theta_matrix, 2, &nh_emlrtRTEI, true);

  /*  Unpack raytracing params */
  r_moon = raytracing_params_ref_sphere.Radius;

  /*  unpack local params */
  if (!(d_raytracing_params_t_calculati >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d_raytracing_params_t_calculati, &q_emlrtDCI, sp);
  }

  d = (int32_T)muDoubleScalarFloor(d_raytracing_params_t_calculati);
  if (d_raytracing_params_t_calculati != d) {
    emlrtIntegerCheckR2012b(d_raytracing_params_t_calculati, &p_emlrtDCI, sp);
  }

  i = theta_matrix->size[0] * theta_matrix->size[1];
  theta_matrix->size[0] = (int32_T)d_raytracing_params_t_calculati;
  emxEnsureCapacity_real_T(sp, theta_matrix, i, &nh_emlrtRTEI);
  if (!(c_raytracing_params_t_calculati >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c_raytracing_params_t_calculati, &s_emlrtDCI, sp);
  }

  d1 = (int32_T)muDoubleScalarFloor(c_raytracing_params_t_calculati);
  if (c_raytracing_params_t_calculati != d1) {
    emlrtIntegerCheckR2012b(c_raytracing_params_t_calculati, &r_emlrtDCI, sp);
  }

  i = theta_matrix->size[0] * theta_matrix->size[1];
  theta_matrix->size[1] = (int32_T)c_raytracing_params_t_calculati;
  emxEnsureCapacity_real_T(sp, theta_matrix, i, &nh_emlrtRTEI);
  if (d_raytracing_params_t_calculati != d) {
    emlrtIntegerCheckR2012b(d_raytracing_params_t_calculati, &w_emlrtDCI, sp);
  }

  if (c_raytracing_params_t_calculati != d1) {
    emlrtIntegerCheckR2012b(c_raytracing_params_t_calculati, &w_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d_raytracing_params_t_calculati * (int32_T)
    c_raytracing_params_t_calculati;
  for (i = 0; i < loop_ub; i++) {
    theta_matrix->data[i] = 0.0;
  }

  if (d_raytracing_params_t_calculati != d) {
    emlrtIntegerCheckR2012b(d_raytracing_params_t_calculati, &o_emlrtDCI, sp);
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d_raytracing_params_t_calculati,
    mxDOUBLE_CLASS, (int32_T)d_raytracing_params_t_calculati, &y_emlrtRTEI, sp);
  loop_ub = (int32_T)d_raytracing_params_t_calculati - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r,theta,t_arr,decl,sigma_ew,sigma_ns,sigma_w,theta_z,gamma_s,az_sun,elev_sun,lat_sun,long_sun,gamma_so,sun_vis,slant_range,t_arr_start,b_emlrtJBEnviron,i_st,b_i,k,b_loop_ub,nx,unnamed_idx_1,iv) \
 firstprivate(st,b_st,c_st,d_st,e_st,f_st,g_st,h_st,emlrtHadParallelError)

  {
    if (setjmp(b_emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
      g_st.prev = &f_st;
      g_st.tls = f_st.tls;
      h_st.prev = &g_st;
      h_st.tls = g_st.tls;
      i_st.prev = &h_st;
      i_st.tls = h_st.tls;
      emxInit_int32_T(&st, &r, 2, &bi_emlrtRTEI, true);
      emxInit_real_T(&st, &theta, 2, &qh_emlrtRTEI, true);
      emxInit_real_T(&st, &t_arr, 2, &rh_emlrtRTEI, true);
      emxInit_real_T(&st, &decl, 2, &sh_emlrtRTEI, true);
      emxInit_int8_T(&st, &sigma_ew, 2, &vh_emlrtRTEI, true);
      emxInit_real32_T(&st, &sigma_ns, 2, &yh_emlrtRTEI, true);
      emxInit_int8_T(&st, &sigma_w, 2, &ci_emlrtRTEI, true);
      emxInit_real_T(&st, &theta_z, 2, &gi_emlrtRTEI, true);
      emxInit_real32_T(&st, &gamma_s, 2, &oi_emlrtRTEI, true);
      emxInit_real_T(&st, &az_sun, 2, &ui_emlrtRTEI, true);
      emxInit_real_T(&st, &elev_sun, 2, &vi_emlrtRTEI, true);
      emxInit_real_T(&st, &lat_sun, 2, &bi_emlrtRTEI, true);
      emxInit_real_T(&st, &long_sun, 2, &di_emlrtRTEI, true);
      emxInit_real_T(&st, &gamma_so, 2, &xi_emlrtRTEI, true);
      emxInit_boolean_T(&st, &sun_vis, 2, &wi_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (t_calculation_step_idx = 0; t_calculation_step_idx <= loop_ub;
         t_calculation_step_idx++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(b_emlrtJBEnviron) == 0) {
        /*  Time loop */
        b_i = theta->size[0] * theta->size[1];
        theta->size[0] = 1;
        emxEnsureCapacity_real_T(&st, theta, b_i, &qh_emlrtRTEI);
        b_i = (int32_T)muDoubleScalarFloor(c_raytracing_params_t_calculati);
        if (c_raytracing_params_t_calculati != b_i) {
          emlrtIntegerCheckR2012b(c_raytracing_params_t_calculati, &v_emlrtDCI,
            &st);
        }

        k = theta->size[0] * theta->size[1];
        b_loop_ub = (int32_T)c_raytracing_params_t_calculati;
        theta->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, theta, k, &qh_emlrtRTEI);
        if (b_loop_ub != b_i) {
          emlrtIntegerCheckR2012b(c_raytracing_params_t_calculati, &y_emlrtDCI,
            &st);
        }

        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          theta->data[b_i] = rtNaN;
        }

        t_arr_start = (((real_T)t_calculation_step_idx + 1.0) - 1.0) *
          c_raytracing_params_t_calculati + 1.0;
        slant_range = (t_arr_start + c_raytracing_params_t_calculati) - 1.0;
        if (slant_range > raytracing_params_t_steps) {
          slant_range = raytracing_params_t_steps;
        }

        b_st.site = &of_emlrtRSI;
        c_st.site = &wf_emlrtRSI;
        if (slant_range < t_arr_start) {
          t_arr->size[0] = 1;
          t_arr->size[1] = 0;
        } else if (t_arr_start == t_arr_start) {
          b_i = t_arr->size[0] * t_arr->size[1];
          t_arr->size[0] = 1;
          nx = (int32_T)muDoubleScalarFloor(slant_range - t_arr_start);
          t_arr->size[1] = nx + 1;
          emxEnsureCapacity_real_T(&c_st, t_arr, b_i, &rh_emlrtRTEI);
          for (b_i = 0; b_i <= nx; b_i++) {
            t_arr->data[b_i] = t_arr_start + (real_T)b_i;
          }
        } else {
          d_st.site = &u_emlrtRSI;
          b_eml_float_colon(&d_st, t_arr_start, slant_range, t_arr);
        }

        /*  array of time values to calculate for at this iteration */
        if (t_arr->size[1] != 0) {
          b_i = decl->size[0] * decl->size[1];
          decl->size[0] = 1;
          decl->size[1] = t_arr->size[1];
          emxEnsureCapacity_real_T(&st, decl, b_i, &sh_emlrtRTEI);
          nx = t_arr->size[0] * t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            if (t_arr->data[b_i] != (int32_T)muDoubleScalarFloor(t_arr->data[b_i]))
            {
              emlrtIntegerCheckR2012b(t_arr->data[b_i], &ab_emlrtDCI, &st);
            }

            k = (int32_T)t_arr->data[b_i];
            if ((k < 1) || (k > c_local_raytracing_params_decl_->size[1])) {
              emlrtDynamicBoundsCheckR2012b(k, 1,
                c_local_raytracing_params_decl_->size[1], &lf_emlrtBCI, &st);
            }

            decl->data[b_i] = c_local_raytracing_params_decl_->data[k - 1];
          }

          nx = t_arr->size[0] * t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            k = (int32_T)t_arr->data[b_i];
            if ((k < 1) || (k > c_local_raytracing_params_h_arr->size[1])) {
              emlrtDynamicBoundsCheckR2012b(k, 1,
                c_local_raytracing_params_h_arr->size[1], &mf_emlrtBCI, &st);
            }
          }

          b_i = az_sun->size[0] * az_sun->size[1];
          az_sun->size[0] = 1;
          az_sun->size[1] = t_arr->size[1];
          emxEnsureCapacity_real_T(&st, az_sun, b_i, &th_emlrtRTEI);
          nx = t_arr->size[0] * t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            az_sun->data[b_i] = c_local_raytracing_params_h_arr->data[(int32_T)
              t_arr->data[b_i] - 1] + 180.0;
          }

          b_st.site = &pf_emlrtRSI;
          e_mod(&b_st, az_sun, elev_sun);
          b_i = elev_sun->size[0] * elev_sun->size[1];
          k = elev_sun->size[0] * elev_sun->size[1];
          elev_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&st, elev_sun, k, &uh_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            elev_sun->data[b_i] -= 180.0;
          }

          b_i = sigma_ew->size[0] * sigma_ew->size[1];
          sigma_ew->size[0] = 1;
          sigma_ew->size[1] = t_arr->size[1];
          emxEnsureCapacity_int8_T(&st, sigma_ew, b_i, &vh_emlrtRTEI);
          nx = t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ew->data[b_i] = 1;
          }

          b_st.site = &sf_emlrtRSI;
          b_abs(&b_st, elev_sun, long_sun);
          b_st.site = &sf_emlrtRSI;
          slant_range = lat;
          b_cotd(&slant_range);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&b_st, gamma_so, b_i, &wh_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = decl->data[b_i];
          }

          c_st.site = &sf_emlrtRSI;
          b_tand(&c_st, gamma_so);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          k = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, gamma_so, k, &xh_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_so->data[b_i] *= slant_range;
          }

          c_st.site = &bg_emlrtRSI;
          d_st.site = &cg_emlrtRSI;
          e_st.site = &dg_emlrtRSI;
          f_st.site = &se_emlrtRSI;
          b_i = lat_sun->size[0] * lat_sun->size[1];
          lat_sun->size[0] = 1;
          lat_sun->size[1] = gamma_so->size[1];
          emxEnsureCapacity_real_T(&f_st, lat_sun, b_i, &ae_emlrtRTEI);
          g_st.site = &qc_emlrtRSI;
          nx = gamma_so->size[1];
          h_st.site = &uc_emlrtRSI;
          if ((1 <= gamma_so->size[1]) && (gamma_so->size[1] > 2147483646)) {
            i_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 0; k < nx; k++) {
            lat_sun->data[k] = muDoubleScalarMax(gamma_so->data[k], -1.0);
          }

          b_st.site = &sf_emlrtRSI;
          c_st.site = &pe_emlrtRSI;
          d_st.site = &qe_emlrtRSI;
          e_st.site = &re_emlrtRSI;
          f_st.site = &se_emlrtRSI;
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = lat_sun->size[1];
          emxEnsureCapacity_real_T(&f_st, gamma_so, b_i, &ae_emlrtRTEI);
          g_st.site = &qc_emlrtRSI;
          nx = lat_sun->size[1];
          h_st.site = &uc_emlrtRSI;
          if ((1 <= lat_sun->size[1]) && (lat_sun->size[1] > 2147483646)) {
            i_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 0; k < nx; k++) {
            gamma_so->data[k] = muDoubleScalarMin(lat_sun->data[k], 1.0);
          }

          b_st.site = &sf_emlrtRSI;
          b_acosd(&b_st, gamma_so);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])long_sun->size, *(int32_T (*)
            [2])gamma_so->size, &ob_emlrtECI, &st);
          k = long_sun->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (long_sun->data[b_i] > gamma_so->data[b_i]) {
              if ((b_i + 1 < 1) || (b_i + 1 > sigma_ew->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sigma_ew->size[1],
                  &nf_emlrtBCI, &st);
              }

              sigma_ew->data[b_i] = -1;
            }
          }

          unnamed_idx_1 = (uint32_T)t_arr->size[1];
          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = t_arr->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &yh_emlrtRTEI);
          nx = t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ns->data[b_i] = 1.0F;
          }

          b_i = sun_vis->size[0] * sun_vis->size[1];
          sun_vis->size[0] = 1;
          sun_vis->size[1] = decl->size[1];
          emxEnsureCapacity_boolean_T(&st, sun_vis, b_i, &ai_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sun_vis->data[b_i] = (lat * (lat - decl->data[b_i]) < 0.0);
          }

          k = sun_vis->size[1] - 1;
          nx = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (sun_vis->data[b_i]) {
              nx++;
            }
          }

          b_i = r->size[0] * r->size[1];
          r->size[0] = 1;
          r->size[1] = nx;
          emxEnsureCapacity_int32_T(&st, r, b_i, &bi_emlrtRTEI);
          nx = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (sun_vis->data[b_i]) {
              r->data[nx] = b_i + 1;
              nx++;
            }
          }

          nx = r->size[0] * r->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            if ((r->data[b_i] < 1) || (r->data[b_i] > (int32_T)unnamed_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(r->data[b_i], 1, (int32_T)
                unnamed_idx_1, &of_emlrtBCI, &st);
            }

            sigma_ns->data[r->data[b_i] - 1] = -1.0F;
          }

          b_i = sigma_w->size[0] * sigma_w->size[1];
          sigma_w->size[0] = 1;
          sigma_w->size[1] = t_arr->size[1];
          emxEnsureCapacity_int8_T(&st, sigma_w, b_i, &ci_emlrtRTEI);
          nx = t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_w->data[b_i] = 1;
          }

          k = elev_sun->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (elev_sun->data[b_i] < 0.0) {
              if ((b_i + 1 < 1) || (b_i + 1 > sigma_w->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sigma_w->size[1],
                  &pf_emlrtBCI, &st);
              }

              sigma_w->data[b_i] = -1;
            }
          }

          b_i = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          long_sun->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&st, long_sun, b_i, &di_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            long_sun->data[b_i] = decl->data[b_i];
          }

          b_st.site = &qf_emlrtRSI;
          c_cosd(&b_st, long_sun);
          slant_range = lat;
          b_cosd(&slant_range);
          b_i = long_sun->size[0] * long_sun->size[1];
          k = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&st, long_sun, k, &di_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            long_sun->data[b_i] *= slant_range;
          }

          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = elev_sun->size[1];
          emxEnsureCapacity_real_T(&st, gamma_so, b_i, &ei_emlrtRTEI);
          nx = elev_sun->size[0] * elev_sun->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = elev_sun->data[b_i];
          }

          b_st.site = &qf_emlrtRSI;
          c_cosd(&b_st, gamma_so);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])long_sun->size, *(int32_T (*)
            [2])gamma_so->size, &rb_emlrtECI, &st);
          b_i = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          theta_z->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&st, theta_z, b_i, &fi_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            theta_z->data[b_i] = decl->data[b_i];
          }

          b_st.site = &qf_emlrtRSI;
          c_sind(&b_st, theta_z);
          slant_range = lat;
          b_sind(&slant_range);
          b_i = theta_z->size[0] * theta_z->size[1];
          k = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          emxEnsureCapacity_real_T(&st, theta_z, k, &fi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            theta_z->data[b_i] *= slant_range;
          }

          b_i = long_sun->size[0] * long_sun->size[1];
          k = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&st, long_sun, k, &di_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            long_sun->data[b_i] *= gamma_so->data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])theta_z->size, *(int32_T (*)
            [2])long_sun->size, &qb_emlrtECI, &st);
          b_i = theta_z->size[0] * theta_z->size[1];
          k = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          emxEnsureCapacity_real_T(&st, theta_z, k, &gi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            theta_z->data[b_i] += long_sun->data[b_i];
          }

          b_st.site = &qf_emlrtRSI;
          b_acos(&b_st, theta_z);

          /* rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES )) */
          b_st.site = &rf_emlrtRSI;
          c_sind(&b_st, elev_sun);
          b_i = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          long_sun->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&st, long_sun, b_i, &hi_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            long_sun->data[b_i] = decl->data[b_i];
          }

          b_st.site = &rf_emlrtRSI;
          c_cosd(&b_st, long_sun);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])elev_sun->size, *(int32_T (*)
            [2])long_sun->size, &pb_emlrtECI, &st);
          b_st.site = &rf_emlrtRSI;
          b_i = elev_sun->size[0] * elev_sun->size[1];
          k = elev_sun->size[0] * elev_sun->size[1];
          elev_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, elev_sun, k, &ii_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            elev_sun->data[b_i] *= long_sun->data[b_i];
          }

          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&b_st, gamma_so, b_i, &ji_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = theta_z->data[b_i];
          }

          c_st.site = &rf_emlrtRSI;
          c_sin(&c_st, gamma_so);
          if (elev_sun->size[1] != gamma_so->size[1]) {
            emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI, "MATLAB:dimagree",
              "MATLAB:dimagree", 0);
          }

          b_i = elev_sun->size[0] * elev_sun->size[1];
          k = elev_sun->size[0] * elev_sun->size[1];
          elev_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, elev_sun, k, &ki_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            elev_sun->data[b_i] /= gamma_so->data[b_i];
          }

          b_st.site = &rf_emlrtRSI;
          c_st.site = &bg_emlrtRSI;
          d_st.site = &cg_emlrtRSI;
          e_st.site = &dg_emlrtRSI;
          f_st.site = &se_emlrtRSI;
          b_i = lat_sun->size[0] * lat_sun->size[1];
          lat_sun->size[0] = 1;
          lat_sun->size[1] = elev_sun->size[1];
          emxEnsureCapacity_real_T(&f_st, lat_sun, b_i, &ae_emlrtRTEI);
          g_st.site = &qc_emlrtRSI;
          nx = elev_sun->size[1];
          h_st.site = &eg_emlrtRSI;
          if ((1 <= elev_sun->size[1]) && (elev_sun->size[1] > 2147483646)) {
            i_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 0; k < nx; k++) {
            lat_sun->data[k] = muDoubleScalarMax(-1.0, elev_sun->data[k]);
          }

          b_st.site = &rf_emlrtRSI;
          c_st.site = &pe_emlrtRSI;
          d_st.site = &qe_emlrtRSI;
          e_st.site = &re_emlrtRSI;
          f_st.site = &se_emlrtRSI;
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = lat_sun->size[1];
          emxEnsureCapacity_real_T(&f_st, gamma_so, b_i, &ae_emlrtRTEI);
          g_st.site = &qc_emlrtRSI;
          nx = lat_sun->size[1];
          h_st.site = &eg_emlrtRSI;
          if ((1 <= lat_sun->size[1]) && (lat_sun->size[1] > 2147483646)) {
            i_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 0; k < nx; k++) {
            gamma_so->data[k] = muDoubleScalarMin(1.0, lat_sun->data[k]);
          }

          b_st.site = &rf_emlrtRSI;
          b_asind(&b_st, gamma_so);
          k = theta_z->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta_z->data[b_i] == 0.0) {
              if ((b_i + 1 < 1) || (b_i + 1 > gamma_so->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, gamma_so->size[1],
                  &qf_emlrtBCI, &st);
              }

              gamma_so->data[b_i] = 0.0;
            }
          }

          /*  Avoid division by 0 error */
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ew->size, *(int32_T (*)
            [2])sigma_ns->size, &lb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          gamma_s->size[1] = sigma_ew->size[1];
          emxEnsureCapacity_real32_T(&st, gamma_s, b_i, &li_emlrtRTEI);
          nx = sigma_ew->size[0] * sigma_ew->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_s->data[b_i] = (real32_T)sigma_ew->data[b_i] * sigma_ns->
              data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_s->size, *(int32_T (*)
            [2])gamma_so->size, &lb_emlrtECI, &st);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ew->size, *(int32_T (*)
            [2])sigma_ns->size, &nb_emlrtECI, &st);
          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = gamma_s->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &mi_emlrtRTEI);
          nx = gamma_s->size[0] * gamma_s->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ns->data[b_i] = (1.0F - gamma_s->data[b_i]) / 2.0F;
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ns->size, *(int32_T (*)
            [2])sigma_w->size, &mb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          k = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, gamma_s, k, &li_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] *= (real32_T)gamma_so->data[b_i];
          }

          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          k = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, sigma_ns, k, &ni_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            sigma_ns->data[b_i] = sigma_ns->data[b_i] * (real32_T)sigma_w->
              data[b_i] * 180.0F;
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_s->size, *(int32_T (*)
            [2])sigma_ns->size, &lb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          k = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, gamma_s, k, &oi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] += sigma_ns->data[b_i];
          }

          b_i = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          long_sun->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&st, long_sun, b_i, &pi_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            long_sun->data[b_i] = theta_z->data[b_i];
          }

          b_st.site = &tf_emlrtRSI;
          c_sin(&b_st, long_sun);
          slant_range = local_raytracing_params_slope;
          b_sind(&slant_range);
          b_i = long_sun->size[0] * long_sun->size[1];
          k = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          emxEnsureCapacity_real_T(&st, long_sun, k, &pi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            long_sun->data[b_i] *= slant_range;
          }

          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = gamma_s->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &qi_emlrtRTEI);
          nx = gamma_s->size[0] * gamma_s->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ns->data[b_i] = gamma_s->data[b_i] - (real32_T)
              local_raytracing_params_aspect;
          }

          b_st.site = &tf_emlrtRSI;
          d_cosd(&b_st, sigma_ns);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])long_sun->size, *(int32_T (*)
            [2])sigma_ns->size, &kb_emlrtECI, &st);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&st, gamma_so, b_i, &ri_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = theta_z->data[b_i];
          }

          b_st.site = &tf_emlrtRSI;
          b_cos(&b_st, gamma_so);
          slant_range = local_raytracing_params_slope;
          b_cosd(&slant_range);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          k = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          emxEnsureCapacity_real_T(&st, gamma_so, k, &ri_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_so->data[b_i] *= slant_range;
          }

          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = long_sun->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &pi_emlrtRTEI);
          nx = long_sun->size[0] * long_sun->size[1] - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            sigma_ns->data[b_i] *= (real32_T)long_sun->data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_so->size, *(int32_T (*)
            [2])sigma_ns->size, &jb_emlrtECI, &st);
          if (1.0 > c_raytracing_params_t_calculati) {
            emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)
              c_raytracing_params_t_calculati, &kf_emlrtBCI, &st);
          }

          if ((t_arr->size[1] < 1) || (t_arr->size[1] > b_loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(t_arr->size[1], 1, (int32_T)
              c_raytracing_params_t_calculati, &jf_emlrtBCI, &st);
          }

          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = gamma_so->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &si_emlrtRTEI);
          nx = gamma_so->size[0] * gamma_so->size[1] - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            sigma_ns->data[b_i] += (real32_T)gamma_so->data[b_i];
          }

          b_st.site = &tf_emlrtRSI;
          c_acos(&b_st, sigma_ns);
          b_i = long_sun->size[0] * long_sun->size[1];
          long_sun->size[0] = 1;
          long_sun->size[1] = sigma_ns->size[1];
          emxEnsureCapacity_real_T(&st, long_sun, b_i, &ti_emlrtRTEI);
          nx = sigma_ns->size[0] * sigma_ns->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            long_sun->data[b_i] = sigma_ns->data[b_i];
          }

          if (t_arr->size[1] != long_sun->size[1]) {
            emlrtSubAssignSizeCheck1dR2017a(t_arr->size[1], long_sun->size[1],
              &ib_emlrtECI, &st);
          }

          nx = long_sun->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            theta->data[b_i] = long_sun->data[b_i];
          }

          k = theta_z->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta_z->data[b_i] > 1.5707963267948966) {
              if ((b_i + 1 < 1) || (b_i + 1 > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, theta->size[1],
                  &rf_emlrtBCI, &st);
              }

              theta->data[b_i] = rtNaN;
            }
          }

          k = theta->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta->data[b_i] > 1.5707963267948966) {
              if ((b_i + 1 < 1) || (b_i + 1 > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, theta->size[1],
                  &sf_emlrtBCI, &st);
              }

              theta->data[b_i] = rtNaN;
            }
          }

          b_i = az_sun->size[0] * az_sun->size[1];
          az_sun->size[0] = 1;
          az_sun->size[1] = t_arr->size[1];
          emxEnsureCapacity_real_T(&st, az_sun, b_i, &ui_emlrtRTEI);
          nx = t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            az_sun->data[b_i] = rtNaN;
          }

          k = t_arr->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if ((!(lat < decl->data[b_i])) && ((b_i + 1 < 1) || (b_i + 1 >
                  gamma_s->size[1]))) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, gamma_s->size[1],
                &af_emlrtBCI, &st);
            }
          }

          k = t_arr->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (!(lat < decl->data[b_i])) {
              if ((b_i + 1 < 1) || (b_i + 1 > az_sun->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, az_sun->size[1],
                  &tf_emlrtBCI, &st);
              }

              az_sun->data[b_i] = gamma_s->data[b_i] + 180.0F;
            }
          }

          k = t_arr->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if ((lat < decl->data[b_i]) && ((b_i + 1 < 1) || (b_i + 1 >
                  gamma_s->size[1]))) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, gamma_s->size[1],
                &ye_emlrtBCI, &st);
            }
          }

          k = t_arr->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (lat < decl->data[b_i]) {
              if ((b_i + 1 < 1) || (b_i + 1 > az_sun->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, az_sun->size[1],
                  &uf_emlrtBCI, &st);
              }

              az_sun->data[b_i] = -gamma_s->data[b_i];
            }
          }

          b_i = elev_sun->size[0] * elev_sun->size[1];
          elev_sun->size[0] = 1;
          elev_sun->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&st, elev_sun, b_i, &vi_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            elev_sun->data[b_i] = 90.0 - 57.295779513082323 * theta_z->data[b_i];
          }

          slant_range = 1.1 * raytracing_params_max_distance;

          /*  ensure outside of grid */
          /*  no longer necessary to switch to double with rewritten builtins */
          b_st.site = &uf_emlrtRSI;
          my_aer2geodetic(&b_st, az_sun, elev_sun, slant_range, lat, b_long,
                          c_local_raytracing_params_heigh,
                          raytracing_params_ref_sphere.MeanRadius,
                          raytracing_params_ref_sphere.Flattening, lat_sun,
                          long_sun, gamma_so);
          b_i = az_sun->size[0] * az_sun->size[1];
          az_sun->size[0] = 1;
          az_sun->size[1] = lat_sun->size[1];
          emxEnsureCapacity_real_T(&st, az_sun, b_i, &ge_emlrtRTEI);
          nx = lat_sun->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            az_sun->data[b_i] = lat;
          }

          b_i = elev_sun->size[0] * elev_sun->size[1];
          elev_sun->size[0] = 1;
          elev_sun->size[1] = lat_sun->size[1];
          emxEnsureCapacity_real_T(&st, elev_sun, b_i, &ge_emlrtRTEI);
          nx = lat_sun->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            elev_sun->data[b_i] = b_long;
          }

          b_st.site = &vf_emlrtRSI;
          mexable_los2(&b_st, c_raytracing_params_extended_el, az_sun, elev_sun,
                       lat_sun, long_sun, gamma_so, r_moon,
                       c_raytracing_params_extended_sa,
                       c_raytracing_params_public_rast, sun_vis);
          k = theta_z->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta_z->data[b_i] == 0.0) {
              if ((b_i + 1 < 1) || (b_i + 1 > sun_vis->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sun_vis->size[1],
                  &vf_emlrtBCI, &st);
              }

              sun_vis->data[b_i] = true;
            }
          }

          k = sun_vis->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (!sun_vis->data[b_i]) {
              if ((b_i + 1 < 1) || (b_i + 1 > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, theta->size[1],
                  &wf_emlrtBCI, &st);
              }

              theta->data[b_i] = rtNaN;
            }
          }

          if (theta->size[1] < b_loop_ub) {
            if ((real_T)theta->size[1] + 1.0 > c_raytracing_params_t_calculati)
            {
              b_i = -1;
              b_loop_ub = 0;
            } else {
              if (((int32_T)(theta->size[1] + 1U) < 1) || ((int32_T)(theta->
                    size[1] + 1U) > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(theta->size[1] + 1U), 1,
                  theta->size[1], &if_emlrtBCI, &st);
              }

              b_i = theta->size[1] - 1;
              if ((c_raytracing_params_t_calculati < 1.0) || (b_loop_ub >
                   theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)
                  c_raytracing_params_t_calculati, 1, theta->size[1],
                  &hf_emlrtBCI, &st);
              }
            }

            b_loop_ub = (b_loop_ub - b_i) - 1;
            for (k = 0; k < b_loop_ub; k++) {
              theta->data[(b_i + k) + 1] = rtNaN;
            }
          }

          b_i = t_calculation_step_idx + 1;
          if ((b_i < 1) || (b_i > theta_matrix->size[0])) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, theta_matrix->size[0],
              &gf_emlrtBCI, &st);
          }

          iv[0] = 1;
          iv[1] = theta_matrix->size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &theta->size[0], 2,
            &hb_emlrtECI, &st);
          b_loop_ub = theta->size[1];
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            theta_matrix->data[t_calculation_step_idx + theta_matrix->size[0] *
              b_i] = theta->data[b_i];
          }
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 15);
      emxFree_boolean_T(&sun_vis);
      emxFree_real_T(&gamma_so);
      emxFree_real_T(&long_sun);
      emxFree_real_T(&lat_sun);
      emxFree_real_T(&elev_sun);
      emxFree_real_T(&az_sun);
      emxFree_real32_T(&gamma_s);
      emxFree_real_T(&theta_z);
      emxFree_int8_T(&sigma_w);
      emxFree_real32_T(&sigma_ns);
      emxFree_int8_T(&sigma_ew);
      emxFree_real_T(&decl);
      emxFree_real_T(&t_arr);
      emxFree_real_T(&theta);
      emxFree_int32_T(&r);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  i = theta_arr->size[0] * theta_arr->size[1];
  theta_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, theta_arr, i, &oh_emlrtRTEI);
  d = c_raytracing_params_t_calculati * d_raytracing_params_t_calculati;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &u_emlrtDCI, sp);
  }

  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &t_emlrtDCI, sp);
  }

  i = theta_arr->size[0] * theta_arr->size[1];
  theta_arr->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, theta_arr, i, &oh_emlrtRTEI);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &x_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    theta_arr->data[i] = rtNaN;
  }

  i = (int32_T)d_raytracing_params_t_calculati;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d_raytracing_params_t_calculati,
    mxDOUBLE_CLASS, (int32_T)d_raytracing_params_t_calculati, &x_emlrtRTEI, sp);
  for (idx = 0; idx < i; idx++) {
    /*  get values in correct order for time series */
    d = c_raytracing_params_t_calculati * (((real_T)idx + 1.0) - 1.0) + 1.0;
    d1 = c_raytracing_params_t_calculati * ((real_T)idx + 1.0);
    if (d > d1) {
      i1 = 0;
      i2 = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &n_emlrtDCI, sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > theta_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, theta_arr->size[1],
          &ef_emlrtBCI, sp);
      }

      i1 = (int32_T)d - 1;
      if (((int32_T)d1 < 1) || ((int32_T)d1 > theta_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, theta_arr->size[1],
          &df_emlrtBCI, sp);
      }

      i2 = (int32_T)d1;
    }

    loop_ub = idx + 1;
    if ((loop_ub < 1) || (loop_ub > theta_matrix->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, theta_matrix->size[0],
        &ff_emlrtBCI, sp);
    }

    loop_ub = theta_matrix->size[1];
    i2 -= i1;
    if (i2 != theta_matrix->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(i2, theta_matrix->size[1], &gb_emlrtECI,
        sp);
    }

    for (i2 = 0; i2 < loop_ub; i2++) {
      theta_arr->data[i1 + i2] = theta_matrix->data[idx + theta_matrix->size[0] *
        i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&theta_matrix);
  if (1.0 > raytracing_params_t_steps) {
    i = 0;
  } else {
    if (1 > theta_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, theta_arr->size[1], &cf_emlrtBCI, sp);
    }

    if (raytracing_params_t_steps != (int32_T)muDoubleScalarFloor
        (raytracing_params_t_steps)) {
      emlrtIntegerCheckR2012b(raytracing_params_t_steps, &m_emlrtDCI, sp);
    }

    if (((int32_T)raytracing_params_t_steps < 1) || ((int32_T)
         raytracing_params_t_steps > theta_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)raytracing_params_t_steps, 1,
        theta_arr->size[1], &bf_emlrtBCI, sp);
    }

    i = (int32_T)raytracing_params_t_steps;
  }

  i1 = theta_arr->size[0] * theta_arr->size[1];
  theta_arr->size[1] = i;
  emxEnsureCapacity_real_T(sp, theta_arr, i1, &ph_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (raytrace_pixel.c) */
