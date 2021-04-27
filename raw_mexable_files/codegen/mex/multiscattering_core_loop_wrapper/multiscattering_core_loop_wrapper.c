/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop_wrapper.c
 *
 * Code generation for function 'multiscattering_core_loop_wrapper'
 *
 */

/* Include files */
#include "multiscattering_core_loop_wrapper.h"
#include "colon.h"
#include "mark_diviner_testpoints.h"
#include "multiscattering_core_loop.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_mexutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "tic.h"
#include "toc.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 78,  /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 80,  /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 170, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 191, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 192, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 193, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 204, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 251, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 263, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 275, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 276, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 294, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 324, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 326, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 327, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 328, /* lineNo */
  "multiscattering_core_loop_wrapper", /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 45,  /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 103, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 27, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 97,/* lineNo */
  25,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  23,                                  /* colNo */
  "z_arr",                             /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  90,                                  /* colNo */
  "H_matrix",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  100,                                 /* colNo */
  "H_matrix",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = { 135,/* lineNo */
  25,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  75,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 144,/* lineNo */
  17,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  231,                                 /* lineNo */
  36,                                  /* colNo */
  "local_time",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  18,                                  /* colNo */
  "sample_T",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  27,                                  /* colNo */
  "sample_T",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  244,                                 /* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  20,                                  /* colNo */
  "sample_lat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  29,                                  /* colNo */
  "sample_lat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  21,                                  /* colNo */
  "sample_long",                       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  30,                                  /* colNo */
  "sample_long",                       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  38,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  28,                                  /* colNo */
  "t_arr",                             /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  21,                                  /* colNo */
  "decl_arr",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  35,                                  /* colNo */
  "raytracing_h_arr",                  /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 288,   /* lineNo */
  38,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  38,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 289, /* lineNo */
  104,                                 /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  104,                                 /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  289,                                 /* lineNo */
  130,                                 /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  289,                                 /* lineNo */
  91,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  289,                                 /* lineNo */
  41,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtDCInfo c_emlrtDCI = { 289, /* lineNo */
  21,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  21,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  289,                                 /* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  292,                                 /* lineNo */
  37,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 3,   /* nDims */
  296,                                 /* lineNo */
  18,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtECInfo g_emlrtECI = { 3,   /* nDims */
  297,                                 /* lineNo */
  18,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  305,                                 /* lineNo */
  27,                                  /* colNo */
  "sample_lat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  306,                                 /* lineNo */
  29,                                  /* colNo */
  "sample_long",                       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  308,                                 /* lineNo */
  31,                                  /* colNo */
  "sample_T",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  309,                                 /* lineNo */
  33,                                  /* colNo */
  "sample_weights",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 311, /* lineNo */
  45,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  45,                                  /* colNo */
  "old_surface_T",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 311, /* lineNo */
  51,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  51,                                  /* colNo */
  "old_surface_T",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 311, /* lineNo */
  79,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  79,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 311, /* lineNo */
  85,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  85,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  92,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 311, /* lineNo */
  111,                                 /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  111,                                 /* colNo */
  "old_surface_T",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 311, /* lineNo */
  117,                                 /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  311,                                 /* lineNo */
  117,                                 /* colNo */
  "old_surface_T",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  71,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  80,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  51,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  225,                                 /* lineNo */
  60,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  40,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  226,                                 /* lineNo */
  49,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  23,                                  /* colNo */
  "T_error_3dmat",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  29,                                  /* colNo */
  "T_error_3dmat",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  36,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  36,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 86,  /* lineNo */
  48,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 86,  /* lineNo */
  48,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 131, /* lineNo */
  49,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 142, /* lineNo */
  15,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 143, /* lineNo */
  15,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 212, /* lineNo */
  18,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 213, /* lineNo */
  22,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 214, /* lineNo */
  24,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 215, /* lineNo */
  20,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 216, /* lineNo */
  20,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 217, /* lineNo */
  21,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  23,                                  /* colNo */
  "T_error_3dmat",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  32,                                  /* colNo */
  "T_error_3dmat",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  24,                                  /* colNo */
  "jd_error_3dmat",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  33,                                  /* colNo */
  "jd_error_3dmat",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 86,  /* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  14,                                  /* colNo */
  "init_temps",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  16,                                  /* colNo */
  "H_matrix",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  17,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  17,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 131, /* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 142, /* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  78,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  136,                                 /* lineNo */
  13,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  47,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  9,                                   /* colNo */
  "B_surface_matrix",                  /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 143, /* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  29,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  50,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  70,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  146,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  5,                                   /* colNo */
  "p_arr",                             /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  5,                                   /* colNo */
  "q_arr",                             /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 212, /* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 213,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 214,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 215,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 216,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 217,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  9,                                   /* colNo */
  "T_error_3dmat",                     /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  21,                                  /* colNo */
  "sample_T",                          /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  33,                                  /* colNo */
  "sample_weights",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  9,                                   /* colNo */
  "jd_error_3dmat",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  13,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  239,                                 /* lineNo */
  13,                                  /* colNo */
  "sample_weights",                    /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  13,                                  /* colNo */
  "sample_jds",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  25,                                  /* colNo */
  "sample_lat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  27,                                  /* colNo */
  "sample_long",                       /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  25,                                  /* colNo */
  "sample_jds",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  59,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 289,/* lineNo */
  59,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  5,                                   /* colNo */
  "Tmax_3dmat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  5,                                   /* colNo */
  "Tmin_3dmat",                        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  312,                                 /* lineNo */
  21,                                  /* colNo */
  "local_ptr_matrix",                  /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  315,                                 /* lineNo */
  9,                                   /* colNo */
  "T_error_3dmat{slat, slong}",        /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  316,                                 /* lineNo */
  9,                                   /* colNo */
  "local_ptr_matrix",                  /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  318,                                 /* lineNo */
  27,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m",                      /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = { 49,/* lineNo */
  5,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 72,/* lineNo */
  5,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 195,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 81,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 82,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 86,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 117,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 119,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 131,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 132,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 142,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 143,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 170,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 181,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 191,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 192,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 193,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 196,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 212,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 213,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 214,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 215,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 216,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 217,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 202,/* lineNo */
  30,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 27,/* lineNo */
  6,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 228,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 252,/* lineNo */
  12,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 252,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 253,/* lineNo */
  18,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 229,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 253,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 254,/* lineNo */
  14,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 254,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 255,/* lineNo */
  15,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 255,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 258,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 260,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 277,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 292,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 289,/* lineNo */
  130,                                 /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 1,/* lineNo */
  74,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 289,/* lineNo */
  58,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 289,/* lineNo */
  41,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 201,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 298,/* lineNo */
  16,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 299,/* lineNo */
  16,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 294,/* lineNo */
  17,                                  /* colNo */
  "multiscattering_core_loop_wrapper", /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op_wrapper.m"                       /* pName */
};

static emlrtRSInfo sf_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u);
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [46]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [44]);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [35]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *f_emlrt_marshallOut(const int32_T u);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [88]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [39]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 5, pArrays, "feval", true, location);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [46])
{
  static const int32_T iv[2] = { 1, 46 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 46, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [44])
{
  static const int32_T iv[2] = { 1, 44 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [35])
{
  static const int32_T iv[2] = { 1, 35 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 35, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const int32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [88])
{
  static const int32_T iv[2] = { 1, 88 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 88, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [39])
{
  static const int32_T iv[2] = { 1, 39 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 39, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void multiscattering_core_loop_wrapper(const emlrtStack *sp, const
  emxArray_real_T *z_arr, real_T bottom_layer_idx, real_T depth_update_wait_t,
  real_T depth_update_t_interval, real_T num_layers, real_T t_limit, real_T
  t_wait, const emxArray_real_T *rho_matrix, const emxArray_real_T *lat_arr,
  const emxArray_real_T *long_arr, const emxArray_real_T *vis_flux_matrix, const
  emxArray_real_T *ir_flux_matrix, const emxArray_real_T *dz_arr, real_T dz,
  const struct0_T *parameters, const emxArray_real_T *init_temps, const
  struct1_T *raytracing_params, real_T start_jd, real_T end_jd, const struct4_T *
  diviner_data, boolean_T recent_only, emxArray_real_T *Tmax_3dmat,
  emxArray_real_T *Tmin_3dmat, emxArray_cell_wrap_0 *sample_timepoints,
  emxArray_cell_wrap_0 *T_error_3dmat)
{
  static const char_T cv5[88] = { '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b' };

  static const char_T cv1[46] = { 'R', 'e', 'o', 'r', 'd', 'e', 'r', 'i', 'n',
    'g', ' ', 'D', 'i', 'v', 'i', 'n', 'e', 'r', ' ', 'c', 'o', 'm', 'p', 'a',
    'r', 'i', 's', 'o', 'n', ' ', 'm', 'e', 'a', 's', 'u', 'r', 'e', 'm', 'e',
    'n', 't', 's', '.', '.', '.', ' ' };

  static const char_T cv6[39] = { 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', ' ',
    '%', '7', '.', '2', 'f', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'i',
    'n', ' ', '%', '7', 'd', ' ', 's', 'e', 'c', 'o', 'n', 'd', 's', '\\', 'n' };

  static const char_T cv4[35] = { '\\', 'n', '1', 's', 't', ' ', 't', 'i', 'c',
    'k', ' ', 'o', 'u', 't', ' ', 'o', 'f', ' ', '%', '9', 'd', ' ', 'd', 'o',
    'n', 'e', ' ', 'i', 'n', ' ', '%', '4', 'f', ' ', 's' };

  static const char_T cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T cv2[7] = { 'D', 'o', 'n', 'e', '\\', 'n', ' ' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_cell_wrap_0 *jd_error_3dmat;
  emxArray_cell_wrap_0 *sample_surface_temperatures;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *A0_matrix;
  emxArray_real_T *B_surface_matrix;
  emxArray_real_T *H_matrix;
  emxArray_real_T *T_3dmat;
  emxArray_real_T *a_OVER_pi_OVER_4_POWER_3_matrix;
  emxArray_real_T *b_OVER_pi_OVER_2_POWER_8_matrix;
  emxArray_real_T *b_q_arr;
  emxArray_real_T *p_arr;
  emxArray_real_T *q_arr;
  emxArray_real_T *sample_jds;
  emxArray_real_T *sample_lat;
  emxArray_real_T *sample_long;
  emxArray_real_T *sample_t_idx;
  emxArray_real_T *sample_weights;
  struct_T expl_temp;
  real_T Chi_OVER_350_POWER_3;
  real_T Kd;
  real_T T0;
  real_T TN;
  real_T T_bottom_limit;
  real_T rho_d;
  int32_T b_T_3dmat[2];
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T layer_idx;
  int32_T long_idx;
  int32_T maxdimlen;
  int32_T nx;
  int32_T t_print_step;
  uint32_T local_ptr;
  uint32_T ptr;
  uint32_T t_print;
  char_T cv3[44];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &A0_matrix, 2, &w_emlrtRTEI, true);
  emxInit_cell_wrap_0(sp, &sample_surface_temperatures, 2, &pc_emlrtRTEI, true);

  /*  Mark diviner testpoints for error comparison */
  st.site = &emlrtRSI;
  mark_diviner_testpoints(&st, start_jd, end_jd, lat_arr, long_arr,
    diviner_data->lat_arr, diviner_data->long_arr, diviner_data->T_arr,
    diviner_data->jd_arr, recent_only, sample_timepoints,
    sample_surface_temperatures);

  /*  Unpack raytracing_params */
  /*  Get parameters */
  /*  custom_parameters */
  rho_d = parameters->rho_d;
  Kd = parameters->Kd;
  T_bottom_limit = parameters->T_bottom_limit;

  /*  generate matrices if needed */
  i = A0_matrix->size[0] * A0_matrix->size[1];
  A0_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  A0_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, A0_matrix, i, &w_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < nx; i++) {
    A0_matrix->data[i] = parameters->A0;
  }

  emxInit_real_T(sp, &H_matrix, 2, &x_emlrtRTEI, true);
  i = H_matrix->size[0] * H_matrix->size[1];
  H_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  H_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, H_matrix, i, &x_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < nx; i++) {
    H_matrix->data[i] = parameters->H;
  }

  emxInitStruct_struct_T(sp, &expl_temp, &vc_emlrtRTEI, true);

  /*  pre-calculate constant parameters */
  st.site = &b_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  i = expl_temp.thermal_emission_matrix->size[0] *
    expl_temp.thermal_emission_matrix->size[1];
  expl_temp.thermal_emission_matrix->size[0] =
    raytracing_params->elevation_matrix->size[0];
  expl_temp.thermal_emission_matrix->size[1] =
    raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, expl_temp.thermal_emission_matrix, i,
    &y_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < nx; i++) {
    expl_temp.thermal_emission_matrix->data[i] = parameters->emissivity *
      parameters->stefans_constant;
  }

  emxInit_real_T(sp, &a_OVER_pi_OVER_4_POWER_3_matrix, 2, &ab_emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  Chi_OVER_350_POWER_3 = parameters->Chi * 2.3323615160349852E-8;
  i = a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
    a_OVER_pi_OVER_4_POWER_3_matrix->size[1];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[0] = raytracing_params->
    elevation_matrix->size[0];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[1] = raytracing_params->
    elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, a_OVER_pi_OVER_4_POWER_3_matrix, i, &ab_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < nx; i++) {
    a_OVER_pi_OVER_4_POWER_3_matrix->data[i] = parameters->a *
      2.0640982037247677;
  }

  emxInit_real_T(sp, &b_OVER_pi_OVER_2_POWER_8_matrix, 2, &bb_emlrtRTEI, true);
  i = b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
    b_OVER_pi_OVER_2_POWER_8_matrix->size[1];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[0] = raytracing_params->
    elevation_matrix->size[0];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[1] = raytracing_params->
    elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, b_OVER_pi_OVER_2_POWER_8_matrix, i, &bb_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < nx; i++) {
    b_OVER_pi_OVER_2_POWER_8_matrix->data[i] = parameters->b *
      0.026979940263294394;
  }

  emxInit_real_T(sp, &T_3dmat, 3, &cb_emlrtRTEI, true);

  /*  Initialise Temperatures */
  i = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  T_3dmat->size[0] = lat_arr->size[1];
  T_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, T_3dmat, i, &cb_emlrtRTEI);
  if (!(num_layers >= 0.0)) {
    emlrtNonNegativeCheckR2012b(num_layers, &k_emlrtDCI, sp);
  }

  i = (int32_T)muDoubleScalarFloor(num_layers);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &j_emlrtDCI, sp);
  }

  i1 = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  T_3dmat->size[2] = (int32_T)num_layers;
  emxEnsureCapacity_real_T(sp, T_3dmat, i1, &cb_emlrtRTEI);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &u_emlrtDCI, sp);
  }

  nx = lat_arr->size[1] * long_arr->size[1] * (int32_T)num_layers;
  for (i1 = 0; i1 < nx; i1++) {
    T_3dmat->data[i1] = rtNaN;
  }

  i1 = lat_arr->size[1];
  for (maxdimlen = 0; maxdimlen < i1; maxdimlen++) {
    /*     %% Prepare for parfor iteration */
    i2 = long_arr->size[1];
    for (t_print_step = 0; t_print_step < i2; t_print_step++) {
      if ((maxdimlen + 1 < 1) || (maxdimlen + 1 > init_temps->size[0])) {
        emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, init_temps->size[0],
          &tb_emlrtBCI, sp);
      }

      if ((t_print_step + 1 < 1) || (t_print_step + 1 > init_temps->size[1])) {
        emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1, init_temps->size[1],
          &tb_emlrtBCI, sp);
      }

      T0 = init_temps->data[maxdimlen + init_temps->size[0] * t_print_step];
      TN = T0 / 1.4142135623730951;
      if (TN < T_bottom_limit) {
        /*  set roughly constant initial temperature profile for very */
        /*  cold regions */
        TN = T_bottom_limit;
      }

      i3 = (int32_T)num_layers;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, num_layers, mxDOUBLE_CLASS,
        (int32_T)num_layers, &b_emlrtRTEI, sp);
      for (layer_idx = 0; layer_idx < i3; layer_idx++) {
        nx = layer_idx + 1;
        if ((nx < 1) || (nx > z_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(nx, 1, z_arr->size[1], &emlrtBCI, sp);
        }

        if ((maxdimlen + 1 < 1) || (maxdimlen + 1 > H_matrix->size[0])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, H_matrix->size[0],
            &ub_emlrtBCI, sp);
        }

        if ((t_print_step + 1 < 1) || (t_print_step + 1 > H_matrix->size[1])) {
          emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1, H_matrix->size[1],
            &ub_emlrtBCI, sp);
        }

        if ((H_matrix->data[maxdimlen + H_matrix->size[0] * t_print_step] == 0.0)
            && (z_arr->data[layer_idx] == 0.0)) {
          if ((maxdimlen + 1 < 1) || (maxdimlen + 1 > T_3dmat->size[0])) {
            emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, T_3dmat->size[0],
              &vb_emlrtBCI, sp);
          }

          if ((t_print_step + 1 < 1) || (t_print_step + 1 > T_3dmat->size[1])) {
            emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1, T_3dmat->size[1],
              &vb_emlrtBCI, sp);
          }

          if (((int32_T)(layer_idx + 1U) < 1) || ((int32_T)(layer_idx + 1U) >
               T_3dmat->size[2])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
              T_3dmat->size[2], &vb_emlrtBCI, sp);
          }

          T_3dmat->data[(maxdimlen + T_3dmat->size[0] * t_print_step) +
            T_3dmat->size[0] * T_3dmat->size[1] * layer_idx] = T0;
        } else {
          nx = maxdimlen + 1;
          if ((nx < 1) || (nx > H_matrix->size[0])) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, H_matrix->size[0], &b_emlrtBCI,
              sp);
          }

          nx = t_print_step + 1;
          if ((nx < 1) || (nx > H_matrix->size[1])) {
            emlrtDynamicBoundsCheckR2012b(nx, 1, H_matrix->size[1], &c_emlrtBCI,
              sp);
          }

          if ((maxdimlen + 1 < 1) || (maxdimlen + 1 > T_3dmat->size[0])) {
            emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1, T_3dmat->size[0],
              &wb_emlrtBCI, sp);
          }

          if ((t_print_step + 1 < 1) || (t_print_step + 1 > T_3dmat->size[1])) {
            emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1, T_3dmat->size[1],
              &wb_emlrtBCI, sp);
          }

          if (((int32_T)(layer_idx + 1U) < 1) || ((int32_T)(layer_idx + 1U) >
               T_3dmat->size[2])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
              T_3dmat->size[2], &wb_emlrtBCI, sp);
          }

          T_3dmat->data[(maxdimlen + T_3dmat->size[0] * t_print_step) +
            T_3dmat->size[0] * T_3dmat->size[1] * layer_idx] = TN - (TN - T0) *
            muDoubleScalarExp(-z_arr->data[layer_idx] / H_matrix->data[maxdimlen
                              + H_matrix->size[0] * t_print_step]);
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  %% Generate vis normalisation matrix */
  /*  mA = A0_matrix; */
  /*  mB = a_matrix./((pi/4)^3); */
  /*  mC = b_matrix./((pi/2)^8); */
  /*  %hardcoded solution to integral to avoid using symbolic variables */
  /*  vis_normalisation_matrix = 1./( mA + 3*mB*(pi^2 - 8)/4 + mC*(40320 - 20160*pi + 840*pi^3 - 10.5*pi^5 + pi^7 /16) ); */
  /*  %clearvars mA mB mC; */
  /*  Old prog starts */
  i1 = Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * Tmax_3dmat->size[2];
  Tmax_3dmat->size[0] = T_3dmat->size[0];
  Tmax_3dmat->size[1] = T_3dmat->size[1];
  Tmax_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(sp, Tmax_3dmat, i1, &db_emlrtRTEI);
  nx = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i1 = 0; i1 < nx; i1++) {
    Tmax_3dmat->data[i1] = -300.0;
  }

  /*  Tmax_dtm_3dmat = NaN(size(T_3dmat)); */
  i1 = Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * Tmin_3dmat->size[2];
  Tmin_3dmat->size[0] = T_3dmat->size[0];
  Tmin_3dmat->size[1] = T_3dmat->size[1];
  Tmin_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(sp, Tmin_3dmat, i1, &eb_emlrtRTEI);
  nx = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i1 = 0; i1 < nx; i1++) {
    Tmin_3dmat->data[i1] = 600.0;
  }

  /*  Tmin_dtm_3dmat = NaN(size(T_3dmat)); */
  /*  Prepare for loop */
  /*  Prepare for loop by pre-calculating constant values which do not need to */
  /*  be calculated every iteration (therefore increasing performance) */
  /*  progress_message = ''; */
  /*  coder.varsize('progress_message'); */
  i1 = expl_temp.Kc_3dmat->size[0] * expl_temp.Kc_3dmat->size[1] *
    expl_temp.Kc_3dmat->size[2];
  expl_temp.Kc_3dmat->size[0] = lat_arr->size[1];
  expl_temp.Kc_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, expl_temp.Kc_3dmat, i1, &fb_emlrtRTEI);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &l_emlrtDCI, sp);
  }

  i1 = expl_temp.Kc_3dmat->size[0] * expl_temp.Kc_3dmat->size[1] *
    expl_temp.Kc_3dmat->size[2];
  nx = (int32_T)num_layers;
  expl_temp.Kc_3dmat->size[2] = nx;
  emxEnsureCapacity_real_T(sp, expl_temp.Kc_3dmat, i1, &fb_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(num_layers, &v_emlrtDCI, sp);
  }

  maxdimlen = lat_arr->size[1] * long_arr->size[1] * (int32_T)num_layers;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    expl_temp.Kc_3dmat->data[i1] = rtNaN;
  }

  emxInit_real_T(sp, &B_surface_matrix, 2, &gb_emlrtRTEI, true);
  i1 = B_surface_matrix->size[0] * B_surface_matrix->size[1];
  B_surface_matrix->size[0] = lat_arr->size[1];
  B_surface_matrix->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, B_surface_matrix, i1, &gb_emlrtRTEI);
  maxdimlen = lat_arr->size[1] * long_arr->size[1];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    B_surface_matrix->data[i1] = 0.0;
  }

  /* PREALLOC */
  i1 = lat_arr->size[1];
  for (t_print_step = 0; t_print_step < i1; t_print_step++) {
    i2 = long_arr->size[1];
    for (long_idx = 0; long_idx < i2; long_idx++) {
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, num_layers, mxDOUBLE_CLASS,
        (int32_T)num_layers, &c_emlrtRTEI, sp);
      for (layer_idx = 0; layer_idx < nx; layer_idx++) {
        if ((t_print_step + 1 < 1) || (t_print_step + 1 > rho_matrix->size[0]))
        {
          emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1, rho_matrix->size[0],
            &xb_emlrtBCI, sp);
        }

        if ((long_idx + 1 < 1) || (long_idx + 1 > rho_matrix->size[1])) {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, rho_matrix->size[1],
            &xb_emlrtBCI, sp);
        }

        if ((int32_T)(layer_idx + 1U) > rho_matrix->size[2]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
            rho_matrix->size[2], &xb_emlrtBCI, sp);
        }

        if ((t_print_step + 1 < 1) || (t_print_step + 1 >
             expl_temp.Kc_3dmat->size[0])) {
          emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1,
            expl_temp.Kc_3dmat->size[0], &yb_emlrtBCI, sp);
        }

        if ((long_idx + 1 < 1) || (long_idx + 1 > expl_temp.Kc_3dmat->size[1]))
        {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
            expl_temp.Kc_3dmat->size[1], &yb_emlrtBCI, sp);
        }

        if ((int32_T)(layer_idx + 1U) > expl_temp.Kc_3dmat->size[2]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
            expl_temp.Kc_3dmat->size[2], &yb_emlrtBCI, sp);
        }

        expl_temp.Kc_3dmat->data[(t_print_step + expl_temp.Kc_3dmat->size[0] *
          long_idx) + expl_temp.Kc_3dmat->size[0] * expl_temp.Kc_3dmat->size[1] *
          layer_idx] = Kd - (Kd - parameters->Ks) * (rho_d - rho_matrix->data
          [(t_print_step + rho_matrix->size[0] * long_idx) + rho_matrix->size[0]
          * rho_matrix->size[1] * layer_idx]) / (rho_d - parameters->rho_s);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (1 > expl_temp.Kc_3dmat->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, expl_temp.Kc_3dmat->size[2],
          &d_emlrtBCI, sp);
      }

      if ((t_print_step + 1 < 1) || (t_print_step + 1 > expl_temp.Kc_3dmat->
           size[0])) {
        emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1,
          expl_temp.Kc_3dmat->size[0], &ac_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > expl_temp.Kc_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, expl_temp.Kc_3dmat->size
          [1], &ac_emlrtBCI, sp);
      }

      if ((t_print_step + 1 < 1) || (t_print_step + 1 > B_surface_matrix->size[0]))
      {
        emlrtDynamicBoundsCheckR2012b(t_print_step + 1, 1,
          B_surface_matrix->size[0], &bc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > B_surface_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, B_surface_matrix->size[1],
          &bc_emlrtBCI, sp);
      }

      B_surface_matrix->data[t_print_step + B_surface_matrix->size[0] * long_idx]
        = expl_temp.Kc_3dmat->data[t_print_step + expl_temp.Kc_3dmat->size[0] *
        long_idx] * Chi_OVER_350_POWER_3;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &p_arr, 2, &hb_emlrtRTEI, true);
  i1 = p_arr->size[0] * p_arr->size[1];
  p_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, p_arr, i1, &hb_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(num_layers, &m_emlrtDCI, sp);
  }

  i1 = p_arr->size[0] * p_arr->size[1];
  p_arr->size[1] = nx;
  emxEnsureCapacity_real_T(sp, p_arr, i1, &hb_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(num_layers, &w_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < nx; i1++) {
    p_arr->data[i1] = rtNaN;
  }

  emxInit_real_T(sp, &q_arr, 2, &ib_emlrtRTEI, true);
  i1 = q_arr->size[0] * q_arr->size[1];
  q_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, q_arr, i1, &ib_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(num_layers, &n_emlrtDCI, sp);
  }

  i1 = q_arr->size[0] * q_arr->size[1];
  q_arr->size[1] = nx;
  emxEnsureCapacity_real_T(sp, q_arr, i1, &ib_emlrtRTEI);
  if (nx != i) {
    emlrtIntegerCheckR2012b(num_layers, &x_emlrtDCI, sp);
  }

  for (i = 0; i < nx; i++) {
    q_arr->data[i] = rtNaN;
  }

  i = nx - 2;
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, num_layers - 1.0, mxDOUBLE_CLASS,
    (int32_T)num_layers - 2, &d_emlrtRTEI, sp);
  for (layer_idx = 0; layer_idx < i; layer_idx++) {
    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &cc_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &dc_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &ec_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &fc_emlrtBCI, sp);
    }

    rho_d = dz_arr->data[layer_idx + 1] * dz_arr->data[layer_idx] *
      (dz_arr->data[layer_idx + 1] + dz_arr->data[layer_idx]);
    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &gc_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > p_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, p_arr->size[1],
        &hc_emlrtBCI, sp);
    }

    p_arr->data[layer_idx + 1] = 2.0 * dz_arr->data[layer_idx + 1] / rho_d;
    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &ic_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > q_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, q_arr->size[1],
        &jc_emlrtBCI, sp);
    }

    q_arr->data[layer_idx + 1] = 2.0 * dz_arr->data[layer_idx] / rho_d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  GENERAL PARAMETER */
  /*  set general parameters */
  st.site = &d_emlrtRSI;
  if (muDoubleScalarIsNaN(parameters->dt) || muDoubleScalarIsNaN(t_limit)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &jb_emlrtRTEI);
    expl_temp.t_arr->data[0] = rtNaN;
  } else if ((parameters->dt == 0.0) || ((0.0 < t_limit) && (parameters->dt <
               0.0)) || ((t_limit < 0.0) && (parameters->dt > 0.0))) {
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 0;
  } else if (muDoubleScalarIsInf(t_limit) && (muDoubleScalarIsInf(parameters->dt)
              || (0.0 == t_limit))) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &jb_emlrtRTEI);
    expl_temp.t_arr->data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(parameters->dt)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &jb_emlrtRTEI);
    expl_temp.t_arr->data[0] = 0.0;
  } else if (muDoubleScalarFloor(parameters->dt) == parameters->dt) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    nx = (int32_T)muDoubleScalarFloor(t_limit / parameters->dt);
    expl_temp.t_arr->size[1] = nx + 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &jb_emlrtRTEI);
    for (i = 0; i <= nx; i++) {
      expl_temp.t_arr->data[i] = parameters->dt * (real_T)i;
    }
  } else {
    b_st.site = &y_emlrtRSI;
    eml_float_colon(&b_st, parameters->dt, t_limit, expl_temp.t_arr);
  }

  i = expl_temp.p_arr->size[0] * expl_temp.p_arr->size[1];
  expl_temp.p_arr->size[0] = 1;
  expl_temp.p_arr->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(sp, expl_temp.p_arr, i, &kb_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    expl_temp.p_arr->data[i] = p_arr->data[i];
  }

  i = expl_temp.q_arr->size[0] * expl_temp.q_arr->size[1];
  expl_temp.q_arr->size[0] = 1;
  expl_temp.q_arr->size[1] = q_arr->size[1];
  emxEnsureCapacity_real_T(sp, expl_temp.q_arr, i, &lb_emlrtRTEI);
  nx = q_arr->size[0] * q_arr->size[1];
  for (i = 0; i < nx; i++) {
    expl_temp.q_arr->data[i] = q_arr->data[i];
  }

  st.site = &e_emlrtRSI;
  nx = A0_matrix->size[0] * A0_matrix->size[1];
  b_st.site = &db_emlrtRSI;
  maxdimlen = A0_matrix->size[0];
  if (A0_matrix->size[1] > A0_matrix->size[0]) {
    maxdimlen = A0_matrix->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (nx > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (1 > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  i = expl_temp.A0_nx1->size[0];
  expl_temp.A0_nx1->size[0] = nx;
  emxEnsureCapacity_real_T(sp, expl_temp.A0_nx1, i, &mb_emlrtRTEI);
  for (i = 0; i < nx; i++) {
    expl_temp.A0_nx1->data[i] = A0_matrix->data[i];
  }

  st.site = &f_emlrtRSI;
  nx = a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
    a_OVER_pi_OVER_4_POWER_3_matrix->size[1];
  b_st.site = &db_emlrtRSI;
  maxdimlen = a_OVER_pi_OVER_4_POWER_3_matrix->size[0];
  if (a_OVER_pi_OVER_4_POWER_3_matrix->size[1] >
      a_OVER_pi_OVER_4_POWER_3_matrix->size[0]) {
    maxdimlen = a_OVER_pi_OVER_4_POWER_3_matrix->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (nx > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (1 > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  i = expl_temp.a_OVER_pi_OVER_4_POWER_3_nx1->size[0];
  expl_temp.a_OVER_pi_OVER_4_POWER_3_nx1->size[0] = nx;
  emxEnsureCapacity_real_T(sp, expl_temp.a_OVER_pi_OVER_4_POWER_3_nx1, i,
    &nb_emlrtRTEI);
  for (i = 0; i < nx; i++) {
    expl_temp.a_OVER_pi_OVER_4_POWER_3_nx1->data[i] =
      a_OVER_pi_OVER_4_POWER_3_matrix->data[i];
  }

  emxFree_real_T(&a_OVER_pi_OVER_4_POWER_3_matrix);
  st.site = &g_emlrtRSI;
  nx = b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
    b_OVER_pi_OVER_2_POWER_8_matrix->size[1];
  b_st.site = &db_emlrtRSI;
  maxdimlen = b_OVER_pi_OVER_2_POWER_8_matrix->size[0];
  if (b_OVER_pi_OVER_2_POWER_8_matrix->size[1] >
      b_OVER_pi_OVER_2_POWER_8_matrix->size[0]) {
    maxdimlen = b_OVER_pi_OVER_2_POWER_8_matrix->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (nx > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (1 > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  i = expl_temp.b_OVER_pi_OVER_2_POWER_8_nx1->size[0];
  expl_temp.b_OVER_pi_OVER_2_POWER_8_nx1->size[0] = nx;
  emxEnsureCapacity_real_T(sp, expl_temp.b_OVER_pi_OVER_2_POWER_8_nx1, i,
    &ob_emlrtRTEI);
  for (i = 0; i < nx; i++) {
    expl_temp.b_OVER_pi_OVER_2_POWER_8_nx1->data[i] =
      b_OVER_pi_OVER_2_POWER_8_matrix->data[i];
  }

  emxFree_real_T(&b_OVER_pi_OVER_2_POWER_8_matrix);
  i = expl_temp.B_surface_matrix->size[0] * expl_temp.B_surface_matrix->size[1];
  expl_temp.B_surface_matrix->size[0] = B_surface_matrix->size[0];
  expl_temp.B_surface_matrix->size[1] = B_surface_matrix->size[1];
  emxEnsureCapacity_real_T(sp, expl_temp.B_surface_matrix, i, &pb_emlrtRTEI);
  nx = B_surface_matrix->size[0] * B_surface_matrix->size[1];
  for (i = 0; i < nx; i++) {
    expl_temp.B_surface_matrix->data[i] = B_surface_matrix->data[i];
  }

  /*  Initialise error output matrices */
  maxdimlen = long_arr->size[1] - 1;

  /*  Decide when to check for errors */
  st.site = &h_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
    b_emlrt_marshallOut(1.0), c_emlrt_marshallOut(&d_st, cv1), &emlrtMCI),
                   "<output of feval>");

  /* count number of total values to allow for preallocation of memory */
  rho_d = 0.0;
  i = lat_arr->size[1];
  for (t_print_step = 0; t_print_step < i; t_print_step++) {
    for (long_idx = 0; long_idx <= maxdimlen; long_idx++) {
      if (t_print_step > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0,
          sample_surface_temperatures->size[0] - 1, &fb_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &gb_emlrtBCI, sp);
      }

      rho_d += (real_T)sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  i = q_arr->size[0] * q_arr->size[1];
  q_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, q_arr, i, &qb_emlrtRTEI);
  if (rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &o_emlrtDCI, sp);
  }

  i = q_arr->size[0] * q_arr->size[1];
  q_arr->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, q_arr, i, &qb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &y_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    q_arr->data[i] = rtNaN;
  }

  i = p_arr->size[0] * p_arr->size[1];
  p_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, p_arr, i, &rb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &p_emlrtDCI, sp);
  }

  i = p_arr->size[0] * p_arr->size[1];
  p_arr->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, p_arr, i, &rb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &ab_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    p_arr->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_weights, 2, &sb_emlrtRTEI, true);
  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_weights, i, &sb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &q_emlrtDCI, sp);
  }

  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, sample_weights, i, &sb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &bb_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    sample_weights->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_jds, 2, &tb_emlrtRTEI, true);
  i = sample_jds->size[0] * sample_jds->size[1];
  sample_jds->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_jds, i, &tb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &r_emlrtDCI, sp);
  }

  i = sample_jds->size[0] * sample_jds->size[1];
  sample_jds->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, sample_jds, i, &tb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &cb_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    sample_jds->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_lat, 2, &ub_emlrtRTEI, true);
  i = sample_lat->size[0] * sample_lat->size[1];
  sample_lat->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_lat, i, &ub_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &s_emlrtDCI, sp);
  }

  i = sample_lat->size[0] * sample_lat->size[1];
  sample_lat->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, sample_lat, i, &ub_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &db_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    sample_lat->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_long, 2, &vb_emlrtRTEI, true);
  i = sample_long->size[0] * sample_long->size[1];
  sample_long->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_long, i, &vb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &t_emlrtDCI, sp);
  }

  i = sample_long->size[0] * sample_long->size[1];
  sample_long->size[1] = (int32_T)rho_d;
  emxEnsureCapacity_real_T(sp, sample_long, i, &vb_emlrtRTEI);
  if ((int32_T)rho_d != (int32_T)rho_d) {
    emlrtIntegerCheckR2012b(rho_d, &eb_emlrtDCI, sp);
  }

  nx = (int32_T)rho_d;
  for (i = 0; i < nx; i++) {
    sample_long->data[i] = rtNaN;
  }

  emxInit_cell_wrap_0(sp, &jd_error_3dmat, 2, &sc_emlrtRTEI, true);
  Kd = parameters->dt / 86400.0;
  ptr = 1U;

  /* indicates where to insert next value */
  i = lat_arr->size[1];
  i1 = T_error_3dmat->size[0] * T_error_3dmat->size[1];
  T_error_3dmat->size[0] = lat_arr->size[1];
  T_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, T_error_3dmat, i1, &wb_emlrtRTEI);
  i1 = jd_error_3dmat->size[0] * jd_error_3dmat->size[1];
  jd_error_3dmat->size[0] = lat_arr->size[1];
  jd_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, jd_error_3dmat, i1, &wb_emlrtRTEI);
  for (t_print_step = 0; t_print_step < i; t_print_step++) {
    for (long_idx = 0; long_idx <= maxdimlen; long_idx++) {
      if (t_print_step > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0,
          sample_surface_temperatures->size[0] - 1, &hb_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &ib_emlrtBCI, sp);
      }

      if (t_print_step > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, sample_timepoints->size[0]
          - 1, &jb_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &kb_emlrtBCI, sp);
      }

      nx = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1] - 1;
      if (t_print_step > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, T_error_3dmat->size[0] -
          1, &pb_emlrtBCI, sp);
      }

      if (long_idx > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, T_error_3dmat->size[1] - 1,
          &qb_emlrtBCI, sp);
      }

      i1 = T_error_3dmat->data[t_print_step + T_error_3dmat->size[0] * long_idx]
        .f1->size[0] * T_error_3dmat->data[t_print_step + T_error_3dmat->size[0]
        * long_idx].f1->size[1];
      T_error_3dmat->data[t_print_step + T_error_3dmat->size[0] * long_idx]
        .f1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, T_error_3dmat->data[t_print_step +
        T_error_3dmat->size[0] * long_idx].f1, i1, &ac_emlrtRTEI);
      if (t_print_step > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, T_error_3dmat->size[0] -
          1, &pb_emlrtBCI, sp);
      }

      if (long_idx > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, T_error_3dmat->size[1] - 1,
          &qb_emlrtBCI, sp);
      }

      i1 = T_error_3dmat->data[t_print_step + T_error_3dmat->size[0] * long_idx]
        .f1->size[0] * T_error_3dmat->data[t_print_step + T_error_3dmat->size[0]
        * long_idx].f1->size[1];
      T_error_3dmat->data[t_print_step + T_error_3dmat->size[0] * long_idx]
        .f1->size[1] = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      emxEnsureCapacity_real_T(sp, T_error_3dmat->data[t_print_step +
        T_error_3dmat->size[0] * long_idx].f1, i1, &ac_emlrtRTEI);
      i1 = T_error_3dmat->size[0];
      i2 = T_error_3dmat->size[1];
      if (t_print_step > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, T_error_3dmat->size[0] -
          1, &pb_emlrtBCI, sp);
      }

      if (long_idx > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, T_error_3dmat->size[1] - 1,
          &qb_emlrtBCI, sp);
      }

      if (t_print_step > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, T_error_3dmat->size[0] -
          1, &pb_emlrtBCI, sp);
      }

      if (long_idx > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, T_error_3dmat->size[1] - 1,
          &qb_emlrtBCI, sp);
      }

      for (i3 = 0; i3 <= nx; i3++) {
        if (t_print_step > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(t_print_step, 0, i1 - 1, &kc_emlrtBCI,
            sp);
        }

        if (long_idx > i2 - 1) {
          emlrtDynamicBoundsCheckR2012b(long_idx, 0, i2 - 1, &kc_emlrtBCI, sp);
        }

        T_error_3dmat->data[t_print_step + T_error_3dmat->size[0] * long_idx].
          f1->data[i3] = rtNaN;
      }

      nx = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1] - 1;
      if (t_print_step > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, jd_error_3dmat->size[0] -
          1, &rb_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &sb_emlrtBCI, sp);
      }

      i1 = jd_error_3dmat->data[t_print_step + jd_error_3dmat->size[0] *
        long_idx].f1->size[0] * jd_error_3dmat->data[t_print_step +
        jd_error_3dmat->size[0] * long_idx].f1->size[1];
      jd_error_3dmat->data[t_print_step + jd_error_3dmat->size[0] * long_idx].
        f1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, jd_error_3dmat->data[t_print_step +
        jd_error_3dmat->size[0] * long_idx].f1, i1, &ec_emlrtRTEI);
      if (t_print_step > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, jd_error_3dmat->size[0] -
          1, &rb_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &sb_emlrtBCI, sp);
      }

      i1 = jd_error_3dmat->data[t_print_step + jd_error_3dmat->size[0] *
        long_idx].f1->size[0] * jd_error_3dmat->data[t_print_step +
        jd_error_3dmat->size[0] * long_idx].f1->size[1];
      jd_error_3dmat->data[t_print_step + jd_error_3dmat->size[0] * long_idx].
        f1->size[1] = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      emxEnsureCapacity_real_T(sp, jd_error_3dmat->data[t_print_step +
        jd_error_3dmat->size[0] * long_idx].f1, i1, &ec_emlrtRTEI);
      i1 = jd_error_3dmat->size[0];
      i2 = jd_error_3dmat->size[1];
      if (t_print_step > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, jd_error_3dmat->size[0] -
          1, &rb_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &sb_emlrtBCI, sp);
      }

      if (t_print_step > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(t_print_step, 0, jd_error_3dmat->size[0] -
          1, &rb_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &sb_emlrtBCI, sp);
      }

      for (i3 = 0; i3 <= nx; i3++) {
        if (t_print_step > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(t_print_step, 0, i1 - 1, &nc_emlrtBCI,
            sp);
        }

        if (long_idx > i2 - 1) {
          emlrtDynamicBoundsCheckR2012b(long_idx, 0, i2 - 1, &nc_emlrtBCI, sp);
        }

        jd_error_3dmat->data[t_print_step + jd_error_3dmat->size[0] * long_idx].
          f1->data[i3] = rtNaN;
      }

      i1 = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      for (nx = 0; nx < i1; nx++) {
        i2 = sample_timepoints->data[t_print_step + sample_timepoints->size[0] *
          long_idx].f1->size[1];
        i3 = nx + 1;
        if ((i3 < 1) || (i3 > i2)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &e_emlrtBCI, sp);
        }

        rho_d = (sample_timepoints->data[t_print_step + sample_timepoints->size
                 [0] * long_idx].f1->data[nx] -
                 raytracing_params->start_julian_date) / Kd;
        if (((int32_T)ptr < 1) || ((int32_T)ptr > p_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, p_arr->size[1],
            &oc_emlrtBCI, sp);
        }

        p_arr->data[(int32_T)ptr - 1] = muDoubleScalarCeil(rho_d);
        if (((int32_T)ptr < 1) || ((int32_T)ptr > sample_weights->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, sample_weights->size[1],
            &pc_emlrtBCI, sp);
        }

        sample_weights->data[(int32_T)ptr - 1] = rho_d - muDoubleScalarFloor
          (rho_d);
        if (((int32_T)ptr < 1) || ((int32_T)ptr > sample_jds->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, sample_jds->size[1],
            &qc_emlrtBCI, sp);
        }

        sample_jds->data[(int32_T)ptr - 1] = sample_timepoints->
          data[t_print_step + sample_timepoints->size[0] * long_idx].f1->data[nx];
        ptr++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      rho_d = (real_T)ptr - (real_T)sample_surface_temperatures->
        data[t_print_step + sample_surface_temperatures->size[0] * long_idx].
        f1->size[1];
      if (rho_d > (real_T)ptr - 1.0) {
        i1 = -1;
        i2 = 0;
      } else {
        if (((int32_T)rho_d < 1) || ((int32_T)rho_d > sample_lat->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)rho_d, 1, sample_lat->size[1],
            &h_emlrtBCI, sp);
        }

        i1 = (int32_T)rho_d - 2;
        if (((int32_T)(ptr - 1U) < 1) || ((int32_T)(ptr - 1U) > sample_lat->
             size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(ptr - 1U), 1, sample_lat->
            size[1], &i_emlrtBCI, sp);
        }

        i2 = (int32_T)(ptr - 1U);
      }

      nx = (i2 - i1) - 1;
      for (i2 = 0; i2 < nx; i2++) {
        sample_lat->data[(i1 + i2) + 1] = (uint32_T)(t_print_step + 1);
      }

      rho_d = (real_T)ptr - (real_T)sample_surface_temperatures->
        data[t_print_step + sample_surface_temperatures->size[0] * long_idx].
        f1->size[1];
      if (rho_d > (real_T)ptr - 1.0) {
        i1 = -1;
        i2 = 0;
      } else {
        if (((int32_T)rho_d < 1) || ((int32_T)rho_d > sample_long->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)rho_d, 1, sample_long->size[1],
            &j_emlrtBCI, sp);
        }

        i1 = (int32_T)rho_d - 2;
        if (((int32_T)(ptr - 1U) < 1) || ((int32_T)(ptr - 1U) >
             sample_long->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(ptr - 1U), 1,
            sample_long->size[1], &k_emlrtBCI, sp);
        }

        i2 = (int32_T)(ptr - 1U);
      }

      nx = (i2 - i1) - 1;
      for (i2 = 0; i2 < nx; i2++) {
        sample_long->data[(i1 + i2) + 1] = (uint32_T)(long_idx + 1);
      }

      rho_d = (real_T)ptr - (real_T)sample_surface_temperatures->
        data[t_print_step + sample_surface_temperatures->size[0] * long_idx].
        f1->size[1];
      if (rho_d > (real_T)ptr - 1.0) {
        i1 = 0;
        i2 = 0;
      } else {
        if (((int32_T)rho_d < 1) || ((int32_T)rho_d > q_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)rho_d, 1, q_arr->size[1],
            &f_emlrtBCI, sp);
        }

        i1 = (int32_T)rho_d - 1;
        if (((int32_T)(ptr - 1U) < 1) || ((int32_T)(ptr - 1U) > q_arr->size[1]))
        {
          emlrtDynamicBoundsCheckR2012b((int32_T)(ptr - 1U), 1, q_arr->size[1],
            &g_emlrtBCI, sp);
        }

        i2 = (int32_T)(ptr - 1U);
      }

      i2 -= i1;
      i3 = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      if (i2 != i3) {
        emlrtSubAssignSizeCheck1dR2017a(i2, i3, &emlrtECI, sp);
      }

      nx = sample_surface_temperatures->data[t_print_step +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      for (i2 = 0; i2 < nx; i2++) {
        q_arr->data[i1 + i2] = sample_surface_temperatures->data[t_print_step +
          sample_surface_temperatures->size[0] * long_idx].f1->data[i2];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_cell_wrap_0(&sample_surface_temperatures);
  emxFree_cell_wrap_0(&jd_error_3dmat);
  emxInit_real_T(sp, &sample_t_idx, 2, &pc_emlrtRTEI, true);

  /* sort everything by time. If this step takes too long, the "recent_only" */
  /* flag in the mark_diviner_testpoints function will hugely reduce the amoutn */
  /* that needs to be sorted by only flagging the most recent year's worth of */
  /* measurements */
  st.site = &i_emlrtRSI;
  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[0] = 1;
  sample_t_idx->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(&st, sample_t_idx, i, &xb_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    sample_t_idx->data[i] = p_arr->data[i];
  }

  emxInit_int32_T(&st, &iidx, 2, &pc_emlrtRTEI, true);
  b_st.site = &fb_emlrtRSI;
  sort(&b_st, sample_t_idx, iidx);
  i = p_arr->size[0] * p_arr->size[1];
  p_arr->size[0] = 1;
  p_arr->size[1] = iidx->size[1];
  emxEnsureCapacity_real_T(&st, p_arr, i, &yb_emlrtRTEI);
  nx = iidx->size[0] * iidx->size[1];
  for (i = 0; i < nx; i++) {
    p_arr->data[i] = iidx->data[i];
  }

  emxFree_int32_T(&iidx);
  emxInit_real_T(&st, &b_q_arr, 2, &bc_emlrtRTEI, true);
  i = b_q_arr->size[0] * b_q_arr->size[1];
  b_q_arr->size[0] = 1;
  b_q_arr->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(sp, b_q_arr, i, &bc_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    i1 = (int32_T)p_arr->data[i];
    if ((i1 < 1) || (i1 > q_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p_arr->data[i], 1, q_arr->size[1],
        &lc_emlrtBCI, sp);
    }

    b_q_arr->data[i] = q_arr->data[i1 - 1];
  }

  i = q_arr->size[0] * q_arr->size[1];
  q_arr->size[0] = 1;
  q_arr->size[1] = b_q_arr->size[1];
  emxEnsureCapacity_real_T(sp, q_arr, i, &cc_emlrtRTEI);
  nx = b_q_arr->size[0] * b_q_arr->size[1];
  for (i = 0; i < nx; i++) {
    q_arr->data[i] = b_q_arr->data[i];
  }

  i = b_q_arr->size[0] * b_q_arr->size[1];
  b_q_arr->size[0] = 1;
  b_q_arr->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(sp, b_q_arr, i, &dc_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    i1 = (int32_T)p_arr->data[i];
    if ((i1 < 1) || (i1 > sample_weights->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p_arr->data[i], 1,
        sample_weights->size[1], &mc_emlrtBCI, sp);
    }

    b_q_arr->data[i] = sample_weights->data[i1 - 1];
  }

  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[0] = 1;
  sample_weights->size[1] = b_q_arr->size[1];
  emxEnsureCapacity_real_T(sp, sample_weights, i, &fc_emlrtRTEI);
  nx = b_q_arr->size[0] * b_q_arr->size[1];
  for (i = 0; i < nx; i++) {
    sample_weights->data[i] = b_q_arr->data[i];
  }

  i = b_q_arr->size[0] * b_q_arr->size[1];
  b_q_arr->size[0] = 1;
  b_q_arr->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(sp, b_q_arr, i, &gc_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    i1 = (int32_T)p_arr->data[i];
    if ((i1 < 1) || (i1 > sample_lat->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p_arr->data[i], 1, sample_lat->
        size[1], &rc_emlrtBCI, sp);
    }

    b_q_arr->data[i] = sample_lat->data[i1 - 1];
  }

  i = sample_lat->size[0] * sample_lat->size[1];
  sample_lat->size[0] = 1;
  sample_lat->size[1] = b_q_arr->size[1];
  emxEnsureCapacity_real_T(sp, sample_lat, i, &hc_emlrtRTEI);
  nx = b_q_arr->size[0] * b_q_arr->size[1];
  for (i = 0; i < nx; i++) {
    sample_lat->data[i] = b_q_arr->data[i];
  }

  i = b_q_arr->size[0] * b_q_arr->size[1];
  b_q_arr->size[0] = 1;
  b_q_arr->size[1] = p_arr->size[1];
  emxEnsureCapacity_real_T(sp, b_q_arr, i, &ic_emlrtRTEI);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    i1 = (int32_T)p_arr->data[i];
    if ((i1 < 1) || (i1 > sample_long->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)p_arr->data[i], 1,
        sample_long->size[1], &sc_emlrtBCI, sp);
    }

    b_q_arr->data[i] = sample_long->data[i1 - 1];
  }

  i = sample_long->size[0] * sample_long->size[1];
  sample_long->size[0] = 1;
  sample_long->size[1] = b_q_arr->size[1];
  emxEnsureCapacity_real_T(sp, sample_long, i, &jc_emlrtRTEI);
  nx = b_q_arr->size[0] * b_q_arr->size[1];
  for (i = 0; i < nx; i++) {
    sample_long->data[i] = b_q_arr->data[i];
  }

  emxFree_real_T(&b_q_arr);
  nx = p_arr->size[0] * p_arr->size[1];
  for (i = 0; i < nx; i++) {
    i1 = (int32_T)p_arr->data[i];
    if ((i1 < 1) || (i1 > sample_jds->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, sample_jds->size[1], &tc_emlrtBCI, sp);
    }
  }

  emxFree_real_T(&sample_jds);
  i = p_arr->size[0] * p_arr->size[1];
  p_arr->size[0] = 1;
  p_arr->size[1] = sample_t_idx->size[1] + 1;
  emxEnsureCapacity_real_T(sp, p_arr, i, &kc_emlrtRTEI);
  nx = sample_t_idx->size[1];
  for (i = 0; i < nx; i++) {
    p_arr->data[i] = sample_t_idx->data[i];
  }

  p_arr->data[sample_t_idx->size[1]] = 0.0;
  i = H_matrix->size[0] * H_matrix->size[1];
  H_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  H_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, H_matrix, i, &lc_emlrtRTEI);
  nx = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  emxFree_real_T(&sample_t_idx);
  for (i = 0; i < nx; i++) {
    H_matrix->data[i] = 1.0;
  }

  ptr = 1U;

  /* tells you which error is to be evaluated next */
  Kd = p_arr->data[0];

  /* slightly redundant phrasing here to illustrate the purpose of the pointer */
  st.site = &j_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
    b_emlrt_marshallOut(1.0), emlrt_marshallOut(&d_st, cv2), &emlrtMCI),
                   "<output of feval>");

  /*  TIME LOOP */
  /*  t_print = raytracing_params.t_calculation_step_length; */
  t_print = 1U;
  t_print_step = (int32_T)muDoubleScalarCeil((real_T)expl_temp.t_arr->size[1] /
    1000.0);

  /* print approx every 0.1% */
  /*  A0_nx1 = reshape(A0_matrix, [], 1); */
  /*  a_OVER_pi_OVER_4_POWER_3_nx1 = reshape(a_OVER_pi_OVER_4_POWER_3_matrix, [], 1); */
  /*  b_OVER_pi_OVER_2_POWER_8_nx1 = reshape(b_OVER_pi_OVER_2_POWER_8_matrix, [], 1); */
  st.site = &k_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  for (i = 0; i < 44; i++) {
    cv3[i] = ' ';
  }

  c_st.site = &rf_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
    b_emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, cv3), &emlrtMCI),
                   "<output of feval>");
  st.site = &l_emlrtRSI;
  tic(&st);
  if (1 > T_3dmat->size[2]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, T_3dmat->size[2], &l_emlrtBCI, sp);
  }

  i = B_surface_matrix->size[0] * B_surface_matrix->size[1];
  B_surface_matrix->size[0] = T_3dmat->size[0];
  B_surface_matrix->size[1] = T_3dmat->size[1];
  emxEnsureCapacity_real_T(sp, B_surface_matrix, i, &mc_emlrtRTEI);
  nx = T_3dmat->size[0] * T_3dmat->size[1];
  for (i = 0; i < nx; i++) {
    B_surface_matrix->data[i] = rtNaN;
  }

  i = expl_temp.t_arr->size[1];
  if (0 <= expl_temp.t_arr->size[1] - 1) {
    expl_temp.c4 = parameters->c4;
    expl_temp.c3 = parameters->c3;
    expl_temp.c2 = parameters->c2;
    expl_temp.c1 = parameters->c1;
    expl_temp.c0 = parameters->c0;
    expl_temp.num_layers = num_layers;
    expl_temp.surface_bc_break_counter = parameters->surface_bc_break_counter;
    expl_temp.surface_bc_test_difference =
      parameters->surface_bc_test_difference;
    expl_temp.bottom_layer_idx_local = bottom_layer_idx;
    expl_temp.depth_update_t_interval = depth_update_t_interval;
    expl_temp.depth_update_wait_t_local = depth_update_wait_t;
    expl_temp.t_limit = t_limit;
    expl_temp.t_wait = t_wait;
    expl_temp.S_OVER_R_AU2 = parameters->S / (parameters->R_AU *
      parameters->R_AU);
    expl_temp.Chi_OVER_350_POWER_3 = Chi_OVER_350_POWER_3;
    expl_temp.stefans_constant = parameters->stefans_constant;
    expl_temp.Q = parameters->Q;
    expl_temp.P = parameters->P;
    expl_temp.dt = parameters->dt;
    expl_temp.dh = 360.0 / (parameters->P / parameters->dt);
    expl_temp.dz = dz;
  }

  emxInit_int32_T(sp, &r, 1, &tc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &uc_emlrtRTEI, true);
  for (layer_idx = 0; layer_idx < i; layer_idx++) {
    i1 = layer_idx + 1;
    if ((i1 < 1) || (i1 > expl_temp.t_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, expl_temp.t_arr->size[1], &m_emlrtBCI,
        sp);
    }

    /* seconds since diviner start data */
    if (i1 > raytracing_params->decl_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, raytracing_params->decl_arr->size[1],
        &n_emlrtBCI, sp);
    }

    if (i1 > raytracing_params->h_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, raytracing_params->h_arr->size[1],
        &o_emlrtBCI, sp);
    }

    if ((bottom_layer_idx < num_layers) && (expl_temp.t_arr->data[layer_idx] >
         depth_update_wait_t)) {
      /*  extend simulation by 1 layer, using bottom BC to define new */
      /*  temperature */
      depth_update_wait_t += depth_update_t_interval;
      bottom_layer_idx++;
      rho_d = (int32_T)muDoubleScalarFloor(bottom_layer_idx - 1.0);
      if (bottom_layer_idx - 1.0 != rho_d) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > T_3dmat->size[2])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1,
          T_3dmat->size[2], &p_emlrtBCI, sp);
      }

      nx = T_3dmat->size[0];
      maxdimlen = T_3dmat->size[1];
      i1 = A0_matrix->size[0] * A0_matrix->size[1];
      A0_matrix->size[0] = T_3dmat->size[0];
      A0_matrix->size[1] = T_3dmat->size[1];
      emxEnsureCapacity_real_T(sp, A0_matrix, i1, &oc_emlrtRTEI);
      for (i1 = 0; i1 < maxdimlen; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          A0_matrix->data[i2 + A0_matrix->size[0] * i1] = Chi_OVER_350_POWER_3 *
            T_3dmat->data[(i2 + T_3dmat->size[0] * i1) + T_3dmat->size[0] *
            T_3dmat->size[1] * ((int32_T)(bottom_layer_idx - 1.0) - 1)];
        }
      }

      iv[0] = T_3dmat->size[0];
      iv[1] = T_3dmat->size[1];
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, iv, &b_emlrtECI,
        sp);
      nx = A0_matrix->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        maxdimlen = A0_matrix->size[0];
        for (i2 = 0; i2 < maxdimlen; i2++) {
          A0_matrix->data[i2 + A0_matrix->size[0] * i1] *= T_3dmat->data[(i2 +
            T_3dmat->size[0] * i1) + T_3dmat->size[0] * T_3dmat->size[1] *
            ((int32_T)(bottom_layer_idx - 1.0) - 1)];
        }
      }

      iv[0] = T_3dmat->size[0];
      iv[1] = T_3dmat->size[1];
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, iv, &b_emlrtECI,
        sp);
      if (bottom_layer_idx - 1.0 != rho_d) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &b_emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > expl_temp.Kc_3dmat->size[2])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1,
          expl_temp.Kc_3dmat->size[2], &q_emlrtBCI, sp);
      }

      nx = A0_matrix->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        maxdimlen = A0_matrix->size[0];
        for (i2 = 0; i2 < maxdimlen; i2++) {
          A0_matrix->data[i2 + A0_matrix->size[0] * i1] *= T_3dmat->data[(i2 +
            T_3dmat->size[0] * i1) + T_3dmat->size[0] * T_3dmat->size[1] *
            ((int32_T)(bottom_layer_idx - 1.0) - 1)];
        }
      }

      iv[0] = expl_temp.Kc_3dmat->size[0];
      iv[1] = expl_temp.Kc_3dmat->size[1];
      emlrtSizeEqCheckNDR2012b(iv, *(int32_T (*)[2])A0_matrix->size, &c_emlrtECI,
        sp);
      if (bottom_layer_idx - 1.0 != rho_d) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &fb_emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > dz_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1,
          dz_arr->size[1], &uc_emlrtBCI, sp);
      }

      rho_d = dz_arr->data[(int32_T)(bottom_layer_idx - 1.0) - 1] *
        parameters->Q;
      nx = expl_temp.Kc_3dmat->size[0];
      maxdimlen = expl_temp.Kc_3dmat->size[1];
      i1 = A0_matrix->size[0] * A0_matrix->size[1];
      A0_matrix->size[0] = expl_temp.Kc_3dmat->size[0];
      A0_matrix->size[1] = expl_temp.Kc_3dmat->size[1];
      emxEnsureCapacity_real_T(sp, A0_matrix, i1, &qc_emlrtRTEI);
      for (i1 = 0; i1 < maxdimlen; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          A0_matrix->data[i2 + A0_matrix->size[0] * i1] = rho_d /
            (expl_temp.Kc_3dmat->data[(i2 + expl_temp.Kc_3dmat->size[0] * i1) +
             expl_temp.Kc_3dmat->size[0] * expl_temp.Kc_3dmat->size[1] *
             ((int32_T)(bottom_layer_idx - 1.0) - 1)] * (A0_matrix->data[i2 +
              A0_matrix->size[0] * i1] + 1.0));
        }
      }

      iv[0] = T_3dmat->size[0];
      iv[1] = T_3dmat->size[1];
      emlrtSizeEqCheckNDR2012b(iv, *(int32_T (*)[2])A0_matrix->size, &d_emlrtECI,
        sp);
      if (bottom_layer_idx != (int32_T)muDoubleScalarFloor(bottom_layer_idx)) {
        emlrtIntegerCheckR2012b(bottom_layer_idx, &c_emlrtDCI, sp);
      }

      if (((int32_T)bottom_layer_idx < 1) || ((int32_T)bottom_layer_idx >
           T_3dmat->size[2])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bottom_layer_idx, 1,
          T_3dmat->size[2], &r_emlrtBCI, sp);
      }

      b_T_3dmat[0] = T_3dmat->size[0];
      b_T_3dmat[1] = T_3dmat->size[1];
      iv[0] = T_3dmat->size[0];
      iv[1] = T_3dmat->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_T_3dmat[0], 2, &iv[0], 2, &e_emlrtECI, sp);
      maxdimlen = T_3dmat->size[0] - 1;
      nx = T_3dmat->size[1] - 1;
      i1 = A0_matrix->size[0] * A0_matrix->size[1];
      A0_matrix->size[0] = T_3dmat->size[0];
      A0_matrix->size[1] = T_3dmat->size[1];
      emxEnsureCapacity_real_T(sp, A0_matrix, i1, &rc_emlrtRTEI);
      for (i1 = 0; i1 <= nx; i1++) {
        for (i2 = 0; i2 <= maxdimlen; i2++) {
          A0_matrix->data[i2 + A0_matrix->size[0] * i1] += T_3dmat->data[(i2 +
            T_3dmat->size[0] * i1) + T_3dmat->size[0] * T_3dmat->size[1] *
            ((int32_T)bottom_layer_idx - 2)];
        }
      }

      nx = A0_matrix->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        maxdimlen = A0_matrix->size[0];
        for (i2 = 0; i2 < maxdimlen; i2++) {
          T_3dmat->data[(i2 + T_3dmat->size[0] * i1) + T_3dmat->size[0] *
            T_3dmat->size[1] * ((int32_T)bottom_layer_idx - 1)] =
            A0_matrix->data[i2 + A0_matrix->size[0] * i1];
        }
      }
    }

    if ((real_T)layer_idx + 1.0 == Kd - 1.0) {
      if (1 > T_3dmat->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, T_3dmat->size[2], &s_emlrtBCI, sp);
      }

      nx = T_3dmat->size[0];
      maxdimlen = T_3dmat->size[1];
      i1 = B_surface_matrix->size[0] * B_surface_matrix->size[1];
      B_surface_matrix->size[0] = T_3dmat->size[0];
      B_surface_matrix->size[1] = T_3dmat->size[1];
      emxEnsureCapacity_real_T(sp, B_surface_matrix, i1, &nc_emlrtRTEI);
      for (i1 = 0; i1 < maxdimlen; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          B_surface_matrix->data[i2 + B_surface_matrix->size[0] * i1] =
            T_3dmat->data[i2 + T_3dmat->size[0] * i1];
        }
      }

      /* used for upcoming sample comparison */
    }

    st.site = &m_emlrtRSI;
    multiscattering_core_loop(&st, T_3dmat, bottom_layer_idx,
      raytracing_params->decl_arr->data[layer_idx], raytracing_params->
      h_arr->data[layer_idx], num_layers, rho_matrix, lat_arr, long_arr,
      vis_flux_matrix, ir_flux_matrix, dz_arr, dz,
      raytracing_params->elevation_matrix, raytracing_params->slope_matrix,
      raytracing_params->aspect_matrix, raytracing_params, &expl_temp);

    /*     %% Process implications of new T_3dmat */
    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[3])Tmax_3dmat->size, *(int32_T (*)[3])
      T_3dmat->size, &f_emlrtECI, sp);
    emlrtSizeEqCheckNDR2012b(*(int32_T (*)[3])Tmin_3dmat->size, *(int32_T (*)[3])
      T_3dmat->size, &g_emlrtECI, sp);
    nx = Tmax_3dmat->size[0] * (Tmax_3dmat->size[1] * Tmax_3dmat->size[2]);
    for (long_idx = 0; long_idx < nx; long_idx++) {
      if (Tmax_3dmat->data[long_idx] < T_3dmat->data[long_idx]) {
        i1 = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
        if ((long_idx + 1 < 1) || (long_idx + 1 > i1)) {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, i1, &nb_emlrtBCI, sp);
        }
      }
    }

    nx = Tmax_3dmat->size[0] * (Tmax_3dmat->size[1] * Tmax_3dmat->size[2]) - 1;
    maxdimlen = 0;
    for (long_idx = 0; long_idx <= nx; long_idx++) {
      if (Tmax_3dmat->data[long_idx] < T_3dmat->data[long_idx]) {
        maxdimlen++;
      }
    }

    i1 = r->size[0];
    r->size[0] = maxdimlen;
    emxEnsureCapacity_int32_T(sp, r, i1, &pc_emlrtRTEI);
    maxdimlen = 0;
    for (long_idx = 0; long_idx <= nx; long_idx++) {
      if (Tmax_3dmat->data[long_idx] < T_3dmat->data[long_idx]) {
        r->data[maxdimlen] = long_idx + 1;
        maxdimlen++;
      }
    }

    maxdimlen = Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * Tmax_3dmat->size[2];
    nx = r->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      if ((r->data[i1] < 1) || (r->data[i1] > maxdimlen)) {
        emlrtDynamicBoundsCheckR2012b(r->data[i1], 1, maxdimlen, &vc_emlrtBCI,
          sp);
      }

      Tmax_3dmat->data[r->data[i1] - 1] = T_3dmat->data[r->data[i1] - 1];
    }

    nx = Tmin_3dmat->size[0] * (Tmin_3dmat->size[1] * Tmin_3dmat->size[2]);
    for (long_idx = 0; long_idx < nx; long_idx++) {
      if (Tmin_3dmat->data[long_idx] > T_3dmat->data[long_idx]) {
        i1 = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
        if ((long_idx + 1 < 1) || (long_idx + 1 > i1)) {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, i1, &ob_emlrtBCI, sp);
        }
      }
    }

    nx = Tmin_3dmat->size[0] * (Tmin_3dmat->size[1] * Tmin_3dmat->size[2]) - 1;
    maxdimlen = 0;
    for (long_idx = 0; long_idx <= nx; long_idx++) {
      if (Tmin_3dmat->data[long_idx] > T_3dmat->data[long_idx]) {
        maxdimlen++;
      }
    }

    i1 = r1->size[0];
    r1->size[0] = maxdimlen;
    emxEnsureCapacity_int32_T(sp, r1, i1, &pc_emlrtRTEI);
    maxdimlen = 0;
    for (long_idx = 0; long_idx <= nx; long_idx++) {
      if (Tmin_3dmat->data[long_idx] > T_3dmat->data[long_idx]) {
        r1->data[maxdimlen] = long_idx + 1;
        maxdimlen++;
      }
    }

    maxdimlen = Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * Tmin_3dmat->size[2];
    nx = r1->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      if ((r1->data[i1] < 1) || (r1->data[i1] > maxdimlen)) {
        emlrtDynamicBoundsCheckR2012b(r1->data[i1], 1, maxdimlen, &wc_emlrtBCI,
          sp);
      }

      Tmin_3dmat->data[r1->data[i1] - 1] = T_3dmat->data[r1->data[i1] - 1];
    }

    /*     %% Track and interpolate errors */
    while ((real_T)layer_idx + 1.0 == Kd) {
      /* "while" not "for" because there might be multiple samples for a single */
      /* t_idx value (i.e. measurements at the same time but at different locations) */
      if (((int32_T)ptr < 1) || ((int32_T)ptr > sample_lat->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, sample_lat->size[1],
          &t_emlrtBCI, sp);
      }

      if (((int32_T)ptr < 1) || ((int32_T)ptr > sample_long->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, sample_long->size[1],
          &u_emlrtBCI, sp);
      }

      if (((int32_T)ptr < 1) || ((int32_T)ptr > q_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, q_arr->size[1],
          &v_emlrtBCI, sp);
      }

      if (((int32_T)ptr < 1) || ((int32_T)ptr > sample_weights->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, sample_weights->size[1],
          &w_emlrtBCI, sp);
      }

      if (1 > T_3dmat->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, T_3dmat->size[2], &cb_emlrtBCI, sp);
      }

      rho_d = sample_lat->data[(int32_T)ptr - 1];
      i1 = (int32_T)muDoubleScalarFloor(rho_d);
      if (rho_d != i1) {
        emlrtIntegerCheckR2012b(sample_lat->data[(int32_T)ptr - 1], &d_emlrtDCI,
          sp);
      }

      i2 = (int32_T)rho_d;
      if ((rho_d < 1.0) || (i2 > B_surface_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)rho_d, 1, B_surface_matrix->size
          [0], &x_emlrtBCI, sp);
      }

      rho_d = sample_long->data[(int32_T)ptr - 1];
      i3 = (int32_T)muDoubleScalarFloor(rho_d);
      if (rho_d != i3) {
        emlrtIntegerCheckR2012b(sample_long->data[(int32_T)ptr - 1], &e_emlrtDCI,
          sp);
      }

      nx = (int32_T)rho_d;
      if ((rho_d < 1.0) || (nx > B_surface_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)rho_d, 1, B_surface_matrix->size
          [1], &y_emlrtBCI, sp);
      }

      if (i2 != i1) {
        emlrtIntegerCheckR2012b(sample_lat->data[(int32_T)ptr - 1], &f_emlrtDCI,
          sp);
      }

      maxdimlen = (int32_T)sample_lat->data[(int32_T)ptr - 1];
      if ((maxdimlen < 1) || (maxdimlen > T_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, T_3dmat->size[0],
          &ab_emlrtBCI, sp);
      }

      if (nx != i3) {
        emlrtIntegerCheckR2012b(sample_long->data[(int32_T)ptr - 1], &g_emlrtDCI,
          sp);
      }

      maxdimlen = (int32_T)sample_long->data[(int32_T)ptr - 1];
      if ((maxdimlen < 1) || (maxdimlen > T_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, T_3dmat->size[1],
          &bb_emlrtBCI, sp);
      }

      if (i2 != i1) {
        emlrtIntegerCheckR2012b(sample_lat->data[(int32_T)ptr - 1], &h_emlrtDCI,
          sp);
      }

      i1 = (int32_T)sample_lat->data[(int32_T)ptr - 1];
      if ((i1 < 1) || (i1 > B_surface_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, B_surface_matrix->size[0],
          &db_emlrtBCI, sp);
      }

      if (nx != i3) {
        emlrtIntegerCheckR2012b(sample_long->data[(int32_T)ptr - 1], &i_emlrtDCI,
          sp);
      }

      i1 = (int32_T)sample_long->data[(int32_T)ptr - 1];
      if ((i1 < 1) || (i1 > B_surface_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, B_surface_matrix->size[1],
          &eb_emlrtBCI, sp);
      }

      i1 = (int32_T)sample_lat->data[(int32_T)ptr - 1];
      if ((i1 < 1) || (i1 > H_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, H_matrix->size[0], &xc_emlrtBCI, sp);
      }

      i2 = (int32_T)sample_long->data[(int32_T)ptr - 1];
      if ((i2 < 1) || (i2 > H_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, H_matrix->size[1], &xc_emlrtBCI, sp);
      }

      local_ptr = (uint32_T)H_matrix->data[(i1 + H_matrix->size[0] * (i2 - 1)) -
        1];

      /* if you enjoy living dangerously you could easily just save */
      /* T_pred_interpolated into the T_error_3dmat matrix here */
      i1 = (int32_T)sample_lat->data[(int32_T)ptr - 1] - 1;
      if ((i1 < 0) || (i1 > T_error_3dmat->size[0] - 1)) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, T_error_3dmat->size[0] - 1,
          &lb_emlrtBCI, sp);
      }

      i2 = (int32_T)sample_long->data[(int32_T)ptr - 1] - 1;
      if ((i2 < 0) || (i2 > T_error_3dmat->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 0, T_error_3dmat->size[1] - 1,
          &mb_emlrtBCI, sp);
      }

      if (i1 > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, T_error_3dmat->size[0] - 1,
          &lb_emlrtBCI, sp);
      }

      if (i2 > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(i2, 0, T_error_3dmat->size[1] - 1,
          &mb_emlrtBCI, sp);
      }

      if (i1 > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, T_error_3dmat->size[0] - 1,
          &lb_emlrtBCI, sp);
      }

      if (i2 > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(i2, 0, T_error_3dmat->size[1] - 1,
          &mb_emlrtBCI, sp);
      }

      i3 = T_error_3dmat->data[((int32_T)sample_lat->data[(int32_T)ptr - 1] +
        T_error_3dmat->size[0] * ((int32_T)sample_long->data[(int32_T)ptr - 1] -
        1)) - 1].f1->size[1];
      if (((int32_T)local_ptr < 1) || ((int32_T)local_ptr > i3)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)local_ptr, 1, i3, &yc_emlrtBCI,
          sp);
      }

      rho_d = B_surface_matrix->data[i1 + B_surface_matrix->size[0] * i2];
      T_error_3dmat->data[i1 + T_error_3dmat->size[0] * i2].f1->data[(int32_T)
        local_ptr - 1] = (rho_d + sample_weights->data[(int32_T)ptr - 1] *
                          (T_3dmat->data[i1 + T_3dmat->size[0] * i2] - rho_d)) -
        q_arr->data[(int32_T)ptr - 1];
      i1 = (int32_T)sample_lat->data[(int32_T)ptr - 1];
      if ((i1 < 1) || (i1 > H_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, H_matrix->size[0], &ad_emlrtBCI, sp);
      }

      i2 = (int32_T)sample_long->data[(int32_T)ptr - 1];
      if ((i2 < 1) || (i2 > H_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, H_matrix->size[1], &ad_emlrtBCI, sp);
      }

      H_matrix->data[(i1 + H_matrix->size[0] * (i2 - 1)) - 1] = (real_T)
        local_ptr + 1.0;
      ptr++;
      if (((int32_T)ptr < 1) || ((int32_T)ptr > p_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ptr, 1, p_arr->size[1],
          &bd_emlrtBCI, sp);
      }

      Kd = p_arr->data[(int32_T)ptr - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if ((uint32_T)(layer_idx + 1) == t_print) {
      if (layer_idx + 1 == 1) {
        st.site = &n_emlrtRSI;
        b_st.site = &n_emlrtRSI;
        rho_d = toc(&b_st);
        b_st.site = &qf_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        d_st.site = &sf_emlrtRSI;
        emlrt_marshallIn(&c_st, b_feval(&c_st, emlrt_marshallOut(&c_st, cv),
          b_emlrt_marshallOut(1.0), e_emlrt_marshallOut(&d_st, cv4),
          f_emlrt_marshallOut(expl_temp.t_arr->size[1]), b_emlrt_marshallOut
          (rho_d), &emlrtMCI), "<output of feval>");
      } else {
        st.site = &o_emlrtRSI;
        rho_d = muDoubleScalarRound(toc(&st));
        if (rho_d < 2.147483648E+9) {
          if (rho_d >= -2.147483648E+9) {
            maxdimlen = (int32_T)rho_d;
          } else {
            maxdimlen = MIN_int32_T;
          }
        } else if (rho_d >= 2.147483648E+9) {
          maxdimlen = MAX_int32_T;
        } else {
          maxdimlen = 0;
        }

        st.site = &p_emlrtRSI;
        b_st.site = &eb_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        d_st.site = &sf_emlrtRSI;
        emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
          b_emlrt_marshallOut(1.0), g_emlrt_marshallOut(&d_st, cv5), &emlrtMCI),
                         "<output of feval>");

        /* hard coded length of string = 46 chars */
        st.site = &q_emlrtRSI;
        b_st.site = &qf_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        d_st.site = &sf_emlrtRSI;
        emlrt_marshallIn(&c_st, b_feval(&c_st, emlrt_marshallOut(&c_st, cv),
          b_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, cv6),
          b_emlrt_marshallOut(100.0 * ((real_T)layer_idx + 1.0) / (real_T)
                              expl_temp.t_arr->size[1]), f_emlrt_marshallOut
          (maxdimlen), &emlrtMCI), "<output of feval>");
      }

      t_print += t_print_step;
    }

    /*  process outputs, set T_3dmin, T_3dmax, error comparisons, etc */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&sample_long);
  emxFree_real_T(&sample_lat);
  emxFree_real_T(&sample_weights);
  emxFree_real_T(&q_arr);
  emxFree_real_T(&p_arr);
  emxFree_real_T(&B_surface_matrix);
  emxFree_real_T(&T_3dmat);
  emxFree_real_T(&H_matrix);
  emxFree_real_T(&A0_matrix);

  /*  %% Interpolate errors */
  /*  for sample_idx = 1:numel(sample_timepoints_local) */
  /*      T_measured = sample_surface_temperatures_local(sample_idx); */
  /*      T_pred_tuple = sample_T_bounds(2*sample_idx-1 : 2*sample_idx); */
  /*      weight = sample_weights(sample_idx); */
  /*       */
  /*      T_pred_interpolated = T_pred_tuple(1) + weight*(T_pred_tuple(2)-T_pred_tuple(1)); */
  /*       */
  /*      T_error_local(sample_idx) = T_pred_interpolated - T_measured; */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (multiscattering_core_loop_wrapper.c) */
