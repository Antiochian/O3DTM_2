/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_viewshed.c
 *
 * Code generation for function 'mexable_viewshed'
 *
 */

/* Include files */
#include "mexable_viewshed.h"
#include "combo_get_flux_coefficients_data.h"
#include "combo_get_flux_coefficients_emxutil.h"
#include "combo_get_flux_coefficients_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "mexable_calculateLOS.h"
#include "nullAssignment.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo f_emlrtRSI = { 19,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 20,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 24,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 26,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 32,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 33,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 34,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 38,  /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 12,  /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 18,  /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 21,  /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 63, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 64, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 65, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 74, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 75, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 83, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 84, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 90, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 89, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 88, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 14, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 31, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 67, /* lineNo */
  "minimum2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 64, /* lineNo */
  "binaryMinOrMax",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\binaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 35, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  72,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  80,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  59,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  67,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  43,                                  /* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  44,                                  /* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  193,                                 /* lineNo */
  9,                                   /* colNo */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  8,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  12,                                  /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  8,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  94,                                  /* lineNo */
  1,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  193,                                 /* lineNo */
  9,                                   /* colNo */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  6,                                   /* colNo */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 14,    /* lineNo */
  14,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 14,  /* lineNo */
  31,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  5,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_intrinsicXToLongitude",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  2,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  8,                                   /* colNo */
  "vismap",                            /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "visprofile",                        /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  5,                                   /* colNo */
  "vis",                               /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 94,  /* lineNo */
  3,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  3,                                   /* colNo */
  "Z",                                 /* aName */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 14,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 15,/* lineNo */
  11,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 19,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 193,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 193,/* lineNo */
  39,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 20,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 15,/* lineNo */
  13,                                  /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 33,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 62,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 62,/* lineNo */
  21,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 34,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 113,/* lineNo */
  6,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 113,/* lineNo */
  18,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 80,/* lineNo */
  13,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 44,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 80,/* lineNo */
  42,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 81,/* lineNo */
  13,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 81,/* lineNo */
  42,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 93,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 94,/* lineNo */
  3,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 1,/* lineNo */
  24,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 191,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 180,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 65,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 62,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 74,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 75,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 80,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 83,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 84,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 1,/* lineNo */
  23,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

/* Function Definitions */
void mexable_viewshed(const emlrtStack *sp, const emxArray_real_T *Z, real_T
                      lat1, real_T lon1, real_T actualradius, real_T
                      apparentradius, real_T sample_dens, const struct0_T
                      *public_raster_struct, emxArray_real_T *vismap)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *qNaN;
  emxArray_boolean_T *qOutside;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *vis0;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_int32_T *r;
  emxArray_int32_T *r3;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *arclenInRadians;
  emxArray_real_T *b_r;
  emxArray_real_T *c;
  emxArray_real_T *h;
  emxArray_real_T *lat2;
  emxArray_real_T *lattrk;
  emxArray_real_T *lon2;
  emxArray_real_T *lontrk;
  emxArray_real_T *x2;
  emxArray_real_T *xi;
  emxArray_real_T *y2;
  emxArray_real_T *yi;
  emxArray_real_T *z1;
  emxArray_real_T *z2;
  real_T b_public_raster_struct_tmp;
  real_T public_raster_struct_tmp;
  real_T yIntrinsicLimits1;
  int32_T b_unnamed_idx_1;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T unnamed_idx_1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* VIEWSHED Areas visible from point on terrain elevation grid */
  i = vismap->size[0] * vismap->size[1];
  vismap->size[0] = Z->size[0];
  vismap->size[1] = Z->size[1];
  emxEnsureCapacity_real_T(sp, vismap, i, &x_emlrtRTEI);
  loop_ub = Z->size[0] * Z->size[1];
  for (i = 0; i < loop_ub; i++) {
    vismap->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &y2, 2, &cb_emlrtRTEI, true);
  emxInit_real_T(sp, &lon2, 2, &hb_emlrtRTEI, true);
  if (Z->size[1] < 1) {
    lon2->size[0] = 1;
    lon2->size[1] = 0;
    y2->size[0] = 1;
    y2->size[1] = 0;
  } else {
    i = lon2->size[0] * lon2->size[1];
    lon2->size[0] = 1;
    lon2->size[1] = (int32_T)((real_T)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, lon2, i, &y_emlrtRTEI);
    loop_ub = (int32_T)((real_T)Z->size[1] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      lon2->data[i] = (real_T)i + 1.0;
    }

    i = y2->size[0] * y2->size[1];
    y2->size[0] = 1;
    y2->size[1] = (int32_T)((real_T)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, y2, i, &y_emlrtRTEI);
    loop_ub = (int32_T)((real_T)Z->size[1] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y2->data[i] = (real_T)i + 1.0;
    }
  }

  if (Z->size[0] - 2 < 0) {
    emlrtNonNegativeCheckR2012b(Z->size[0] - 2, &emlrtDCI, sp);
  }

  unnamed_idx_1 = Z->size[0] - 2;
  if (Z->size[0] - 2 < 0) {
    emlrtNonNegativeCheckR2012b(Z->size[0] - 2, &b_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &x2, 2, &ab_emlrtRTEI, true);
  b_unnamed_idx_1 = Z->size[0] - 2;
  i = x2->size[0] * x2->size[1];
  x2->size[0] = 1;
  x2->size[1] = (((Z->size[0] + Z->size[0]) + lon2->size[1]) + y2->size[1]) - 4;
  emxEnsureCapacity_real_T(sp, x2, i, &ab_emlrtRTEI);
  loop_ub = Z->size[0] - 2;
  for (i = 0; i < loop_ub; i++) {
    x2->data[i] = 1.0;
  }

  loop_ub = Z->size[0] - 2;
  for (i = 0; i < loop_ub; i++) {
    x2->data[i + unnamed_idx_1] = (uint32_T)Z->size[1];
  }

  loop_ub = lon2->size[1];
  for (i = 0; i < loop_ub; i++) {
    x2->data[(i + unnamed_idx_1) + b_unnamed_idx_1] = lon2->data[i];
  }

  loop_ub = y2->size[1];
  for (i = 0; i < loop_ub; i++) {
    x2->data[((i + unnamed_idx_1) + b_unnamed_idx_1) + lon2->size[1]] = y2->
      data[i];
  }

  if (Z->size[0] - 1 < 2) {
    lon2->size[0] = 1;
    lon2->size[1] = 0;
  } else {
    i = lon2->size[0] * lon2->size[1];
    lon2->size[0] = 1;
    lon2->size[1] = (int32_T)(((real_T)Z->size[0] - 1.0) - 2.0) + 1;
    emxEnsureCapacity_real_T(sp, lon2, i, &bb_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Z->size[0] - 1.0) - 2.0);
    for (i = 0; i <= loop_ub; i++) {
      lon2->data[i] = (real_T)i + 2.0;
    }
  }

  i = y2->size[0] * y2->size[1];
  y2->size[0] = 1;
  y2->size[1] = ((lon2->size[1] + lon2->size[1]) + Z->size[1]) + Z->size[1];
  emxEnsureCapacity_real_T(sp, y2, i, &cb_emlrtRTEI);
  loop_ub = lon2->size[1];
  for (i = 0; i < loop_ub; i++) {
    y2->data[i] = lon2->data[i];
  }

  loop_ub = lon2->size[1];
  for (i = 0; i < loop_ub; i++) {
    y2->data[i + lon2->size[1]] = lon2->data[i];
  }

  loop_ub = Z->size[1];
  for (i = 0; i < loop_ub; i++) {
    y2->data[(i + lon2->size[1]) + lon2->size[1]] = 1.0;
  }

  loop_ub = Z->size[1];
  for (i = 0; i < loop_ub; i++) {
    y2->data[((i + lon2->size[1]) + lon2->size[1]) + Z->size[1]] = (uint32_T)
      Z->size[0];
  }

  emxInit_real_T(sp, &lat2, 2, &db_emlrtRTEI, true);

  /*  lat2 = intrinsicYToLatitude(R, y2); */
  /*  lon2 = intrinsicXToLongitude(R, x2); */
  st.site = &f_emlrtRSI;

  /* --------------------------------------------------- */
  yIntrinsicLimits1 = public_raster_struct->YIntrinsicLimits[0];
  i = lat2->size[0] * lat2->size[1];
  lat2->size[0] = 1;
  lat2->size[1] = y2->size[1];
  emxEnsureCapacity_real_T(&st, lat2, i, &db_emlrtRTEI);
  public_raster_struct_tmp = public_raster_struct->DeltaLatitudeDenominator *
    public_raster_struct->FirstCornerLatitude;
  loop_ub = y2->size[0] * y2->size[1];
  for (i = 0; i < loop_ub; i++) {
    lat2->data[i] = (public_raster_struct->DeltaLatitudeNumerator * (y2->data[i]
      - public_raster_struct->YIntrinsicLimits[0]) + public_raster_struct_tmp) /
      public_raster_struct->DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  b_unnamed_idx_1 = y2->size[1] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if ((uint32_T)y2->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r, 2, &fc_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r, i, &eb_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if ((uint32_T)y2->data[loop_ub] == yIntrinsicLimits1) {
      r->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r->size[0] * r->size[1] - 1;
  unnamed_idx_1 = lat2->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if ((r->data[i] < 1) || (r->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r->data[i], 1, unnamed_idx_1, &qb_emlrtBCI,
        &st);
    }

    lat2->data[r->data[i] - 1] = public_raster_struct->FirstCornerLatitude;
  }

  emxFree_int32_T(&r);
  emxInit_boolean_T(&st, &r1, 2, &ec_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(&st, r1, i, &fb_emlrtRTEI);
  loop_ub = lat2->size[0] * lat2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (lat2->data[i] < -public_raster_struct->NorthPoleLatitude);
  }

  emxInit_boolean_T(&st, &r2, 2, &ec_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(&st, r2, i, &gb_emlrtRTEI);
  loop_ub = lat2->size[0] * lat2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = (public_raster_struct->NorthPoleLatitude < lat2->data[i]);
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r1->size, *(int32_T (*)[2])r2->size,
    &d_emlrtECI, &st);
  b_unnamed_idx_1 = r1->size[1];
  for (loop_ub = 0; loop_ub < b_unnamed_idx_1; loop_ub++) {
    if (r1->data[loop_ub] || r2->data[loop_ub]) {
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > lat2->size[1])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, lat2->size[1],
          &rb_emlrtBCI, &st);
      }

      lat2->data[loop_ub] = rtNaN;
    }
  }

  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  st.site = &g_emlrtRSI;

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = lon2->size[0] * lon2->size[1];
  lon2->size[0] = 1;
  lon2->size[1] = x2->size[1];
  emxEnsureCapacity_real_T(&st, lon2, i, &hb_emlrtRTEI);
  b_public_raster_struct_tmp = public_raster_struct->DeltaLongitudeDenominator *
    public_raster_struct->FirstCornerLongitude;
  loop_ub = x2->size[0] * x2->size[1];
  for (i = 0; i < loop_ub; i++) {
    lon2->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (x2->data[i]
      - public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct_tmp)
      / public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  b_unnamed_idx_1 = x2->size[1] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if ((uint32_T)x2->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r3, 2, &gc_emlrtRTEI, true);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r3, i, &ib_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if ((uint32_T)x2->data[loop_ub] == yIntrinsicLimits1) {
      r3->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r3->size[0] * r3->size[1] - 1;
  unnamed_idx_1 = lon2->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if ((r3->data[i] < 1) || (r3->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, unnamed_idx_1, &sb_emlrtBCI,
        &st);
    }

    lon2->data[r3->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r3);
  i = lat2->size[1];
  emxInit_int32_T(sp, &ii, 1, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &lontrk, 1, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &arclenInRadians, 1, &hc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &vis0, 1, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &z1, 2, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &z2, 2, &ec_emlrtRTEI, true);
  emxInit_boolean_T(sp, &qNaN, 1, &ic_emlrtRTEI, true);
  emxInit_real_T(sp, &xi, 1, &jc_emlrtRTEI, true);
  emxInit_real_T(sp, &yi, 1, &kc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &qOutside, 1, &lc_emlrtRTEI, true);
  emxInit_real_T(sp, &c, 1, &mc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_r, 1, &nc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r4, 1, &ec_emlrtRTEI, true);
  for (k = 0; k < i; k++) {
    st.site = &h_emlrtRSI;
    b_unnamed_idx_1 = k + 1;
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > lat2->size[1])) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, lat2->size[1],
        &mb_emlrtBCI, &st);
    }

    if (b_unnamed_idx_1 > lon2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, lon2->size[1],
        &nb_emlrtBCI, &st);
    }

    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    b_st.site = &q_emlrtRSI;
    sampleGreatCircle(&b_st, lat1, lon1, lat2->data[k], lon2->data[k], 0.9 /
                      sample_dens, yi, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    b_st.site = &r_emlrtRSI;
    interpolate(&b_st, Z, yi, lontrk, public_raster_struct->RasterSize,
                public_raster_struct->FullCycle,
                public_raster_struct->XIntrinsicLimits,
                public_raster_struct->YIntrinsicLimits,
                public_raster_struct->pLongitudeLimits,
                public_raster_struct->FirstCornerLatitude,
                public_raster_struct->FirstCornerLongitude,
                public_raster_struct->DeltaLatitudeNumerator,
                public_raster_struct->DeltaLatitudeDenominator,
                public_raster_struct->DeltaLongitudeNumerator,
                public_raster_struct->DeltaLongitudeDenominator, xi);

    /*  Visibility of points along the profile between the start and end points. */
    loop_ub = arclenInRadians->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      arclenInRadians->data[b_unnamed_idx_1] *= actualradius;
    }

    b_st.site = &s_emlrtRSI;
    losprofile(&b_st, arclenInRadians, xi, apparentradius, vis0, y2, z1, x2, z2);
    st.site = &i_emlrtRSI;

    /* -------------------------------------------------------------------------- */
    /* EMBED  Encode data points into regular data grid */
    /*  */
    /*    Streamlined version of the public IMBEDM function */
    /*  */
    /*    Z = EMBED(LAT, LON, VALUE, Z, R) resets certain entries of a regular */
    /*    data grid, Z.  R is a geographic raster reference object.  Its */
    /*    RasterSize property must be consistent with size(Z). The entries to be */
    /*    reset correspond to the locations defined by the latitude and longitude */
    /*    position vectors LAT and LON. The entries are reset to the same number */
    /*    if VALUE is a scalar, or to individually specified numbers if VALUE is */
    /*    a vector the same size as LAT and LON. If any points lie outside the */
    /*    input grid, a warning is issued.  All input angles are in degrees. */
    /*   Eliminate NaNs from the input data */
    b_unnamed_idx_1 = qNaN->size[0];
    qNaN->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&st, qNaN, b_unnamed_idx_1, &ob_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qNaN->data[b_unnamed_idx_1] = muDoubleScalarIsNaN(yi->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = lontrk->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &pb_emlrtRTEI);
    loop_ub = lontrk->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = muDoubleScalarIsNaN(lontrk->
        data[b_unnamed_idx_1]);
    }

    if (qNaN->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qNaN->size[0], r4->size[0], &e_emlrtECI, &st);
    }

    loop_ub = qNaN->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qNaN->data[b_unnamed_idx_1] = (qNaN->data[b_unnamed_idx_1] || r4->
        data[b_unnamed_idx_1]);
    }

    b_st.site = &uc_emlrtRSI;
    nullAssignment(&b_st, yi, qNaN);
    b_st.site = &vc_emlrtRSI;
    nullAssignment(&b_st, lontrk, qNaN);
    b_st.site = &wc_emlrtRSI;
    b_nullAssignment(&b_st, vis0, qNaN);

    /*   Convert the lat and lon data to cell positions */
    /*     [r, c] = geographicToDiscrete(R, lat, lon); */
    /*     qOutside = isnan(r); */
    /*   As an optimization, avoid [r, c] = geographicToDiscrete(R, lat, lon); */
    /*   because it takes time to validate its latitude-longitude inputs. */
    b_st.site = &xc_emlrtRSI;
    mexable_longitudeToIntrinsicX(&b_st, public_raster_struct->FullCycle,
      public_raster_struct->XIntrinsicLimits,
      public_raster_struct->pLongitudeLimits,
      public_raster_struct->FirstCornerLongitude,
      public_raster_struct->DeltaLongitudeNumerator,
      public_raster_struct->DeltaLongitudeDenominator, lontrk, xi);
    b_st.site = &yc_emlrtRSI;

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
    /*  Elements of LAT are less than -90 degrees or */
    /*  that exceed +90 degrees should map to NaN. */
    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&b_st, r4, b_unnamed_idx_1, &sb_emlrtRTEI);
    loop_ub = yi->size[0];
    b_unnamed_idx_1 = qOutside->size[0];
    qOutside->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&b_st, qOutside, b_unnamed_idx_1, &tb_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (yi->data[b_unnamed_idx_1] < -90.0);
      qOutside->data[b_unnamed_idx_1] = (90.0 < yi->data[b_unnamed_idx_1]);
    }

    if (r4->size[0] != qOutside->size[0]) {
      emlrtSizeEqCheck1DR2012b(r4->size[0], qOutside->size[0], &j_emlrtECI,
        &b_st);
    }

    b_unnamed_idx_1 = r4->size[0];
    for (loop_ub = 0; loop_ub < b_unnamed_idx_1; loop_ub++) {
      if (r4->data[loop_ub] || qOutside->data[loop_ub]) {
        if ((loop_ub + 1 < 1) || (loop_ub + 1 > yi->size[0])) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, yi->size[0],
            &tb_emlrtBCI, &b_st);
        }

        yi->data[loop_ub] = rtNaN;
      }
    }

    /*  Shift and scale latitude */
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      yi->data[b_unnamed_idx_1] = public_raster_struct->YIntrinsicLimits[0] +
        (yi->data[b_unnamed_idx_1] - public_raster_struct->FirstCornerLatitude) *
        public_raster_struct->DeltaLatitudeDenominator /
        public_raster_struct->DeltaLatitudeNumerator;
    }

    b_unnamed_idx_1 = qOutside->size[0];
    qOutside->size[0] = xi->size[0];
    emxEnsureCapacity_boolean_T(&st, qOutside, b_unnamed_idx_1, &vb_emlrtRTEI);
    loop_ub = xi->size[0];
    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = xi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &xb_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (xi->data[b_unnamed_idx_1] <
        public_raster_struct->XIntrinsicLimits[0]);
      r4->data[b_unnamed_idx_1] = (public_raster_struct->XIntrinsicLimits[1] <
        xi->data[b_unnamed_idx_1]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &f_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &yb_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (yi->data[b_unnamed_idx_1] <
        public_raster_struct->YIntrinsicLimits[0]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &f_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &ac_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (public_raster_struct->YIntrinsicLimits[1] <
        yi->data[b_unnamed_idx_1]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &f_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_st.site = &ad_emlrtRSI;
    c_st.site = &ad_emlrtRSI;
    b_round(&c_st, xi);
    c_st.site = &ld_emlrtRSI;
    d_st.site = &md_emlrtRSI;
    e_st.site = &nd_emlrtRSI;
    f_st.site = &od_emlrtRSI;
    b_unnamed_idx_1 = xi->size[0];
    unnamed_idx_1 = c->size[0];
    c->size[0] = xi->size[0];
    emxEnsureCapacity_real_T(&f_st, c, unnamed_idx_1, &bc_emlrtRTEI);
    g_st.site = &mb_emlrtRSI;
    h_st.site = &qb_emlrtRSI;
    if ((1 <= xi->size[0]) && (xi->size[0] > 2147483646)) {
      i_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < b_unnamed_idx_1; unnamed_idx_1++) {
      c->data[unnamed_idx_1] = muDoubleScalarMin(xi->data[unnamed_idx_1],
        public_raster_struct->RasterSize[1]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    b_st.site = &bd_emlrtRSI;
    c_st.site = &bd_emlrtRSI;
    b_round(&c_st, yi);
    c_st.site = &ld_emlrtRSI;
    d_st.site = &md_emlrtRSI;
    e_st.site = &nd_emlrtRSI;
    f_st.site = &od_emlrtRSI;
    b_unnamed_idx_1 = yi->size[0];
    unnamed_idx_1 = b_r->size[0];
    b_r->size[0] = yi->size[0];
    emxEnsureCapacity_real_T(&f_st, b_r, unnamed_idx_1, &bc_emlrtRTEI);
    g_st.site = &mb_emlrtRSI;
    h_st.site = &qb_emlrtRSI;
    if ((1 <= yi->size[0]) && (yi->size[0] > 2147483646)) {
      i_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < b_unnamed_idx_1; unnamed_idx_1++) {
      b_r->data[unnamed_idx_1] = muDoubleScalarMin(yi->data[unnamed_idx_1],
        public_raster_struct->RasterSize[0]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    /*  Remove any points that fall outside the grid */
    b_st.site = &ed_emlrtRSI;
    nullAssignment(&b_st, b_r, qOutside);
    b_st.site = &dd_emlrtRSI;
    nullAssignment(&b_st, c, qOutside);
    b_st.site = &cd_emlrtRSI;
    b_nullAssignment(&b_st, vis0, qOutside);

    /*   Embed the points into the grid */
    loop_ub = c->size[0];
    b_unnamed_idx_1 = xi->size[0];
    xi->size[0] = c->size[0];
    emxEnsureCapacity_real_T(&st, xi, b_unnamed_idx_1, &cc_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      xi->data[b_unnamed_idx_1] = (c->data[b_unnamed_idx_1] - 1.0) * (real_T)
        vismap->size[0];
    }

    if (xi->size[0] != b_r->size[0]) {
      emlrtSizeEqCheck1DR2012b(xi->size[0], b_r->size[0], &g_emlrtECI, &st);
    }

    unnamed_idx_1 = vismap->size[0] * vismap->size[1];
    b_unnamed_idx_1 = ii->size[0];
    ii->size[0] = xi->size[0];
    emxEnsureCapacity_int32_T(&st, ii, b_unnamed_idx_1, &dc_emlrtRTEI);
    loop_ub = xi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      yIntrinsicLimits1 = xi->data[b_unnamed_idx_1] + b_r->data[b_unnamed_idx_1];
      if (yIntrinsicLimits1 != (int32_T)muDoubleScalarFloor(yIntrinsicLimits1))
      {
        emlrtIntegerCheckR2012b(yIntrinsicLimits1, &c_emlrtDCI, &st);
      }

      if (((int32_T)yIntrinsicLimits1 < 1) || ((int32_T)yIntrinsicLimits1 >
           unnamed_idx_1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)yIntrinsicLimits1, 1,
          unnamed_idx_1, &xb_emlrtBCI, &st);
      }

      ii->data[b_unnamed_idx_1] = (int32_T)yIntrinsicLimits1;
    }

    loop_ub = vis0->size[0];
    if (ii->size[0] != vis0->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(ii->size[0], vis0->size[0], &h_emlrtECI,
        &st);
    }

    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      vismap->data[ii->data[b_unnamed_idx_1] - 1] = vis0->data[b_unnamed_idx_1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_boolean_T(&vis0);
  emxFree_real_T(&lon2);
  emxFree_real_T(&lat2);
  emxInit_boolean_T(sp, &r5, 2, &jb_emlrtRTEI, true);

  /*  Calculate LOS directly to fill in any remaining unassigned (NaN-valued) */
  /*  elements of vismap. */
  st.site = &j_emlrtRSI;
  i = r5->size[0] * r5->size[1];
  r5->size[0] = vismap->size[0];
  r5->size[1] = vismap->size[1];
  emxEnsureCapacity_boolean_T(&st, r5, i, &jb_emlrtRTEI);
  loop_ub = vismap->size[0] * vismap->size[1];
  for (i = 0; i < loop_ub; i++) {
    r5->data[i] = muDoubleScalarIsNaN(vismap->data[i]);
  }

  emxInit_int32_T(&st, &jj, 1, &ec_emlrtRTEI, true);
  b_st.site = &pd_emlrtRSI;
  eml_find(&b_st, r5, ii, jj);
  i = xi->size[0];
  xi->size[0] = ii->size[0];
  emxEnsureCapacity_real_T(&st, xi, i, &kb_emlrtRTEI);
  loop_ub = ii->size[0];
  emxFree_boolean_T(&r5);
  for (i = 0; i < loop_ub; i++) {
    xi->data[i] = ii->data[i];
  }

  i = yi->size[0];
  yi->size[0] = jj->size[0];
  emxEnsureCapacity_real_T(&st, yi, i, &lb_emlrtRTEI);
  loop_ub = jj->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = jj->data[i];
  }

  emxFree_int32_T(&jj);
  st.site = &k_emlrtRSI;

  /* --------------------------------------------------- */
  yIntrinsicLimits1 = public_raster_struct->YIntrinsicLimits[0];
  i = c->size[0];
  c->size[0] = yi->size[0];
  emxEnsureCapacity_real_T(&st, c, i, &mb_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    c->data[i] = (public_raster_struct->DeltaLatitudeNumerator * (yi->data[i] -
      public_raster_struct->YIntrinsicLimits[0]) + public_raster_struct_tmp) /
      public_raster_struct->DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  b_unnamed_idx_1 = yi->size[0] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (yi->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r6, 1, &fc_emlrtRTEI, true);
  i = r6->size[0];
  r6->size[0] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r6, i, &nb_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (yi->data[loop_ub] == yIntrinsicLimits1) {
      r6->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r6->size[0] - 1;
  unnamed_idx_1 = c->size[0];
  for (i = 0; i <= loop_ub; i++) {
    if ((r6->data[i] < 1) || (r6->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r6->data[i], 1, unnamed_idx_1, &qb_emlrtBCI,
        &st);
    }

    c->data[r6->data[i] - 1] = public_raster_struct->FirstCornerLatitude;
  }

  emxFree_int32_T(&r6);
  i = r4->size[0];
  r4->size[0] = c->size[0];
  emxEnsureCapacity_boolean_T(&st, r4, i, &fb_emlrtRTEI);
  loop_ub = c->size[0];
  for (i = 0; i < loop_ub; i++) {
    r4->data[i] = (c->data[i] < -public_raster_struct->NorthPoleLatitude);
  }

  i = qOutside->size[0];
  qOutside->size[0] = c->size[0];
  emxEnsureCapacity_boolean_T(&st, qOutside, i, &gb_emlrtRTEI);
  loop_ub = c->size[0];
  for (i = 0; i < loop_ub; i++) {
    qOutside->data[i] = (public_raster_struct->NorthPoleLatitude < c->data[i]);
  }

  if (r4->size[0] != qOutside->size[0]) {
    emlrtSizeEqCheck1DR2012b(r4->size[0], qOutside->size[0], &i_emlrtECI, &st);
  }

  b_unnamed_idx_1 = r4->size[0];
  for (loop_ub = 0; loop_ub < b_unnamed_idx_1; loop_ub++) {
    if (r4->data[loop_ub] || qOutside->data[loop_ub]) {
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > c->size[0])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, c->size[0], &rb_emlrtBCI,
          &st);
      }

      c->data[loop_ub] = rtNaN;
    }
  }

  emxFree_boolean_T(&r4);
  st.site = &l_emlrtRSI;

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = b_r->size[0];
  b_r->size[0] = xi->size[0];
  emxEnsureCapacity_real_T(&st, b_r, i, &qb_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (xi->data[i]
      - public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct_tmp)
      / public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  b_unnamed_idx_1 = xi->size[0] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (xi->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r7, 1, &gc_emlrtRTEI, true);
  i = r7->size[0];
  r7->size[0] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r7, i, &rb_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (xi->data[loop_ub] == yIntrinsicLimits1) {
      r7->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r7->size[0] - 1;
  unnamed_idx_1 = b_r->size[0];
  for (i = 0; i <= loop_ub; i++) {
    if ((r7->data[i] < 1) || (r7->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r7->data[i], 1, unnamed_idx_1, &sb_emlrtBCI,
        &st);
    }

    b_r->data[r7->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r7);
  i = qNaN->size[0];
  qNaN->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, qNaN, i, &ub_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    qNaN->data[i] = false;
  }

  i = xi->size[0];
  emxInit_real_T(sp, &lattrk, 1, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &h, 1, &oc_emlrtRTEI, true);
  for (k = 0; k < i; k++) {
    st.site = &m_emlrtRSI;
    b_unnamed_idx_1 = k + 1;
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > c->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, c->size[0], &ob_emlrtBCI,
        &st);
    }

    if (b_unnamed_idx_1 > b_r->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, b_r->size[0],
        &pb_emlrtBCI, &st);
    }

    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    b_st.site = &q_emlrtRSI;
    sampleGreatCircle(&b_st, lat1, lon1, c->data[k], b_r->data[k], 0.9 /
                      sample_dens, lattrk, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    b_st.site = &r_emlrtRSI;
    interpolate(&b_st, Z, lattrk, lontrk, public_raster_struct->RasterSize,
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
    loop_ub = arclenInRadians->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      arclenInRadians->data[b_unnamed_idx_1] *= actualradius;
    }

    b_st.site = &s_emlrtRSI;
    losprofile(&b_st, arclenInRadians, h, apparentradius, qOutside, y2, z1, x2,
               z2);
    if (qOutside->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(qOutside->size[0], 1, qOutside->size[0],
        &vb_emlrtBCI, sp);
    }

    if ((k + 1 < 1) || (k + 1 > qNaN->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qNaN->size[0], &wb_emlrtBCI, sp);
    }

    qNaN->data[k] = qOutside->data[qOutside->size[0] - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&h);
  emxFree_real_T(&lattrk);
  emxFree_real_T(&b_r);
  emxFree_real_T(&c);
  emxFree_boolean_T(&qOutside);
  emxFree_real_T(&z2);
  emxFree_real_T(&z1);
  emxFree_real_T(&arclenInRadians);
  emxFree_real_T(&lontrk);
  emxFree_real_T(&y2);
  emxFree_real_T(&x2);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = (yi->data[i] - 1.0) * (real_T)vismap->size[0];
  }

  if (yi->size[0] != xi->size[0]) {
    emlrtSizeEqCheck1DR2012b(yi->size[0], xi->size[0], &b_emlrtECI, sp);
  }

  unnamed_idx_1 = vismap->size[0] * vismap->size[1];
  i = ii->size[0];
  ii->size[0] = yi->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &wb_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_unnamed_idx_1 = (int32_T)(yi->data[i] + xi->data[i]);
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, unnamed_idx_1,
        &ub_emlrtBCI, sp);
    }

    ii->data[i] = b_unnamed_idx_1;
  }

  emxFree_real_T(&yi);
  emxFree_real_T(&xi);
  if (ii->size[0] != qNaN->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(ii->size[0], qNaN->size[0], &c_emlrtECI, sp);
  }

  loop_ub = qNaN->size[0];
  for (i = 0; i < loop_ub; i++) {
    vismap->data[ii->data[i] - 1] = qNaN->data[i];
  }

  emxFree_boolean_T(&qNaN);
  emxFree_int32_T(&ii);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mexable_viewshed.c) */
