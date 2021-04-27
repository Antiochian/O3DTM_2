/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_latlon_loop.c
 *
 * Code generation for function 'shadowing_latlon_loop'
 *
 */

/* Include files */
#include "shadowing_latlon_loop.h"
#include "colon.h"
#include "cosd.h"
#include "mark_diviner_testpoints.h"
#include "mean.h"
#include "mexable_viewshed.h"
#include "rt_nonfinite.h"
#include "scattering_coefficients.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_mexutil.h"
#include "shadowing_latlon_loop_types.h"
#include "shadowing_timeloop.h"
#include "tic.h"
#include "toc.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 6,     /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 83,  /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 85,  /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 183, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 209, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 210, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 230, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 252, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 279, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 293, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 300, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 301, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 302, /* lineNo */
  "shadowing_latlon_loop",             /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 38,  /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  82,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  73,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  62,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  53,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  295,                                 /* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  29,                                  /* colNo */
  "Tmin_3dmat",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  20,                                  /* colNo */
  "Tmin_3dmat",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  296,                                 /* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  29,                                  /* colNo */
  "Tmax_3dmat",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  20,                                  /* colNo */
  "Tmax_3dmat",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  55,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  45,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  275,                                 /* lineNo */
  53,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  275,                                 /* lineNo */
  43,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  53,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  43,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  265,                                 /* lineNo */
  34,                                  /* colNo */
  "long_arr",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  57,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  54,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  32,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  254,                                 /* lineNo */
  29,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  62,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  53,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  38,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  29,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  73,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  64,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  69,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  60,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  34,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  25,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 157,/* lineNo */
  17,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  75,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 148,/* lineNo */
  25,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { 2,   /* nDims */
  117,                                 /* lineNo */
  33,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  100,                                 /* colNo */
  "H_matrix",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  90,                                  /* colNo */
  "H_matrix",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  23,                                  /* colNo */
  "z_arr",                             /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 102,/* lineNo */
  25,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 91,    /* lineNo */
  48,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 91,  /* lineNo */
  48,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 144, /* lineNo */
  49,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 155, /* lineNo */
  15,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 156, /* lineNo */
  15,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  24,                                  /* colNo */
  "jd_error_3dmat",                    /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  33,                                  /* colNo */
  "jd_error_3dmat",                    /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 91,  /* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  14,                                  /* colNo */
  "init_temps",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  16,                                  /* colNo */
  "H_matrix",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  17,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  17,                                  /* colNo */
  "T_3dmat",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 144, /* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 155, /* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  78,                                  /* colNo */
  "rho_matrix",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  13,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  47,                                  /* colNo */
  "Kc_3dmat",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  9,                                   /* colNo */
  "B_surface_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 156, /* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  29,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  50,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  70,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  159,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  5,                                   /* colNo */
  "p_arr",                             /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  160,                                 /* lineNo */
  11,                                  /* colNo */
  "dz_arr",                            /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  162,                                 /* lineNo */
  5,                                   /* colNo */
  "q_arr",                             /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  11,                                  /* colNo */
  "lat_arr",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  16,                                  /* colNo */
  "long_arr",                          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  218,                                 /* lineNo */
  18,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  19,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  220,                                 /* lineNo */
  14,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  45,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  45,                                  /* colNo */
  "A0_matrix",                         /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  67,                                  /* colNo */
  "a_OVER_pi_OVER_4_POWER_3_matrix",   /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  67,                                  /* colNo */
  "b_OVER_pi_OVER_2_POWER_8_matrix",   /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  59,                                  /* colNo */
  "thermal_emission_matrix",           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  52,                                  /* colNo */
  "B_surface_matrix",                  /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  34,                                  /* colNo */
  "vis_normalisation_matrix",          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  20,                                  /* colNo */
  "lat_arr",                           /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  269,                                 /* lineNo */
  24,                                  /* colNo */
  "vis_matrix",                        /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  21,                                  /* colNo */
  "absorbed_vis_coeff_local",          /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  21,                                  /* colNo */
  "emitted_absorbed_ir_coeff_local",   /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  9,                                   /* colNo */
  "jd_error_3dmat",                    /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  9,                                   /* colNo */
  "T_error_3dmat",                     /* aName */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo gb_emlrtRTEI = { 54,/* lineNo */
  5,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 59,/* lineNo */
  5,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 65,/* lineNo */
  5,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 77,/* lineNo */
  5,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 84,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 86,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 87,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 91,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 117,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 122,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 125,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 144,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 145,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 155,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 156,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 183,/* lineNo */
  1,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 135,/* lineNo */
  31,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 230,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 247,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 248,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 259,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 260,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 297,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 298,/* lineNo */
  9,                                   /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 237,/* lineNo */
  17,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

static emlrtRSInfo nh_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43]);
static const mxArray *d_emlrt_marshallOut(const int16_T u);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [100]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *f_emlrt_marshallOut(const int32_T u);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, emlrtMCInfo *location);

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

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43])
{
  static const int32_T iv[2] = { 1, 43 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 43, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const int16_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [100])
{
  static const int32_T iv[2] = { 1, 100 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 100, m, &u[0]);
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

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  return emlrtCallMATLABR2012b(sp, 1, &m, 6, pArrays, "feval", true, location);
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

void shadowing_latlon_loop(const emlrtStack *sp, const emxArray_real_T *z_arr,
  real_T bottom_layer_idx, real_T depth_update_wait_t, real_T
  depth_update_t_interval, real_T num_layers, real_T t_limit, real_T t_wait,
  const emxArray_real_T *rho_matrix, const emxArray_real_T *lat_arr, const
  emxArray_real_T *long_arr, const emxArray_real_T *dz_arr, real_T dz, const
  struct0_T *parameters, const emxArray_real_T *init_temps, const struct1_T
  *raytracing_params, const emxArray_real_T *ew_matrix, const emxArray_real_T
  *ns_matrix, real_T start_jd, real_T end_jd, const struct4_T *diviner_data,
  boolean_T recent_only, emxArray_real_T *Tmax_3dmat, emxArray_real_T
  *Tmin_3dmat, emxArray_cell_wrap_0 *jd_error_3dmat, emxArray_cell_wrap_0
  *T_error_3dmat)
{
  static const char_T cv2[100] = { '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b',
    '\\', 'b', '\\', 'b', '\\', 'b', '\\', 'b' };

  static const char_T cv1[43] = { 'S', 't', 'a', 'r', 't', 'e', 'd', ' ', ' ',
    'p', 'i', 'x', 'e', 'l', ':', ' ', ' ', '%', '5', 'd', ' ', '/', ' ', '%',
    '5', 'd', ' ', 'i', 'n', ' ', '%', '7', 'd', ' ', 's', 'e', 'c', 'o', 'n',
    'd', 's', '\\', 'n' };

  static const char_T cv3[43] = { 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', ' ',
    'p', 'i', 'x', 'e', 'l', ':', ' ', ' ', '%', '5', 'd', ' ', '/', ' ', '%',
    '5', 'd', ' ', 'i', 'n', ' ', '%', '7', 'd', ' ', 's', 'e', 'c', 'o', 'n',
    'd', 's', '\\', 'n' };

  static const char_T cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  b_struct_T b_expl_temp;
  c_struct_T c_expl_temp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_cell_wrap_0 *sample_surface_temperatures;
  emxArray_cell_wrap_0 *sample_timepoints;
  emxArray_real_T *A0_matrix;
  emxArray_real_T *H_matrix;
  emxArray_real_T *Kc_3dmat;
  emxArray_real_T *T_3dmat;
  emxArray_real_T *Tmax_local;
  emxArray_real_T *Tmin_local;
  emxArray_real_T *a_OVER_pi_OVER_4_POWER_3_matrix;
  emxArray_real_T *a_matrix;
  emxArray_real_T *b_OVER_pi_OVER_2_POWER_8_matrix;
  emxArray_real_T *b_T_3dmat;
  emxArray_real_T *b_matrix;
  emxArray_real_T *emissivity_matrix;
  emxArray_real_T *thermal_emission_matrix;
  struct_T expl_temp;
  real_T Chi_OVER_350_POWER_3;
  real_T Kd;
  real_T T0;
  real_T TN;
  real_T T_bottom_limit;
  real_T aspect1;
  real_T b_long;
  real_T h1;
  real_T ir_normalisation;
  real_T lat;
  real_T local_raytracing_params_aspect;
  real_T local_raytracing_params_slope;
  real_T r_moon;
  real_T rho_d;
  real_T slope1;
  real_T unusedU3;
  int32_T iv[3];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T layer_idx;
  int32_T long1_idx;
  int32_T long_idx;
  int32_T loop_ub;
  int16_T i4;
  int16_T pixel_count;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &A0_matrix, 2, &gb_emlrtRTEI, true);
  emxInit_cell_wrap_0(sp, &sample_timepoints, 2, &c_emlrtRTEI, true);
  emxInit_cell_wrap_0(sp, &sample_surface_temperatures, 2, &c_emlrtRTEI, true);

  /*  Generate a list of times and temperatures to compare the model to and */
  /*  save results. */
  st.site = &emlrtRSI;
  mark_diviner_testpoints(&st, start_jd, end_jd, lat_arr, long_arr,
    diviner_data->lat_arr, diviner_data->long_arr, diviner_data->T_arr,
    diviner_data->jd_arr, recent_only, sample_timepoints,
    sample_surface_temperatures);

  /*  Unpack raytracing params */
  r_moon = raytracing_params->ref_sphere.Radius;
  ir_normalisation = 1.0 / raytracing_params->scattering_power + 1.0;

  /*  Unpack general parameters */
  /*  custom_parameters */
  rho_d = parameters->rho_d;
  Kd = parameters->Kd;
  T_bottom_limit = parameters->T_bottom_limit;

  /*  diviner_start_dtm = parameters.diviner_start_dtm; */
  /*  diviner_end_dtm = parameters.diviner_end_dtm; */
  /*  generate matrices if needed */
  i = A0_matrix->size[0] * A0_matrix->size[1];
  A0_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  A0_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, A0_matrix, i, &gb_emlrtRTEI);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    A0_matrix->data[i] = parameters->A0;
  }

  emxInit_real_T(sp, &a_matrix, 2, &hb_emlrtRTEI, true);
  i = a_matrix->size[0] * a_matrix->size[1];
  a_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  a_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, a_matrix, i, &hb_emlrtRTEI);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    a_matrix->data[i] = parameters->a;
  }

  emxInit_real_T(sp, &b_matrix, 2, &ib_emlrtRTEI, true);
  i = b_matrix->size[0] * b_matrix->size[1];
  b_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  b_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, b_matrix, i, &ib_emlrtRTEI);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_matrix->data[i] = parameters->b;
  }

  emxInit_real_T(sp, &emissivity_matrix, 2, &jb_emlrtRTEI, true);
  i = emissivity_matrix->size[0] * emissivity_matrix->size[1];
  emissivity_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  emissivity_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, emissivity_matrix, i, &jb_emlrtRTEI);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    emissivity_matrix->data[i] = parameters->emissivity;
  }

  emxInit_real_T(sp, &H_matrix, 2, &kb_emlrtRTEI, true);
  i = H_matrix->size[0] * H_matrix->size[1];
  H_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  H_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(sp, H_matrix, i, &kb_emlrtRTEI);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    H_matrix->data[i] = parameters->H;
  }

  emxInit_real_T(sp, &thermal_emission_matrix, 2, &lb_emlrtRTEI, true);

  /*  pre-calculate constant parameters */
  st.site = &b_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  i = thermal_emission_matrix->size[0] * thermal_emission_matrix->size[1];
  thermal_emission_matrix->size[0] = emissivity_matrix->size[0];
  thermal_emission_matrix->size[1] = emissivity_matrix->size[1];
  emxEnsureCapacity_real_T(sp, thermal_emission_matrix, i, &lb_emlrtRTEI);
  loop_ub = emissivity_matrix->size[0] * emissivity_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    thermal_emission_matrix->data[i] = emissivity_matrix->data[i] *
      parameters->stefans_constant;
  }

  emxInit_real_T(sp, &a_OVER_pi_OVER_4_POWER_3_matrix, 2, &mb_emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  Chi_OVER_350_POWER_3 = parameters->Chi * 2.3323615160349852E-8;
  i = a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
    a_OVER_pi_OVER_4_POWER_3_matrix->size[1];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[0] = a_matrix->size[0];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[1] = a_matrix->size[1];
  emxEnsureCapacity_real_T(sp, a_OVER_pi_OVER_4_POWER_3_matrix, i, &mb_emlrtRTEI);
  loop_ub = a_matrix->size[0] * a_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    a_OVER_pi_OVER_4_POWER_3_matrix->data[i] = a_matrix->data[i] *
      2.0640982037247677;
  }

  emxInit_real_T(sp, &b_OVER_pi_OVER_2_POWER_8_matrix, 2, &nb_emlrtRTEI, true);
  i = b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
    b_OVER_pi_OVER_2_POWER_8_matrix->size[1];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[0] = b_matrix->size[0];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[1] = b_matrix->size[1];
  emxEnsureCapacity_real_T(sp, b_OVER_pi_OVER_2_POWER_8_matrix, i, &nb_emlrtRTEI);
  loop_ub = b_matrix->size[0] * b_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_OVER_pi_OVER_2_POWER_8_matrix->data[i] = b_matrix->data[i] *
      0.026979940263294394;
  }

  emxInit_real_T(sp, &T_3dmat, 3, &ob_emlrtRTEI, true);

  /*  Initialise Temperatures */
  i = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  T_3dmat->size[0] = lat_arr->size[1];
  T_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, T_3dmat, i, &ob_emlrtRTEI);
  if (!(num_layers >= 0.0)) {
    emlrtNonNegativeCheckR2012b(num_layers, &b_emlrtDCI, sp);
  }

  i = (int32_T)muDoubleScalarFloor(num_layers);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &emlrtDCI, sp);
  }

  i1 = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  T_3dmat->size[2] = (int32_T)num_layers;
  emxEnsureCapacity_real_T(sp, T_3dmat, i1, &ob_emlrtRTEI);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &f_emlrtDCI, sp);
  }

  loop_ub = lat_arr->size[1] * long_arr->size[1] * (int32_T)num_layers;
  for (i1 = 0; i1 < loop_ub; i1++) {
    T_3dmat->data[i1] = rtNaN;
  }

  i1 = lat_arr->size[1];
  for (loop_ub = 0; loop_ub < i1; loop_ub++) {
    /*     %% Prepare for parfor iteration */
    i2 = long_arr->size[1];
    for (long1_idx = 0; long1_idx < i2; long1_idx++) {
      if ((loop_ub + 1 < 1) || (loop_ub + 1 > init_temps->size[0])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, init_temps->size[0],
          &kb_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > init_temps->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, init_temps->size[1],
          &kb_emlrtBCI, sp);
      }

      T0 = init_temps->data[loop_ub + init_temps->size[0] * long1_idx];
      TN = T0 / 1.4142135623730951;
      if (TN < T_bottom_limit) {
        /*  set roughly constant initial temperature profile for very */
        /*  cold regions */
        TN = T_bottom_limit;
      }

      i3 = (int32_T)num_layers;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, num_layers, mxDOUBLE_CLASS,
        (int32_T)num_layers, &f_emlrtRTEI, sp);
      for (layer_idx = 0; layer_idx < i3; layer_idx++) {
        b_loop_ub = layer_idx + 1;
        if ((b_loop_ub < 1) || (b_loop_ub > z_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, z_arr->size[1],
            &hb_emlrtBCI, sp);
        }

        if ((loop_ub + 1 < 1) || (loop_ub + 1 > H_matrix->size[0])) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, H_matrix->size[0],
            &lb_emlrtBCI, sp);
        }

        if ((long1_idx + 1 < 1) || (long1_idx + 1 > H_matrix->size[1])) {
          emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, H_matrix->size[1],
            &lb_emlrtBCI, sp);
        }

        if ((H_matrix->data[loop_ub + H_matrix->size[0] * long1_idx] == 0.0) &&
            (z_arr->data[layer_idx] == 0.0)) {
          if ((loop_ub + 1 < 1) || (loop_ub + 1 > T_3dmat->size[0])) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, T_3dmat->size[0],
              &mb_emlrtBCI, sp);
          }

          if ((long1_idx + 1 < 1) || (long1_idx + 1 > T_3dmat->size[1])) {
            emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, T_3dmat->size[1],
              &mb_emlrtBCI, sp);
          }

          if (((int32_T)(layer_idx + 1U) < 1) || ((int32_T)(layer_idx + 1U) >
               T_3dmat->size[2])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
              T_3dmat->size[2], &mb_emlrtBCI, sp);
          }

          T_3dmat->data[(loop_ub + T_3dmat->size[0] * long1_idx) + T_3dmat->
            size[0] * T_3dmat->size[1] * layer_idx] = T0;
        } else {
          b_loop_ub = loop_ub + 1;
          if ((b_loop_ub < 1) || (b_loop_ub > H_matrix->size[0])) {
            emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, H_matrix->size[0],
              &gb_emlrtBCI, sp);
          }

          b_loop_ub = long1_idx + 1;
          if ((b_loop_ub < 1) || (b_loop_ub > H_matrix->size[1])) {
            emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, H_matrix->size[1],
              &fb_emlrtBCI, sp);
          }

          if ((loop_ub + 1 < 1) || (loop_ub + 1 > T_3dmat->size[0])) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, T_3dmat->size[0],
              &nb_emlrtBCI, sp);
          }

          if ((long1_idx + 1 < 1) || (long1_idx + 1 > T_3dmat->size[1])) {
            emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, T_3dmat->size[1],
              &nb_emlrtBCI, sp);
          }

          if (((int32_T)(layer_idx + 1U) < 1) || ((int32_T)(layer_idx + 1U) >
               T_3dmat->size[2])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
              T_3dmat->size[2], &nb_emlrtBCI, sp);
          }

          T_3dmat->data[(loop_ub + T_3dmat->size[0] * long1_idx) + T_3dmat->
            size[0] * T_3dmat->size[1] * layer_idx] = TN - (TN - T0) *
            muDoubleScalarExp(-z_arr->data[layer_idx] / H_matrix->data[loop_ub +
                              H_matrix->size[0] * long1_idx]);
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

  /*  Generate vis normalisation matrix */
  /* hardcoded solution to integral to avoid using symbolic variables */
  loop_ub = a_matrix->size[0] * a_matrix->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    a_matrix->data[i1] = 3.0 * (a_matrix->data[i1] / 0.48447307312968463) *
      1.869604401089358 / 4.0;
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, *(int32_T (*)[2])
    a_matrix->size, &c_emlrtECI, sp);
  loop_ub = b_matrix->size[0] * b_matrix->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_matrix->data[i1] = b_matrix->data[i1] / 37.064574281525665 *
      6.326151572207948;
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, *(int32_T (*)[2])
    b_matrix->size, &c_emlrtECI, sp);
  loop_ub = A0_matrix->size[0] * A0_matrix->size[1];
  i1 = a_matrix->size[0] * a_matrix->size[1];
  a_matrix->size[0] = A0_matrix->size[0];
  a_matrix->size[1] = A0_matrix->size[1];
  emxEnsureCapacity_real_T(sp, a_matrix, i1, &pb_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    a_matrix->data[i1] = 1.0 / ((A0_matrix->data[i1] + a_matrix->data[i1]) +
      b_matrix->data[i1]);
  }

  /* clearvars mA mB mC; */
  /*  Old prog starts */
  i1 = Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * Tmax_3dmat->size[2];
  Tmax_3dmat->size[0] = T_3dmat->size[0];
  Tmax_3dmat->size[1] = T_3dmat->size[1];
  Tmax_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(sp, Tmax_3dmat, i1, &qb_emlrtRTEI);
  loop_ub = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Tmax_3dmat->data[i1] = -300.0;
  }

  /*  Tmax_dtm_3dmat = NaN(size(T_3dmat)); %date-tracking was removed (but */
  /*  could be readded pretty easily) */
  i1 = Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * Tmin_3dmat->size[2];
  Tmin_3dmat->size[0] = T_3dmat->size[0];
  Tmin_3dmat->size[1] = T_3dmat->size[1];
  Tmin_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(sp, Tmin_3dmat, i1, &rb_emlrtRTEI);
  loop_ub = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Tmin_3dmat->data[i1] = 600.0;
  }

  emxInit_real_T(sp, &Kc_3dmat, 3, &sb_emlrtRTEI, true);

  /*  Tmin_dtm_3dmat = NaN(size(T_3dmat)); */
  /*  Prepare for loop */
  /*  Prepare for loop by pre-calculating constant values which do not need to */
  /*  be calculated every iteration (therefore increasing performance) */
  i1 = Kc_3dmat->size[0] * Kc_3dmat->size[1] * Kc_3dmat->size[2];
  Kc_3dmat->size[0] = lat_arr->size[1];
  Kc_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, Kc_3dmat, i1, &sb_emlrtRTEI);
  if (num_layers != i) {
    emlrtIntegerCheckR2012b(num_layers, &c_emlrtDCI, sp);
  }

  i1 = Kc_3dmat->size[0] * Kc_3dmat->size[1] * Kc_3dmat->size[2];
  loop_ub = (int32_T)num_layers;
  Kc_3dmat->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, Kc_3dmat, i1, &sb_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(num_layers, &g_emlrtDCI, sp);
  }

  b_loop_ub = lat_arr->size[1] * long_arr->size[1] * (int32_T)num_layers;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    Kc_3dmat->data[i1] = rtNaN;
  }

  i1 = b_matrix->size[0] * b_matrix->size[1];
  b_matrix->size[0] = lat_arr->size[1];
  b_matrix->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, b_matrix, i1, &tb_emlrtRTEI);
  b_loop_ub = lat_arr->size[1] * long_arr->size[1];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_matrix->data[i1] = 0.0;
  }

  /* PREALLOC */
  i1 = lat_arr->size[1];
  for (long1_idx = 0; long1_idx < i1; long1_idx++) {
    i2 = long_arr->size[1];
    for (long_idx = 0; long_idx < i2; long_idx++) {
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, num_layers, mxDOUBLE_CLASS,
        (int32_T)num_layers, &e_emlrtRTEI, sp);
      for (layer_idx = 0; layer_idx < loop_ub; layer_idx++) {
        if ((long1_idx + 1 < 1) || (long1_idx + 1 > rho_matrix->size[0])) {
          emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, rho_matrix->size[0],
            &ob_emlrtBCI, sp);
        }

        if ((long_idx + 1 < 1) || (long_idx + 1 > rho_matrix->size[1])) {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, rho_matrix->size[1],
            &ob_emlrtBCI, sp);
        }

        if ((int32_T)(layer_idx + 1U) > rho_matrix->size[2]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
            rho_matrix->size[2], &ob_emlrtBCI, sp);
        }

        if ((long1_idx + 1 < 1) || (long1_idx + 1 > Kc_3dmat->size[0])) {
          emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, Kc_3dmat->size[0],
            &pb_emlrtBCI, sp);
        }

        if ((long_idx + 1 < 1) || (long_idx + 1 > Kc_3dmat->size[1])) {
          emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, Kc_3dmat->size[1],
            &pb_emlrtBCI, sp);
        }

        if ((int32_T)(layer_idx + 1U) > Kc_3dmat->size[2]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1,
            Kc_3dmat->size[2], &pb_emlrtBCI, sp);
        }

        Kc_3dmat->data[(long1_idx + Kc_3dmat->size[0] * long_idx) +
          Kc_3dmat->size[0] * Kc_3dmat->size[1] * layer_idx] = Kd - (Kd -
          parameters->Ks) * (rho_d - rho_matrix->data[(long1_idx +
          rho_matrix->size[0] * long_idx) + rho_matrix->size[0] *
                             rho_matrix->size[1] * layer_idx]) / (rho_d -
          parameters->rho_s);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (1 > Kc_3dmat->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Kc_3dmat->size[2], &eb_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > Kc_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, Kc_3dmat->size[0],
          &qb_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > Kc_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, Kc_3dmat->size[1],
          &qb_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > b_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, b_matrix->size[0],
          &rb_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > b_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, b_matrix->size[1],
          &rb_emlrtBCI, sp);
      }

      b_matrix->data[long1_idx + b_matrix->size[0] * long_idx] = Kc_3dmat->
        data[long1_idx + Kc_3dmat->size[0] * long_idx] * Chi_OVER_350_POWER_3;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInitStruct_struct_T(sp, &expl_temp, &fc_emlrtRTEI, true);
  i1 = expl_temp.p_arr->size[0] * expl_temp.p_arr->size[1];
  expl_temp.p_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, expl_temp.p_arr, i1, &ub_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(num_layers, &d_emlrtDCI, sp);
  }

  i1 = expl_temp.p_arr->size[0] * expl_temp.p_arr->size[1];
  expl_temp.p_arr->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, expl_temp.p_arr, i1, &ub_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(num_layers, &h_emlrtDCI, sp);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    expl_temp.p_arr->data[i1] = rtNaN;
  }

  i1 = expl_temp.q_arr->size[0] * expl_temp.q_arr->size[1];
  expl_temp.q_arr->size[0] = 1;
  emxEnsureCapacity_real_T(sp, expl_temp.q_arr, i1, &vb_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(num_layers, &e_emlrtDCI, sp);
  }

  i1 = expl_temp.q_arr->size[0] * expl_temp.q_arr->size[1];
  expl_temp.q_arr->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, expl_temp.q_arr, i1, &vb_emlrtRTEI);
  if (loop_ub != i) {
    emlrtIntegerCheckR2012b(num_layers, &i_emlrtDCI, sp);
  }

  for (i = 0; i < loop_ub; i++) {
    expl_temp.q_arr->data[i] = rtNaN;
  }

  i = loop_ub - 2;
  emlrtForLoopVectorCheckR2012b(2.0, 1.0, num_layers - 1.0, mxDOUBLE_CLASS,
    (int32_T)num_layers - 2, &d_emlrtRTEI, sp);
  for (layer_idx = 0; layer_idx < i; layer_idx++) {
    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &sb_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &tb_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &ub_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &vb_emlrtBCI, sp);
    }

    rho_d = dz_arr->data[layer_idx + 1] * dz_arr->data[layer_idx] *
      (dz_arr->data[layer_idx + 1] + dz_arr->data[layer_idx]);
    if ((int32_T)(layer_idx + 2U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1, dz_arr->size[1],
        &wb_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > expl_temp.p_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1,
        expl_temp.p_arr->size[1], &xb_emlrtBCI, sp);
    }

    expl_temp.p_arr->data[layer_idx + 1] = 2.0 * dz_arr->data[layer_idx + 1] /
      rho_d;
    if ((int32_T)(layer_idx + 1U) > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 1U), 1, dz_arr->size[1],
        &yb_emlrtBCI, sp);
    }

    if ((int32_T)(layer_idx + 2U) > expl_temp.q_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(layer_idx + 2U), 1,
        expl_temp.q_arr->size[1], &ac_emlrtBCI, sp);
    }

    expl_temp.q_arr->data[layer_idx + 1] = 2.0 * dz_arr->data[layer_idx] / rho_d;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  CREATE TEMPERATURE PARAMETERS */
  /*  set general parameters */
  st.site = &d_emlrtRSI;
  if (muDoubleScalarIsNaN(parameters->dt) || muDoubleScalarIsNaN(t_limit)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &wb_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &wb_emlrtRTEI);
    expl_temp.t_arr->data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(parameters->dt)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &wb_emlrtRTEI);
    expl_temp.t_arr->data[0] = 0.0;
  } else if (muDoubleScalarFloor(parameters->dt) == parameters->dt) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(t_limit / parameters->dt);
    expl_temp.t_arr->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, expl_temp.t_arr, i, &wb_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      expl_temp.t_arr->data[i] = parameters->dt * (real_T)i;
    }
  } else {
    b_st.site = &u_emlrtRSI;
    eml_float_colon(&b_st, parameters->dt, t_limit, expl_temp.t_arr);
  }

  /*  SIMULATION START */
  pixel_count = 0;
  Kd = (real_T)lat_arr->size[1] * (real_T)long_arr->size[1];
  if (Kd < 32768.0) {
    if (Kd >= -32768.0) {
      i4 = (int16_T)Kd;
    } else {
      i4 = MIN_int16_T;
    }
  } else {
    i4 = MAX_int16_T;
  }

  st.site = &e_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  c_st.site = &mh_emlrtRSI;
  d_st.site = &nh_emlrtRSI;
  emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
    b_emlrt_marshallOut(1.0), c_emlrt_marshallOut(&d_st, cv1),
    d_emlrt_marshallOut(0), d_emlrt_marshallOut(i4), d_emlrt_marshallOut(0),
    &emlrtMCI), "<output of feval>");
  st.site = &f_emlrtRSI;
  tic(&st);
  i = lat_arr->size[1];
  i1 = jd_error_3dmat->size[0] * jd_error_3dmat->size[1];
  jd_error_3dmat->size[0] = lat_arr->size[1];
  jd_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, jd_error_3dmat, i1, &xb_emlrtRTEI);
  i1 = T_error_3dmat->size[0] * T_error_3dmat->size[1];
  T_error_3dmat->size[0] = lat_arr->size[1];
  T_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, T_error_3dmat, i1, &xb_emlrtRTEI);
  if (0 <= lat_arr->size[1] - 1) {
    i5 = long_arr->size[1];
    if (0 <= long_arr->size[1] - 1) {
      c_loop_ub = raytracing_params->h_arr->size[0] * raytracing_params->
        h_arr->size[1];
      i6 = Kc_3dmat->size[2];
      d_loop_ub = Kc_3dmat->size[2];
      i7 = rho_matrix->size[2];
      e_loop_ub = rho_matrix->size[2];
      i8 = lat_arr->size[1];
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
      f_loop_ub = raytracing_params->decl_arr->size[0] *
        raytracing_params->decl_arr->size[1];
      i9 = T_3dmat->size[2];
      g_loop_ub = T_3dmat->size[2];
    }
  }

  emxInit_real_T(sp, &Tmin_local, 3, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &Tmax_local, 3, &c_emlrtRTEI, true);
  emxInitStruct_struct_T1(sp, &b_expl_temp, &fc_emlrtRTEI, true);
  emxInitStruct_struct_T2(sp, &c_expl_temp, &fc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_T_3dmat, 3, &gc_emlrtRTEI, true);
  for (long1_idx = 0; long1_idx < i; long1_idx++) {
    if ((long1_idx + 1 < 1) || (long1_idx + 1 > lat_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, lat_arr->size[1],
        &bc_emlrtBCI, sp);
    }

    lat = lat_arr->data[long1_idx];
    for (long_idx = 0; long_idx < i5; long_idx++) {
      /*          long = long_arr(long_idx); */
      /*         %% RAYTRACING PREP SEGMENT */
      if ((long_idx + 1 < 1) || (long_idx + 1 > long_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, long_arr->size[1],
          &cc_emlrtBCI, sp);
      }

      b_long = long_arr->data[long_idx];
      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           raytracing_params->slope_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          raytracing_params->slope_matrix->size[0], &dc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > raytracing_params->
           slope_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          raytracing_params->slope_matrix->size[1], &dc_emlrtBCI, sp);
      }

      slope1 = raytracing_params->slope_matrix->data[long1_idx +
        raytracing_params->slope_matrix->size[0] * long_idx];
      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           raytracing_params->aspect_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          raytracing_params->aspect_matrix->size[0], &ec_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > raytracing_params->
           aspect_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          raytracing_params->aspect_matrix->size[1], &ec_emlrtBCI, sp);
      }

      aspect1 = raytracing_params->aspect_matrix->data[long1_idx +
        raytracing_params->aspect_matrix->size[0] * long_idx];
      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           raytracing_params->elevation_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          raytracing_params->elevation_matrix->size[0], &fc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           raytracing_params->elevation_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          raytracing_params->elevation_matrix->size[1], &fc_emlrtBCI, sp);
      }

      h1 = raytracing_params->elevation_matrix->data[long1_idx +
        raytracing_params->elevation_matrix->size[0] * long_idx];
      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           raytracing_params->elevation_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          raytracing_params->elevation_matrix->size[0], &gc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           raytracing_params->elevation_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          raytracing_params->elevation_matrix->size[1], &gc_emlrtBCI, sp);
      }

      if (lat >= 0.0) {
        local_raytracing_params_aspect = aspect1;
        local_raytracing_params_slope = slope1;
      } else {
        local_raytracing_params_aspect = -aspect1;
        local_raytracing_params_slope = -slope1;
      }

      i1 = c_expl_temp.h_arr_local->size[0] * c_expl_temp.h_arr_local->size[1];
      c_expl_temp.h_arr_local->size[0] = 1;
      c_expl_temp.h_arr_local->size[1] = raytracing_params->h_arr->size[1];
      emxEnsureCapacity_real_T(sp, c_expl_temp.h_arr_local, i1, &yb_emlrtRTEI);
      rho_d = long_arr->data[long_idx];
      st.site = &g_emlrtRSI;
      Kd = mean(&st, long_arr);
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        c_expl_temp.h_arr_local->data[i1] = (raytracing_params->h_arr->data[i1]
          + rho_d) - Kd;
      }

      /* what is this? */
      if (long1_idx > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, sample_timepoints->size[0] -
          1, &d_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &c_emlrtBCI, sp);
      }

      if (long1_idx > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0,
          sample_surface_temperatures->size[0] - 1, &b_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &emlrtBCI, sp);
      }

      /*         %% TEMPERATURE PREP SEGMENT */
      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > T_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, T_3dmat->size[0], &db_emlrtBCI, sp);
      }

      i1 = long_idx + 1;
      if ((i1 < 1) || (i1 > T_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, T_3dmat->size[1], &cb_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > A0_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, A0_matrix->size[0],
          &hc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > A0_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, A0_matrix->size[1],
          &hc_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           a_OVER_pi_OVER_4_POWER_3_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          a_OVER_pi_OVER_4_POWER_3_matrix->size[0], &ic_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           a_OVER_pi_OVER_4_POWER_3_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          a_OVER_pi_OVER_4_POWER_3_matrix->size[1], &ic_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 >
           b_OVER_pi_OVER_2_POWER_8_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          b_OVER_pi_OVER_2_POWER_8_matrix->size[0], &jc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 >
           b_OVER_pi_OVER_2_POWER_8_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          b_OVER_pi_OVER_2_POWER_8_matrix->size[1], &jc_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > thermal_emission_matrix->size
           [0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          thermal_emission_matrix->size[0], &kc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > thermal_emission_matrix->size[1]))
      {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1,
          thermal_emission_matrix->size[1], &kc_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > b_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, b_matrix->size[0],
          &lc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > b_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, b_matrix->size[1],
          &lc_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > Kc_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, Kc_3dmat->size[0],
          &bb_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > Kc_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, Kc_3dmat->size[1],
          &ab_emlrtBCI, sp);
      }

      i1 = b_expl_temp.Kc_3dmat_local->size[0] *
        b_expl_temp.Kc_3dmat_local->size[1] * b_expl_temp.Kc_3dmat_local->size[2];
      b_expl_temp.Kc_3dmat_local->size[0] = 1;
      b_expl_temp.Kc_3dmat_local->size[1] = 1;
      b_expl_temp.Kc_3dmat_local->size[2] = i6;
      emxEnsureCapacity_real_T(sp, b_expl_temp.Kc_3dmat_local, i1, &ac_emlrtRTEI);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        b_expl_temp.Kc_3dmat_local->data[i1] = Kc_3dmat->data[(long1_idx +
          Kc_3dmat->size[0] * long_idx) + Kc_3dmat->size[0] * Kc_3dmat->size[1] *
          i1];
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > rho_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, rho_matrix->size[0],
          &y_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > rho_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, rho_matrix->size[1],
          &x_emlrtBCI, sp);
      }

      i1 = b_expl_temp.rho_matrix_local->size[0] *
        b_expl_temp.rho_matrix_local->size[1] *
        b_expl_temp.rho_matrix_local->size[2];
      b_expl_temp.rho_matrix_local->size[0] = 1;
      b_expl_temp.rho_matrix_local->size[1] = 1;
      b_expl_temp.rho_matrix_local->size[2] = i7;
      emxEnsureCapacity_real_T(sp, b_expl_temp.rho_matrix_local, i1,
        &bc_emlrtRTEI);
      for (i1 = 0; i1 < e_loop_ub; i1++) {
        b_expl_temp.rho_matrix_local->data[i1] = rho_matrix->data[(long1_idx +
          rho_matrix->size[0] * long_idx) + rho_matrix->size[0] *
          rho_matrix->size[1] * i1];
      }

      /*         %% GENERATE 1-BOUNCE FLUX COEFFICIENT ON-THE-FLY */
      st.site = &h_emlrtRSI;
      mexable_viewshed(&st, raytracing_params->elevation_matrix, lat,
                       long_arr->data[long_idx], r_moon, r_moon,
                       raytracing_params->sample_dens,
                       &raytracing_params->public_raster_struct, H_matrix);
      if (2 > ew_matrix->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, ew_matrix->size[1], &v_emlrtBCI, sp);
      }

      if (1 > ew_matrix->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ew_matrix->size[1], &t_emlrtBCI, sp);
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > ew_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ew_matrix->size[0], &w_emlrtBCI, sp);
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > ew_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ew_matrix->size[0], &u_emlrtBCI, sp);
      }

      if (1 > ns_matrix->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ns_matrix->size[0], &s_emlrtBCI, sp);
      }

      if (2 > ns_matrix->size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, ns_matrix->size[0], &q_emlrtBCI, sp);
      }

      i1 = long_idx + 1;
      if ((i1 < 1) || (i1 > ns_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ns_matrix->size[1], &r_emlrtBCI, sp);
      }

      i1 = long_idx + 1;
      if ((i1 < 1) || (i1 > ns_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ns_matrix->size[1], &p_emlrtBCI, sp);
      }

      Kd = slope1;
      b_cosd(&Kd);
      rho_d = muDoubleScalarAbs((ew_matrix->data[long1_idx + ew_matrix->size[0]]
        - ew_matrix->data[long1_idx]) * (ns_matrix->data[ns_matrix->size[0] *
        long_idx] - ns_matrix->data[ns_matrix->size[0] * long_idx + 1]) / Kd);
      if ((long1_idx + 1 < 1) || (long1_idx + 1 > a_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, a_matrix->size[0],
          &mc_emlrtBCI, sp);
      }

      if ((long_idx + 1 < 1) || (long_idx + 1 > a_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long_idx + 1, 1, a_matrix->size[1],
          &mc_emlrtBCI, sp);
      }

      Kd = a_matrix->data[long1_idx + a_matrix->size[0] * long_idx];
      i1 = b_expl_temp.vis_flux_local->size[0] *
        b_expl_temp.vis_flux_local->size[1];
      b_expl_temp.vis_flux_local->size[0] = raytracing_params->
        elevation_matrix->size[0];
      b_expl_temp.vis_flux_local->size[1] = raytracing_params->
        elevation_matrix->size[1];
      emxEnsureCapacity_real_T(sp, b_expl_temp.vis_flux_local, i1, &cc_emlrtRTEI);
      loop_ub = raytracing_params->elevation_matrix->size[0] *
        raytracing_params->elevation_matrix->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_expl_temp.vis_flux_local->data[i1] = rtNaN;
      }

      i1 = b_expl_temp.ir_flux_local->size[0] * b_expl_temp.ir_flux_local->size
        [1];
      b_expl_temp.ir_flux_local->size[0] = raytracing_params->
        elevation_matrix->size[0];
      b_expl_temp.ir_flux_local->size[1] = raytracing_params->
        elevation_matrix->size[1];
      emxEnsureCapacity_real_T(sp, b_expl_temp.ir_flux_local, i1, &dc_emlrtRTEI);
      loop_ub = raytracing_params->elevation_matrix->size[0] *
        raytracing_params->elevation_matrix->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_expl_temp.ir_flux_local->data[i1] = rtNaN;
      }

      for (b_loop_ub = 0; b_loop_ub < i8; b_loop_ub++) {
        if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 > lat_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, lat_arr->size[1],
            &nc_emlrtBCI, sp);
        }

        T_bottom_limit = lat_arr->data[b_loop_ub];
        i1 = long_arr->size[1];
        for (loop_ub = 0; loop_ub < i1; loop_ub++) {
          i2 = loop_ub + 1;
          if ((i2 < 1) || (i2 > long_arr->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, long_arr->size[1], &o_emlrtBCI,
              sp);
          }

          if ((!(lat == T_bottom_limit)) || (!(b_long == long_arr->data[loop_ub])))
          {
            if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 > H_matrix->size[0])) {
              emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, H_matrix->size[0],
                &oc_emlrtBCI, sp);
            }

            if ((loop_ub + 1 < 1) || (loop_ub + 1 > H_matrix->size[1])) {
              emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, H_matrix->size[1],
                &oc_emlrtBCI, sp);
            }

            if (!(H_matrix->data[b_loop_ub + H_matrix->size[0] * loop_ub] == 0.0))
            {
              i3 = b_loop_ub + 1;
              if ((i3 < 1) || (i3 > raytracing_params->elevation_matrix->size[0]))
              {
                emlrtDynamicBoundsCheckR2012b(i3, 1,
                  raytracing_params->elevation_matrix->size[0], &n_emlrtBCI, sp);
              }

              if (i2 > raytracing_params->elevation_matrix->size[1]) {
                emlrtDynamicBoundsCheckR2012b(i2, 1,
                  raytracing_params->elevation_matrix->size[1], &m_emlrtBCI, sp);
              }

              i3 = b_loop_ub + 1;
              if ((i3 < 1) || (i3 > raytracing_params->slope_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i3, 1,
                  raytracing_params->slope_matrix->size[0], &l_emlrtBCI, sp);
              }

              if (i2 > raytracing_params->slope_matrix->size[1]) {
                emlrtDynamicBoundsCheckR2012b(i2, 1,
                  raytracing_params->slope_matrix->size[1], &k_emlrtBCI, sp);
              }

              i3 = b_loop_ub + 1;
              if ((i3 < 1) || (i3 > raytracing_params->aspect_matrix->size[0]))
              {
                emlrtDynamicBoundsCheckR2012b(i3, 1,
                  raytracing_params->aspect_matrix->size[0], &j_emlrtBCI, sp);
              }

              if (i2 > raytracing_params->aspect_matrix->size[1]) {
                emlrtDynamicBoundsCheckR2012b(i2, 1,
                  raytracing_params->aspect_matrix->size[1], &i_emlrtBCI, sp);
              }

              if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 >
                   b_expl_temp.vis_flux_local->size[0])) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1,
                  b_expl_temp.vis_flux_local->size[0], &pc_emlrtBCI, sp);
              }

              if ((loop_ub + 1 < 1) || (loop_ub + 1 >
                   b_expl_temp.vis_flux_local->size[1])) {
                emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
                  b_expl_temp.vis_flux_local->size[1], &pc_emlrtBCI, sp);
              }

              if ((b_loop_ub + 1 < 1) || (b_loop_ub + 1 >
                   b_expl_temp.ir_flux_local->size[0])) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1,
                  b_expl_temp.ir_flux_local->size[0], &qc_emlrtBCI, sp);
              }

              if ((loop_ub + 1 < 1) || (loop_ub + 1 >
                   b_expl_temp.ir_flux_local->size[1])) {
                emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
                  b_expl_temp.ir_flux_local->size[1], &qc_emlrtBCI, sp);
              }

              st.site = &i_emlrtRSI;
              scattering_coefficients(&st, lat, b_long, T_bottom_limit,
                long_arr->data[loop_ub], (real_T)long1_idx + 1.0, (real_T)
                long_idx + 1.0, (real_T)b_loop_ub + 1.0, (real_T)loop_ub + 1.0,
                h1, raytracing_params->elevation_matrix->data[b_loop_ub +
                raytracing_params->elevation_matrix->size[0] * loop_ub], slope1,
                raytracing_params->slope_matrix->data[b_loop_ub +
                raytracing_params->slope_matrix->size[0] * loop_ub], aspect1,
                raytracing_params->aspect_matrix->data[b_loop_ub +
                raytracing_params->aspect_matrix->size[0] * loop_ub], rho_d,
                raytracing_params->ref_sphere, A0_matrix,
                a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix,
                Kd, ir_normalisation, emissivity_matrix,
                raytracing_params->scattering_power,
                &b_expl_temp.vis_flux_local->data[b_loop_ub +
                b_expl_temp.vis_flux_local->size[0] * loop_ub], &T0,
                &b_expl_temp.ir_flux_local->data[b_loop_ub +
                b_expl_temp.ir_flux_local->size[0] * loop_ub], &TN,
                &Chi_OVER_350_POWER_3, &unusedU3);
            } else {
              /*  Values not needed for pixels not visible from current */
              /*  pixel */
            }
          } else {
            /*  Values not needed for current pixel */
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*         %% TIME LOOP */
      loop_ub = sample_timepoints->data[long1_idx + sample_timepoints->size[0] *
        long_idx].f1->size[0] * sample_timepoints->data[long1_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1] - 1;
      if (long1_idx > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, jd_error_3dmat->size[0] - 1,
          &ib_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &jb_emlrtBCI, sp);
      }

      i1 = jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx].
        f1->size[0] * jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] *
        long_idx].f1->size[1];
      jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx]
        .f1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, jd_error_3dmat->data[long1_idx +
        jd_error_3dmat->size[0] * long_idx].f1, i1, &ec_emlrtRTEI);
      if (long1_idx > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, jd_error_3dmat->size[0] - 1,
          &ib_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &jb_emlrtBCI, sp);
      }

      i1 = jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx].
        f1->size[0] * jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] *
        long_idx].f1->size[1];
      jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx]
        .f1->size[1] = sample_timepoints->data[long1_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      emxEnsureCapacity_real_T(sp, jd_error_3dmat->data[long1_idx +
        jd_error_3dmat->size[0] * long_idx].f1, i1, &ec_emlrtRTEI);
      i1 = jd_error_3dmat->size[0];
      i2 = jd_error_3dmat->size[1];
      if (long1_idx > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, jd_error_3dmat->size[0] - 1,
          &ib_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &jb_emlrtBCI, sp);
      }

      if (long1_idx > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, jd_error_3dmat->size[0] - 1,
          &ib_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &jb_emlrtBCI, sp);
      }

      for (i3 = 0; i3 <= loop_ub; i3++) {
        if (long1_idx > i1 - 1) {
          emlrtDynamicBoundsCheckR2012b(long1_idx, 0, i1 - 1, &rc_emlrtBCI, sp);
        }

        if (long_idx > i2 - 1) {
          emlrtDynamicBoundsCheckR2012b(long_idx, 0, i2 - 1, &rc_emlrtBCI, sp);
        }

        jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx].
          f1->data[i3] = sample_timepoints->data[long1_idx +
          sample_timepoints->size[0] * long_idx].f1->data[i3];
      }

      b_expl_temp.B_surface_local = b_matrix->data[long1_idx + b_matrix->size[0]
        * long_idx];
      b_expl_temp.thermal_emission_local = thermal_emission_matrix->
        data[long1_idx + thermal_emission_matrix->size[0] * long_idx];
      b_expl_temp.b_OVER_pi_OVER_2_POWER_8_local =
        b_OVER_pi_OVER_2_POWER_8_matrix->data[long1_idx +
        b_OVER_pi_OVER_2_POWER_8_matrix->size[0] * long_idx];
      b_expl_temp.a_OVER_pi_OVER_4_POWER_3_local =
        a_OVER_pi_OVER_4_POWER_3_matrix->data[long1_idx +
        a_OVER_pi_OVER_4_POWER_3_matrix->size[0] * long_idx];
      b_expl_temp.A0_local = A0_matrix->data[long1_idx + A0_matrix->size[0] *
        long_idx];
      i1 = c_expl_temp.decl_arr_local->size[0] *
        c_expl_temp.decl_arr_local->size[1];
      c_expl_temp.decl_arr_local->size[0] = 1;
      c_expl_temp.decl_arr_local->size[1] = raytracing_params->decl_arr->size[1];
      emxEnsureCapacity_real_T(sp, c_expl_temp.decl_arr_local, i1, &fc_emlrtRTEI);
      for (i1 = 0; i1 < f_loop_ub; i1++) {
        c_expl_temp.decl_arr_local->data[i1] = raytracing_params->decl_arr->
          data[i1];
      }

      c_expl_temp.slope = local_raytracing_params_slope;
      c_expl_temp.aspect = local_raytracing_params_aspect;
      c_expl_temp.height_px = raytracing_params->elevation_matrix->
        data[long1_idx + raytracing_params->elevation_matrix->size[0] * long_idx];
      i1 = b_T_3dmat->size[0] * b_T_3dmat->size[1] * b_T_3dmat->size[2];
      b_T_3dmat->size[0] = 1;
      b_T_3dmat->size[1] = 1;
      b_T_3dmat->size[2] = i9;
      emxEnsureCapacity_real_T(sp, b_T_3dmat, i1, &gc_emlrtRTEI);
      for (i1 = 0; i1 < g_loop_ub; i1++) {
        b_T_3dmat->data[i1] = T_3dmat->data[(long1_idx + T_3dmat->size[0] *
          long_idx) + T_3dmat->size[0] * T_3dmat->size[1] * i1];
      }

      if (long1_idx > jd_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, jd_error_3dmat->size[0] - 1,
          &rc_emlrtBCI, sp);
      }

      if (long_idx > jd_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, jd_error_3dmat->size[1] - 1,
          &rc_emlrtBCI, sp);
      }

      if (long1_idx > T_error_3dmat->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(long1_idx, 0, T_error_3dmat->size[0] - 1,
          &sc_emlrtBCI, sp);
      }

      if (long_idx > T_error_3dmat->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, T_error_3dmat->size[1] - 1,
          &sc_emlrtBCI, sp);
      }

      st.site = &j_emlrtRSI;
      shadowing_timeloop(&st, b_T_3dmat, dz_arr, &expl_temp, &b_expl_temp,
                         raytracing_params, c_expl_temp, lat, long_arr->
                         data[long_idx], jd_error_3dmat->data[long1_idx +
                         jd_error_3dmat->size[0] * long_idx].f1,
                         sample_surface_temperatures->data[long1_idx +
                         sample_surface_temperatures->size[0] * long_idx].f1,
                         Tmin_local, Tmax_local, T_error_3dmat->data[long1_idx +
                         T_error_3dmat->size[0] * long_idx].f1);
      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > Tmin_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Tmin_3dmat->size[0], &f_emlrtBCI,
          sp);
      }

      i1 = long_idx + 1;
      if ((i1 < 1) || (i1 > Tmin_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Tmin_3dmat->size[1], &e_emlrtBCI,
          sp);
      }

      iv[0] = 1;
      iv[1] = 1;
      iv[2] = Tmin_3dmat->size[2];
      emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &Tmin_local->size[0], 3,
        &emlrtECI, sp);
      loop_ub = Tmin_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Tmin_3dmat->data[(long1_idx + Tmin_3dmat->size[0] * long_idx) +
          Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * i1] = Tmin_local->data[i1];
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > Tmax_3dmat->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Tmax_3dmat->size[0], &h_emlrtBCI,
          sp);
      }

      i1 = long_idx + 1;
      if ((i1 < 1) || (i1 > Tmax_3dmat->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Tmax_3dmat->size[1], &g_emlrtBCI,
          sp);
      }

      iv[0] = 1;
      iv[1] = 1;
      iv[2] = Tmax_3dmat->size[2];
      emlrtSubAssignSizeCheckR2012b(&iv[0], 3, &Tmax_local->size[0], 3,
        &b_emlrtECI, sp);
      loop_ub = Tmax_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Tmax_3dmat->data[(long1_idx + Tmax_3dmat->size[0] * long_idx) +
          Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * i1] = Tmax_local->data[i1];
      }

      i1 = pixel_count + 1;
      if (pixel_count + 1 > 32767) {
        i1 = 32767;
      }

      pixel_count = (int16_T)i1;
      st.site = &k_emlrtRSI;
      Kd = muDoubleScalarRound(toc(&st));
      if (Kd < 2.147483648E+9) {
        if (Kd >= -2.147483648E+9) {
          b_loop_ub = (int32_T)Kd;
        } else {
          b_loop_ub = MIN_int32_T;
        }
      } else if (Kd >= 2.147483648E+9) {
        b_loop_ub = MAX_int32_T;
      } else {
        b_loop_ub = 0;
      }

      st.site = &l_emlrtRSI;
      b_st.site = &hh_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      d_st.site = &nh_emlrtRSI;
      emlrt_marshallIn(&c_st, d_feval(&c_st, emlrt_marshallOut(&c_st, cv),
        b_emlrt_marshallOut(1.0), e_emlrt_marshallOut(&d_st, cv2), &emlrtMCI),
                       "<output of feval>");

      /* hard coded length of string = 46 chars */
      st.site = &m_emlrtRSI;
      b_st.site = &y_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      d_st.site = &nh_emlrtRSI;
      emlrt_marshallIn(&c_st, feval(&c_st, emlrt_marshallOut(&c_st, cv),
        b_emlrt_marshallOut(1.0), c_emlrt_marshallOut(&d_st, cv3),
        d_emlrt_marshallOut((int16_T)i1), d_emlrt_marshallOut(i4),
        f_emlrt_marshallOut(b_loop_ub), &emlrtMCI), "<output of feval>");
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* end long */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_T_3dmat);
  emxFreeStruct_struct_T2(&c_expl_temp);
  emxFreeStruct_struct_T1(&b_expl_temp);
  emxFreeStruct_struct_T(&expl_temp);
  emxFree_real_T(&Tmax_local);
  emxFree_real_T(&Tmin_local);
  emxFree_cell_wrap_0(&sample_surface_temperatures);
  emxFree_cell_wrap_0(&sample_timepoints);
  emxFree_real_T(&Kc_3dmat);
  emxFree_real_T(&T_3dmat);
  emxFree_real_T(&b_OVER_pi_OVER_2_POWER_8_matrix);
  emxFree_real_T(&a_OVER_pi_OVER_4_POWER_3_matrix);
  emxFree_real_T(&thermal_emission_matrix);
  emxFree_real_T(&H_matrix);
  emxFree_real_T(&emissivity_matrix);
  emxFree_real_T(&b_matrix);
  emxFree_real_T(&a_matrix);
  emxFree_real_T(&A0_matrix);

  /* end lat */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (shadowing_latlon_loop.c) */
