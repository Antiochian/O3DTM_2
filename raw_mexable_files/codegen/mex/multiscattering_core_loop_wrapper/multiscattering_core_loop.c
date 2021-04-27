/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop.c
 *
 * Code generation for function 'multiscattering_core_loop'
 *
 */

/* Include files */
#include "multiscattering_core_loop.h"
#include "cos.h"
#include "eml_mtimes_helper.h"
#include "mtimes.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_mexutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "power.h"
#include "raytrace_tick.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 102, /* lineNo */
  17,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRSInfo fc_emlrtRSI = { 49, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 53, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 54, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 57, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 58, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 59, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 93, /* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 102,/* lineNo */
  "multiscattering_core_loop",         /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 79, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 48, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtECInfo db_emlrtECI = { -1, /* nDims */
  124,                                 /* lineNo */
  5,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  22,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  124,                                 /* lineNo */
  13,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  19,                                  /* colNo */
  "T_new_arr",                         /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  29,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  23,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  94,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 112,/* lineNo */
  94,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  25,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 111,/* lineNo */
  25,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  129,                                 /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  102,                                 /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  85,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  115,                                 /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  101,                                 /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  90,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  38,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  19,                                  /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  48,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  39,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  44,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  35,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  34,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  25,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  60,                                  /* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  52,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fb_emlrtECI = { -1, /* nDims */
  54,                                  /* lineNo */
  22,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  53,                                  /* lineNo */
  12,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  52,                                  /* lineNo */
  20,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  52,                                  /* lineNo */
  93,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  52,                                  /* lineNo */
  29,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 107,/* lineNo */
  29,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  1,                                   /* colNo */
  "Qsun_nx1",                          /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  1,                                   /* colNo */
  "Qsun_scattered_nx1",                /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  34,                                  /* colNo */
  "thermal_emission_matrix",           /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  27,                                  /* colNo */
  "B_surface_matrix",                  /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  21,                                  /* colNo */
  "Q_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 107,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  49,                                  /* colNo */
  "dz_arr",                            /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 112,/* lineNo */
  49,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  9,                                   /* colNo */
  "T_new_arr",                         /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 112,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  25,                                  /* colNo */
  "p_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  42,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  24,                                  /* colNo */
  "q_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  41,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  45,                                  /* colNo */
  "rho_matrix_local",                  /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  140,                                 /* colNo */
  "T_arr",                             /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  13,                                  /* colNo */
  "T_new_arr",                         /* aName */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m",                              /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo lg_emlrtRTEI = { 51,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 52,/* lineNo */
  29,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 52,/* lineNo */
  93,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 53,/* lineNo */
  12,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 53,/* lineNo */
  50,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 55,/* lineNo */
  10,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 1,/* lineNo */
  24,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 56,/* lineNo */
  20,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 57,/* lineNo */
  40,                                  /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 68,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 73,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 107,/* lineNo */
  9,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 49,/* lineNo */
  2,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 53,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 58,/* lineNo */
  1,                                   /* colNo */
  "multiscattering_core_loop",         /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\multiscattering_core_lo"
  "op.m"                               /* pName */
};

/* Function Definitions */
void multiscattering_core_loop(const emlrtStack *sp, emxArray_real_T *T_3dmat,
  real_T bottom_layer_idx, real_T decl, real_T raytrace_h, real_T num_layers,
  const emxArray_real_T *rho_matrix, const emxArray_real_T *lat_arr, const
  emxArray_real_T *long_arr, const emxArray_real_T *vis_flux_matrix, const
  emxArray_real_T *ir_flux_matrix, const emxArray_real_T *dz_arr, real_T dz,
  const emxArray_real_T *elevation_matrix, const emxArray_real_T *slope_matrix,
  const emxArray_real_T *aspect_matrix, const struct1_T *raytracing_params,
  const struct_T *temperature_parameters)
{
  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 7 };

  static const int32_T iv3[2] = { 1, 43 };

  static const int32_T iv4[2] = { 1, 45 };

  static const char_T c_u[45] = { '\\', 'n', 'S', 'u', 'r', 'f', 'a', 'c', 'e',
    ' ', 'B', 'C', ' ', 'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ' ', 'l',
    'i', 'm', 'i', 't', ',', ' ', 'r', 'e', 't', 'u', 'r', 'n', 'i', 'n', 'g',
    ' ', 'N', 'a', 'N', '\\', 'n' };

  static const char_T b_u[43] = { '\\', 'n', 'N', 'e', 'g', 'a', 't', 'i', 'v',
    'e', ' ', 'T', ' ', 'i', 'n', ' ', 's', 'u', 'r', 'f', 'a', 'c', 'e', ' ',
    'B', 'C', ',', ' ', 'r', 'e', 't', 'u', 'r', 'n', 'i', 'n', 'g', ' ', 'N',
    'a', 'N', '\\', 'n' };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T b_b;
  emxArray_real_T *Kc_3dmat_local;
  emxArray_real_T *Qabsorbed_vis_nx1;
  emxArray_real_T *Qsun_nx1;
  emxArray_real_T *T_arr;
  emxArray_real_T *T_new_arr;
  emxArray_real_T *b;
  emxArray_real_T *b_T_3dmat;
  emxArray_real_T *rho_matrix_local;
  emxArray_real_T *solar_albedo_nx1;
  emxArray_real_T *theta_arr;
  emxArray_real_T *theta_nx1;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T B_surface_local;
  real_T Chi_OVER_350_POWER_3;
  real_T K_value;
  real_T Q_surface;
  real_T T;
  real_T T_new;
  real_T break_iter;
  real_T difference;
  real_T surface_bc_test_difference;
  real_T thermal_emission_local;
  int32_T iv[3];
  int32_T b_nx[1];
  int32_T c_nx[1];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T long_idx;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &theta_arr, 2, &ah_emlrtRTEI, true);
  emxInit_real_T(sp, &theta_nx1, 1, &lg_emlrtRTEI, true);

  /*  Unpack global params */
  /*  Unpack temperature params */
  /*  rho_matrix_local = rho_matrix(lat_idx, long_idx, :); */
  Chi_OVER_350_POWER_3 = temperature_parameters->Chi_OVER_350_POWER_3;
  surface_bc_test_difference =
    temperature_parameters->surface_bc_test_difference;

  /*  dh = temperature_parameters.dh; */
  /*  Unpack raytracing params */
  /*  const_decl = raytracing_params.const_decl; */
  /*  GET ALL ANGLES FOR CURRENT TIMESTEP */
  st.site = &fc_emlrtRSI;
  raytrace_tick(&st, decl, raytrace_h, lat_arr, long_arr, elevation_matrix,
                raytracing_params->extended_elevation_matrix, slope_matrix,
                aspect_matrix, raytracing_params->ref_sphere.MeanRadius,
                raytracing_params->ref_sphere.Flattening,
                raytracing_params->max_distance,
                &raytracing_params->public_raster_struct,
                raytracing_params->ref_sphere.Radius,
                raytracing_params->sample_dens, theta_arr);
  i = theta_nx1->size[0];
  theta_nx1->size[0] = theta_arr->size[1];
  emxEnsureCapacity_real_T(sp, theta_nx1, i, &lg_emlrtRTEI);
  nx = theta_arr->size[1];
  for (i = 0; i < nx; i++) {
    theta_nx1->data[i] = theta_arr->data[i];
  }

  emxFree_real_T(&theta_arr);

  /*  convert back up from single precision */
  if (temperature_parameters->a_OVER_pi_OVER_4_POWER_3_nx1->size[0] !=
      theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b
      (temperature_parameters->a_OVER_pi_OVER_4_POWER_3_nx1->size[0],
       theta_nx1->size[0], &jb_emlrtECI, sp);
  }

  emxInit_real_T(sp, &solar_albedo_nx1, 1, &og_emlrtRTEI, true);
  i = solar_albedo_nx1->size[0];
  solar_albedo_nx1->size[0] =
    temperature_parameters->a_OVER_pi_OVER_4_POWER_3_nx1->size[0];
  emxEnsureCapacity_real_T(sp, solar_albedo_nx1, i, &mg_emlrtRTEI);
  nx = temperature_parameters->a_OVER_pi_OVER_4_POWER_3_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] =
      temperature_parameters->a_OVER_pi_OVER_4_POWER_3_nx1->data[i] *
      theta_nx1->data[i];
  }

  if (solar_albedo_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(solar_albedo_nx1->size[0], theta_nx1->size[0],
      &jb_emlrtECI, sp);
  }

  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] *= theta_nx1->data[i];
  }

  if (solar_albedo_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(solar_albedo_nx1->size[0], theta_nx1->size[0],
      &jb_emlrtECI, sp);
  }

  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] *= theta_nx1->data[i];
  }

  if (temperature_parameters->A0_nx1->size[0] != solar_albedo_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(temperature_parameters->A0_nx1->size[0],
      solar_albedo_nx1->size[0], &hb_emlrtECI, sp);
  }

  if (temperature_parameters->b_OVER_pi_OVER_2_POWER_8_nx1->size[0] !=
      theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b
      (temperature_parameters->b_OVER_pi_OVER_2_POWER_8_nx1->size[0],
       theta_nx1->size[0], &ib_emlrtECI, sp);
  }

  emxInit_real_T(sp, &Qabsorbed_vis_nx1, 1, &ch_emlrtRTEI, true);
  i = Qabsorbed_vis_nx1->size[0];
  Qabsorbed_vis_nx1->size[0] =
    temperature_parameters->b_OVER_pi_OVER_2_POWER_8_nx1->size[0];
  emxEnsureCapacity_real_T(sp, Qabsorbed_vis_nx1, i, &ng_emlrtRTEI);
  nx = temperature_parameters->b_OVER_pi_OVER_2_POWER_8_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] =
      temperature_parameters->b_OVER_pi_OVER_2_POWER_8_nx1->data[i] *
      theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (Qabsorbed_vis_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qabsorbed_vis_nx1->size[0], theta_nx1->size[0],
      &ib_emlrtECI, sp);
  }

  nx = Qabsorbed_vis_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] *= theta_nx1->data[i];
  }

  if (temperature_parameters->A0_nx1->size[0] != Qabsorbed_vis_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(temperature_parameters->A0_nx1->size[0],
      Qabsorbed_vis_nx1->size[0], &hb_emlrtECI, sp);
  }

  i = solar_albedo_nx1->size[0];
  solar_albedo_nx1->size[0] = temperature_parameters->A0_nx1->size[0];
  emxEnsureCapacity_real_T(sp, solar_albedo_nx1, i, &og_emlrtRTEI);
  nx = temperature_parameters->A0_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] = (temperature_parameters->A0_nx1->data[i] +
      solar_albedo_nx1->data[i]) + Qabsorbed_vis_nx1->data[i];
  }

  emxInit_real_T(sp, &Qsun_nx1, 1, &bh_emlrtRTEI, true);
  i = Qsun_nx1->size[0];
  Qsun_nx1->size[0] = solar_albedo_nx1->size[0];
  emxEnsureCapacity_real_T(sp, Qsun_nx1, i, &pg_emlrtRTEI);
  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qsun_nx1->data[i] = (1.0 - solar_albedo_nx1->data[i]) *
      temperature_parameters->S_OVER_R_AU2;
  }

  i = Qabsorbed_vis_nx1->size[0];
  Qabsorbed_vis_nx1->size[0] = theta_nx1->size[0];
  emxEnsureCapacity_real_T(sp, Qabsorbed_vis_nx1, i, &qg_emlrtRTEI);
  nx = theta_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qabsorbed_vis_nx1->data[i] = theta_nx1->data[i];
  }

  st.site = &gc_emlrtRSI;
  b_cos(&st, Qabsorbed_vis_nx1);
  if (Qsun_nx1->size[0] != Qabsorbed_vis_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(Qsun_nx1->size[0], Qabsorbed_vis_nx1->size[0],
      &gb_emlrtECI, sp);
  }

  nx = Qsun_nx1->size[0];
  for (i = 0; i < nx; i++) {
    Qsun_nx1->data[i] *= Qabsorbed_vis_nx1->data[i];
  }

  /*  direct solar flux absorbed by each px */
  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] *= temperature_parameters->S_OVER_R_AU2;
  }

  st.site = &hc_emlrtRSI;
  b_cos(&st, theta_nx1);
  if (solar_albedo_nx1->size[0] != theta_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(solar_albedo_nx1->size[0], theta_nx1->size[0],
      &fb_emlrtECI, sp);
  }

  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    solar_albedo_nx1->data[i] *= theta_nx1->data[i];
  }

  emxInit_boolean_T(sp, &r, 1, &rg_emlrtRTEI, true);
  i = r->size[0];
  r->size[0] = Qsun_nx1->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &rg_emlrtRTEI);
  nx = Qsun_nx1->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = muDoubleScalarIsNaN(Qsun_nx1->data[i]);
  }

  nx = r->size[0] - 1;
  maxdimlen = 0;
  for (b_i = 0; b_i <= nx; b_i++) {
    if (r->data[b_i]) {
      maxdimlen++;
    }
  }

  emxInit_int32_T(sp, &r1, 1, &sg_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = maxdimlen;
  emxEnsureCapacity_int32_T(sp, r1, i, &sg_emlrtRTEI);
  maxdimlen = 0;
  for (b_i = 0; b_i <= nx; b_i++) {
    if (r->data[b_i]) {
      r1->data[maxdimlen] = b_i + 1;
      maxdimlen++;
    }
  }

  nx = r1->size[0] - 1;
  maxdimlen = Qsun_nx1->size[0];
  for (i = 0; i <= nx; i++) {
    if ((r1->data[i] < 1) || (r1->data[i] > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, maxdimlen, &sf_emlrtBCI, sp);
    }

    Qsun_nx1->data[r1->data[i] - 1] = 0.0;
  }

  emxFree_int32_T(&r1);

  /*  deal with NaN values represention no solar illumination */
  i = r->size[0];
  r->size[0] = solar_albedo_nx1->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &tg_emlrtRTEI);
  nx = solar_albedo_nx1->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = muDoubleScalarIsNaN(solar_albedo_nx1->data[i]);
  }

  nx = r->size[0] - 1;
  maxdimlen = 0;
  for (b_i = 0; b_i <= nx; b_i++) {
    if (r->data[b_i]) {
      maxdimlen++;
    }
  }

  emxInit_int32_T(sp, &r2, 1, &sg_emlrtRTEI, true);
  i = r2->size[0];
  r2->size[0] = maxdimlen;
  emxEnsureCapacity_int32_T(sp, r2, i, &sg_emlrtRTEI);
  maxdimlen = 0;
  for (b_i = 0; b_i <= nx; b_i++) {
    if (r->data[b_i]) {
      r2->data[maxdimlen] = b_i + 1;
      maxdimlen++;
    }
  }

  emxFree_boolean_T(&r);
  nx = r2->size[0] - 1;
  maxdimlen = solar_albedo_nx1->size[0];
  for (i = 0; i <= nx; i++) {
    if ((r2->data[i] < 1) || (r2->data[i] > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, maxdimlen, &tf_emlrtBCI, sp);
    }

    solar_albedo_nx1->data[r2->data[i] - 1] = 0.0;
  }

  emxFree_int32_T(&r2);
  i = T_3dmat->size[2];
  if (1 > i) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &rf_emlrtBCI, sp);
  }

  emxInit_real_T(sp, &b_T_3dmat, 2, &ug_emlrtRTEI, true);
  nx = T_3dmat->size[0];
  maxdimlen = T_3dmat->size[1];
  i = b_T_3dmat->size[0] * b_T_3dmat->size[1];
  b_T_3dmat->size[0] = nx;
  b_T_3dmat->size[1] = maxdimlen;
  emxEnsureCapacity_real_T(sp, b_T_3dmat, i, &ug_emlrtRTEI);
  for (i = 0; i < maxdimlen; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      b_T_3dmat->data[i1 + b_T_3dmat->size[0] * i] = T_3dmat->data[i1 +
        T_3dmat->size[0] * i];
    }
  }

  emxInit_real_T(sp, &b, 2, &ug_emlrtRTEI, true);
  st.site = &ic_emlrtRSI;
  power(&st, b_T_3dmat, b);
  nx = b->size[0] * b->size[1];
  emxFree_real_T(&b_T_3dmat);
  for (i = 0; i < nx; i++) {
    b->data[i] *= temperature_parameters->stefans_constant;
  }

  st.site = &ic_emlrtRSI;
  nx = b->size[0] * b->size[1];
  b_st.site = &db_emlrtRSI;
  maxdimlen = b->size[0];
  if (b->size[1] > b->size[0]) {
    maxdimlen = b->size[1];
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

  st.site = &jc_emlrtRSI;
  b_st.site = &lf_emlrtRSI;
  dynamic_size_checks(&b_st, vis_flux_matrix, solar_albedo_nx1,
                      vis_flux_matrix->size[1], solar_albedo_nx1->size[0]);
  b_st.site = &kf_emlrtRSI;
  mtimes(&b_st, vis_flux_matrix, solar_albedo_nx1, Qabsorbed_vis_nx1);

  /*  scattered vis flux absorbed by each px */
  st.site = &kc_emlrtRSI;
  b_b = *b;
  b_nx[0] = nx;
  b_b.size = &b_nx[0];
  b_b.numDimensions = 1;
  b_st.site = &lf_emlrtRSI;
  dynamic_size_checks(&b_st, ir_flux_matrix, &b_b, ir_flux_matrix->size[1], nx);
  b_b = *b;
  c_nx[0] = nx;
  b_b.size = &c_nx[0];
  b_b.numDimensions = 1;
  b_st.site = &kf_emlrtRSI;
  mtimes(&b_st, ir_flux_matrix, &b_b, theta_nx1);

  /*  scattered ir flux absorbed by each px */
  emxFree_real_T(&b);
  emxFree_real_T(&solar_albedo_nx1);
  if (theta_nx1->size[0] != Qabsorbed_vis_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(theta_nx1->size[0], Qabsorbed_vis_nx1->size[0],
      &eb_emlrtECI, sp);
  }

  if (theta_nx1->size[0] != Qsun_nx1->size[0]) {
    emlrtSizeEqCheck1DR2012b(theta_nx1->size[0], Qsun_nx1->size[0], &eb_emlrtECI,
      sp);
  }

  nx = theta_nx1->size[0];
  for (i = 0; i < nx; i++) {
    theta_nx1->data[i] = (theta_nx1->data[i] + Qabsorbed_vis_nx1->data[i]) +
      Qsun_nx1->data[i];
  }

  emxFree_real_T(&Qabsorbed_vis_nx1);
  emxFree_real_T(&Qsun_nx1);

  /*  total flux absorbed by each px */
  i = lat_arr->size[1];
  if (0 <= lat_arr->size[1] - 1) {
    i2 = long_arr->size[1];
    if (0 <= long_arr->size[1] - 1) {
      i3 = temperature_parameters->Kc_3dmat->size[2];
      loop_ub = temperature_parameters->Kc_3dmat->size[2];
      i4 = rho_matrix->size[2];
      b_loop_ub = rho_matrix->size[2];
      i5 = temperature_parameters->Kc_3dmat->size[2];
      i6 = (int32_T)bottom_layer_idx;
      iv[0] = 1;
      iv[1] = 1;
    }
  }

  emxInit_real_T(sp, &T_arr, 3, &vg_emlrtRTEI, true);
  emxInit_real_T(sp, &Kc_3dmat_local, 3, &wg_emlrtRTEI, true);
  emxInit_real_T(sp, &rho_matrix_local, 3, &xg_emlrtRTEI, true);
  emxInit_real_T(sp, &T_new_arr, 3, &yg_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    /*      lat = lat_arr(lat_idx); */
    for (long_idx = 0; long_idx < i2; long_idx++) {
      /*          long = long_arr(long_idx); */
      /*         %% TEMPERATURE PREP SEGMENT */
      i1 = T_3dmat->size[0];
      if ((b_i + 1 < 1) || (b_i + 1 > i1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &qf_emlrtBCI, sp);
      }

      i1 = T_3dmat->size[1];
      if ((long_idx + 1 < 1) || (long_idx + 1 > i1)) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, i1, &pf_emlrtBCI, sp);
      }

      nx = T_3dmat->size[2];
      i1 = T_arr->size[0] * T_arr->size[1] * T_arr->size[2];
      T_arr->size[0] = 1;
      T_arr->size[1] = 1;
      T_arr->size[2] = nx;
      emxEnsureCapacity_real_T(sp, T_arr, i1, &vg_emlrtRTEI);
      for (i1 = 0; i1 < nx; i1++) {
        T_arr->data[i1] = T_3dmat->data[(b_i + T_3dmat->size[0] * long_idx) +
          T_3dmat->size[0] * T_3dmat->size[1] * i1];
      }

      if ((b_i + 1 < 1) || (b_i + 1 >
                            temperature_parameters->
                            thermal_emission_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
          temperature_parameters->thermal_emission_matrix->size[0], &uf_emlrtBCI,
          sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           temperature_parameters->thermal_emission_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          temperature_parameters->thermal_emission_matrix->size[1], &uf_emlrtBCI,
          sp);
      }

      thermal_emission_local = temperature_parameters->
        thermal_emission_matrix->data[b_i +
        temperature_parameters->thermal_emission_matrix->size[0] * long_idx];
      if ((b_i + 1 < 1) || (b_i + 1 > temperature_parameters->
                            B_surface_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
          temperature_parameters->B_surface_matrix->size[0], &vf_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           temperature_parameters->B_surface_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          temperature_parameters->B_surface_matrix->size[1], &vf_emlrtBCI, sp);
      }

      B_surface_local = temperature_parameters->B_surface_matrix->data[b_i +
        temperature_parameters->B_surface_matrix->size[0] * long_idx];
      if ((b_i + 1 < 1) || (b_i + 1 > temperature_parameters->Kc_3dmat->size[0]))
      {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
          temperature_parameters->Kc_3dmat->size[0], &of_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > temperature_parameters->
           Kc_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          temperature_parameters->Kc_3dmat->size[1], &nf_emlrtBCI, sp);
      }

      i1 = Kc_3dmat_local->size[0] * Kc_3dmat_local->size[1] *
        Kc_3dmat_local->size[2];
      Kc_3dmat_local->size[0] = 1;
      Kc_3dmat_local->size[1] = 1;
      Kc_3dmat_local->size[2] = i3;
      emxEnsureCapacity_real_T(sp, Kc_3dmat_local, i1, &wg_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        Kc_3dmat_local->data[i1] = temperature_parameters->Kc_3dmat->data[(b_i +
          temperature_parameters->Kc_3dmat->size[0] * long_idx) +
          temperature_parameters->Kc_3dmat->size[0] *
          temperature_parameters->Kc_3dmat->size[1] * i1];
      }

      if ((b_i + 1 < 1) || (b_i + 1 > rho_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, rho_matrix->size[0],
          &mf_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > rho_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, rho_matrix->size[1],
          &lf_emlrtBCI, sp);
      }

      i1 = rho_matrix_local->size[0] * rho_matrix_local->size[1] *
        rho_matrix_local->size[2];
      rho_matrix_local->size[0] = 1;
      rho_matrix_local->size[1] = 1;
      rho_matrix_local->size[2] = i4;
      emxEnsureCapacity_real_T(sp, rho_matrix_local, i1, &xg_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        rho_matrix_local->data[i1] = rho_matrix->data[(b_i + rho_matrix->size[0]
          * long_idx) + rho_matrix->size[0] * rho_matrix->size[1] * i1];
      }

      i1 = (int32_T)(((real_T)b_i + 1.0) + (((real_T)long_idx + 1.0) - 1.0) *
                     (real_T)lat_arr->size[1]);
      if ((i1 < 1) || (i1 > theta_nx1->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, theta_nx1->size[0], &wf_emlrtBCI,
          sp);
      }

      Q_surface = theta_nx1->data[i1 - 1];

      /*         %% Temperature pixel tick */
      /*         %% Surface BC */
      break_iter = 0.0;
      difference = surface_bc_test_difference + 1.0;
      i1 = T_3dmat->size[2];
      if (1 > i1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &kf_emlrtBCI, sp);
      }

      T = T_3dmat->data[b_i + T_3dmat->size[0] * long_idx];

      /* surface temperature */
      /*  Root finding */
      T_new = T_3dmat->data[b_i + T_3dmat->size[0] * long_idx];
      exitg1 = false;
      while ((!exitg1) && (difference > surface_bc_test_difference)) {
        if (1 > temperature_parameters->Kc_3dmat->size[2]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, temperature_parameters->
            Kc_3dmat->size[2], &jf_emlrtBCI, sp);
        }

        K_value = Kc_3dmat_local->data[0] * (Chi_OVER_350_POWER_3 * T * T * T +
          1.0);
        i1 = T_3dmat->size[2];
        if (2 > i1) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i1, &if_emlrtBCI, sp);
        }

        i1 = T_3dmat->size[2];
        if (3 > i1) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i1, &hf_emlrtBCI, sp);
        }

        if (1 > dz_arr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, dz_arr->size[1], &gf_emlrtBCI, sp);
        }

        i1 = T_3dmat->size[2];
        if (2 > i1) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i1, &ff_emlrtBCI, sp);
        }

        i1 = T_3dmat->size[2];
        if (3 > i1) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i1, &ef_emlrtBCI, sp);
        }

        if (1 > dz_arr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, dz_arr->size[1], &df_emlrtBCI, sp);
        }

        T_new = T - ((thermal_emission_local * T * T * T * T - Q_surface) -
                     K_value * (((-3.0 * T + 4.0 * T_arr->data[1]) - T_arr->
          data[2]) / (2.0 * dz_arr->data[0]))) / ((4.0 * thermal_emission_local *
          T * T * T - 3.0 * B_surface_local * T * T * (((4.0 * T_arr->data[1] -
          3.0 * T) - T_arr->data[2]) / (2.0 * dz))) + 3.0 / (2.0 * dz_arr->data
          [0]) * K_value);
        if (T_new <= 0.0) {
          /* fprintf('\nNegative T in surface BC, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
          st.site = &lc_emlrtRSI;
          b_st.site = &eb_emlrtRSI;
          y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
          emlrtAssign(&y, m);
          b_y = NULL;
          m = emlrtCreateDoubleScalar(1.0);
          emlrtAssign(&b_y, m);
          d_y = NULL;
          m = emlrtCreateCharArray(2, &iv3[0]);
          emlrtInitCharArrayR2013a(&b_st, 43, m, &b_u[0]);
          emlrtAssign(&d_y, m);
          c_st.site = &rf_emlrtRSI;
          emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, d_y, &emlrtMCI),
                           "<output of feval>");
          T_new = rtNaN;
          exitg1 = true;
        } else {
          difference = muDoubleScalarAbs(T_new - T);
          T = T_new;
          break_iter++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }

          if (break_iter > temperature_parameters->surface_bc_break_counter) {
            /* fprintf('\nSurface BC iteration limit, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
            emlrtAssertMATLABThread(sp, &emlrtRTEI);
            st.site = &mc_emlrtRSI;
            b_st.site = &eb_emlrtRSI;
            c_y = NULL;
            m = emlrtCreateCharArray(2, &iv2[0]);
            emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
            emlrtAssign(&c_y, m);
            e_y = NULL;
            m = emlrtCreateDoubleScalar(1.0);
            emlrtAssign(&e_y, m);
            f_y = NULL;
            m = emlrtCreateCharArray(2, &iv4[0]);
            emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
            emlrtAssign(&f_y, m);
            c_st.site = &rf_emlrtRSI;
            K_value = emlrt_marshallIn(&c_st, feval(&c_st, c_y, e_y, f_y,
              &emlrtMCI), "<output of feval>");
            g_y = NULL;
            m = emlrtCreateDoubleScalar(K_value);
            emlrtAssign(&g_y, m);
            emlrtDisplayR2012b(g_y, "ans", &emlrtRTEI, sp);
            T_new = rtNaN;
            exitg1 = true;
          }
        }
      }

      /* WHILE LOOP END */
      i1 = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
      T_new_arr->size[0] = 1;
      T_new_arr->size[1] = 1;
      emxEnsureCapacity_real_T(sp, T_new_arr, i1, &yg_emlrtRTEI);
      i1 = (int32_T)muDoubleScalarFloor(num_layers);
      if (num_layers != i1) {
        emlrtIntegerCheckR2012b(num_layers, &kb_emlrtDCI, sp);
      }

      maxdimlen = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
      nx = (int32_T)num_layers;
      T_new_arr->size[2] = nx;
      emxEnsureCapacity_real_T(sp, T_new_arr, maxdimlen, &yg_emlrtRTEI);
      if (nx != i1) {
        emlrtIntegerCheckR2012b(num_layers, &lb_emlrtDCI, sp);
      }

      for (i1 = 0; i1 < nx; i1++) {
        T_new_arr->data[i1] = rtNaN;
      }

      if (1.0 > num_layers) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)num_layers, &xe_emlrtBCI,
          sp);
      }

      T_new_arr->data[0] = T_new;

      /* surface temperature */
      /*         %% Bottom BC */
      i1 = T_3dmat->size[2];
      K_value = (int32_T)muDoubleScalarFloor(bottom_layer_idx - 1.0);
      if (bottom_layer_idx - 1.0 != K_value) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &jb_emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1, i1,
          &cf_emlrtBCI, sp);
      }

      if (bottom_layer_idx - 1.0 != K_value) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &ib_emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > i5)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1, i5,
          &bf_emlrtBCI, sp);
      }

      if (bottom_layer_idx - 1.0 != K_value) {
        emlrtIntegerCheckR2012b(bottom_layer_idx - 1.0, &mb_emlrtDCI, sp);
      }

      if (((int32_T)(bottom_layer_idx - 1.0) < 1) || ((int32_T)(bottom_layer_idx
            - 1.0) > dz_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(bottom_layer_idx - 1.0), 1,
          dz_arr->size[1], &xf_emlrtBCI, sp);
      }

      if (bottom_layer_idx != (int32_T)muDoubleScalarFloor(bottom_layer_idx)) {
        emlrtIntegerCheckR2012b(bottom_layer_idx, &nb_emlrtDCI, sp);
      }

      if (((int32_T)bottom_layer_idx < 1) || ((int32_T)bottom_layer_idx > nx)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bottom_layer_idx, 1, (int32_T)
          num_layers, &yf_emlrtBCI, sp);
      }

      K_value = T_3dmat->data[(b_i + T_3dmat->size[0] * long_idx) +
        T_3dmat->size[0] * T_3dmat->size[1] * ((int32_T)(bottom_layer_idx - 1.0)
        - 1)];
      T_new_arr->data[(int32_T)bottom_layer_idx - 1] = K_value + dz_arr->data
        [(int32_T)(bottom_layer_idx - 1.0) - 1] * temperature_parameters->Q /
        (temperature_parameters->Kc_3dmat->data[(b_i +
          temperature_parameters->Kc_3dmat->size[0] * long_idx) +
         temperature_parameters->Kc_3dmat->size[0] *
         temperature_parameters->Kc_3dmat->size[1] * ((int32_T)(bottom_layer_idx
           - 1.0) - 1)] * (Chi_OVER_350_POWER_3 * K_value * K_value * K_value +
                           1.0));

      /*         %% Middle layers */
      for (maxdimlen = 0; maxdimlen <= i6 - 3; maxdimlen++) {
        i1 = T_3dmat->size[2];
        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1, i1, &af_emlrtBCI, sp);
        }

        i1 = T_3dmat->size[2];
        if (((int32_T)(((real_T)maxdimlen + 2.0) - 1.0) < 1) || ((int32_T)
             (((real_T)maxdimlen + 2.0) - 1.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)maxdimlen + 2.0) -
            1.0), 1, i1, &ye_emlrtBCI, sp);
        }

        K_value = T_arr->data[maxdimlen];
        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 >
             temperature_parameters->p_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1,
            temperature_parameters->p_arr->size[1], &ag_emlrtBCI, sp);
        }

        if ((maxdimlen + 1 < 1) || (maxdimlen + 1 >
             temperature_parameters->Kc_3dmat->size[2])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1,
            temperature_parameters->Kc_3dmat->size[2], &bg_emlrtBCI, sp);
        }

        difference = temperature_parameters->p_arr->data[maxdimlen + 1] *
          Kc_3dmat_local->data[maxdimlen] * (Chi_OVER_350_POWER_3 * K_value *
          K_value * K_value + 1.0);
        T_new = T_arr->data[maxdimlen + 1];
        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 >
             temperature_parameters->q_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1,
            temperature_parameters->q_arr->size[1], &cg_emlrtBCI, sp);
        }

        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 >
             temperature_parameters->Kc_3dmat->size[2])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1,
            temperature_parameters->Kc_3dmat->size[2], &dg_emlrtBCI, sp);
        }

        thermal_emission_local = temperature_parameters->q_arr->data[maxdimlen +
          1] * Kc_3dmat_local->data[maxdimlen + 1] * (Chi_OVER_350_POWER_3 *
          T_new * T_new * T_new + 1.0);
        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 > rho_matrix->size[2])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1, rho_matrix->size[2],
            &eg_emlrtBCI, sp);
        }

        i1 = T_3dmat->size[2];
        if ((maxdimlen + 3 < 1) || (maxdimlen + 3 > i1)) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 3, 1, i1, &fg_emlrtBCI, sp);
        }

        if ((maxdimlen + 2 < 1) || (maxdimlen + 2 > T_new_arr->size[2])) {
          emlrtDynamicBoundsCheckR2012b(maxdimlen + 2, 1, T_new_arr->size[2],
            &gg_emlrtBCI, sp);
        }

        T_new_arr->data[maxdimlen + 1] = T_new + temperature_parameters->dt /
          (rho_matrix_local->data[maxdimlen + 1] *
           ((((temperature_parameters->c0 + temperature_parameters->c1 * T_new)
              + temperature_parameters->c2 * T_new * T_new) +
             temperature_parameters->c3 * T_new * T_new * T_new) +
            temperature_parameters->c4 * T_new * T_new * T_new * T_new)) *
          ((difference * K_value - (difference + thermal_emission_local) * T_new)
           + thermal_emission_local * T_arr->data[maxdimlen + 2]);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      i1 = T_3dmat->size[0];
      maxdimlen = b_i + 1;
      if ((maxdimlen < 1) || (maxdimlen > i1)) {
        emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &we_emlrtBCI, sp);
      }

      i1 = T_3dmat->size[1];
      maxdimlen = long_idx + 1;
      if ((maxdimlen < 1) || (maxdimlen > i1)) {
        emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &ve_emlrtBCI, sp);
      }

      iv[2] = T_3dmat->size[2];
      emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &T_new_arr->size[0], 3,
        &db_emlrtECI, sp);
      nx = T_new_arr->size[2];
      for (i1 = 0; i1 < nx; i1++) {
        T_3dmat->data[(b_i + T_3dmat->size[0] * long_idx) + T_3dmat->size[0] *
          T_3dmat->size[1] * i1] = T_new_arr->data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* end long */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&T_new_arr);
  emxFree_real_T(&rho_matrix_local);
  emxFree_real_T(&Kc_3dmat_local);
  emxFree_real_T(&T_arr);
  emxFree_real_T(&theta_nx1);

  /* end lat */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (multiscattering_core_loop.c) */
