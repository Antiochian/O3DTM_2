/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * no_raytracing_timeloop.c
 *
 * Code generation for function 'no_raytracing_timeloop'
 *
 */

/* Include files */
#include "no_raytracing_timeloop.h"
#include "abs.h"
#include "acos.h"
#include "acosd.h"
#include "asind.h"
#include "colon.h"
#include "cos.h"
#include "cosd.h"
#include "cotd.h"
#include "eml_int_forloop_overflow_check.h"
#include "mod.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "sin.h"
#include "sind.h"
#include "tand.h"
#include "temperature_sim_pixel_tick.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo jf_emlrtRSI = { 108,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 117,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 124,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 126,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 119,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 130,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 154,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 162,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 163,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 164,/* lineNo */
  "no_raytracing_timeloop",            /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 28, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 14, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 29, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 58, /* lineNo */
  "maximum2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 174,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 29, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  41,                                  /* colNo */
  "sample_timepoints_local",           /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  36,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 96,  /* lineNo */
  19,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 96,  /* lineNo */
  19,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 101, /* lineNo */
  35,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo y_emlrtRTEI = { 101,/* lineNo */
  33,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo gb_emlrtECI = { 2,  /* nDims */
  124,                                 /* lineNo */
  44,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo hb_emlrtECI = { 2,  /* nDims */
  124,                                 /* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  126,                                 /* lineNo */
  37,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo jb_emlrtECI = { 2,  /* nDims */
  119,                                 /* lineNo */
  14,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  129,                                 /* lineNo */
  15,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  129,                                 /* lineNo */
  50,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo mb_emlrtECI = { 2,  /* nDims */
  129,                                 /* lineNo */
  46,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  130,                                 /* lineNo */
  62,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtECInfo ob_emlrtECI = { 2,  /* nDims */
  130,                                 /* lineNo */
  34,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  11,                                  /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  13,                                  /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  130,                                 /* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  15,                                  /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  21,                                  /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = { 141,/* lineNo */
  11,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  18,                                  /* colNo */
  "theta_matrix",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  137,                                 /* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  97,                                  /* colNo */
  "theta_matrix",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 143, /* lineNo */
  15,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  15,                                  /* colNo */
  "theta_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  51,                                  /* colNo */
  "theta_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  143,                                 /* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  23,                                  /* colNo */
  "theta_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 146, /* lineNo */
  25,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  25,                                  /* colNo */
  "theta_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  28,                                  /* colNo */
  "t_arr",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  152,                                 /* lineNo */
  29,                                  /* colNo */
  "theta_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  157,                                 /* lineNo */
  62,                                  /* colNo */
  "T_new_arr",                         /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  52,                                  /* colNo */
  "sample_surface_temperatures_local", /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  29,                                  /* colNo */
  "sample_weights",                    /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo bb_emlrtRTEI = { 52,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 20,/* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtDCInfo r_emlrtDCI = { 63,  /* lineNo */
  22,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 100, /* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 100, /* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 100, /* lineNo */
  41,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 100, /* lineNo */
  41,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 140, /* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 140, /* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 102, /* lineNo */
  19,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 63, /* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  1,                                   /* colNo */
  "sample_t_idx",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  5,                                   /* colNo */
  "sample_weights",                    /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  5,                                   /* colNo */
  "sample_t_idx",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 100,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 140,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 102,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  157,                                 /* lineNo */
  9,                                   /* colNo */
  "sample_T_bounds",                   /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  31,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  5,                                   /* colNo */
  "T_error_local",                     /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  27,                                  /* colNo */
  "decl_arr_local",                    /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 114,/* lineNo */
  27,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  21,                                  /* colNo */
  "h_arr_local",                       /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  5,                                   /* colNo */
  "sigma_ew",                          /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  5,                                   /* colNo */
  "sigma_ns",                          /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  5,                                   /* colNo */
  "sigma_w",                           /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  5,                                   /* colNo */
  "gamma_so",                          /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  131,                                 /* lineNo */
  5,                                   /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  5,                                   /* colNo */
  "theta",                             /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  36,                                  /* colNo */
  "sample_T_bounds",                   /* aName */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo rh_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 60,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 63,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 64,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 65,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 92,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 100,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 140,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 146,/* lineNo */
  1,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 102,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 154,/* lineNo */
  97,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 108,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 114,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 117,/* lineNo */
  13,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 64,/* lineNo */
  67,                                  /* colNo */
  "binaryMinOrMax",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\binaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 117,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 118,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 119,/* lineNo */
  48,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 119,/* lineNo */
  37,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 120,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 121,/* lineNo */
  14,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 1,/* lineNo */
  77,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 122,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 124,/* lineNo */
  44,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 124,/* lineNo */
  67,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 124,/* lineNo */
  20,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 124,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 126,/* lineNo */
  37,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 126,/* lineNo */
  58,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 129,/* lineNo */
  15,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 129,/* lineNo */
  47,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 129,/* lineNo */
  46,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 129,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 130,/* lineNo */
  62,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 130,/* lineNo */
  89,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 130,/* lineNo */
  34,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 130,/* lineNo */
  29,                                  /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 130,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 126,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 112,/* lineNo */
  5,                                   /* colNo */
  "no_raytracing_timeloop",            /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\1D model (legacy)\\no_raytracing_timeloop."
  "m"                                  /* pName */
};

/* Function Definitions */
void no_raytracing_timeloop(const emlrtStack *sp, const emxArray_real_T *T_arr,
  const emxArray_real_T *dz_arr, const struct_T *temperature_parameters, const
  b_struct_T *local_temperature_params, const struct1_T *raytracing_params,
  const c_struct_T local_raytracing_params, real_T lat, const emxArray_real_T
  *sample_timepoints_local, const emxArray_real_T
  *c_sample_surface_temperatures_l, emxArray_real_T *Tmin_local, emxArray_real_T
  *Tmax_local, emxArray_real_T *T_error_local)
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
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  emlrtStack n_st;
  emlrtStack o_st;
  emlrtStack p_st;
  emlrtStack q_st;
  emlrtStack st;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r;
  emxArray_int8_T *sigma_ew;
  emxArray_int8_T *sigma_w;
  emxArray_real32_T *gamma_s;
  emxArray_real32_T *sigma_ns;
  emxArray_real_T *T_new_arr;
  emxArray_real_T *b_T_new_arr;
  emxArray_real_T *decl;
  emxArray_real_T *gamma_so;
  emxArray_real_T *h;
  emxArray_real_T *h_arr_local;
  emxArray_real_T *r2;
  emxArray_real_T *sample_T_bounds;
  emxArray_real_T *sample_t_idx;
  emxArray_real_T *sample_weights;
  emxArray_real_T *step_t_arr;
  emxArray_real_T *theta;
  emxArray_real_T *theta_matrix;
  emxArray_real_T *theta_z;
  emxArray_real_T *z;
  emxArray_real_T *z1;
  real_T P;
  real_T bottom_layer_idx_local;
  real_T d;
  real_T depth_update_wait_t_local;
  real_T dj;
  real_T exact_idx;
  real_T lower_idx;
  real_T t_arr_end;
  real_T t_arr_start;
  real_T t_calculation_step_length;
  real_T t_calculation_steps;
  real_T t_steps;
  real_T t_wait;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T k;
  int32_T loop_ub;
  int32_T nx;
  int32_T sample_idx;
  int32_T t_calculation_step_idx;
  uint32_T unnamed_idx_1;
  uint32_T upcoming_sample_idx_ptr;
  boolean_T emlrtHadParallelError = false;
  b_st.prev = sp;
  b_st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &T_new_arr, 3, &rh_emlrtRTEI, true);

  /*  Unpack temperature params */
  /* unpack global params */
  /* seconds from 19-Feb-2000 21:10:27 */
  depth_update_wait_t_local = temperature_parameters->depth_update_wait_t_local;
  bottom_layer_idx_local = temperature_parameters->bottom_layer_idx_local;

  /*  dh = temperature_parameters.dh; */
  P = temperature_parameters->P;
  t_wait = temperature_parameters->t_wait;

  /*  Initialise temperature arrays from T_arr */
  i = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
  T_new_arr->size[0] = 1;
  T_new_arr->size[1] = 1;
  T_new_arr->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, T_new_arr, i, &rh_emlrtRTEI);
  loop_ub = T_arr->size[0] * T_arr->size[1] * T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    T_new_arr->data[i] = T_arr->data[i];
  }

  i = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
  Tmax_local->size[0] = 1;
  Tmax_local->size[1] = 1;
  Tmax_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, Tmax_local, i, &sh_emlrtRTEI);
  loop_ub = T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmax_local->data[i] = rtNaN;
  }

  i = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
  Tmin_local->size[0] = 1;
  Tmin_local->size[1] = 1;
  Tmin_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, Tmin_local, i, &th_emlrtRTEI);
  loop_ub = T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmin_local->data[i] = rtNaN;
  }

  /*  Unpack raytracing params */
  /*  max_distance = raytracing_params.max_distance; */
  t_steps = raytracing_params->t_steps;
  t_calculation_steps = raytracing_params->t_calculation_steps;
  t_calculation_step_length = raytracing_params->t_calculation_step_length;

  /*  ref_sphere = raytracing_params.ref_sphere; */
  /*  extended_elevation_matrix = raytracing_params.extended_elevation_matrix; */
  /*  const_decl = raytracing_params.const_decl; */
  /*  public_raster_struct = raytracing_params.public_raster_struct; */
  /*  height_px = local_raytracing_params.height_px; */
  /*   */
  /*  aspect = local_raytracing_params.aspect; */
  /*  slope = local_raytracing_params.slope; */
  /*  h_arr_local = local_raytracing_params.h_arr_local; */
  /*  decl_arr_local = local_raytracing_params.decl_arr_local; */
  /*   */
  /*  r_moon = ref_sphere.Radius; */
  /*  sample_dens = raytracing_params.sample_dens; */
  /*  theta_arr = raytrace_pixel(lat, long, raytracing_params, local_raytracing_params, use_seasons); */
  /*  Initialise error calculating */
  /* Decide which timesteps need to be remembered */
  /* for every target jd, find the timestep ahead and behind it, and also */
  /* weight them such that for target times 1.3, 6.8, 7.0 we have: */
  /*  sample_T_bounds = [t1,t2 , t6,t7 , t7,t7,   ... ] */
  /*  sample_t_idx    = [ 1,2  ,  6,7  ,  7,7,    ... ] */
  /*  sample_weights  = [ 0.3  ,  0.8  ,  0.0,    ... ] */
  /*   */
  /*  Note that the weights arr is half as long as the sampletime array */
  dj = temperature_parameters->dt / 86400.0;

  /*  jd_error_local = NaN(size(sample_timepoints_local)); */
  loop_ub = sample_timepoints_local->size[1];
  i = T_error_local->size[0] * T_error_local->size[1];
  T_error_local->size[0] = 1;
  T_error_local->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, T_error_local, i, &uh_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    T_error_local->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_t_idx, 2, &vh_emlrtRTEI, true);
  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_t_idx, i, &vh_emlrtRTEI);
  d = 2.0 * (real_T)sample_timepoints_local->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &r_emlrtDCI, sp);
  }

  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, sample_t_idx, i, &vh_emlrtRTEI);
  d = 2.0 * (real_T)sample_timepoints_local->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &ab_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    sample_t_idx->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_weights, 2, &wh_emlrtRTEI, true);
  loop_ub = sample_timepoints_local->size[1];
  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[0] = 1;
  sample_weights->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, sample_weights, i, &wh_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    sample_weights->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_T_bounds, 2, &xh_emlrtRTEI, true);
  loop_ub = sample_timepoints_local->size[1] << 1;
  i = sample_T_bounds->size[0] * sample_T_bounds->size[1];
  sample_T_bounds->size[0] = 1;
  sample_T_bounds->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, sample_T_bounds, i, &xh_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    sample_T_bounds->data[i] = rtNaN;
  }

  i = sample_timepoints_local->size[1];
  for (sample_idx = 0; sample_idx < i; sample_idx++) {
    i1 = sample_timepoints_local->size[1];
    i2 = sample_idx + 1;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ye_emlrtBCI, sp);
    }

    exact_idx = (sample_timepoints_local->data[sample_idx] -
                 raytracing_params->start_julian_date) / dj;
    lower_idx = muDoubleScalarFloor(exact_idx);
    if (((int32_T)(sample_idx + 1U) < 1) || ((int32_T)(sample_idx + 1U) >
         sample_weights->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sample_idx + 1U), 1,
        sample_weights->size[1], &rf_emlrtBCI, sp);
    }

    sample_weights->data[sample_idx] = exact_idx - lower_idx;
    d = 2.0 * ((real_T)sample_idx + 1.0);
    loop_ub = sample_t_idx->size[1];
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) > sample_t_idx->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1, sample_t_idx->size[1],
        &sf_emlrtBCI, sp);
    }

    sample_t_idx->data[(int32_T)(d + -1.0) - 1] = lower_idx;
    if (((int32_T)d < 1) || ((int32_T)d > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, loop_ub, &sf_emlrtBCI, sp);
    }

    sample_t_idx->data[(int32_T)d - 1] = muDoubleScalarCeil(exact_idx);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  if (sample_t_idx->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(sample_t_idx->size[1], 1, sample_t_idx->size[1],
      &qf_emlrtBCI, sp);
  }

  sample_t_idx->data[sample_t_idx->size[1] - 1] = 0.0;

  /* dummy value, never reached */
  /* track the currently-in-demand t_idx using a pointer index "upcoming_sample_idx_ptr" */
  /*  and "upcoming_sample_idx" for the actual value (save lookup time) */
  upcoming_sample_idx_ptr = 1U;

  /* this redundant phrasing is to demonstrate how the update process works */
  if (1 > sample_t_idx->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sample_t_idx->size[1], &af_emlrtBCI, sp);
  }

  emxInit_real_T(sp, &h_arr_local, 2, &yh_emlrtRTEI, true);
  lower_idx = sample_t_idx->data[0];

  /*  do crippled raytracing */
  /*  unpack local params */
  /*  height_px = local_raytracing_params.height_px; */
  dj = local_raytracing_params.aspect;
  exact_idx = local_raytracing_params.slope;
  i = h_arr_local->size[0] * h_arr_local->size[1];
  h_arr_local->size[0] = 1;
  h_arr_local->size[1] = local_raytracing_params.h_arr_local->size[1];
  emxEnsureCapacity_real_T(sp, h_arr_local, i, &yh_emlrtRTEI);
  loop_ub = local_raytracing_params.h_arr_local->size[0] *
    local_raytracing_params.h_arr_local->size[1];
  for (i = 0; i < loop_ub; i++) {
    h_arr_local->data[i] = local_raytracing_params.h_arr_local->data[i];
  }

  if (!(raytracing_params->t_steps >= 0.0)) {
    emlrtNonNegativeCheckR2012b(raytracing_params->t_steps, &m_emlrtDCI, sp);
  }

  if (raytracing_params->t_steps != (int32_T)muDoubleScalarFloor
      (raytracing_params->t_steps)) {
    emlrtIntegerCheckR2012b(raytracing_params->t_steps, &n_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &theta_matrix, 2, &ai_emlrtRTEI, true);

  /*  Time loop */
  /*  do time sim */
  if (!(raytracing_params->t_calculation_steps >= 0.0)) {
    emlrtNonNegativeCheckR2012b(raytracing_params->t_calculation_steps,
      &t_emlrtDCI, sp);
  }

  d = (int32_T)muDoubleScalarFloor(raytracing_params->t_calculation_steps);
  if (raytracing_params->t_calculation_steps != d) {
    emlrtIntegerCheckR2012b(raytracing_params->t_calculation_steps, &s_emlrtDCI,
      sp);
  }

  i = theta_matrix->size[0] * theta_matrix->size[1];
  theta_matrix->size[0] = (int32_T)raytracing_params->t_calculation_steps;
  emxEnsureCapacity_real_T(sp, theta_matrix, i, &ai_emlrtRTEI);
  if (!(raytracing_params->t_calculation_step_length >= 0.0)) {
    emlrtNonNegativeCheckR2012b(raytracing_params->t_calculation_step_length,
      &v_emlrtDCI, sp);
  }

  i = (int32_T)muDoubleScalarFloor(raytracing_params->t_calculation_step_length);
  if (raytracing_params->t_calculation_step_length != i) {
    emlrtIntegerCheckR2012b(raytracing_params->t_calculation_step_length,
      &u_emlrtDCI, sp);
  }

  i1 = theta_matrix->size[0] * theta_matrix->size[1];
  theta_matrix->size[1] = (int32_T)raytracing_params->t_calculation_step_length;
  emxEnsureCapacity_real_T(sp, theta_matrix, i1, &ai_emlrtRTEI);
  if (raytracing_params->t_calculation_steps != d) {
    emlrtIntegerCheckR2012b(raytracing_params->t_calculation_steps, &bb_emlrtDCI,
      sp);
  }

  if (raytracing_params->t_calculation_step_length != i) {
    emlrtIntegerCheckR2012b(raytracing_params->t_calculation_step_length,
      &bb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)raytracing_params->t_calculation_steps * (int32_T)
    raytracing_params->t_calculation_step_length;
  for (i = 0; i < loop_ub; i++) {
    theta_matrix->data[i] = rtNaN;
  }

  if (raytracing_params->t_calculation_steps != d) {
    emlrtIntegerCheckR2012b(raytracing_params->t_calculation_steps, &o_emlrtDCI,
      sp);
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, raytracing_params->t_calculation_steps,
    mxDOUBLE_CLASS, (int32_T)raytracing_params->t_calculation_steps,
    &y_emlrtRTEI, sp);
  loop_ub = (int32_T)raytracing_params->t_calculation_steps - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r,r1,z1,r2,theta,step_t_arr,decl,h,sigma_ew,sigma_ns,sigma_w,theta_z,gamma_so,gamma_s,t_arr_end,t_arr_start,b_emlrtJBEnviron,q_st,b_i,k,nx,unnamed_idx_1,iv) \
 firstprivate(st,j_st,k_st,l_st,m_st,n_st,o_st,p_st,emlrtHadParallelError)

  {
    if (setjmp(b_emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      j_st.prev = &st;
      j_st.tls = st.tls;
      k_st.prev = &j_st;
      k_st.tls = j_st.tls;
      l_st.prev = &k_st;
      l_st.tls = k_st.tls;
      m_st.prev = &l_st;
      m_st.tls = l_st.tls;
      n_st.prev = &m_st;
      n_st.tls = m_st.tls;
      o_st.prev = &n_st;
      o_st.tls = n_st.tls;
      p_st.prev = &o_st;
      p_st.tls = o_st.tls;
      q_st.prev = &p_st;
      q_st.tls = p_st.tls;
      emxInit_int32_T(&st, &r, 2, &pi_emlrtRTEI, true);
      emxInit_boolean_T(&st, &r1, 2, &oi_emlrtRTEI, true);
      emxInit_real_T(&st, &z1, 2, &pi_emlrtRTEI, true);
      emxInit_real_T(&st, &r2, 2, &ri_emlrtRTEI, true);
      emxInit_real_T(&st, &theta, 2, &di_emlrtRTEI, true);
      emxInit_real_T(&st, &step_t_arr, 2, &fi_emlrtRTEI, true);
      emxInit_real_T(&st, &decl, 2, &gi_emlrtRTEI, true);
      emxInit_real_T(&st, &h, 2, &jj_emlrtRTEI, true);
      emxInit_int8_T(&st, &sigma_ew, 2, &ki_emlrtRTEI, true);
      emxInit_real32_T(&st, &sigma_ns, 2, &ni_emlrtRTEI, true);
      emxInit_int8_T(&st, &sigma_w, 2, &qi_emlrtRTEI, true);
      emxInit_real_T(&st, &theta_z, 2, &ui_emlrtRTEI, true);
      emxInit_real_T(&st, &gamma_so, 2, &ij_emlrtRTEI, true);
      emxInit_real32_T(&st, &gamma_s, 2, &cj_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (t_calculation_step_idx = 0; t_calculation_step_idx <= loop_ub;
         t_calculation_step_idx++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(b_emlrtJBEnviron) == 0) {
        b_i = theta->size[0] * theta->size[1];
        theta->size[0] = 1;
        emxEnsureCapacity_real_T(&st, theta, b_i, &di_emlrtRTEI);
        b_i = (int32_T)muDoubleScalarFloor(t_calculation_step_length);
        if (t_calculation_step_length != b_i) {
          emlrtIntegerCheckR2012b(t_calculation_step_length, &y_emlrtDCI, &st);
        }

        k = theta->size[0] * theta->size[1];
        theta->size[1] = (int32_T)t_calculation_step_length;
        emxEnsureCapacity_real_T(&st, theta, k, &di_emlrtRTEI);
        if ((int32_T)t_calculation_step_length != b_i) {
          emlrtIntegerCheckR2012b(t_calculation_step_length, &db_emlrtDCI, &st);
        }

        nx = (int32_T)t_calculation_step_length;
        for (b_i = 0; b_i < nx; b_i++) {
          theta->data[b_i] = rtNaN;
        }

        t_arr_start = (((real_T)t_calculation_step_idx + 1.0) - 1.0) *
          t_calculation_step_length + 1.0;
        t_arr_end = (t_arr_start + t_calculation_step_length) - 1.0;
        if (t_arr_end > t_steps) {
          t_arr_end = t_steps;
        }

        j_st.site = &jf_emlrtRSI;
        k_st.site = &tf_emlrtRSI;
        if (t_arr_end < t_arr_start) {
          step_t_arr->size[0] = 1;
          step_t_arr->size[1] = 0;
        } else if (t_arr_start == t_arr_start) {
          b_i = step_t_arr->size[0] * step_t_arr->size[1];
          step_t_arr->size[0] = 1;
          nx = (int32_T)muDoubleScalarFloor(t_arr_end - t_arr_start);
          step_t_arr->size[1] = nx + 1;
          emxEnsureCapacity_real_T(&k_st, step_t_arr, b_i, &fi_emlrtRTEI);
          for (b_i = 0; b_i <= nx; b_i++) {
            step_t_arr->data[b_i] = t_arr_start + (real_T)b_i;
          }
        } else {
          l_st.site = &u_emlrtRSI;
          b_eml_float_colon(&l_st, t_arr_start, t_arr_end, step_t_arr);
        }

        /*  array of time values to calculate for at this iteration */
        if (step_t_arr->size[1] != 0) {
          b_i = decl->size[0] * decl->size[1];
          decl->size[0] = 1;
          decl->size[1] = step_t_arr->size[1];
          emxEnsureCapacity_real_T(&st, decl, b_i, &gi_emlrtRTEI);
          nx = step_t_arr->size[0] * step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            if (step_t_arr->data[b_i] != (int32_T)muDoubleScalarFloor
                (step_t_arr->data[b_i])) {
              emlrtIntegerCheckR2012b(step_t_arr->data[b_i], &eb_emlrtDCI, &st);
            }

            k = (int32_T)step_t_arr->data[b_i];
            if ((k < 1) || (k > local_raytracing_params.decl_arr_local->size[1]))
            {
              emlrtDynamicBoundsCheckR2012b(k, 1,
                local_raytracing_params.decl_arr_local->size[1], &wf_emlrtBCI,
                &st);
            }

            decl->data[b_i] = local_raytracing_params.decl_arr_local->data[k - 1];
          }

          nx = step_t_arr->size[0] * step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            k = (int32_T)step_t_arr->data[b_i];
            if ((k < 1) || (k > h_arr_local->size[1])) {
              emlrtDynamicBoundsCheckR2012b(k, 1, h_arr_local->size[1],
                &xf_emlrtBCI, &st);
            }
          }

          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = step_t_arr->size[1];
          emxEnsureCapacity_real_T(&st, gamma_so, b_i, &hi_emlrtRTEI);
          nx = step_t_arr->size[0] * step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = h_arr_local->data[(int32_T)step_t_arr->
              data[b_i] - 1] + 180.0;
          }

          j_st.site = &kf_emlrtRSI;
          e_mod(&j_st, gamma_so, h);
          b_i = h->size[0] * h->size[1];
          k = h->size[0] * h->size[1];
          h->size[0] = 1;
          emxEnsureCapacity_real_T(&st, h, k, &ji_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            h->data[b_i] -= 180.0;
          }

          b_i = sigma_ew->size[0] * sigma_ew->size[1];
          sigma_ew->size[0] = 1;
          sigma_ew->size[1] = step_t_arr->size[1];
          emxEnsureCapacity_int8_T(&st, sigma_ew, b_i, &ki_emlrtRTEI);
          nx = step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ew->data[b_i] = 1;
          }

          j_st.site = &nf_emlrtRSI;
          b_abs(&j_st, h, r2);
          j_st.site = &nf_emlrtRSI;
          t_arr_end = lat;
          b_cotd(&t_arr_end);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&j_st, gamma_so, b_i, &li_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = decl->data[b_i];
          }

          k_st.site = &nf_emlrtRSI;
          b_tand(&k_st, gamma_so);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          k = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          emxEnsureCapacity_real_T(&j_st, gamma_so, k, &mi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_so->data[b_i] *= t_arr_end;
          }

          k_st.site = &xf_emlrtRSI;
          l_st.site = &yf_emlrtRSI;
          m_st.site = &ag_emlrtRSI;
          n_st.site = &se_emlrtRSI;
          b_i = z1->size[0] * z1->size[1];
          z1->size[0] = 1;
          z1->size[1] = gamma_so->size[1];
          emxEnsureCapacity_real_T(&n_st, z1, b_i, &be_emlrtRTEI);
          o_st.site = &qc_emlrtRSI;
          nx = gamma_so->size[1];
          p_st.site = &uc_emlrtRSI;
          if ((1 <= gamma_so->size[1]) && (gamma_so->size[1] > 2147483646)) {
            q_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&q_st);
          }

          for (k = 0; k < nx; k++) {
            z1->data[k] = muDoubleScalarMax(gamma_so->data[k], -1.0);
          }

          j_st.site = &nf_emlrtRSI;
          k_st.site = &pe_emlrtRSI;
          l_st.site = &qe_emlrtRSI;
          m_st.site = &re_emlrtRSI;
          n_st.site = &se_emlrtRSI;
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = z1->size[1];
          emxEnsureCapacity_real_T(&n_st, gamma_so, b_i, &be_emlrtRTEI);
          o_st.site = &qc_emlrtRSI;
          nx = z1->size[1];
          p_st.site = &uc_emlrtRSI;
          if ((1 <= z1->size[1]) && (z1->size[1] > 2147483646)) {
            q_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&q_st);
          }

          for (k = 0; k < nx; k++) {
            gamma_so->data[k] = muDoubleScalarMin(z1->data[k], 1.0);
          }

          j_st.site = &nf_emlrtRSI;
          b_acosd(&j_st, gamma_so);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r2->size, *(int32_T (*)[2])
            gamma_so->size, &jb_emlrtECI, &st);
          k = r2->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (r2->data[b_i] > gamma_so->data[b_i]) {
              if ((b_i + 1 < 1) || (b_i + 1 > sigma_ew->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sigma_ew->size[1],
                  &yf_emlrtBCI, &st);
              }

              sigma_ew->data[b_i] = -1;
            }
          }

          unnamed_idx_1 = (uint32_T)step_t_arr->size[1];
          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = step_t_arr->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &ni_emlrtRTEI);
          nx = step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ns->data[b_i] = 1.0F;
          }

          b_i = r1->size[0] * r1->size[1];
          r1->size[0] = 1;
          r1->size[1] = decl->size[1];
          emxEnsureCapacity_boolean_T(&st, r1, b_i, &oi_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            r1->data[b_i] = (lat * (lat - decl->data[b_i]) < 0.0);
          }

          k = r1->size[1] - 1;
          nx = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (r1->data[b_i]) {
              nx++;
            }
          }

          b_i = r->size[0] * r->size[1];
          r->size[0] = 1;
          r->size[1] = nx;
          emxEnsureCapacity_int32_T(&st, r, b_i, &pi_emlrtRTEI);
          nx = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (r1->data[b_i]) {
              r->data[nx] = b_i + 1;
              nx++;
            }
          }

          nx = r->size[0] * r->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            if ((r->data[b_i] < 1) || (r->data[b_i] > (int32_T)unnamed_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(r->data[b_i], 1, (int32_T)
                unnamed_idx_1, &ag_emlrtBCI, &st);
            }

            sigma_ns->data[r->data[b_i] - 1] = -1.0F;
          }

          b_i = sigma_w->size[0] * sigma_w->size[1];
          sigma_w->size[0] = 1;
          sigma_w->size[1] = step_t_arr->size[1];
          emxEnsureCapacity_int8_T(&st, sigma_w, b_i, &qi_emlrtRTEI);
          nx = step_t_arr->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_w->data[b_i] = 1;
          }

          k = h->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (h->data[b_i] < 0.0) {
              if ((b_i + 1 < 1) || (b_i + 1 > sigma_w->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, sigma_w->size[1],
                  &bg_emlrtBCI, &st);
              }

              sigma_w->data[b_i] = -1;
            }
          }

          b_i = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          r2->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&st, r2, b_i, &ri_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            r2->data[b_i] = decl->data[b_i];
          }

          j_st.site = &lf_emlrtRSI;
          c_cosd(&j_st, r2);
          t_arr_end = lat;
          b_cosd(&t_arr_end);
          b_i = r2->size[0] * r2->size[1];
          k = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          emxEnsureCapacity_real_T(&st, r2, k, &ri_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            r2->data[b_i] *= t_arr_end;
          }

          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = h->size[1];
          emxEnsureCapacity_real_T(&st, gamma_so, b_i, &si_emlrtRTEI);
          nx = h->size[0] * h->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = h->data[b_i];
          }

          j_st.site = &lf_emlrtRSI;
          c_cosd(&j_st, gamma_so);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r2->size, *(int32_T (*)[2])
            gamma_so->size, &gb_emlrtECI, &st);
          b_i = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          theta_z->size[1] = decl->size[1];
          emxEnsureCapacity_real_T(&st, theta_z, b_i, &ti_emlrtRTEI);
          nx = decl->size[0] * decl->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            theta_z->data[b_i] = decl->data[b_i];
          }

          j_st.site = &lf_emlrtRSI;
          c_sind(&j_st, theta_z);
          t_arr_end = lat;
          b_sind(&t_arr_end);
          b_i = theta_z->size[0] * theta_z->size[1];
          k = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          emxEnsureCapacity_real_T(&st, theta_z, k, &ti_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            theta_z->data[b_i] *= t_arr_end;
          }

          b_i = r2->size[0] * r2->size[1];
          k = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          emxEnsureCapacity_real_T(&st, r2, k, &ri_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            r2->data[b_i] *= gamma_so->data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])theta_z->size, *(int32_T (*)
            [2])r2->size, &hb_emlrtECI, &st);
          b_i = theta_z->size[0] * theta_z->size[1];
          k = theta_z->size[0] * theta_z->size[1];
          theta_z->size[0] = 1;
          emxEnsureCapacity_real_T(&st, theta_z, k, &ui_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            theta_z->data[b_i] += r2->data[b_i];
          }

          j_st.site = &lf_emlrtRSI;
          b_acos(&j_st, theta_z);

          /* rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES )) */
          j_st.site = &mf_emlrtRSI;
          c_sind(&j_st, h);
          j_st.site = &mf_emlrtRSI;
          c_cosd(&j_st, decl);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])h->size, *(int32_T (*)[2])
            decl->size, &ib_emlrtECI, &st);
          j_st.site = &mf_emlrtRSI;
          b_i = h->size[0] * h->size[1];
          k = h->size[0] * h->size[1];
          h->size[0] = 1;
          emxEnsureCapacity_real_T(&j_st, h, k, &vi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            h->data[b_i] *= decl->data[b_i];
          }

          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&j_st, gamma_so, b_i, &wi_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = theta_z->data[b_i];
          }

          k_st.site = &mf_emlrtRSI;
          c_sin(&k_st, gamma_so);
          if (h->size[1] != gamma_so->size[1]) {
            emlrtErrorWithMessageIdR2018a(&j_st, &cb_emlrtRTEI,
              "MATLAB:dimagree", "MATLAB:dimagree", 0);
          }

          b_i = h->size[0] * h->size[1];
          k = h->size[0] * h->size[1];
          h->size[0] = 1;
          emxEnsureCapacity_real_T(&j_st, h, k, &xi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            h->data[b_i] /= gamma_so->data[b_i];
          }

          j_st.site = &mf_emlrtRSI;
          k_st.site = &xf_emlrtRSI;
          l_st.site = &yf_emlrtRSI;
          m_st.site = &ag_emlrtRSI;
          n_st.site = &se_emlrtRSI;
          b_i = z1->size[0] * z1->size[1];
          z1->size[0] = 1;
          z1->size[1] = h->size[1];
          emxEnsureCapacity_real_T(&n_st, z1, b_i, &be_emlrtRTEI);
          o_st.site = &qc_emlrtRSI;
          nx = h->size[1];
          p_st.site = &bg_emlrtRSI;
          if ((1 <= h->size[1]) && (h->size[1] > 2147483646)) {
            q_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&q_st);
          }

          for (k = 0; k < nx; k++) {
            z1->data[k] = muDoubleScalarMax(-1.0, h->data[k]);
          }

          j_st.site = &mf_emlrtRSI;
          k_st.site = &pe_emlrtRSI;
          l_st.site = &qe_emlrtRSI;
          m_st.site = &re_emlrtRSI;
          n_st.site = &se_emlrtRSI;
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = z1->size[1];
          emxEnsureCapacity_real_T(&n_st, gamma_so, b_i, &be_emlrtRTEI);
          o_st.site = &qc_emlrtRSI;
          nx = z1->size[1];
          p_st.site = &bg_emlrtRSI;
          if ((1 <= z1->size[1]) && (z1->size[1] > 2147483646)) {
            q_st.site = &x_emlrtRSI;
            check_forloop_overflow_error(&q_st);
          }

          for (k = 0; k < nx; k++) {
            gamma_so->data[k] = muDoubleScalarMin(1.0, z1->data[k]);
          }

          j_st.site = &mf_emlrtRSI;
          b_asind(&j_st, gamma_so);
          k = theta_z->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta_z->data[b_i] == 0.0) {
              if ((b_i + 1 < 1) || (b_i + 1 > gamma_so->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, gamma_so->size[1],
                  &cg_emlrtBCI, &st);
              }

              gamma_so->data[b_i] = 0.0;
            }
          }

          /*  Avoid division by 0 error */
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ew->size, *(int32_T (*)
            [2])sigma_ns->size, &kb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          gamma_s->size[1] = sigma_ew->size[1];
          emxEnsureCapacity_real32_T(&st, gamma_s, b_i, &yi_emlrtRTEI);
          nx = sigma_ew->size[0] * sigma_ew->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_s->data[b_i] = (real32_T)sigma_ew->data[b_i] * sigma_ns->
              data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_s->size, *(int32_T (*)
            [2])gamma_so->size, &kb_emlrtECI, &st);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ew->size, *(int32_T (*)
            [2])sigma_ns->size, &lb_emlrtECI, &st);
          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          sigma_ns->size[1] = gamma_s->size[1];
          emxEnsureCapacity_real32_T(&st, sigma_ns, b_i, &aj_emlrtRTEI);
          nx = gamma_s->size[0] * gamma_s->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            sigma_ns->data[b_i] = (1.0F - gamma_s->data[b_i]) / 2.0F;
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])sigma_ns->size, *(int32_T (*)
            [2])sigma_w->size, &mb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          k = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, gamma_s, k, &yi_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] *= (real32_T)gamma_so->data[b_i];
          }

          b_i = sigma_ns->size[0] * sigma_ns->size[1];
          k = sigma_ns->size[0] * sigma_ns->size[1];
          sigma_ns->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, sigma_ns, k, &bj_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            sigma_ns->data[b_i] = sigma_ns->data[b_i] * (real32_T)sigma_w->
              data[b_i] * 180.0F;
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_s->size, *(int32_T (*)
            [2])sigma_ns->size, &kb_emlrtECI, &st);
          b_i = gamma_s->size[0] * gamma_s->size[1];
          k = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, gamma_s, k, &cj_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] += sigma_ns->data[b_i];
          }

          b_i = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          r2->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&st, r2, b_i, &dj_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            r2->data[b_i] = theta_z->data[b_i];
          }

          j_st.site = &of_emlrtRSI;
          c_sin(&j_st, r2);
          t_arr_end = exact_idx;
          b_sind(&t_arr_end);
          b_i = r2->size[0] * r2->size[1];
          k = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          emxEnsureCapacity_real_T(&st, r2, k, &dj_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            r2->data[b_i] *= t_arr_end;
          }

          b_i = gamma_s->size[0] * gamma_s->size[1];
          k = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          emxEnsureCapacity_real32_T(&st, gamma_s, k, &ej_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] -= (real32_T)dj;
          }

          j_st.site = &of_emlrtRSI;
          d_cosd(&j_st, gamma_s);
          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r2->size, *(int32_T (*)[2])
            gamma_s->size, &nb_emlrtECI, &st);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          gamma_so->size[1] = theta_z->size[1];
          emxEnsureCapacity_real_T(&st, gamma_so, b_i, &fj_emlrtRTEI);
          nx = theta_z->size[0] * theta_z->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            gamma_so->data[b_i] = theta_z->data[b_i];
          }

          j_st.site = &of_emlrtRSI;
          b_cos(&j_st, gamma_so);
          t_arr_end = exact_idx;
          b_cosd(&t_arr_end);
          b_i = gamma_so->size[0] * gamma_so->size[1];
          k = gamma_so->size[0] * gamma_so->size[1];
          gamma_so->size[0] = 1;
          emxEnsureCapacity_real_T(&st, gamma_so, k, &fj_emlrtRTEI);
          nx = b_i - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_so->data[b_i] *= t_arr_end;
          }

          b_i = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          gamma_s->size[1] = r2->size[1];
          emxEnsureCapacity_real32_T(&st, gamma_s, b_i, &dj_emlrtRTEI);
          nx = r2->size[0] * r2->size[1] - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] *= (real32_T)r2->data[b_i];
          }

          emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])gamma_so->size, *(int32_T (*)
            [2])gamma_s->size, &ob_emlrtECI, &st);
          if (1.0 > t_calculation_step_length) {
            emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)
              t_calculation_step_length, &bf_emlrtBCI, &st);
          }

          if ((step_t_arr->size[1] < 1) || (step_t_arr->size[1] > (int32_T)
               t_calculation_step_length)) {
            emlrtDynamicBoundsCheckR2012b(step_t_arr->size[1], 1, (int32_T)
              t_calculation_step_length, &cf_emlrtBCI, &st);
          }

          b_i = gamma_s->size[0] * gamma_s->size[1];
          gamma_s->size[0] = 1;
          gamma_s->size[1] = gamma_so->size[1];
          emxEnsureCapacity_real32_T(&st, gamma_s, b_i, &gj_emlrtRTEI);
          nx = gamma_so->size[0] * gamma_so->size[1] - 1;
          for (b_i = 0; b_i <= nx; b_i++) {
            gamma_s->data[b_i] += (real32_T)gamma_so->data[b_i];
          }

          j_st.site = &of_emlrtRSI;
          c_acos(&j_st, gamma_s);
          b_i = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          r2->size[1] = gamma_s->size[1];
          emxEnsureCapacity_real_T(&st, r2, b_i, &hj_emlrtRTEI);
          nx = gamma_s->size[0] * gamma_s->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            r2->data[b_i] = gamma_s->data[b_i];
          }

          if (step_t_arr->size[1] != r2->size[1]) {
            emlrtSubAssignSizeCheck1dR2017a(step_t_arr->size[1], r2->size[1],
              &pb_emlrtECI, &st);
          }

          nx = r2->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
            theta->data[b_i] = r2->data[b_i];
          }

          k = theta_z->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta_z->data[b_i] > 1.5707963267948966) {
              if ((b_i + 1 < 1) || (b_i + 1 > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, theta->size[1],
                  &dg_emlrtBCI, &st);
              }

              theta->data[b_i] = rtNaN;
            }
          }

          k = theta->size[1];
          for (b_i = 0; b_i < k; b_i++) {
            if (theta->data[b_i] > 1.5707963267948966) {
              if ((b_i + 1 < 1) || (b_i + 1 > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, theta->size[1],
                  &eg_emlrtBCI, &st);
              }

              theta->data[b_i] = rtNaN;
            }
          }

          if (theta->size[1] < (int32_T)t_calculation_step_length) {
            if ((real_T)theta->size[1] + 1.0 > t_calculation_step_length) {
              b_i = -1;
              k = 0;
            } else {
              if (((int32_T)(theta->size[1] + 1U) < 1) || ((int32_T)(theta->
                    size[1] + 1U) > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(theta->size[1] + 1U), 1,
                  theta->size[1], &df_emlrtBCI, &st);
              }

              b_i = theta->size[1] - 1;
              if ((t_calculation_step_length < 1.0) || ((int32_T)
                   t_calculation_step_length > theta->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)t_calculation_step_length,
                  1, theta->size[1], &ef_emlrtBCI, &st);
              }

              k = (int32_T)t_calculation_step_length;
            }

            nx = (k - b_i) - 1;
            for (k = 0; k < nx; k++) {
              theta->data[(b_i + k) + 1] = rtNaN;
            }
          }

          b_i = t_calculation_step_idx + 1;
          if ((b_i < 1) || (b_i > theta_matrix->size[0])) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, theta_matrix->size[0],
              &ff_emlrtBCI, &st);
          }

          iv[0] = 1;
          iv[1] = theta_matrix->size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &theta->size[0], 2,
            &qb_emlrtECI, &st);
          nx = theta->size[1];
          for (b_i = 0; b_i < nx; b_i++) {
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
      emlrtHeapReferenceStackLeaveScope(&st, 14);
      emxFree_real32_T(&gamma_s);
      emxFree_real_T(&gamma_so);
      emxFree_real_T(&theta_z);
      emxFree_int8_T(&sigma_w);
      emxFree_real32_T(&sigma_ns);
      emxFree_int8_T(&sigma_ew);
      emxFree_real_T(&h);
      emxFree_real_T(&decl);
      emxFree_real_T(&step_t_arr);
      emxFree_real_T(&theta);
      emxFree_real_T(&r2);
      emxFree_real_T(&z1);
      emxFree_boolean_T(&r1);
      emxFree_int32_T(&r);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  i = h_arr_local->size[0] * h_arr_local->size[1];
  h_arr_local->size[0] = 1;
  emxEnsureCapacity_real_T(sp, h_arr_local, i, &bi_emlrtRTEI);
  d = t_calculation_step_length * t_calculation_steps;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &x_emlrtDCI, sp);
  }

  dj = (int32_T)muDoubleScalarFloor(d);
  if (d != dj) {
    emlrtIntegerCheckR2012b(d, &w_emlrtDCI, sp);
  }

  i = h_arr_local->size[0] * h_arr_local->size[1];
  h_arr_local->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, h_arr_local, i, &bi_emlrtRTEI);
  if (d != dj) {
    emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    h_arr_local->data[i] = rtNaN;
  }

  i = (int32_T)t_calculation_steps;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, t_calculation_steps, mxDOUBLE_CLASS,
    (int32_T)t_calculation_steps, &ab_emlrtRTEI, sp);
  for (sample_idx = 0; sample_idx < i; sample_idx++) {
    /*  get values in correct order for time series */
    d = t_calculation_step_length * (((real_T)sample_idx + 1.0) - 1.0) + 1.0;
    dj = t_calculation_step_length * ((real_T)sample_idx + 1.0);
    if (d > dj) {
      i1 = 0;
      i2 = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &p_emlrtDCI, sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > h_arr_local->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, h_arr_local->size[1],
          &hf_emlrtBCI, sp);
      }

      i1 = (int32_T)d - 1;
      if (((int32_T)dj < 1) || ((int32_T)dj > h_arr_local->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)dj, 1, h_arr_local->size[1],
          &if_emlrtBCI, sp);
      }

      i2 = (int32_T)dj;
    }

    loop_ub = sample_idx + 1;
    if ((loop_ub < 1) || (loop_ub > theta_matrix->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, theta_matrix->size[0],
        &gf_emlrtBCI, sp);
    }

    loop_ub = theta_matrix->size[1];
    i2 -= i1;
    if (i2 != theta_matrix->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(i2, theta_matrix->size[1], &rb_emlrtECI,
        sp);
    }

    for (i2 = 0; i2 < loop_ub; i2++) {
      h_arr_local->data[i1 + i2] = theta_matrix->data[sample_idx +
        theta_matrix->size[0] * i2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&theta_matrix);
  if (1.0 > raytracing_params->t_steps) {
    i = 0;
  } else {
    if (1 > h_arr_local->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, h_arr_local->size[1], &jf_emlrtBCI, sp);
    }

    if (raytracing_params->t_steps != (int32_T)muDoubleScalarFloor
        (raytracing_params->t_steps)) {
      emlrtIntegerCheckR2012b(raytracing_params->t_steps, &q_emlrtDCI, sp);
    }

    if (((int32_T)raytracing_params->t_steps < 1) || ((int32_T)
         raytracing_params->t_steps > h_arr_local->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)raytracing_params->t_steps, 1,
        h_arr_local->size[1], &kf_emlrtBCI, sp);
    }

    i = (int32_T)raytracing_params->t_steps;
  }

  i1 = h_arr_local->size[0] * h_arr_local->size[1];
  h_arr_local->size[1] = i;
  emxEnsureCapacity_real_T(sp, h_arr_local, i1, &ci_emlrtRTEI);

  /*  do time sim */
  i1 = temperature_parameters->t_arr->size[1];
  emxInit_real_T(sp, &z, 3, &be_emlrtRTEI, true);
  emxInit_real_T(sp, &b_T_new_arr, 3, &ei_emlrtRTEI, true);
  for (sample_idx = 0; sample_idx < i1; sample_idx++) {
    i2 = sample_idx + 1;
    if ((i2 < 1) || (i2 > temperature_parameters->t_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, temperature_parameters->t_arr->size[1],
        &lf_emlrtBCI, sp);
    }

    /* seconds since diviner start data */
    /*     %% Retrieve theta */
    if (i2 > i) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i, &mf_emlrtBCI, sp);
    }

    /*     %% Calculate temps */
    i2 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
    b_T_new_arr->size[0] = 1;
    b_T_new_arr->size[1] = 1;
    b_T_new_arr->size[2] = T_new_arr->size[2];
    emxEnsureCapacity_real_T(sp, b_T_new_arr, i2, &ei_emlrtRTEI);
    loop_ub = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2] - 1;
    for (i2 = 0; i2 <= loop_ub; i2++) {
      b_T_new_arr->data[i2] = T_new_arr->data[i2];
    }

    b_st.site = &pf_emlrtRSI;
    temperature_sim_pixel_tick(&b_st, b_T_new_arr, temperature_parameters,
      local_temperature_params, h_arr_local->data[sample_idx],
      &bottom_layer_idx_local, &depth_update_wait_t_local,
      temperature_parameters->t_arr->data[sample_idx], dz_arr, T_new_arr);

    /*  %% FIND TEST ERRORS */
    if ((real_T)sample_idx + 1.0 == lower_idx) {
      if (1 > T_new_arr->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, T_new_arr->size[2], &nf_emlrtBCI, sp);
      }

      if (((int32_T)upcoming_sample_idx_ptr < 1) || ((int32_T)
           upcoming_sample_idx_ptr > sample_T_bounds->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)upcoming_sample_idx_ptr, 1,
          sample_T_bounds->size[1], &tf_emlrtBCI, sp);
      }

      sample_T_bounds->data[(int32_T)upcoming_sample_idx_ptr - 1] =
        T_new_arr->data[0];
      upcoming_sample_idx_ptr++;
      if (((int32_T)upcoming_sample_idx_ptr < 1) || ((int32_T)
           upcoming_sample_idx_ptr > sample_t_idx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)upcoming_sample_idx_ptr, 1,
          sample_t_idx->size[1], &uf_emlrtBCI, sp);
      }

      lower_idx = sample_t_idx->data[(int32_T)upcoming_sample_idx_ptr - 1];
    }

    if (temperature_parameters->t_arr->data[sample_idx] >= P * t_wait) {
      b_st.site = &qf_emlrtRSI;
      i2 = T_new_arr->size[2];
      c_st.site = &lg_emlrtRSI;
      computeDimsData(&c_st, T_new_arr->size[2]);
      loop_ub = 1;
      if (T_new_arr->size[2] > 1) {
        loop_ub = T_new_arr->size[2];
      }

      if (T_new_arr->size[2] > muIntScalarMax_sint32(i2, loop_ub)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI,
          "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }

      b_st.site = &rf_emlrtRSI;
      c_st.site = &pe_emlrtRSI;
      d_st.site = &qe_emlrtRSI;
      e_st.site = &re_emlrtRSI;
      f_st.site = &se_emlrtRSI;
      i2 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
      b_T_new_arr->size[0] = 1;
      b_T_new_arr->size[1] = 1;
      b_T_new_arr->size[2] = Tmin_local->size[2];
      emxEnsureCapacity_real_T(&f_st, b_T_new_arr, i2, &ii_emlrtRTEI);
      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_T_new_arr->data[i2] = Tmin_local->data[i2];
      }

      g_st.site = &pc_emlrtRSI;
      if (Tmin_local->size[2] <= T_new_arr->size[2]) {
        i2 = Tmin_local->size[2];
      } else {
        i2 = T_new_arr->size[2];
      }

      loop_ub = z->size[0] * z->size[1] * z->size[2];
      z->size[0] = 1;
      z->size[1] = 1;
      if (Tmin_local->size[2] <= T_new_arr->size[2]) {
        z->size[2] = Tmin_local->size[2];
      } else {
        z->size[2] = T_new_arr->size[2];
      }

      emxEnsureCapacity_real_T(&g_st, z, loop_ub, &ye_emlrtRTEI);
      if (!c_dimagree(z, Tmin_local, T_new_arr)) {
        emlrtErrorWithMessageIdR2018a(&g_st, &k_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      Tmin_local->size[0] = 1;
      Tmin_local->size[1] = 1;
      Tmin_local->size[2] = i2;
      emxEnsureCapacity_real_T(&f_st, Tmin_local, loop_ub, &be_emlrtRTEI);
      g_st.site = &qc_emlrtRSI;
      h_st.site = &rc_emlrtRSI;
      if ((1 <= z->size[2]) && (z->size[2] > 2147483646)) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (loop_ub = 0; loop_ub < i2; loop_ub++) {
        Tmin_local->data[loop_ub] = muDoubleScalarMin(b_T_new_arr->data[loop_ub],
          T_new_arr->data[loop_ub]);
      }

      b_st.site = &sf_emlrtRSI;
      c_st.site = &xf_emlrtRSI;
      d_st.site = &yf_emlrtRSI;
      e_st.site = &ag_emlrtRSI;
      f_st.site = &se_emlrtRSI;
      i2 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
      b_T_new_arr->size[0] = 1;
      b_T_new_arr->size[1] = 1;
      b_T_new_arr->size[2] = Tmax_local->size[2];
      emxEnsureCapacity_real_T(&f_st, b_T_new_arr, i2, &ii_emlrtRTEI);
      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_T_new_arr->data[i2] = Tmax_local->data[i2];
      }

      g_st.site = &pc_emlrtRSI;
      if (Tmax_local->size[2] <= T_new_arr->size[2]) {
        i2 = Tmax_local->size[2];
      } else {
        i2 = T_new_arr->size[2];
      }

      loop_ub = z->size[0] * z->size[1] * z->size[2];
      z->size[0] = 1;
      z->size[1] = 1;
      if (Tmax_local->size[2] <= T_new_arr->size[2]) {
        z->size[2] = Tmax_local->size[2];
      } else {
        z->size[2] = T_new_arr->size[2];
      }

      emxEnsureCapacity_real_T(&g_st, z, loop_ub, &ye_emlrtRTEI);
      if (!c_dimagree(z, Tmax_local, T_new_arr)) {
        emlrtErrorWithMessageIdR2018a(&g_st, &k_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      Tmax_local->size[0] = 1;
      Tmax_local->size[1] = 1;
      Tmax_local->size[2] = i2;
      emxEnsureCapacity_real_T(&f_st, Tmax_local, loop_ub, &be_emlrtRTEI);
      g_st.site = &qc_emlrtRSI;
      h_st.site = &rc_emlrtRSI;
      if ((1 <= z->size[2]) && (z->size[2] > 2147483646)) {
        i_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (loop_ub = 0; loop_ub < i2; loop_ub++) {
        Tmax_local->data[loop_ub] = muDoubleScalarMax(b_T_new_arr->data[loop_ub],
          T_new_arr->data[loop_ub]);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_T_new_arr);
  emxFree_real_T(&z);
  emxFree_real_T(&h_arr_local);
  emxFree_real_T(&sample_t_idx);
  emxFree_real_T(&T_new_arr);

  /*  Interpolate errors */
  i = sample_timepoints_local->size[1];
  for (sample_idx = 0; sample_idx < i; sample_idx++) {
    i1 = sample_idx + 1;
    if ((i1 < 1) || (i1 > c_sample_surface_temperatures_l->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, c_sample_surface_temperatures_l->
        size[1], &of_emlrtBCI, sp);
    }

    d = 2.0 * ((real_T)sample_idx + 1.0);
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) >
         sample_T_bounds->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1,
        sample_T_bounds->size[1], &fg_emlrtBCI, sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > sample_T_bounds->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, sample_T_bounds->size[1],
        &fg_emlrtBCI, sp);
    }

    if (i1 > sample_weights->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, sample_weights->size[1], &pf_emlrtBCI,
        sp);
    }

    if (((int32_T)(sample_idx + 1U) < 1) || ((int32_T)(sample_idx + 1U) >
         T_error_local->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sample_idx + 1U), 1,
        T_error_local->size[1], &vf_emlrtBCI, sp);
    }

    loop_ub = (sample_idx + 1) << 1;
    dj = sample_T_bounds->data[loop_ub + -2];
    T_error_local->data[sample_idx] = (dj + sample_weights->data[sample_idx] *
      (sample_T_bounds->data[loop_ub + -1] - dj)) -
      c_sample_surface_temperatures_l->data[sample_idx];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&sample_T_bounds);
  emxFree_real_T(&sample_weights);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (no_raytracing_timeloop.c) */
