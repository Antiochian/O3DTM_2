/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_calculateLOS.c
 *
 * Code generation for function 'mexable_calculateLOS'
 *
 */

/* Include files */
#include "mexable_calculateLOS.h"
#include "atan2.h"
#include "cos.h"
#include "eml_int_forloop_overflow_check.h"
#include "interp2.h"
#include "linspace.h"
#include "mod.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "sin.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = { 82, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 83, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 85, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 36, /* lineNo */
  "sampleGreatCircle",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 48, /* lineNo */
  "sampleGreatCircle",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 58, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 59, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 61, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 67, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 107,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 108,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 110,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 113,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 112,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 17, /* lineNo */
  "asin",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 71, /* lineNo */
  "mexable_wrapTo2Pi",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 199,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 200,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 218,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 165,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 168,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 181,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 186,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 111,/* lineNo */
  "interp2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 112,/* lineNo */
  "interp2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 249,/* lineNo */
  "interp2_dispatch",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 236,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 256,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 271,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 289,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 319,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 323,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 324,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 18, /* lineNo */
  "repelem",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 54, /* lineNo */
  "repelemVector",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 55, /* lineNo */
  "repelemVector",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  72,                                  /* lineNo */
  8,                                   /* colNo */
  "mexable_wrapTo2Pi",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  23,                                  /* colNo */
  "greatcirclefwd",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  110,                                 /* lineNo */
  13,                                  /* colNo */
  "greatcirclefwd",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  1,                                   /* colNo */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  66,                                  /* lineNo */
  5,                                   /* colNo */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  48,                                  /* colNo */
  "lambdaTrack",                       /* aName */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  1,                                   /* colNo */
  "lambda",                            /* aName */
  "mexable_wrapTo2Pi",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  1,                                   /* colNo */
  "lambdaTrack",                       /* aName */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "sampleGreatCircle",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  5,                                   /* colNo */
  "lon",                               /* aName */
  "sampleGreatCircle",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  205,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  206,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  212,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  213,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  134,                                 /* lineNo */
  6,                                   /* colNo */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 142,/* lineNo */
  15,                                  /* colNo */
  "interp2_validate",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 150,/* lineNo */
  15,                                  /* colNo */
  "interp2_validate",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pName */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  2,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  1,                                   /* colNo */
  "xi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  1,                                   /* colNo */
  "yi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  1,                                   /* colNo */
  "xi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  1,                                   /* colNo */
  "yi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  180,                                 /* lineNo */
  3,                                   /* colNo */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { -1, /* nDims */
  185,                                 /* lineNo */
  3,                                   /* colNo */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  16,                                  /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  3,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  18,                                  /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  185,                                 /* lineNo */
  3,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  303,                                 /* lineNo */
  9,                                   /* colNo */
  "vis",                               /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  25,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  15,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  8,                                   /* colNo */
  "z2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  297,                                 /* lineNo */
  8,                                   /* colNo */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  10,                                  /* colNo */
  "ang2",                              /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  21,                                  /* colNo */
  "z2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  7,                                   /* colNo */
  "x2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  9,                                   /* colNo */
  "ang",                               /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  19,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  6,                                   /* colNo */
  "x",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  15,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  324,                                 /* lineNo */
  6,                                   /* colNo */
  "adjustterrain",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  323,                                 /* lineNo */
  6,                                   /* colNo */
  "adjustterrain",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 47,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 59,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 107,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 108,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 110,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 110,/* lineNo */
  33,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 113,/* lineNo */
  52,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 66,/* lineNo */
  6,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 66,/* lineNo */
  28,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 67,/* lineNo */
  36,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 71,/* lineNo */
  14,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 27,/* lineNo */
  7,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 67,/* lineNo */
  48,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 59,/* lineNo */
  19,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 199,/* lineNo */
  39,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 134,/* lineNo */
  6,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 134,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 200,/* lineNo */
  40,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 205,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 205,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 206,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 206,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 212,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 212,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 213,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 213,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 199,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 194,/* lineNo */
  15,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 168,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 165,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 141,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 190,/* lineNo */
  2,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 181,/* lineNo */
  12,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 186,/* lineNo */
  14,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 181,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 186,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 238,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 232,/* lineNo */
  10,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 239,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 233,/* lineNo */
  7,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 251,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 256,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 274,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 275,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 272,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 289,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 297,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 306,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 229,/* lineNo */
  11,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 316,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 317,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 321,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 48,/* lineNo */
  24,                                  /* colNo */
  "repelem",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 323,/* lineNo */
  11,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 323,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 324,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 319,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

/* Function Declarations */
static void adjustterrain(const emlrtStack *sp, const emxArray_real_T *arclen,
  const emxArray_real_T *zin, real_T apparentradius, emxArray_real_T *x,
  emxArray_real_T *z);

/* Function Definitions */
static void adjustterrain(const emlrtStack *sp, const emxArray_real_T *arclen,
  const emxArray_real_T *zin, real_T apparentradius, emxArray_real_T *x,
  emxArray_real_T *z)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *phi;
  emxArray_real_T *phi0;
  int32_T idx;
  int32_T j;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ----------------------------------------------------------------------- */
  /*  Adjust the terrain slice for the curvature of the sphere. The radius */
  /*  may potentially be different from the actual body, for example to */
  /*  model refraction of radio waves. */
  j = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = zin->size[1];
  emxEnsureCapacity_real_T(sp, z, j, &xg_emlrtRTEI);
  idx = zin->size[0] * zin->size[1];
  for (j = 0; j < idx; j++) {
    z->data[j] = apparentradius + zin->data[j];
  }

  emxInit_real_T(sp, &phi0, 2, &yg_emlrtRTEI, true);
  j = phi0->size[0] * phi0->size[1];
  phi0->size[0] = 1;
  phi0->size[1] = arclen->size[1];
  emxEnsureCapacity_real_T(sp, phi0, j, &yg_emlrtRTEI);
  idx = arclen->size[0] * arclen->size[1];
  for (j = 0; j < idx; j++) {
    phi0->data[j] = arclen->data[j] / apparentradius;
  }

  emxInit_real_T(sp, &phi, 2, &fh_emlrtRTEI, true);
  if (phi0->size[1] == 1) {
    st.site = &md_emlrtRSI;
    n = z->size[1];
    b_st.site = &pd_emlrtRSI;
    j = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = z->size[1];
    emxEnsureCapacity_real_T(&b_st, phi, j, &bh_emlrtRTEI);
    idx = -1;
    c_st.site = &qd_emlrtRSI;
    c_st.site = &rd_emlrtRSI;
    if ((1 <= z->size[1]) && (z->size[1] > 2147483646)) {
      d_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (j = 0; j < n; j++) {
      idx++;
      phi->data[idx] = phi0->data[0];
    }
  } else {
    j = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = phi0->size[1];
    emxEnsureCapacity_real_T(sp, phi, j, &ah_emlrtRTEI);
    idx = phi0->size[0] * phi0->size[1];
    for (j = 0; j < idx; j++) {
      phi->data[j] = phi0->data[j];
    }
  }

  emxFree_real_T(&phi0);
  j = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = phi->size[1];
  emxEnsureCapacity_real_T(sp, x, j, &ch_emlrtRTEI);
  idx = phi->size[0] * phi->size[1];
  for (j = 0; j < idx; j++) {
    x->data[j] = phi->data[j];
  }

  st.site = &nd_emlrtRSI;
  c_sin(&st, x);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])z->size, *(int32_T (*)[2])x->size,
    &eb_emlrtECI, sp);
  j = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = z->size[1];
  emxEnsureCapacity_real_T(sp, x, j, &dh_emlrtRTEI);
  idx = z->size[0] * z->size[1] - 1;
  for (j = 0; j <= idx; j++) {
    x->data[j] *= z->data[j];
  }

  st.site = &od_emlrtRSI;
  b_cos(&st, phi);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])z->size, *(int32_T (*)[2])phi->size,
    &db_emlrtECI, sp);
  j = z->size[0] * z->size[1];
  idx = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(sp, z, idx, &eh_emlrtRTEI);
  idx = j - 1;
  for (j = 0; j <= idx; j++) {
    z->data[j] = z->data[j] * phi->data[j] - apparentradius;
  }

  emxFree_real_T(&phi);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void interpolate(const emlrtStack *sp, const emxArray_real_T *Z, const
                 emxArray_real_T *lat, const emxArray_real_T *lon, const real_T
                 pR_RasterSize[2], real_T pR_FullCycle, const real_T
                 pR_XIntrinsicLimits[2], const real_T pR_YIntrinsicLimits[2],
                 const real_T pR_pLongitudeLimits[2], real_T
                 pR_FirstCornerLatitude, real_T pR_FirstCornerLongitude, real_T
                 pR_DeltaLatitudeNumerator, real_T pR_DeltaLatitudeDenominator,
                 real_T pR_DeltaLongitudeNumerator, real_T
                 pR_DeltaLongitudeDenominator, emxArray_real_T *v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_real_T *b_lon;
  emxArray_real_T *xi;
  emxArray_real_T *yi;
  int32_T i;
  int32_T loop_ub;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &yi, 1, &xf_emlrtRTEI, true);

  /* -------------------------------------------------------------------------- */
  /*  Use the griddentInterpolant object F which is defined in the intrinsic */
  /*  coordinate system referred to by raster reference object R. */
  /*  Interpolate bilinearly in intrinsic coordinates. */
  st.site = &vc_emlrtRSI;
  i = yi->size[0];
  yi->size[0] = lat->size[0];
  emxEnsureCapacity_real_T(&st, yi, i, &lf_emlrtRTEI);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = lat->data[i];
  }

  emxInit_boolean_T(&st, &r, 1, &ag_emlrtRTEI, true);

  /* -------------------------------------------------------------------------- */
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
  i = r->size[0];
  r->size[0] = lat->size[0];
  emxEnsureCapacity_boolean_T(&st, r, i, &mf_emlrtRTEI);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (lat->data[i] < -90.0);
  }

  emxInit_boolean_T(&st, &r1, 1, &ag_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = lat->size[0];
  emxEnsureCapacity_boolean_T(&st, r1, i, &nf_emlrtRTEI);
  loop_ub = lat->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (90.0 < lat->data[i]);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &y_emlrtECI, &st);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] || r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &vd_emlrtBCI, &st);
      }

      yi->data[i] = rtNaN;
    }
  }

  /*  Shift and scale latitude */
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = pR_YIntrinsicLimits[0] + (yi->data[i] - pR_FirstCornerLatitude)
      * pR_DeltaLatitudeDenominator / pR_DeltaLatitudeNumerator;
  }

  emxInit_real_T(&st, &b_lon, 1, &of_emlrtRTEI, true);
  i = b_lon->size[0];
  b_lon->size[0] = lon->size[0];
  emxEnsureCapacity_real_T(sp, b_lon, i, &of_emlrtRTEI);
  loop_ub = lon->size[0] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_lon->data[i] = lon->data[i];
  }

  emxInit_real_T(sp, &xi, 1, &yf_emlrtRTEI, true);
  st.site = &wc_emlrtRSI;
  mexable_longitudeToIntrinsicX(&st, pR_FullCycle, pR_XIntrinsicLimits,
    pR_pLongitudeLimits, pR_FirstCornerLongitude, pR_DeltaLongitudeNumerator,
    pR_DeltaLongitudeDenominator, b_lon, xi);

  /*  Snap in all points that fall within distance 0.5 of an edge, so that */
  /*  we get a non-NaN value for them from interp2. */
  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &pf_emlrtRTEI);
  loop_ub = xi->size[0];
  emxFree_real_T(&b_lon);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= xi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &qf_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] < 1.0);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &u_emlrtECI, sp);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &wd_emlrtBCI, sp);
      }

      xi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &rf_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &sf_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] < 1.0);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &v_emlrtECI, sp);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &xd_emlrtBCI, sp);
      }

      yi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &tf_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (pR_RasterSize[1] < xi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &uf_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] <= pR_RasterSize[1] + 0.5);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &w_emlrtECI, sp);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &yd_emlrtBCI, sp);
      }

      xi->data[i] = pR_RasterSize[1];
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &vf_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (pR_RasterSize[0] < yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &wf_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] <= pR_RasterSize[0] + 0.5);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &x_emlrtECI, sp);
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &ae_emlrtBCI, sp);
      }

      yi->data[i] = pR_RasterSize[0];
    }
  }

  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  v = testF(yi, xi); */
  /* linearly interpolates inside of elevation map Z */
  st.site = &xc_emlrtRSI;
  b_st.site = &dd_emlrtRSI;
  if ((Z->size[1] < 2) || (Z->size[0] < 2)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI,
      "Coder:toolbox:NotEnoughPoints", "Coder:toolbox:NotEnoughPoints", 0);
  }

  varargin_1[0] = (uint32_T)xi->size[0];
  varargin_1[1] = 1U;
  varargin_2[0] = (uint32_T)yi->size[0];
  varargin_2[1] = 1U;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if ((int32_T)varargin_1[loop_ub] != (int32_T)varargin_2[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }

  b_p = (int32_T)p;
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &p_emlrtRTEI,
      "Coder:toolbox:interp2_sizeXIandYIMustMatch",
      "Coder:toolbox:interp2_sizeXIandYIMustMatch", 0);
  }

  b_st.site = &ed_emlrtRSI;
  c_st.site = &fd_emlrtRSI;
  interp2_local(&c_st, Z, xi, yi, v);
  emxFree_real_T(&xi);
  emxFree_real_T(&yi);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void losprofile(const emlrtStack *sp, const emxArray_real_T *arclen, const
                emxArray_real_T *zin, real_T apparentradius, emxArray_boolean_T *
                vis, emxArray_real_T *x, emxArray_real_T *z, emxArray_real_T *x2,
                emxArray_real_T *z2)
{
  emlrtStack st;
  emxArray_boolean_T *b_vis;
  emxArray_real_T *ang;
  emxArray_real_T *ang2;
  emxArray_real_T *b_zin;
  real_T b_z;
  real_T oalt;
  int32_T k;
  int32_T loop_ub;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  testv = testF(yi, xi); */
  /*   */
  /*  if testv ~= v */
  /*      fprintf("ow!"); */
  /*  end */
  /* -------------------------------------------------------------------------- */
  b = muDoubleScalarIsInf(apparentradius);
  emxInit_real_T(sp, &ang2, 2, &tg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_zin, 2, &ng_emlrtRTEI, true);
  if (!b) {
    k = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(sp, ang2, k, &lg_emlrtRTEI);
    loop_ub = arclen->size[0];
    for (k = 0; k < loop_ub; k++) {
      ang2->data[k] = arclen->data[k];
    }

    k = b_zin->size[0] * b_zin->size[1];
    b_zin->size[0] = 1;
    b_zin->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(sp, b_zin, k, &ng_emlrtRTEI);
    loop_ub = zin->size[0];
    for (k = 0; k < loop_ub; k++) {
      b_zin->data[k] = zin->data[k];
    }

    st.site = &hd_emlrtRSI;
    adjustterrain(&st, ang2, b_zin, apparentradius, x, z);
  } else {
    k = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(sp, x, k, &kg_emlrtRTEI);
    loop_ub = arclen->size[0];
    for (k = 0; k < loop_ub; k++) {
      x->data[k] = arclen->data[k];
    }

    k = z->size[0] * z->size[1];
    z->size[0] = 1;
    z->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(sp, z, k, &mg_emlrtRTEI);
    loop_ub = zin->size[0];
    for (k = 0; k < loop_ub; k++) {
      z->data[k] = zin->data[k];
    }
  }

  /*  Convert AGL observer altitude to MSL  */
  /*   Observer is at first location */
  if (1 > z->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &pe_emlrtBCI, sp);
  }

  oalt = z->data[0];

  /*  Shift terrain so observer is at altitude 0, and terrain altitudes are relative */
  /*  to the observer */
  b_z = z->data[0];
  loop_ub = z->size[0] * z->size[1] - 1;
  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(sp, z, k, &og_emlrtRTEI);
  for (k = 0; k <= loop_ub; k++) {
    z->data[k] -= b_z;
  }

  emxInit_real_T(sp, &ang, 2, &pg_emlrtRTEI, true);

  /*  Observer is at first location */
  /*  Compute the angles of sight from the observer to each point on the profile. */
  /*  measured positive up from the center of the sphere */
  st.site = &id_emlrtRSI;
  b_atan2(&st, z, x, ang);
  k = ang->size[0] * ang->size[1];
  loop_ub = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  emxEnsureCapacity_real_T(sp, ang, loop_ub, &pg_emlrtRTEI);
  loop_ub = k - 1;
  for (k = 0; k <= loop_ub; k++) {
    ang->data[k] += 3.1415926535897931;
  }

  if (1 > x->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x->size[1], &oe_emlrtBCI, sp);
  }

  if (x->data[0] == 0.0) {
    if (1 > z->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &ne_emlrtBCI, sp);
    }

    if (z->data[0] == 0.0) {
      if (1 > ang->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ang->size[1], &me_emlrtBCI, sp);
      }

      ang->data[0] = 1.5707963267948966;

      /*  Look straight down at observer's location */
    }
  }

  /*  Find the cumulative maximum:  maxtohere(k) equals max(ang(1:k)) */
  if ((ang->size[1] != 0) && (ang->size[1] != 1)) {
    loop_ub = ang->size[1];
    for (k = 0; k <= loop_ub - 2; k++) {
      ang->data[k + 1] = muDoubleScalarMax(ang->data[k], ang->data[k + 1]);
    }
  }

  /*  Adjust the angles for the altitude of the target height above ground level  */
  /*  or sea level and redo calculation of angles. This makes the obscuring factor */
  /*  the terrain only, and not any target height. To model stuff above the terrain  */
  /*  like a forest canopy, pass in a z vector that has the added heights. */
  if (!b) {
    k = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = arclen->size[0];
    emxEnsureCapacity_real_T(sp, ang2, k, &lg_emlrtRTEI);
    loop_ub = arclen->size[0];
    for (k = 0; k < loop_ub; k++) {
      ang2->data[k] = arclen->data[k];
    }

    k = b_zin->size[0] * b_zin->size[1];
    b_zin->size[0] = 1;
    b_zin->size[1] = zin->size[0];
    emxEnsureCapacity_real_T(sp, b_zin, k, &ng_emlrtRTEI);
    loop_ub = zin->size[0];
    for (k = 0; k < loop_ub; k++) {
      b_zin->data[k] = zin->data[k];
    }

    st.site = &kd_emlrtRSI;
    adjustterrain(&st, ang2, b_zin, apparentradius, x2, z2);
    k = z2->size[0] * z2->size[1];
    loop_ub = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    emxEnsureCapacity_real_T(sp, z2, loop_ub, &sg_emlrtRTEI);
    loop_ub = k - 1;
    for (k = 0; k <= loop_ub; k++) {
      z2->data[k] -= oalt;
    }
  } else {
    k = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    z2->size[1] = z->size[1];
    emxEnsureCapacity_real_T(sp, z2, k, &qg_emlrtRTEI);
    loop_ub = z->size[0] * z->size[1];
    for (k = 0; k < loop_ub; k++) {
      z2->data[k] = z->data[k];
    }

    k = x2->size[0] * x2->size[1];
    x2->size[0] = 1;
    x2->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, x2, k, &rg_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (k = 0; k < loop_ub; k++) {
      x2->data[k] = x->data[k];
    }
  }

  emxFree_real_T(&b_zin);

  /*  Compute line of sight angles again. */
  st.site = &ld_emlrtRSI;
  b_atan2(&st, z2, x2, ang2);
  k = ang2->size[0] * ang2->size[1];
  loop_ub = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  emxEnsureCapacity_real_T(sp, ang2, loop_ub, &tg_emlrtRTEI);
  loop_ub = k - 1;
  for (k = 0; k <= loop_ub; k++) {
    ang2->data[k] += 3.1415926535897931;
  }

  if (1 > x2->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x2->size[1], &le_emlrtBCI, sp);
  }

  if (x2->data[0] == 0.0) {
    if (1 > z2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z2->size[1], &ke_emlrtBCI, sp);
    }

    if (z2->data[0] == 0.0) {
      if (1 > ang2->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ang2->size[1], &je_emlrtBCI, sp);
      }

      ang2->data[0] = 1.5707963267948966;

      /*  Look straight down at observer's location */
    }
  }

  emxInit_boolean_T(sp, &b_vis, 2, &wg_emlrtRTEI, true);

  /*  Visible are points that rise above the maximum angle of LOS of intervening  */
  /*  terrain. */
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])ang2->size, *(int32_T (*)[2])
    ang->size, &cb_emlrtECI, sp);
  k = b_vis->size[0] * b_vis->size[1];
  b_vis->size[0] = 1;
  b_vis->size[1] = ang2->size[1];
  emxEnsureCapacity_boolean_T(sp, b_vis, k, &ug_emlrtRTEI);
  loop_ub = ang2->size[0] * ang2->size[1];
  for (k = 0; k < loop_ub; k++) {
    b_vis->data[k] = (ang2->data[k] >= ang->data[k]);
  }

  emxFree_real_T(&ang2);
  emxFree_real_T(&ang);

  /*  Visibility of first point below terrain needs a special test, since */
  /*  it always passes the "angles of terrain up to here" test. */
  if (1 > z2->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z2->size[1], &ie_emlrtBCI, sp);
  }

  if (1 > z->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &he_emlrtBCI, sp);
  }

  if (z2->data[0] < z->data[0]) {
    if (1 > z->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &ge_emlrtBCI, sp);
    }

    if (z->data[0] < 0.0) {
      if (1 > b_vis->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_vis->size[1], &fe_emlrtBCI, sp);
      }

      b_vis->data[0] = false;
    }
  }

  k = vis->size[0];
  vis->size[0] = b_vis->size[1];
  emxEnsureCapacity_boolean_T(sp, vis, k, &vg_emlrtRTEI);
  loop_ub = b_vis->size[1];
  for (k = 0; k < loop_ub; k++) {
    vis->data[k] = b_vis->data[k];
  }

  emxFree_boolean_T(&b_vis);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mexable_longitudeToIntrinsicX(const emlrtStack *sp, real_T pR_FullCycle,
  const real_T pR_XIntrinsicLimits[2], const real_T pR_pLongitudeLimits[2],
  real_T pR_FirstCornerLongitude, real_T pR_DeltaLongitudeNumerator, real_T
  pR_DeltaLongitudeDenominator, emxArray_real_T *lon, emxArray_real_T *xi1)
{
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *b_lon;
  emxArray_real_T *r1;
  real_T e;
  real_T w;
  int32_T end;
  int32_T i;
  int32_T trueCount;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* -------------------------------------------------------------------------- */
  /* longitudeToIntrinsicX Convert from longitude to intrinsic X */
  /*  */
  /*    xIntrinsic = longitudeToIntrinsicX(R, LON) returns the */
  /*    intrinsic X value of the line corresponding to the */
  /*    meridian at longitude LON, based on the relationship */
  /*    defined by the referencing object R. The input may */
  /*    include values that fall completely outside the */
  /*    longitude limits of the raster (or image). In this case */
  /*    xIntrinsic is extrapolated outside the intrinsic X */
  /*    limits. NaN-valued elements of LON map to NaNs in */
  /*    xIntrinsic. */
  w = pR_pLongitudeLimits[0];
  e = pR_pLongitudeLimits[1];

  /*  Adjust longitude wrapping to get within the limits, */
  /*  whenever possible. */
  emxInit_real_T(sp, &b_lon, 1, &fg_emlrtRTEI, true);
  if (pR_pLongitudeLimits[1] - pR_pLongitudeLimits[0] <= pR_FullCycle) {
    if (pR_DeltaLongitudeNumerator > 0.0) {
      /*  Wrap to interval R.FirstCornerLongitude + [0 360] */
      /* lon = w + R.WrapToCycleFcn(lon - w); etc */
      i = b_lon->size[0];
      b_lon->size[0] = lon->size[0];
      emxEnsureCapacity_real_T(sp, b_lon, i, &cg_emlrtRTEI);
      trueCount = lon->size[0];
      for (i = 0; i < trueCount; i++) {
        b_lon->data[i] = lon->data[i] - pR_pLongitudeLimits[0];
      }

      st.site = &yc_emlrtRSI;
      c_mod(&st, b_lon, pR_FullCycle, lon);
      trueCount = lon->size[0];
      for (i = 0; i < trueCount; i++) {
        lon->data[i] += pR_pLongitudeLimits[0];
      }
    } else {
      /*  Wrap to interval R.FirstCornerLongitude + [-360 0] */
      i = b_lon->size[0];
      b_lon->size[0] = lon->size[0];
      emxEnsureCapacity_real_T(sp, b_lon, i, &bg_emlrtRTEI);
      trueCount = lon->size[0];
      for (i = 0; i < trueCount; i++) {
        b_lon->data[i] = pR_pLongitudeLimits[1] - lon->data[i];
      }

      st.site = &ad_emlrtRSI;
      c_mod(&st, b_lon, pR_FullCycle, lon);
      trueCount = lon->size[0];
      for (i = 0; i < trueCount; i++) {
        lon->data[i] = pR_pLongitudeLimits[1] - lon->data[i];
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
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] < w) {
        trueCount++;
      }
    }

    emxInit_int32_T(sp, &r, 1, &hg_emlrtRTEI, true);
    i = r->size[0];
    r->size[0] = trueCount;
    emxEnsureCapacity_int32_T(sp, r, i, &dg_emlrtRTEI);
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] < w) {
        r->data[trueCount] = i + 1;
        trueCount++;
      }
    }

    i = b_lon->size[0];
    b_lon->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, b_lon, i, &fg_emlrtRTEI);
    trueCount = r->size[0];
    for (i = 0; i < trueCount; i++) {
      if ((r->data[i] < 1) || (r->data[i] > lon->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r->data[i], 1, lon->size[0], &be_emlrtBCI,
          sp);
      }

      b_lon->data[i] = lon->data[r->data[i] - 1] - pR_pLongitudeLimits[0];
    }

    emxFree_int32_T(&r);
    emxInit_real_T(sp, &r1, 1, &dg_emlrtRTEI, true);
    st.site = &bd_emlrtRSI;
    c_mod(&st, b_lon, pR_FullCycle, r1);
    end = lon->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] < w) {
        trueCount++;
      }
    }

    if (trueCount != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, r1->size[0], &ab_emlrtECI, sp);
    }

    end = lon->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] < w) {
        if ((i + 1 < 1) || (i + 1 > lon->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lon->size[0], &ce_emlrtBCI, sp);
        }

        lon->data[i] = w + r1->data[trueCount];
        trueCount++;
      }
    }

    w = pR_pLongitudeLimits[1] - pR_FullCycle;
    end = lon->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] > e) {
        trueCount++;
      }
    }

    emxInit_int32_T(sp, &r2, 1, &ig_emlrtRTEI, true);
    i = r2->size[0];
    r2->size[0] = trueCount;
    emxEnsureCapacity_int32_T(sp, r2, i, &dg_emlrtRTEI);
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (lon->data[i] > e) {
        r2->data[trueCount] = i + 1;
        trueCount++;
      }
    }

    i = b_lon->size[0];
    b_lon->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(sp, b_lon, i, &gg_emlrtRTEI);
    trueCount = r2->size[0];
    for (i = 0; i < trueCount; i++) {
      if ((r2->data[i] < 1) || (r2->data[i] > lon->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, lon->size[0], &de_emlrtBCI,
          sp);
      }

      b_lon->data[i] = lon->data[r2->data[i] - 1] - w;
    }

    emxFree_int32_T(&r2);
    st.site = &cd_emlrtRSI;
    c_mod(&st, b_lon, pR_FullCycle, r1);
    end = lon->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] > e) {
        trueCount++;
      }
    }

    if (trueCount != r1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, r1->size[0], &bb_emlrtECI, sp);
    }

    end = lon->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (lon->data[i] > e) {
        if ((i + 1 < 1) || (i + 1 > lon->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lon->size[0], &ee_emlrtBCI, sp);
        }

        lon->data[i] = w + r1->data[trueCount];
        trueCount++;
      }
    }

    emxFree_real_T(&r1);
  }

  emxFree_real_T(&b_lon);

  /*  Shift and scale longitude */
  i = xi1->size[0];
  xi1->size[0] = lon->size[0];
  emxEnsureCapacity_real_T(sp, xi1, i, &eg_emlrtRTEI);
  trueCount = lon->size[0];
  for (i = 0; i < trueCount; i++) {
    xi1->data[i] = pR_XIntrinsicLimits[0] + (lon->data[i] -
      pR_FirstCornerLongitude) * pR_DeltaLongitudeDenominator /
      pR_DeltaLongitudeNumerator;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sampleGreatCircle(const emlrtStack *sp, real_T lat1, real_T lon1, real_T
  lat2, real_T lon2, real_T spacingInDegrees, emxArray_real_T *lat,
  emxArray_real_T *lon, emxArray_real_T *arclenInRadians)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_boolean_T *positiveInput;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_int32_T *r3;
  emxArray_real_T *cosDelta;
  emxArray_real_T *r;
  emxArray_real_T *sinDelta;
  emxArray_real_T *z;
  real_T a;
  real_T a_tmp;
  real_T cosAz;
  real_T cosphi1_tmp;
  real_T cosphi2;
  real_T lambda1;
  real_T maxdist;
  real_T phi1;
  real_T phi2;
  int32_T i;
  int32_T k;
  int32_T nx;
  boolean_T p;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* -------------------------------------------------------------------------- */
  /*   Compute sort of maximum angular distance between the end points. */
  maxdist = muDoubleScalarMax(muDoubleScalarAbs(lat2 - lat1), muDoubleScalarAbs
    (lon2 - lon1));
  if (maxdist > spacingInDegrees) {
    /*   Insert points using linear interpolation. */
    st.site = &wb_emlrtRSI;
    phi1 = 0.017453292519943295 * lat1;
    lambda1 = 0.017453292519943295 * lon1;
    phi2 = 0.017453292519943295 * lat2;

    /* -------------------------------------------------------------------------- */
    /*  Interpolate regularly spaced points along a great circle. */
    b_st.site = &yb_emlrtRSI;

    /* -------------------------------------------------------------------------- */
    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    cosphi1_tmp = muDoubleScalarCos(phi1);
    cosphi2 = muDoubleScalarCos(phi2);
    c_st.site = &qb_emlrtRSI;
    cosAz = muDoubleScalarSin((phi2 - phi1) / 2.0);
    d_st.site = &t_emlrtRSI;
    c_st.site = &rb_emlrtRSI;
    a_tmp = 0.017453292519943295 * lon2 - lambda1;
    a = muDoubleScalarSin(a_tmp / 2.0);
    d_st.site = &t_emlrtRSI;
    cosAz = cosAz * cosAz + cosphi1_tmp * cosphi2 * (a * a);
    c_st.site = &sb_emlrtRSI;
    if (cosAz < 0.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    cosAz = muDoubleScalarSqrt(cosAz);
    c_st.site = &sb_emlrtRSI;
    if (cosAz > 1.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    emxInit_real_T(&c_st, &r, 2, &jf_emlrtRTEI, true);
    cosAz = muDoubleScalarAsin(cosAz);
    phi1 = muDoubleScalarSin(phi1);
    a = muDoubleScalarAtan2(cosphi2 * muDoubleScalarSin(a_tmp), cosphi1_tmp *
      muDoubleScalarSin(phi2) - phi1 * cosphi2 * muDoubleScalarCos(a_tmp));
    b_st.site = &ac_emlrtRSI;
    linspace(&b_st, 2.0 * cosAz, muDoubleScalarCeil(maxdist / spacingInDegrees)
             + 1.0, r);
    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = r->size[1];
    emxEnsureCapacity_real_T(&st, arclenInRadians, i, &se_emlrtRTEI);
    nx = r->size[1];
    for (i = 0; i < nx; i++) {
      arclenInRadians->data[i] = r->data[i];
    }

    emxFree_real_T(&r);
    emxInit_real_T(&st, &cosDelta, 1, &te_emlrtRTEI, true);
    b_st.site = &bc_emlrtRSI;

    /* -------------------------------------------------------------------------- */
    /*  Points on a great circles given specified start point, azimuths and */
    /*  spherical distances.  All angles are in radians. */
    /*  Reference */
    /*  --------- */
    /*  J. P. Snyder, "Map Projections - A Working Manual,"  US Geological Survey */
    /*  Professional Paper 1395, US Government Printing Office, Washington, DC, */
    /*  1987, pp. 29-32. */
    cosAz = muDoubleScalarCos(a);
    c_st.site = &fc_emlrtRSI;
    i = cosDelta->size[0];
    cosDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&c_st, cosDelta, i, &te_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] = arclenInRadians->data[i];
    }

    d_st.site = &kc_emlrtRSI;
    nx = arclenInRadians->size[0];
    e_st.site = &lc_emlrtRSI;
    if ((1 <= arclenInRadians->size[0]) && (arclenInRadians->size[0] >
         2147483646)) {
      f_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 0; k < nx; k++) {
      cosDelta->data[k] = muDoubleScalarCos(cosDelta->data[k]);
    }

    emxInit_real_T(&d_st, &sinDelta, 1, &ue_emlrtRTEI, true);
    i = sinDelta->size[0];
    sinDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, sinDelta, i, &ue_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] = arclenInRadians->data[i];
    }

    c_st.site = &gc_emlrtRSI;
    b_sin(&c_st, sinDelta);
    i = lat->size[0];
    lat->size[0] = cosDelta->size[0];
    emxEnsureCapacity_real_T(&b_st, lat, i, &ve_emlrtRTEI);
    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] = phi1 * cosDelta->data[i];
    }

    emxInit_real_T(&b_st, &z, 1, &be_emlrtRTEI, true);
    i = z->size[0];
    z->size[0] = sinDelta->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &we_emlrtRTEI);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = cosphi1_tmp * sinDelta->data[i] * cosAz;
    }

    if (lat->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(lat->size[0], z->size[0], &r_emlrtECI, &b_st);
    }

    c_st.site = &hc_emlrtRSI;
    nx = lat->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] += z->data[i];
    }

    p = false;
    i = lat->size[0];
    for (k = 0; k < i; k++) {
      if (p || ((lat->data[k] < -1.0) || (lat->data[k] > 1.0))) {
        p = true;
      }
    }

    if (p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    d_st.site = &nc_emlrtRSI;
    nx = lat->size[0];
    e_st.site = &lc_emlrtRSI;
    if ((1 <= lat->size[0]) && (lat->size[0] > 2147483646)) {
      f_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 0; k < nx; k++) {
      lat->data[k] = muDoubleScalarAsin(lat->data[k]);
    }

    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] *= cosphi1_tmp;
    }

    i = z->size[0];
    z->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &xe_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = arclenInRadians->data[i];
    }

    c_st.site = &ic_emlrtRSI;
    b_sin(&c_st, z);
    nx = z->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = phi1 * z->data[i] * cosAz;
    }

    if (cosDelta->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(cosDelta->size[0], z->size[0], &q_emlrtECI, &b_st);
    }

    cosAz = muDoubleScalarSin(a);
    c_st.site = &jc_emlrtRSI;
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] *= cosAz;
    }

    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] -= z->data[i];
    }

    d_st.site = &oc_emlrtRSI;
    e_st.site = &pc_emlrtRSI;
    if (sinDelta->size[0] <= cosDelta->size[0]) {
      nx = sinDelta->size[0];
    } else {
      nx = cosDelta->size[0];
    }

    i = z->size[0];
    if (sinDelta->size[0] <= cosDelta->size[0]) {
      z->size[0] = sinDelta->size[0];
    } else {
      z->size[0] = cosDelta->size[0];
    }

    emxEnsureCapacity_real_T(&e_st, z, i, &ye_emlrtRTEI);
    if (!dimagree(z, sinDelta, cosDelta)) {
      emlrtErrorWithMessageIdR2018a(&e_st, &k_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    i = lon->size[0];
    lon->size[0] = nx;
    emxEnsureCapacity_real_T(&d_st, lon, i, &be_emlrtRTEI);
    e_st.site = &qc_emlrtRSI;
    f_st.site = &rc_emlrtRSI;
    if ((1 <= z->size[0]) && (z->size[0] > 2147483646)) {
      g_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (k = 0; k < nx; k++) {
      lon->data[k] = muDoubleScalarAtan2(sinDelta->data[k], cosDelta->data[k]);
    }

    emxFree_real_T(&sinDelta);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] += lambda1;
    }

    emxInit_boolean_T(&b_st, &r1, 1, &hf_emlrtRTEI, true);

    /*  lambdaTrack = wrapToPi(lambdaTrack); */
    i = r1->size[0];
    r1->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(&st, r1, i, &af_emlrtRTEI);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r1->data[i] = (lon->data[i] < -3.1415926535897931);
    }

    emxInit_boolean_T(&st, &r2, 1, &hf_emlrtRTEI, true);
    i = r2->size[0];
    r2->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(&st, r2, i, &bf_emlrtRTEI);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r2->data[i] = (3.1415926535897931 < lon->data[i]);
    }

    if (r1->size[0] != r2->size[0]) {
      emlrtSizeEqCheck1DR2012b(r1->size[0], r2->size[0], &t_emlrtECI, &st);
    }

    k = r1->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r1->data[i] || r2->data[i]) {
        nx++;
      }
    }

    emxInit_int32_T(&st, &r3, 1, &if_emlrtRTEI, true);
    i = r3->size[0];
    r3->size[0] = nx;
    emxEnsureCapacity_int32_T(&st, r3, i, &cf_emlrtRTEI);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r1->data[i] || r2->data[i]) {
        r3->data[nx] = i + 1;
        nx++;
      }
    }

    b_st.site = &cc_emlrtRSI;
    i = z->size[0];
    z->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &df_emlrtRTEI);
    nx = r3->size[0];
    for (i = 0; i < nx; i++) {
      if ((r3->data[i] < 1) || (r3->data[i] > lon->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, lon->size[0], &qd_emlrtBCI,
          &b_st);
      }

      z->data[i] = lon->data[r3->data[i] - 1] + 3.1415926535897931;
    }

    emxFree_int32_T(&r3);
    emxInit_boolean_T(&b_st, &positiveInput, 1, &ef_emlrtRTEI, true);

    /* -------------------------------------------------------------------------- */
    i = positiveInput->size[0];
    positiveInput->size[0] = z->size[0];
    emxEnsureCapacity_boolean_T(&b_st, positiveInput, i, &ef_emlrtRTEI);
    nx = z->size[0];
    for (i = 0; i < nx; i++) {
      positiveInput->data[i] = (z->data[i] > 0.0);
    }

    i = cosDelta->size[0];
    cosDelta->size[0] = z->size[0];
    emxEnsureCapacity_real_T(&b_st, cosDelta, i, &ff_emlrtRTEI);
    nx = z->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      cosDelta->data[i] = z->data[i];
    }

    emxInit_boolean_T(&b_st, &r4, 1, &hf_emlrtRTEI, true);
    c_st.site = &sc_emlrtRSI;
    b_mod(&c_st, cosDelta, z);
    i = r4->size[0];
    r4->size[0] = z->size[0];
    emxEnsureCapacity_boolean_T(&b_st, r4, i, &gf_emlrtRTEI);
    nx = z->size[0];
    emxFree_real_T(&cosDelta);
    for (i = 0; i < nx; i++) {
      r4->data[i] = (z->data[i] == 0.0);
    }

    if (r4->size[0] != positiveInput->size[0]) {
      emlrtSizeEqCheck1DR2012b(r4->size[0], positiveInput->size[0], &p_emlrtECI,
        &b_st);
    }

    k = r4->size[0];
    for (i = 0; i < k; i++) {
      if (r4->data[i] && positiveInput->data[i]) {
        if ((i + 1 < 1) || (i + 1 > z->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &rd_emlrtBCI,
            &b_st);
        }

        z->data[i] = 6.2831853071795862;
      }
    }

    emxFree_boolean_T(&r4);
    emxFree_boolean_T(&positiveInput);
    k = r1->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (r1->data[i] || r2->data[i]) {
        nx++;
      }
    }

    if (nx != z->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(nx, z->size[0], &s_emlrtECI, &st);
    }

    k = r1->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (r1->data[i] || r2->data[i]) {
        if ((i + 1 < 1) || (i + 1 > lon->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lon->size[0], &sd_emlrtBCI,
            &st);
        }

        lon->data[i] = z->data[nx] - 3.1415926535897931;
        nx++;
      }
    }

    emxFree_real_T(&z);
    emxFree_boolean_T(&r2);
    emxFree_boolean_T(&r1);
    nx = lat->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] *= 57.295779513082323;
    }

    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] *= 57.295779513082323;
    }

    /*   Use exact endpoint. */
    if (lat->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(lat->size[0], 1, lat->size[0], &td_emlrtBCI,
        sp);
    }

    lat->data[lat->size[0] - 1] = lat2;
    if (lon->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(lon->size[0], 1, lon->size[0], &ud_emlrtBCI,
        sp);
    }

    lon->data[lon->size[0] - 1] = lon2;
  } else {
    i = lat->size[0];
    lat->size[0] = 2;
    emxEnsureCapacity_real_T(sp, lat, i, &pe_emlrtRTEI);
    lat->data[0] = lat1;
    lat->data[1] = lat2;
    i = lon->size[0];
    lon->size[0] = 2;
    emxEnsureCapacity_real_T(sp, lon, i, &qe_emlrtRTEI);
    lon->data[0] = lon1;
    lon->data[1] = lon2;
    st.site = &xb_emlrtRSI;
    phi1 = 0.017453292519943295 * lat1;
    phi2 = 0.017453292519943295 * lat2;

    /* -------------------------------------------------------------------------- */
    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    b_st.site = &qb_emlrtRSI;
    cosAz = muDoubleScalarSin((phi2 - phi1) / 2.0);
    c_st.site = &t_emlrtRSI;
    b_st.site = &rb_emlrtRSI;
    a = muDoubleScalarSin((0.017453292519943295 * lon2 - 0.017453292519943295 *
      lon1) / 2.0);
    c_st.site = &t_emlrtRSI;
    cosAz = cosAz * cosAz + muDoubleScalarCos(phi1) * muDoubleScalarCos(phi2) *
      (a * a);
    b_st.site = &sb_emlrtRSI;
    if (cosAz < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    cosAz = muDoubleScalarSqrt(cosAz);
    b_st.site = &sb_emlrtRSI;
    if (cosAz > 1.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    cosAz = muDoubleScalarAsin(cosAz);
    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = 1;
    emxEnsureCapacity_real_T(sp, arclenInRadians, i, &re_emlrtRTEI);
    arclenInRadians->data[0] = 2.0 * cosAz;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mexable_calculateLOS.c) */
