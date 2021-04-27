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
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "mexable_calculateLOS.h"
#include "nullAssignment.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = { 19, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 20, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 24, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 26, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 32, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 33, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 34, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 38, /* lineNo */
  "mexable_viewshed",                  /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 63, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 64, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 65, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 74, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 75, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 83, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 84, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 90, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 89, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 88, /* lineNo */
  "embed",                             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 35, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  6,                                   /* colNo */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  94,                                  /* lineNo */
  1,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  8,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  12,                                  /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  62,                                  /* lineNo */
  8,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { 2,   /* nDims */
  193,                                 /* lineNo */
  9,                                   /* colNo */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  44,                                  /* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  43,                                  /* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  67,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  59,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  80,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  72,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 14,  /* lineNo */
  14,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 14,  /* lineNo */
  31,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  191,                                 /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  5,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_intrinsicXToLongitude",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  8,                                   /* colNo */
  "vismap",                            /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  14,                                  /* colNo */
  "visprofile",                        /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  5,                                   /* colNo */
  "vis",                               /* aName */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  2,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 94,  /* lineNo */
  3,                                   /* colNo */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  3,                                   /* colNo */
  "Z",                                 /* aName */
  "embed",                             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fb_emlrtECI = { -1, /* nDims */
  193,                                 /* lineNo */
  9,                                   /* colNo */
  "mexable_intrinsicYToLatitude",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 14,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 15,/* lineNo */
  11,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 19,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 193,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 193,/* lineNo */
  39,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 20,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 20,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 15,/* lineNo */
  13,                                  /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 34,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 62,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 62,/* lineNo */
  21,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 35,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 44,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 113,/* lineNo */
  6,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 113,/* lineNo */
  18,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 80,/* lineNo */
  13,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 80,/* lineNo */
  42,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 81,/* lineNo */
  13,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 81,/* lineNo */
  42,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 93,/* lineNo */
  8,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 94,/* lineNo */
  3,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 1,/* lineNo */
  24,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 191,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 180,/* lineNo */
  9,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 62,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 74,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 75,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 80,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 83,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 84,/* lineNo */
  1,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 1,/* lineNo */
  23,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 187,/* lineNo */
  5,                                   /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 183,/* lineNo */
  16,                                  /* colNo */
  "mexable_viewshed",                  /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_viewshed.m"/* pName */
};

/* Function Declarations */
static void mexable_intrinsicYToLatitude(const emlrtStack *sp, const real_T
  pR_YIntrinsicLimits[2], real_T pR_FirstCornerLatitude, real_T
  pR_DeltaLatitudeNumerator, real_T pR_DeltaLatitudeDenominator, real_T
  pR_NorthPoleLatitude, const emxArray_real_T *yi, emxArray_real_T *lat);

/* Function Definitions */
static void mexable_intrinsicYToLatitude(const emlrtStack *sp, const real_T
  pR_YIntrinsicLimits[2], real_T pR_FirstCornerLatitude, real_T
  pR_DeltaLatitudeNumerator, real_T pR_DeltaLatitudeDenominator, real_T
  pR_NorthPoleLatitude, const emxArray_real_T *yi, emxArray_real_T *lat)
{
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  real_T b_pR_DeltaLatitudeDenominator;
  real_T yIntrinsicLimits1;
  int32_T end;
  int32_T i;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* --------------------------------------------------- */
  yIntrinsicLimits1 = pR_YIntrinsicLimits[0];
  b_pR_DeltaLatitudeDenominator = pR_DeltaLatitudeDenominator *
    pR_FirstCornerLatitude;
  i = lat->size[0];
  lat->size[0] = yi->size[0];
  emxEnsureCapacity_real_T(sp, lat, i, &lh_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    lat->data[i] = (pR_DeltaLatitudeNumerator * (yi->data[i] -
      pR_YIntrinsicLimits[0]) + b_pR_DeltaLatitudeDenominator) /
      pR_DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  end = yi->size[0] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (yi->data[i] == yIntrinsicLimits1) {
      loop_ub++;
    }
  }

  emxInit_int32_T(sp, &r, 1, &ee_emlrtRTEI, true);
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r, i, &mh_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (yi->data[i] == yIntrinsicLimits1) {
      r->data[loop_ub] = i + 1;
      loop_ub++;
    }
  }

  loop_ub = r->size[0] - 1;
  end = lat->size[0];
  for (i = 0; i <= loop_ub; i++) {
    if ((r->data[i] < 1) || (r->data[i] > end)) {
      emlrtDynamicBoundsCheckR2012b(r->data[i], 1, end, &id_emlrtBCI, sp);
    }

    lat->data[r->data[i] - 1] = pR_FirstCornerLatitude;
  }

  emxFree_int32_T(&r);
  emxInit_boolean_T(sp, &r1, 1, &mh_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = lat->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &gd_emlrtRTEI);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (lat->data[i] < -pR_NorthPoleLatitude);
  }

  emxInit_boolean_T(sp, &r2, 1, &mh_emlrtRTEI, true);
  i = r2->size[0];
  r2->size[0] = lat->size[0];
  emxEnsureCapacity_boolean_T(sp, r2, i, &hd_emlrtRTEI);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = (pR_NorthPoleLatitude < lat->data[i]);
  }

  if (r1->size[0] != r2->size[0]) {
    emlrtSizeEqCheck1DR2012b(r1->size[0], r2->size[0], &fb_emlrtECI, sp);
  }

  end = r1->size[0];
  for (i = 0; i < end; i++) {
    if (r1->data[i] || r2->data[i]) {
      if ((i + 1 < 1) || (i + 1 > lat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, lat->size[0], &jd_emlrtBCI, sp);
      }

      lat->data[i] = rtNaN;
    }
  }

  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mexable_viewshed(const emlrtStack *sp, const emxArray_real_T *Z, real_T
                      lat1, real_T lon1, real_T actualradius, real_T
                      apparentradius, real_T sample_dens, const struct2_T
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
  real_T b_public_raster_struct;
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
  emxEnsureCapacity_real_T(sp, vismap, i, &yc_emlrtRTEI);
  loop_ub = Z->size[0] * Z->size[1];
  for (i = 0; i < loop_ub; i++) {
    vismap->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &y2, 2, &dd_emlrtRTEI, true);
  emxInit_real_T(sp, &lon2, 2, &id_emlrtRTEI, true);
  if (Z->size[1] < 1) {
    lon2->size[0] = 1;
    lon2->size[1] = 0;
    y2->size[0] = 1;
    y2->size[1] = 0;
  } else {
    i = lon2->size[0] * lon2->size[1];
    lon2->size[0] = 1;
    lon2->size[1] = (int32_T)((real_T)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, lon2, i, &ad_emlrtRTEI);
    loop_ub = (int32_T)((real_T)Z->size[1] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      lon2->data[i] = (real_T)i + 1.0;
    }

    i = y2->size[0] * y2->size[1];
    y2->size[0] = 1;
    y2->size[1] = (int32_T)((real_T)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, y2, i, &ad_emlrtRTEI);
    loop_ub = (int32_T)((real_T)Z->size[1] - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y2->data[i] = (real_T)i + 1.0;
    }
  }

  if (Z->size[0] - 2 < 0) {
    emlrtNonNegativeCheckR2012b(Z->size[0] - 2, &j_emlrtDCI, sp);
  }

  unnamed_idx_1 = Z->size[0] - 2;
  if (Z->size[0] - 2 < 0) {
    emlrtNonNegativeCheckR2012b(Z->size[0] - 2, &k_emlrtDCI, sp);
  }

  emxInit_real_T(sp, &x2, 2, &bd_emlrtRTEI, true);
  b_unnamed_idx_1 = Z->size[0] - 2;
  i = x2->size[0] * x2->size[1];
  x2->size[0] = 1;
  x2->size[1] = (((Z->size[0] + Z->size[0]) + lon2->size[1]) + y2->size[1]) - 4;
  emxEnsureCapacity_real_T(sp, x2, i, &bd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, lon2, i, &cd_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Z->size[0] - 1.0) - 2.0);
    for (i = 0; i <= loop_ub; i++) {
      lon2->data[i] = (real_T)i + 2.0;
    }
  }

  i = y2->size[0] * y2->size[1];
  y2->size[0] = 1;
  y2->size[1] = ((lon2->size[1] + lon2->size[1]) + Z->size[1]) + Z->size[1];
  emxEnsureCapacity_real_T(sp, y2, i, &dd_emlrtRTEI);
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

  emxInit_real_T(sp, &lat2, 2, &ed_emlrtRTEI, true);

  /*  lat2 = intrinsicYToLatitude(R, y2); */
  /*  lon2 = intrinsicXToLongitude(R, x2); */
  st.site = &ib_emlrtRSI;

  /* --------------------------------------------------- */
  yIntrinsicLimits1 = public_raster_struct->YIntrinsicLimits[0];
  i = lat2->size[0] * lat2->size[1];
  lat2->size[0] = 1;
  lat2->size[1] = y2->size[1];
  emxEnsureCapacity_real_T(&st, lat2, i, &ed_emlrtRTEI);
  b_public_raster_struct = public_raster_struct->DeltaLatitudeDenominator *
    public_raster_struct->FirstCornerLatitude;
  loop_ub = y2->size[0] * y2->size[1];
  for (i = 0; i < loop_ub; i++) {
    lat2->data[i] = (public_raster_struct->DeltaLatitudeNumerator * (y2->data[i]
      - public_raster_struct->YIntrinsicLimits[0]) + b_public_raster_struct) /
      public_raster_struct->DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  b_unnamed_idx_1 = y2->size[1] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (y2->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r, 2, &ee_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r, i, &fd_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (y2->data[loop_ub] == yIntrinsicLimits1) {
      r->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r->size[0] * r->size[1] - 1;
  unnamed_idx_1 = lat2->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if ((r->data[i] < 1) || (r->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r->data[i], 1, unnamed_idx_1, &id_emlrtBCI,
        &st);
    }

    lat2->data[r->data[i] - 1] = public_raster_struct->FirstCornerLatitude;
  }

  emxFree_int32_T(&r);
  emxInit_boolean_T(&st, &r1, 2, &de_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(&st, r1, i, &gd_emlrtRTEI);
  loop_ub = lat2->size[0] * lat2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (lat2->data[i] < -public_raster_struct->NorthPoleLatitude);
  }

  emxInit_boolean_T(&st, &r2, 2, &de_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(&st, r2, i, &hd_emlrtRTEI);
  loop_ub = lat2->size[0] * lat2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = (public_raster_struct->NorthPoleLatitude < lat2->data[i]);
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r1->size, *(int32_T (*)[2])r2->size,
    &m_emlrtECI, &st);
  b_unnamed_idx_1 = r1->size[1];
  for (loop_ub = 0; loop_ub < b_unnamed_idx_1; loop_ub++) {
    if (r1->data[loop_ub] || r2->data[loop_ub]) {
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > lat2->size[1])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, lat2->size[1],
          &jd_emlrtBCI, &st);
      }

      lat2->data[loop_ub] = rtNaN;
    }
  }

  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  st.site = &jb_emlrtRSI;

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = lon2->size[0] * lon2->size[1];
  lon2->size[0] = 1;
  lon2->size[1] = x2->size[1];
  emxEnsureCapacity_real_T(&st, lon2, i, &id_emlrtRTEI);
  b_public_raster_struct = public_raster_struct->DeltaLongitudeDenominator *
    public_raster_struct->FirstCornerLongitude;
  loop_ub = x2->size[0] * x2->size[1];
  for (i = 0; i < loop_ub; i++) {
    lon2->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (x2->data[i]
      - public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct) /
      public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  b_unnamed_idx_1 = x2->size[1] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (x2->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r3, 2, &fe_emlrtRTEI, true);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r3, i, &jd_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (x2->data[loop_ub] == yIntrinsicLimits1) {
      r3->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r3->size[0] * r3->size[1] - 1;
  unnamed_idx_1 = lon2->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if ((r3->data[i] < 1) || (r3->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, unnamed_idx_1, &kd_emlrtBCI,
        &st);
    }

    lon2->data[r3->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r3);
  i = lat2->size[1];
  emxInit_int32_T(sp, &ii, 1, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &lontrk, 1, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &arclenInRadians, 1, &ge_emlrtRTEI, true);
  emxInit_boolean_T(sp, &vis0, 1, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &z1, 2, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &z2, 2, &de_emlrtRTEI, true);
  emxInit_boolean_T(sp, &qNaN, 1, &he_emlrtRTEI, true);
  emxInit_real_T(sp, &xi, 1, &ie_emlrtRTEI, true);
  emxInit_real_T(sp, &yi, 1, &je_emlrtRTEI, true);
  emxInit_boolean_T(sp, &qOutside, 1, &ke_emlrtRTEI, true);
  emxInit_real_T(sp, &c, 1, &le_emlrtRTEI, true);
  emxInit_real_T(sp, &b_r, 1, &me_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r4, 1, &de_emlrtRTEI, true);
  for (k = 0; k < i; k++) {
    st.site = &kb_emlrtRSI;
    b_unnamed_idx_1 = k + 1;
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > lat2->size[1])) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, lat2->size[1],
        &hd_emlrtBCI, &st);
    }

    if (b_unnamed_idx_1 > lon2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, lon2->size[1],
        &gd_emlrtBCI, &st);
    }

    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    b_st.site = &tb_emlrtRSI;
    sampleGreatCircle(&b_st, lat1, lon1, lat2->data[k], lon2->data[k], 0.9 /
                      sample_dens, yi, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    b_st.site = &ub_emlrtRSI;
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

    b_st.site = &vb_emlrtRSI;
    losprofile(&b_st, arclenInRadians, xi, apparentradius, vis0, y2, z1, x2, z2);
    st.site = &lb_emlrtRSI;

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
    emxEnsureCapacity_boolean_T(&st, qNaN, b_unnamed_idx_1, &pd_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qNaN->data[b_unnamed_idx_1] = muDoubleScalarIsNaN(yi->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = lontrk->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &qd_emlrtRTEI);
    loop_ub = lontrk->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = muDoubleScalarIsNaN(lontrk->
        data[b_unnamed_idx_1]);
    }

    if (qNaN->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qNaN->size[0], r4->size[0], &l_emlrtECI, &st);
    }

    loop_ub = qNaN->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qNaN->data[b_unnamed_idx_1] = (qNaN->data[b_unnamed_idx_1] || r4->
        data[b_unnamed_idx_1]);
    }

    b_st.site = &yd_emlrtRSI;
    nullAssignment(&b_st, yi, qNaN);
    b_st.site = &ae_emlrtRSI;
    nullAssignment(&b_st, lontrk, qNaN);
    b_st.site = &be_emlrtRSI;
    b_nullAssignment(&b_st, vis0, qNaN);

    /*   Convert the lat and lon data to cell positions */
    /*     [r, c] = geographicToDiscrete(R, lat, lon); */
    /*     qOutside = isnan(r); */
    /*   As an optimization, avoid [r, c] = geographicToDiscrete(R, lat, lon); */
    /*   because it takes time to validate its latitude-longitude inputs. */
    b_st.site = &ce_emlrtRSI;
    mexable_longitudeToIntrinsicX(&b_st, public_raster_struct->FullCycle,
      public_raster_struct->XIntrinsicLimits,
      public_raster_struct->pLongitudeLimits,
      public_raster_struct->FirstCornerLongitude,
      public_raster_struct->DeltaLongitudeNumerator,
      public_raster_struct->DeltaLongitudeDenominator, lontrk, xi);
    b_st.site = &de_emlrtRSI;

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
    emxEnsureCapacity_boolean_T(&b_st, r4, b_unnamed_idx_1, &td_emlrtRTEI);
    loop_ub = yi->size[0];
    b_unnamed_idx_1 = qOutside->size[0];
    qOutside->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&b_st, qOutside, b_unnamed_idx_1, &ud_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (yi->data[b_unnamed_idx_1] < -90.0);
      qOutside->data[b_unnamed_idx_1] = (90.0 < yi->data[b_unnamed_idx_1]);
    }

    if (r4->size[0] != qOutside->size[0]) {
      emlrtSizeEqCheck1DR2012b(r4->size[0], qOutside->size[0], &h_emlrtECI,
        &b_st);
    }

    b_unnamed_idx_1 = r4->size[0];
    for (loop_ub = 0; loop_ub < b_unnamed_idx_1; loop_ub++) {
      if (r4->data[loop_ub] || qOutside->data[loop_ub]) {
        if ((loop_ub + 1 < 1) || (loop_ub + 1 > yi->size[0])) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, yi->size[0],
            &od_emlrtBCI, &b_st);
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
    emxEnsureCapacity_boolean_T(&st, qOutside, b_unnamed_idx_1, &vd_emlrtRTEI);
    loop_ub = xi->size[0];
    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = xi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &wd_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (xi->data[b_unnamed_idx_1] <
        public_raster_struct->XIntrinsicLimits[0]);
      r4->data[b_unnamed_idx_1] = (public_raster_struct->XIntrinsicLimits[1] <
        xi->data[b_unnamed_idx_1]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &k_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &xd_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (yi->data[b_unnamed_idx_1] <
        public_raster_struct->YIntrinsicLimits[0]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &k_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_unnamed_idx_1 = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(&st, r4, b_unnamed_idx_1, &yd_emlrtRTEI);
    loop_ub = yi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      r4->data[b_unnamed_idx_1] = (public_raster_struct->YIntrinsicLimits[1] <
        yi->data[b_unnamed_idx_1]);
    }

    if (qOutside->size[0] != r4->size[0]) {
      emlrtSizeEqCheck1DR2012b(qOutside->size[0], r4->size[0], &k_emlrtECI, &st);
    }

    loop_ub = qOutside->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      qOutside->data[b_unnamed_idx_1] = (qOutside->data[b_unnamed_idx_1] ||
        r4->data[b_unnamed_idx_1]);
    }

    b_st.site = &ee_emlrtRSI;
    c_st.site = &ee_emlrtRSI;
    b_round(&c_st, xi);
    c_st.site = &pe_emlrtRSI;
    d_st.site = &qe_emlrtRSI;
    e_st.site = &re_emlrtRSI;
    f_st.site = &se_emlrtRSI;
    b_unnamed_idx_1 = xi->size[0];
    unnamed_idx_1 = c->size[0];
    c->size[0] = xi->size[0];
    emxEnsureCapacity_real_T(&f_st, c, unnamed_idx_1, &ae_emlrtRTEI);
    g_st.site = &qc_emlrtRSI;
    h_st.site = &uc_emlrtRSI;
    if ((1 <= xi->size[0]) && (xi->size[0] > 2147483646)) {
      i_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < b_unnamed_idx_1; unnamed_idx_1++) {
      c->data[unnamed_idx_1] = muDoubleScalarMin(xi->data[unnamed_idx_1],
        public_raster_struct->RasterSize[1]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    b_st.site = &fe_emlrtRSI;
    c_st.site = &fe_emlrtRSI;
    b_round(&c_st, yi);
    c_st.site = &pe_emlrtRSI;
    d_st.site = &qe_emlrtRSI;
    e_st.site = &re_emlrtRSI;
    f_st.site = &se_emlrtRSI;
    b_unnamed_idx_1 = yi->size[0];
    unnamed_idx_1 = b_r->size[0];
    b_r->size[0] = yi->size[0];
    emxEnsureCapacity_real_T(&f_st, b_r, unnamed_idx_1, &ae_emlrtRTEI);
    g_st.site = &qc_emlrtRSI;
    h_st.site = &uc_emlrtRSI;
    if ((1 <= yi->size[0]) && (yi->size[0] > 2147483646)) {
      i_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (unnamed_idx_1 = 0; unnamed_idx_1 < b_unnamed_idx_1; unnamed_idx_1++) {
      b_r->data[unnamed_idx_1] = muDoubleScalarMin(yi->data[unnamed_idx_1],
        public_raster_struct->RasterSize[0]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    /*  Remove any points that fall outside the grid */
    b_st.site = &ie_emlrtRSI;
    nullAssignment(&b_st, b_r, qOutside);
    b_st.site = &he_emlrtRSI;
    nullAssignment(&b_st, c, qOutside);
    b_st.site = &ge_emlrtRSI;
    b_nullAssignment(&b_st, vis0, qOutside);

    /*   Embed the points into the grid */
    loop_ub = c->size[0];
    b_unnamed_idx_1 = xi->size[0];
    xi->size[0] = c->size[0];
    emxEnsureCapacity_real_T(&st, xi, b_unnamed_idx_1, &be_emlrtRTEI);
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      xi->data[b_unnamed_idx_1] = (c->data[b_unnamed_idx_1] - 1.0) * (real_T)
        vismap->size[0];
    }

    if (xi->size[0] != b_r->size[0]) {
      emlrtSizeEqCheck1DR2012b(xi->size[0], b_r->size[0], &j_emlrtECI, &st);
    }

    unnamed_idx_1 = vismap->size[0] * vismap->size[1];
    b_unnamed_idx_1 = ii->size[0];
    ii->size[0] = xi->size[0];
    emxEnsureCapacity_int32_T(&st, ii, b_unnamed_idx_1, &ce_emlrtRTEI);
    loop_ub = xi->size[0];
    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      yIntrinsicLimits1 = xi->data[b_unnamed_idx_1] + b_r->data[b_unnamed_idx_1];
      if (yIntrinsicLimits1 != (int32_T)muDoubleScalarFloor(yIntrinsicLimits1))
      {
        emlrtIntegerCheckR2012b(yIntrinsicLimits1, &l_emlrtDCI, &st);
      }

      if (((int32_T)yIntrinsicLimits1 < 1) || ((int32_T)yIntrinsicLimits1 >
           unnamed_idx_1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)yIntrinsicLimits1, 1,
          unnamed_idx_1, &pd_emlrtBCI, &st);
      }

      ii->data[b_unnamed_idx_1] = (int32_T)yIntrinsicLimits1;
    }

    loop_ub = vis0->size[0];
    if (ii->size[0] != vis0->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(ii->size[0], vis0->size[0], &i_emlrtECI,
        &st);
    }

    for (b_unnamed_idx_1 = 0; b_unnamed_idx_1 < loop_ub; b_unnamed_idx_1++) {
      vismap->data[ii->data[b_unnamed_idx_1] - 1] = vis0->data[b_unnamed_idx_1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&vis0);
  emxFree_real_T(&lon2);
  emxFree_real_T(&lat2);
  emxInit_boolean_T(sp, &r5, 2, &kd_emlrtRTEI, true);

  /*  Calculate LOS directly to fill in any remaining unassigned (NaN-valued) */
  /*  elements of vismap. */
  st.site = &mb_emlrtRSI;
  i = r5->size[0] * r5->size[1];
  r5->size[0] = vismap->size[0];
  r5->size[1] = vismap->size[1];
  emxEnsureCapacity_boolean_T(&st, r5, i, &kd_emlrtRTEI);
  loop_ub = vismap->size[0] * vismap->size[1];
  for (i = 0; i < loop_ub; i++) {
    r5->data[i] = muDoubleScalarIsNaN(vismap->data[i]);
  }

  emxInit_int32_T(&st, &jj, 1, &de_emlrtRTEI, true);
  b_st.site = &te_emlrtRSI;
  eml_find(&b_st, r5, ii, jj);
  i = xi->size[0];
  xi->size[0] = ii->size[0];
  emxEnsureCapacity_real_T(&st, xi, i, &ld_emlrtRTEI);
  loop_ub = ii->size[0];
  emxFree_boolean_T(&r5);
  for (i = 0; i < loop_ub; i++) {
    xi->data[i] = ii->data[i];
  }

  i = yi->size[0];
  yi->size[0] = jj->size[0];
  emxEnsureCapacity_real_T(&st, yi, i, &md_emlrtRTEI);
  loop_ub = jj->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = jj->data[i];
  }

  emxFree_int32_T(&jj);
  st.site = &nb_emlrtRSI;
  mexable_intrinsicYToLatitude(&st, public_raster_struct->YIntrinsicLimits,
    public_raster_struct->FirstCornerLatitude,
    public_raster_struct->DeltaLatitudeNumerator,
    public_raster_struct->DeltaLatitudeDenominator,
    public_raster_struct->NorthPoleLatitude, yi, c);
  st.site = &ob_emlrtRSI;

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = b_r->size[0];
  b_r->size[0] = xi->size[0];
  emxEnsureCapacity_real_T(&st, b_r, i, &nd_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (xi->data[i]
      - public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct) /
      public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  b_unnamed_idx_1 = xi->size[0] - 1;
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (xi->data[loop_ub] == yIntrinsicLimits1) {
      unnamed_idx_1++;
    }
  }

  emxInit_int32_T(&st, &r6, 1, &fe_emlrtRTEI, true);
  i = r6->size[0];
  r6->size[0] = unnamed_idx_1;
  emxEnsureCapacity_int32_T(&st, r6, i, &od_emlrtRTEI);
  unnamed_idx_1 = 0;
  for (loop_ub = 0; loop_ub <= b_unnamed_idx_1; loop_ub++) {
    if (xi->data[loop_ub] == yIntrinsicLimits1) {
      r6->data[unnamed_idx_1] = loop_ub + 1;
      unnamed_idx_1++;
    }
  }

  loop_ub = r6->size[0] - 1;
  unnamed_idx_1 = b_r->size[0];
  for (i = 0; i <= loop_ub; i++) {
    if ((r6->data[i] < 1) || (r6->data[i] > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(r6->data[i], 1, unnamed_idx_1, &kd_emlrtBCI,
        &st);
    }

    b_r->data[r6->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r6);
  i = qNaN->size[0];
  qNaN->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, qNaN, i, &rd_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    qNaN->data[i] = false;
  }

  i = xi->size[0];
  emxInit_real_T(sp, &lattrk, 1, &de_emlrtRTEI, true);
  emxInit_real_T(sp, &h, 1, &ne_emlrtRTEI, true);
  for (k = 0; k < i; k++) {
    st.site = &pb_emlrtRSI;
    b_unnamed_idx_1 = k + 1;
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > c->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, c->size[0], &fd_emlrtBCI,
        &st);
    }

    if (b_unnamed_idx_1 > b_r->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, b_r->size[0],
        &ed_emlrtBCI, &st);
    }

    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    b_st.site = &tb_emlrtRSI;
    sampleGreatCircle(&b_st, lat1, lon1, c->data[k], b_r->data[k], 0.9 /
                      sample_dens, lattrk, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    b_st.site = &ub_emlrtRSI;
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

    b_st.site = &vb_emlrtRSI;
    losprofile(&b_st, arclenInRadians, h, apparentradius, qOutside, y2, z1, x2,
               z2);
    if (qOutside->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(qOutside->size[0], 1, qOutside->size[0],
        &md_emlrtBCI, sp);
    }

    if ((k + 1 < 1) || (k + 1 > qNaN->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, qNaN->size[0], &nd_emlrtBCI, sp);
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
    emlrtSizeEqCheck1DR2012b(yi->size[0], xi->size[0], &o_emlrtECI, sp);
  }

  unnamed_idx_1 = vismap->size[0] * vismap->size[1];
  i = ii->size[0];
  ii->size[0] = yi->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &sd_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_unnamed_idx_1 = (int32_T)(yi->data[i] + xi->data[i]);
    if ((b_unnamed_idx_1 < 1) || (b_unnamed_idx_1 > unnamed_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(b_unnamed_idx_1, 1, unnamed_idx_1,
        &ld_emlrtBCI, sp);
    }

    ii->data[i] = b_unnamed_idx_1;
  }

  emxFree_real_T(&yi);
  emxFree_real_T(&xi);
  if (ii->size[0] != qNaN->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(ii->size[0], qNaN->size[0], &n_emlrtECI, sp);
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
