/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_los2.c
 *
 * Code generation for function 'mexable_los2'
 *
 */

/* Include files */
#include "mexable_los2.h"
#include "atan2.h"
#include "interp2.h"
#include "mexable_calculateLOS.h"
#include "mod.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ad_emlrtRSI = { 170,/* lineNo */
  "mexable_los2",                      /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_los2.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 12, /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 18, /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 21, /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 199,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 200,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 218,/* lineNo */
  "interpolate",                       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 165,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 168,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 181,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 186,/* lineNo */
  "mexable_longitudeToIntrinsicX",     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 111,/* lineNo */
  "interp2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 112,/* lineNo */
  "interp2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 249,/* lineNo */
  "interp2_dispatch",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 236,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 256,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 262,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 279,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 289,/* lineNo */
  "losprofile",                        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 10, /* lineNo */
  "cummax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\cummax.m"/* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = { 150,/* lineNo */
  15,                                  /* colNo */
  "interp2_validate",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 142,/* lineNo */
  15,                                  /* colNo */
  "interp2_validate",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  185,                                 /* lineNo */
  3,                                   /* colNo */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  180,                                 /* lineNo */
  3,                                   /* colNo */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  134,                                 /* lineNo */
  6,                                   /* colNo */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  303,                                 /* lineNo */
  9,                                   /* colNo */
  "vis",                               /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  25,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  15,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  8,                                   /* colNo */
  "z2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  297,                                 /* lineNo */
  8,                                   /* colNo */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  10,                                  /* colNo */
  "ang2",                              /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  21,                                  /* colNo */
  "z2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  7,                                   /* colNo */
  "x2",                                /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  9,                                   /* colNo */
  "ang",                               /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  19,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  6,                                   /* colNo */
  "x",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  15,                                  /* colNo */
  "z",                                 /* aName */
  "losprofile",                        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  213,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  212,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  206,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  205,                                 /* lineNo */
  4,                                   /* colNo */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  2,                                   /* colNo */
  "lat",                               /* aName */
  "mexable_latitudeToIntrinsicY",      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  16,                                  /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  205,                                 /* lineNo */
  1,                                   /* colNo */
  "xi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  1,                                   /* colNo */
  "yi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  180,                                 /* lineNo */
  3,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  1,                                   /* colNo */
  "xi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  18,                                  /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  1,                                   /* colNo */
  "yi",                                /* aName */
  "interpolate",                       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  185,                                 /* lineNo */
  3,                                   /* colNo */
  "lon",                               /* aName */
  "mexable_longitudeToIntrinsicX",     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  175,                                 /* lineNo */
  11,                                  /* colNo */
  "visprofile_row",                    /* aName */
  "mexable_los2",                      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo pd_emlrtRTEI = { 134,/* lineNo */
  6,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 134,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 168,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 165,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 200,/* lineNo */
  6,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 181,/* lineNo */
  12,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 205,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 205,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 206,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 206,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 186,/* lineNo */
  14,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 212,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 212,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 213,/* lineNo */
  4,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 213,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 238,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 232,/* lineNo */
  10,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 239,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 233,/* lineNo */
  7,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 251,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 256,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 282,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 279,/* lineNo */
  42,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 289,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 280,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 297,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "mexable_los2",                      /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_los2.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 199,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 229,/* lineNo */
  11,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 181,/* lineNo */
  16,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 186,/* lineNo */
  18,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

/* Function Definitions */
boolean_T mexable_los2(const emlrtStack *sp, const emxArray_real_T *Z, real_T
  lat1, real_T lon1, real_T lat2, real_T lon2, real_T inp_talt, real_T
  actualradius, real_T sample_dens, const struct2_T *public_raster_struct)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *b_vis;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_real_T *ang;
  emxArray_real_T *ang2;
  emxArray_real_T *arclenInRadians;
  emxArray_real_T *b_arclenInRadians;
  emxArray_real_T *b_xi;
  emxArray_real_T *unusedU1;
  emxArray_real_T *x2;
  emxArray_real_T *xi;
  emxArray_real_T *yi;
  emxArray_real_T *z;
  emxArray_real_T *z2;
  real_T e;
  real_T w;
  int32_T end;
  int32_T i;
  int32_T loop_ub;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  boolean_T vis;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &arclenInRadians, 1, &qe_emlrtRTEI, true);
  emxInit_real_T(sp, &yi, 1, &re_emlrtRTEI, true);
  emxInit_real_T(sp, &xi, 1, &se_emlrtRTEI, true);

  /* Z, R, lat1, lon1, lat2, lon2, oalt, talt, oaltopt, talopt, r_moon) */
  /* LOS2 Line of sight visibility between two points in terrain */
  /*  */
  /*    LOS2 computes the mutual visibility between two points on a displayed */
  /*    digital elevation map.  LOS2 uses the current object if it is a regular */
  /*    data grid, or the first regular data grid found on the current axes. */
  /*    The grid's zdata is used for the profile.  The color data is used in */
  /*    the absence of data in z.  The two points are selected by clicking on */
  /*    the map. The result is displayed in a new figure.  Markers indicate */
  /*    visible and obscured points along the profile.  The profile is shown in */
  /*    a Cartesian coordinate system with the origin at the observer's */
  /*    location.  The displayed z coordinate accounts for the elevation of the */
  /*    terrain and the curvature of the body. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2) computes the mutual visibility */
  /*    between pairs of points on a digital elevation map.  The elevations are */
  /*    provided as a regular data grid Z containing elevations in units of */
  /*    meters.  The two points are provided as vectors of latitudes and */
  /*    longitudes in units of degrees.  The resulting logical variable VIS is */
  /*    equal to one when the two points are visible to each other, and zero */
  /*    when the line of sight is obscured by terrain.  If any of the  input */
  /*    arguments are empty, LOS2 attempts to gather the data from the current */
  /*    axes.  With one or more output arguments, no figures are created and */
  /*    only the data is returned.  R can be a geographic raster reference */
  /*    object, a referencing vector, or a referencing matrix. */
  /*  */
  /*    If R is a geographic raster reference object, its RasterSize property */
  /*    must be consistent with size(Z). */
  /*  */
  /*    If R is a referencing vector, it must be a 1-by-3 with elements: */
  /*  */
  /*      [cells/degree northern_latitude_limit western_longitude_limit] */
  /*  */
  /*    If R is a referencing matrix, it must be 3-by-2 and transform raster */
  /*    row and column indices to/from geographic coordinates according to: */
  /*   */
  /*                      [lon lat] = [row col 1] * R. */
  /*  */
  /*    If R is a referencing matrix, it must define a (non-rotational, */
  /*    non-skewed) relationship in which each column of the data grid falls */
  /*    along a meridian and each row falls along a parallel. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1) places the first */
  /*    point at the specified altitude in meters above the surface (on a */
  /*    tower, for instance).  This is equivalent to putting the point on a */
  /*    tower.  If omitted, point 1 is assumed to be on the surface.  ALT1 may */
  /*    be either a scalar or a vector with the same length as LAT1, LON1, */
  /*    LAT2, and LON2. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2) places both */
  /*    points at a specified altitudes in meters above the surface.  ALT2 may */
  /*    be either a scalar or a vector with the same length as LAT1, LON1, */
  /*    LAT2, and LON2.  If ALT2 is omitted, point 2 is assumed to be on the */
  /*    surface. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT) */
  /*    controls the interpretation of ALT1 as either a relative altitude */
  /*    (ALT1OPT equals 'AGL', the default) or an absolute altitude (ALT1OPT */
  /*    equals 'MSL').  If the altitude option is 'AGL', ALT1 is interpreted as */
  /*    the altitude of point 1 in meters above the terrain ("above ground */
  /*    level").  If ALT1OPT is 'MSL', ALT1 is interpreted as altitude above */
  /*    zero ("mean sea level"). */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT, ALT2OPT) */
  /*    controls the interpretation ALT2.  */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,... */
  /*    ALT2OPT, ACTUALRADIUS) does the visibility calculation on a sphere with */
  /*    the specified radius.  If omitted, the radius of the earth in meters is */
  /*    assumed.  The altitudes, elevations and the radius should be in the */
  /*    same units.  This calling form is most useful for computations on */
  /*    bodies other than the earth. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,... */
  /*    ALT2OPT, ACTUALRADIUS, EFFECTIVERADIUS) assumes a larger radius for */
  /*    propagation of the line of sight.  This can account for the curvature */
  /*    of the signal path due to refraction in the atmosphere.  For example, */
  /*    radio propagation in the atmosphere is commonly treated as straight */
  /*    line propagation on a sphere with 4/3rds the radius of the earth.  In */
  /*    that case the last two arguments would be R_e and 4/3*R_e, where R_e is */
  /*    the radius of the earth.  Use Inf as the effective radius for flat   */
  /*    earth visibility calculations.  The altitudes, elevations and the radii */
  /*    should be in the same units.  */
  /*  */
  /*    [VIS, VISPROFILE, DIST, H, LATTRK, LONTRK] = LOS2(...), for scalar */
  /*    inputs (LAT1, LON1, etc.), returns vectors of points along the path */
  /*    between the two points.  VISPROFILE is a logical vector containing true */
  /*    (logical(1) where the intermediate points are visible and false */
  /*    (logical(0)) otherwise.  DIST is the distance along the path (in meters */
  /*    or the units of the radius).  H contains the terrain profile relative */
  /*    to the vertical datum along the path.  LATTRK and LONTRK are the */
  /*    latitudes and longitudes of the points along the path.  For vector */
  /*    inputs LOS2 returns VISPROFILE, DIST, H, LATTRK, and LONTRK as cell */
  /*    arrays, with one cell per element of LAT1, LON1, etc. */
  /*  */
  /*    LOS2(...), with no output arguments, displays the visibility profile */
  /*    between the two points in a new figure.  */
  /*  */
  /*    Example */
  /*    ------- */
  /*    Z = 500*peaks(100); */
  /*    latlim = [-0.1 0.0]; */
  /*    lonlim = [ 0.0 0.1]; */
  /*    R = georefcells(latlim,lonlim,size(Z)); */
  /*    lat1 = -0.027; */
  /*    lon1 =  0.050; */
  /*    lat2 = -0.093; */
  /*    lon2 =  0.042; */
  /*  */
  /*    los2(Z,R,lat1,lon1,lat2,lon2,100); */
  /*   */
  /*    figure; */
  /*    axesm('globe','geoid',earthRadius('meters')) */
  /*    meshm(Z,R,size(Z),Z) */
  /*    axis tight */
  /*    camposm(-10,-10,1e6) */
  /*    camupm(0,0) */
  /*    demcmap('inc',Z,1000) */
  /*    shading interp */
  /*    camlight */
  /*   */
  /*    [vis,visprofile,dist,h,lattrk,lontrk] = los2(Z,R,lat1,lon1,lat2,lon2,100); */
  /*    plot3m(lattrk([1;end]),lontrk([1; end]),h([1; end])+[100; 0],'r','linewidth',2) */
  /*    plotm(lattrk(~visprofile),lontrk(~visprofile),h(~visprofile),'r.','markersize',10) */
  /*    plotm(lattrk(visprofile),lontrk(visprofile),h(visprofile),'g.','markersize',10) */
  /*   */
  /*    See also VIEWSHED */
  /*  Copyright 1996-2020 The MathWorks, Inc. */
  /*  Original version written by Walter Stumpf */
  /*  If R is already spatial referencing object, validate it. Otherwise */
  /*  convert the input referencing vector or matrix. And construct a */
  /*  non-extrapolating default-grid griddedInterpolant for Z. */
  /*  R = internal.map.convertToGeoRasterRef( ... */
  /*      R, size(Z), 'degrees', mfilename, 'R', 2); */
  /*  F = griddedInterpolant(Z); */
  /*  F.ExtrapolationMethod = 'none'; */
  /*  loop over pairs of observer and target locations */
  /*  Single pair of points: */
  /*     Output 1 is a logical scalar */
  /*     Output 2 is a logical array */
  /*     Outputs 3-6 are numerical arrays */
  st.site = &ad_emlrtRSI;

  /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
  /*  Copyright 2014-2015 The MathWorks, Inc. */
  /*  Sample at slightly less than the elevation grid spacing. */
  /*  Intermediate points along the great circle arc between start and end. */
  b_st.site = &ed_emlrtRSI;
  sampleGreatCircle(&b_st, lat1, lon1, lat2, lon2, 0.9 / sample_dens, yi, xi,
                    arclenInRadians);
  loop_ub = arclenInRadians->size[0];
  for (i = 0; i < loop_ub; i++) {
    arclenInRadians->data[i] *= actualradius;
  }

  emxInit_boolean_T(&st, &r, 1, &qe_emlrtRTEI, true);

  /*  Elevation profile between the start and end points. */
  b_st.site = &fd_emlrtRSI;

  /* -------------------------------------------------------------------------- */
  /*  Use the griddentInterpolant object F which is defined in the intrinsic */
  /*  coordinate system referred to by raster reference object R. */
  /*  Interpolate bilinearly in intrinsic coordinates. */
  c_st.site = &ge_emlrtRSI;

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
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&c_st, r, i, &pd_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (yi->data[i] < -90.0);
  }

  emxInit_boolean_T(&c_st, &r1, 1, &qe_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&c_st, r1, i, &qd_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (90.0 < yi->data[i]);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &p_emlrtECI, &c_st);
  }

  end = r->size[0];
  for (i = 0; i < end; i++) {
    if (r->data[i] || r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &ge_emlrtBCI, &c_st);
      }

      yi->data[i] = rtNaN;
    }
  }

  /*  Shift and scale latitude */
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = public_raster_struct->YIntrinsicLimits[0] + (yi->data[i] -
      public_raster_struct->FirstCornerLatitude) *
      public_raster_struct->DeltaLatitudeDenominator /
      public_raster_struct->DeltaLatitudeNumerator;
  }

  c_st.site = &he_emlrtRSI;

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
  w = public_raster_struct->pLongitudeLimits[0];
  e = public_raster_struct->pLongitudeLimits[1];

  /*  Adjust longitude wrapping to get within the limits, */
  /*  whenever possible. */
  emxInit_real_T(&c_st, &unusedU1, 1, &qe_emlrtRTEI, true);
  emxInit_real_T(&c_st, &b_xi, 1, &ud_emlrtRTEI, true);
  if (public_raster_struct->pLongitudeLimits[1] -
      public_raster_struct->pLongitudeLimits[0] <=
      public_raster_struct->FullCycle) {
    if (public_raster_struct->DeltaLongitudeNumerator > 0.0) {
      /*  Wrap to interval R.FirstCornerLongitude + [0 360] */
      /* lon = w + R.WrapToCycleFcn(lon - w); etc */
      i = b_xi->size[0];
      b_xi->size[0] = xi->size[0];
      emxEnsureCapacity_real_T(&c_st, b_xi, i, &sd_emlrtRTEI);
      loop_ub = xi->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_xi->data[i] = xi->data[i] - public_raster_struct->pLongitudeLimits[0];
      }

      d_st.site = &je_emlrtRSI;
      c_mod(&d_st, b_xi, public_raster_struct->FullCycle, xi);
      loop_ub = xi->size[0];
      for (i = 0; i < loop_ub; i++) {
        xi->data[i] += public_raster_struct->pLongitudeLimits[0];
      }
    } else {
      /*  Wrap to interval R.FirstCornerLongitude + [-360 0] */
      i = b_xi->size[0];
      b_xi->size[0] = xi->size[0];
      emxEnsureCapacity_real_T(&c_st, b_xi, i, &rd_emlrtRTEI);
      loop_ub = xi->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_xi->data[i] = public_raster_struct->pLongitudeLimits[1] - xi->data[i];
      }

      d_st.site = &ke_emlrtRSI;
      c_mod(&d_st, b_xi, public_raster_struct->FullCycle, xi);
      loop_ub = xi->size[0];
      for (i = 0; i < loop_ub; i++) {
        xi->data[i] = public_raster_struct->pLongitudeLimits[1] - xi->data[i];
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
    end = xi->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (xi->data[i] < w) {
        loop_ub++;
      }
    }

    emxInit_int32_T(&c_st, &r2, 1, &ue_emlrtRTEI, true);
    i = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&c_st, r2, i, &td_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (xi->data[i] < w) {
        r2->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = b_xi->size[0];
    b_xi->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(&c_st, b_xi, i, &ud_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      if ((r2->data[i] < 1) || (r2->data[i] > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, xi->size[0], &he_emlrtBCI,
          &c_st);
      }

      b_xi->data[i] = xi->data[r2->data[i] - 1] -
        public_raster_struct->pLongitudeLimits[0];
    }

    emxFree_int32_T(&r2);
    d_st.site = &le_emlrtRSI;
    c_mod(&d_st, b_xi, public_raster_struct->FullCycle, unusedU1);
    end = xi->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (xi->data[i] < w) {
        loop_ub++;
      }
    }

    if (loop_ub != unusedU1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, unusedU1->size[0], &o_emlrtECI,
        &c_st);
    }

    end = xi->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (xi->data[i] < w) {
        if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &ke_emlrtBCI,
            &c_st);
        }

        xi->data[i] = w + unusedU1->data[loop_ub];
        loop_ub++;
      }
    }

    w = public_raster_struct->pLongitudeLimits[1] -
      public_raster_struct->FullCycle;
    end = xi->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (xi->data[i] > e) {
        loop_ub++;
      }
    }

    emxInit_int32_T(&c_st, &r3, 1, &ve_emlrtRTEI, true);
    i = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&c_st, r3, i, &td_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (xi->data[i] > e) {
        r3->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = b_xi->size[0];
    b_xi->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(&c_st, b_xi, i, &ae_emlrtRTEI);
    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      if ((r3->data[i] < 1) || (r3->data[i] > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, xi->size[0], &me_emlrtBCI,
          &c_st);
      }

      b_xi->data[i] = xi->data[r3->data[i] - 1] - w;
    }

    emxFree_int32_T(&r3);
    d_st.site = &me_emlrtRSI;
    c_mod(&d_st, b_xi, public_raster_struct->FullCycle, unusedU1);
    end = xi->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (xi->data[i] > e) {
        loop_ub++;
      }
    }

    if (loop_ub != unusedU1->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, unusedU1->size[0], &n_emlrtECI,
        &c_st);
    }

    end = xi->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (xi->data[i] > e) {
        if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &oe_emlrtBCI,
            &c_st);
        }

        xi->data[i] = w + unusedU1->data[loop_ub];
        loop_ub++;
      }
    }
  }

  emxFree_real_T(&b_xi);

  /*  Shift and scale longitude */
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    xi->data[i] = public_raster_struct->XIntrinsicLimits[0] + (xi->data[i] -
      public_raster_struct->FirstCornerLongitude) *
      public_raster_struct->DeltaLongitudeDenominator /
      public_raster_struct->DeltaLongitudeNumerator;
  }

  /*  Snap in all points that fall within distance 0.5 of an edge, so that */
  /*  we get a non-NaN value for them from interp2. */
  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r, i, &vd_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= xi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r1, i, &wd_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] < 1.0);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &u_emlrtECI, &b_st);
  }

  end = r->size[0];
  for (i = 0; i < end; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &ie_emlrtBCI, &b_st);
      }

      xi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r, i, &xd_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (0.5 <= yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r1, i, &yd_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] < 1.0);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &t_emlrtECI, &b_st);
  }

  end = r->size[0];
  for (i = 0; i < end; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &je_emlrtBCI, &b_st);
      }

      yi->data[i] = 1.0;
    }
  }

  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r, i, &be_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (public_raster_struct->RasterSize[1] < xi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r1, i, &ce_emlrtRTEI);
  loop_ub = xi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (xi->data[i] <= public_raster_struct->RasterSize[1] + 0.5);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &s_emlrtECI, &b_st);
  }

  end = r->size[0];
  for (i = 0; i < end; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > xi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, xi->size[0], &le_emlrtBCI, &b_st);
      }

      xi->data[i] = public_raster_struct->RasterSize[1];
    }
  }

  i = r->size[0];
  r->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r, i, &de_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (public_raster_struct->RasterSize[0] < yi->data[i]);
  }

  i = r1->size[0];
  r1->size[0] = yi->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r1, i, &ee_emlrtRTEI);
  loop_ub = yi->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (yi->data[i] <= public_raster_struct->RasterSize[0] + 0.5);
  }

  if (r->size[0] != r1->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &r_emlrtECI, &b_st);
  }

  end = r->size[0];
  for (i = 0; i < end; i++) {
    if (r->data[i] && r1->data[i]) {
      if ((i + 1 < 1) || (i + 1 > yi->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, yi->size[0], &ne_emlrtBCI, &b_st);
      }

      yi->data[i] = public_raster_struct->RasterSize[0];
    }
  }

  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  v = testF(yi, xi); */
  /* linearly interpolates inside of elevation map Z */
  c_st.site = &ie_emlrtRSI;
  d_st.site = &ne_emlrtRSI;
  if ((Z->size[1] < 2) || (Z->size[0] < 2)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &o_emlrtRTEI,
      "Coder:toolbox:NotEnoughPoints", "Coder:toolbox:NotEnoughPoints", 0);
  }

  varargin_1[0] = (uint32_T)xi->size[0];
  varargin_1[1] = 1U;
  varargin_2[0] = (uint32_T)yi->size[0];
  varargin_2[1] = 1U;
  p = true;
  end = 0;
  exitg1 = false;
  while ((!exitg1) && (end < 2)) {
    if ((int32_T)varargin_1[end] != (int32_T)varargin_2[end]) {
      p = false;
      exitg1 = true;
    } else {
      end++;
    }
  }

  b_p = (int32_T)p;
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &n_emlrtRTEI,
      "Coder:toolbox:interp2_sizeXIandYIMustMatch",
      "Coder:toolbox:interp2_sizeXIandYIMustMatch", 0);
  }

  d_st.site = &oe_emlrtRSI;
  e_st.site = &pe_emlrtRSI;
  interp2_local(&e_st, Z, xi, yi, unusedU1);

  /*  Visibility of points along the profile between the start and end points. */
  b_st.site = &gd_emlrtRSI;

  /*  testF = griddedInterpolant(Z); */
  /*  testF.ExtrapolationMethod = 'none'; */
  /*  testv = testF(yi, xi); */
  /*   */
  /*  if testv ~= v */
  /*      fprintf("ow!"); */
  /*  end */
  /* -------------------------------------------------------------------------- */
  b_p = muDoubleScalarIsInf(actualradius);
  emxFree_real_T(&xi);
  emxFree_real_T(&yi);
  emxInit_real_T(&b_st, &ang2, 2, &ne_emlrtRTEI, true);
  emxInit_real_T(&b_st, &z, 2, &qe_emlrtRTEI, true);
  emxInit_real_T(&b_st, &x2, 2, &qe_emlrtRTEI, true);
  emxInit_real_T(&b_st, &b_arclenInRadians, 2, &ge_emlrtRTEI, true);
  if (!b_p) {
    i = b_arclenInRadians->size[0] * b_arclenInRadians->size[1];
    b_arclenInRadians->size[0] = 1;
    b_arclenInRadians->size[1] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, b_arclenInRadians, i, &ge_emlrtRTEI);
    loop_ub = arclenInRadians->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_arclenInRadians->data[i] = arclenInRadians->data[i];
    }

    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = unusedU1->size[0];
    emxEnsureCapacity_real_T(&b_st, ang2, i, &ie_emlrtRTEI);
    loop_ub = unusedU1->size[0];
    for (i = 0; i < loop_ub; i++) {
      ang2->data[i] = unusedU1->data[i];
    }

    c_st.site = &re_emlrtRSI;
    adjustterrain(&c_st, b_arclenInRadians, ang2, actualradius, x2, z);
  } else {
    i = x2->size[0] * x2->size[1];
    x2->size[0] = 1;
    x2->size[1] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, x2, i, &fe_emlrtRTEI);
    loop_ub = arclenInRadians->size[0];
    for (i = 0; i < loop_ub; i++) {
      x2->data[i] = arclenInRadians->data[i];
    }

    i = z->size[0] * z->size[1];
    z->size[0] = 1;
    z->size[1] = unusedU1->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &he_emlrtRTEI);
    loop_ub = unusedU1->size[0];
    for (i = 0; i < loop_ub; i++) {
      z->data[i] = unusedU1->data[i];
    }
  }

  /*  Convert AGL observer altitude to MSL  */
  /*   Observer is at first location */
  if (1 > z->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &fe_emlrtBCI, &b_st);
  }

  w = z->data[0];

  /*  Shift terrain so observer is at altitude 0, and terrain altitudes are relative */
  /*  to the observer */
  e = z->data[0];
  loop_ub = z->size[0] * z->size[1] - 1;
  i = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, z, i, &je_emlrtRTEI);
  for (i = 0; i <= loop_ub; i++) {
    z->data[i] -= e;
  }

  emxInit_real_T(&b_st, &ang, 2, &ke_emlrtRTEI, true);

  /*  Observer is at first location */
  /*  Compute the angles of sight from the observer to each point on the profile. */
  /*  measured positive up from the center of the sphere */
  c_st.site = &se_emlrtRSI;
  b_atan2(&c_st, z, x2, ang);
  i = ang->size[0] * ang->size[1];
  loop_ub = ang->size[0] * ang->size[1];
  ang->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, ang, loop_ub, &ke_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    ang->data[i] += 3.1415926535897931;
  }

  if (1 > x2->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x2->size[1], &ee_emlrtBCI, &b_st);
  }

  if (x2->data[0] == 0.0) {
    if (1 > z->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &de_emlrtBCI, &b_st);
    }

    if (z->data[0] == 0.0) {
      if (1 > ang->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ang->size[1], &ce_emlrtBCI, &b_st);
      }

      ang->data[0] = 1.5707963267948966;

      /*  Look straight down at observer's location */
    }
  }

  /*  Find the cumulative maximum:  maxtohere(k) equals max(ang(1:k)) */
  c_st.site = &te_emlrtRSI;
  d_st.site = &df_emlrtRSI;
  if ((ang->size[1] != 0) && (ang->size[1] != 1)) {
    loop_ub = ang->size[1];
    for (end = 0; end <= loop_ub - 2; end++) {
      ang->data[end + 1] = muDoubleScalarMax(ang->data[end], ang->data[end + 1]);
    }
  }

  /*  Adjust the angles for the altitude of the target height above ground level  */
  /*  or sea level and redo calculation of angles. This makes the obscuring factor */
  /*  the terrain only, and not any target height. To model stuff above the terrain  */
  /*  like a forest canopy, pass in a z vector that has the added heights. */
  emxInit_real_T(&b_st, &z2, 2, &qe_emlrtRTEI, true);
  if (!b_p) {
    i = b_arclenInRadians->size[0] * b_arclenInRadians->size[1];
    b_arclenInRadians->size[0] = 1;
    b_arclenInRadians->size[1] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, b_arclenInRadians, i, &ge_emlrtRTEI);
    loop_ub = arclenInRadians->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_arclenInRadians->data[i] = arclenInRadians->data[i];
    }

    i = ang2->size[0] * ang2->size[1];
    ang2->size[0] = 1;
    ang2->size[1] = unusedU1->size[0];
    emxEnsureCapacity_real_T(&b_st, ang2, i, &me_emlrtRTEI);
    loop_ub = unusedU1->size[0];
    for (i = 0; i < loop_ub; i++) {
      ang2->data[i] = inp_talt;
    }

    c_st.site = &ue_emlrtRSI;
    adjustterrain(&c_st, b_arclenInRadians, ang2, actualradius, x2, z2);
    i = z2->size[0] * z2->size[1];
    loop_ub = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    emxEnsureCapacity_real_T(&b_st, z2, loop_ub, &oe_emlrtRTEI);
    loop_ub = i - 1;
    for (i = 0; i <= loop_ub; i++) {
      z2->data[i] -= w;
    }
  } else {
    i = z2->size[0] * z2->size[1];
    z2->size[0] = 1;
    z2->size[1] = unusedU1->size[0];
    emxEnsureCapacity_real_T(&b_st, z2, i, &le_emlrtRTEI);
    loop_ub = unusedU1->size[0];
    for (i = 0; i < loop_ub; i++) {
      z2->data[i] = inp_talt - w;
    }
  }

  emxFree_real_T(&b_arclenInRadians);
  emxFree_real_T(&arclenInRadians);
  emxFree_real_T(&unusedU1);

  /*  Compute line of sight angles again. */
  c_st.site = &ve_emlrtRSI;
  b_atan2(&c_st, z2, x2, ang2);
  i = ang2->size[0] * ang2->size[1];
  loop_ub = ang2->size[0] * ang2->size[1];
  ang2->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, ang2, loop_ub, &ne_emlrtRTEI);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    ang2->data[i] += 3.1415926535897931;
  }

  if (1 > x2->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, x2->size[1], &be_emlrtBCI, &b_st);
  }

  if (x2->data[0] == 0.0) {
    if (1 > z2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z2->size[1], &ae_emlrtBCI, &b_st);
    }

    if (z2->data[0] == 0.0) {
      if (1 > ang2->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ang2->size[1], &yd_emlrtBCI, &b_st);
      }

      ang2->data[0] = 1.5707963267948966;

      /*  Look straight down at observer's location */
    }
  }

  emxFree_real_T(&x2);
  emxInit_boolean_T(&b_st, &b_vis, 2, &te_emlrtRTEI, true);

  /*  Visible are points that rise above the maximum angle of LOS of intervening  */
  /*  terrain. */
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])ang2->size, *(int32_T (*)[2])
    ang->size, &q_emlrtECI, &b_st);
  i = b_vis->size[0] * b_vis->size[1];
  b_vis->size[0] = 1;
  b_vis->size[1] = ang2->size[1];
  emxEnsureCapacity_boolean_T(&b_st, b_vis, i, &pe_emlrtRTEI);
  loop_ub = ang2->size[0] * ang2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_vis->data[i] = (ang2->data[i] >= ang->data[i]);
  }

  emxFree_real_T(&ang2);
  emxFree_real_T(&ang);

  /*  Visibility of first point below terrain needs a special test, since */
  /*  it always passes the "angles of terrain up to here" test. */
  if (1 > z2->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z2->size[1], &xd_emlrtBCI, &b_st);
  }

  if (1 > z->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &wd_emlrtBCI, &b_st);
  }

  if (z2->data[0] < z->data[0]) {
    if (1 > z->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, z->size[1], &vd_emlrtBCI, &b_st);
    }

    if (z->data[0] < 0.0) {
      if (1 > b_vis->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b_vis->size[1], &ud_emlrtBCI, &b_st);
      }

      b_vis->data[0] = false;
    }
  }

  emxFree_real_T(&z2);
  emxFree_real_T(&z);
  if (b_vis->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(b_vis->size[1], 1, b_vis->size[1],
      &pe_emlrtBCI, sp);
  }

  vis = b_vis->data[b_vis->size[1] - 1];
  emxFree_boolean_T(&b_vis);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return vis;
}

/* End of code generation (mexable_los2.c) */
