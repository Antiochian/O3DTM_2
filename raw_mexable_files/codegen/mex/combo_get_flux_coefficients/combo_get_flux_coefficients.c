/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients.c
 *
 * Code generation for function 'combo_get_flux_coefficients'
 *
 */

/* Include files */
#include "combo_get_flux_coefficients.h"
#include "combo_get_flux_coefficients_data.h"
#include "combo_get_flux_coefficients_emxutil.h"
#include "combo_get_flux_coefficients_mexutil.h"
#include "combo_get_flux_coefficients_types.h"
#include "cosd.h"
#include "mexable_viewshed.h"
#include "mpower.h"
#include "my_geodetic2aer.h"
#include "rt_nonfinite.h"
#include "sind.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 38,    /* lineNo */
  "combo_get_flux_coefficients",       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 65,  /* lineNo */
  "combo_get_flux_coefficients",       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 79,  /* lineNo */
  "combo_get_flux_coefficients",       /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 13, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 14, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 24, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 25, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 40, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 56, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 57, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 35, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 64,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "acos",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  55,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  45,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  34,                                  /* colNo */
  "long_arr",                          /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  73,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  63,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  58,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  55,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  32,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  29,                                  /* colNo */
  "ns_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  64,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  54,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  39,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  29,                                  /* colNo */
  "ew_matrix",                         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  16,                                  /* lineNo */
  33,                                  /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  12,                                  /* colNo */
  "lat_arr",                           /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  17,                                  /* colNo */
  "long_arr",                          /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  18,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  19,                                  /* colNo */
  "aspect_matrix",                     /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  14,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  34,                                  /* colNo */
  "vis_normalisation_matrix",          /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  20,                                  /* colNo */
  "lat_arr",                           /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  24,                                  /* colNo */
  "vis_matrix",                        /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  26,                                  /* colNo */
  "elevation_matrix",                  /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  30,                                  /* colNo */
  "slope_matrix",                      /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  11,                                  /* colNo */
  "A0_matrix",                         /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  44,                                  /* colNo */
  "a_OVER_pi_OVER_4_POWER_3_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  120,                                 /* colNo */
  "b_OVER_pi_OVER_2_POWER_8_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  11,                                  /* colNo */
  "A0_matrix",                         /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  44,                                  /* colNo */
  "a_OVER_pi_OVER_4_POWER_3_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  120,                                 /* colNo */
  "b_OVER_pi_OVER_2_POWER_8_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  21,                                  /* colNo */
  "absorbed_vis_coeff_4dmat",          /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  21,                                  /* colNo */
  "scattered_vis_coeff_4dmat",         /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  15,                                  /* colNo */
  "emissivity_matrix",                 /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  15,                                  /* colNo */
  "emissivity_matrix",                 /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  21,                                  /* colNo */
  "emitted_absorbed_ir_coeff_4dmat",   /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  21,                                  /* colNo */
  "emitted_scattered_ir_coeff_4dmat",  /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  21,                                  /* colNo */
  "scattered_absorbed_ir_coeff_4dmat", /* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  21,                                  /* colNo */
  "scattered_scattered_ir_coeff_4dmat",/* aName */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo n_emlrtRTEI = { 3, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 4, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 5, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 16,/* lineNo */
  38,                                  /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 16,/* lineNo */
  58,                                  /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 38,/* lineNo */
  9,                                   /* colNo */
  "combo_get_flux_coefficients",       /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\combo_get_flux_coeffici"
  "ents.m"                             /* pName */
};

static emlrtRSInfo ie_emlrtRSI = { 64, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

void combo_get_flux_coefficients(const emlrtStack *sp, const emxArray_real_T
  *lat_arr, const emxArray_real_T *long_arr, const emxArray_real_T *slope_matrix,
  const emxArray_real_T *aspect_matrix, const emxArray_real_T *elevation_matrix,
  real_T r_moon, real_T sample_dens, const struct0_T *public_raster_struct,
  const emxArray_real_T *ew_matrix, const emxArray_real_T *ns_matrix, const
  struct1_T *ref_sphere, const emxArray_real_T *A0_matrix, const emxArray_real_T
  *a_OVER_pi_OVER_4_POWER_3_matrix, const emxArray_real_T
  *b_OVER_pi_OVER_2_POWER_8_matrix, const emxArray_real_T *a_matrix, const
  emxArray_real_T *b_matrix, const emxArray_real_T *emissivity_matrix, real_T
  scattering_power, emxArray_real_T *absorbed_vis_coeff_4dmat, emxArray_real_T
  *scattered_vis_coeff_4dmat, emxArray_real_T *emitted_absorbed_ir_coeff_4dmat,
  emxArray_real_T *c_emitted_scattered_ir_coeff_4d, emxArray_real_T
  *c_scattered_absorbed_ir_coeff_4, emxArray_real_T
  *c_scattered_scattered_ir_coeff_)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 5 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_u[5] = { '\\', 'b', '#', '\\', 'n' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *vis_matrix;
  emxArray_real_T *vis_normalisation_matrix;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T a;
  real_T albedo2;
  real_T aspect1;
  real_T az21;
  real_T cos_theta1;
  real_T cos_theta2;
  real_T curr_vis_normalisation;
  real_T d;
  real_T emission_area;
  real_T geometric_flux_coeff;
  real_T h1;
  real_T ir_normalisation;
  real_T lat1;
  real_T lat2;
  real_T long1;
  real_T slope1;
  real_T slope2;
  real_T theta1;
  real_T theta2;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T lat1_idx;
  int32_T lat2_idx;
  int32_T long1_idx;
  int32_T long2_idx;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i = absorbed_vis_coeff_4dmat->size[0] * absorbed_vis_coeff_4dmat->size[1] *
    absorbed_vis_coeff_4dmat->size[2] * absorbed_vis_coeff_4dmat->size[3];
  absorbed_vis_coeff_4dmat->size[0] = lat_arr->size[1];
  absorbed_vis_coeff_4dmat->size[1] = long_arr->size[1];
  absorbed_vis_coeff_4dmat->size[2] = lat_arr->size[1];
  absorbed_vis_coeff_4dmat->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, absorbed_vis_coeff_4dmat, i, &n_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    absorbed_vis_coeff_4dmat->data[i] = 0.0;
  }

  i = scattered_vis_coeff_4dmat->size[0] * scattered_vis_coeff_4dmat->size[1] *
    scattered_vis_coeff_4dmat->size[2] * scattered_vis_coeff_4dmat->size[3];
  scattered_vis_coeff_4dmat->size[0] = lat_arr->size[1];
  scattered_vis_coeff_4dmat->size[1] = long_arr->size[1];
  scattered_vis_coeff_4dmat->size[2] = lat_arr->size[1];
  scattered_vis_coeff_4dmat->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, scattered_vis_coeff_4dmat, i, &o_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    scattered_vis_coeff_4dmat->data[i] = 0.0;
  }

  i = emitted_absorbed_ir_coeff_4dmat->size[0] *
    emitted_absorbed_ir_coeff_4dmat->size[1] *
    emitted_absorbed_ir_coeff_4dmat->size[2] *
    emitted_absorbed_ir_coeff_4dmat->size[3];
  emitted_absorbed_ir_coeff_4dmat->size[0] = lat_arr->size[1];
  emitted_absorbed_ir_coeff_4dmat->size[1] = long_arr->size[1];
  emitted_absorbed_ir_coeff_4dmat->size[2] = lat_arr->size[1];
  emitted_absorbed_ir_coeff_4dmat->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, emitted_absorbed_ir_coeff_4dmat, i, &p_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    emitted_absorbed_ir_coeff_4dmat->data[i] = 0.0;
  }

  i = c_emitted_scattered_ir_coeff_4d->size[0] *
    c_emitted_scattered_ir_coeff_4d->size[1] *
    c_emitted_scattered_ir_coeff_4d->size[2] *
    c_emitted_scattered_ir_coeff_4d->size[3];
  c_emitted_scattered_ir_coeff_4d->size[0] = lat_arr->size[1];
  c_emitted_scattered_ir_coeff_4d->size[1] = long_arr->size[1];
  c_emitted_scattered_ir_coeff_4d->size[2] = lat_arr->size[1];
  c_emitted_scattered_ir_coeff_4d->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, c_emitted_scattered_ir_coeff_4d, i, &q_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emitted_scattered_ir_coeff_4d->data[i] = 0.0;
  }

  i = c_scattered_absorbed_ir_coeff_4->size[0] *
    c_scattered_absorbed_ir_coeff_4->size[1] *
    c_scattered_absorbed_ir_coeff_4->size[2] *
    c_scattered_absorbed_ir_coeff_4->size[3];
  c_scattered_absorbed_ir_coeff_4->size[0] = lat_arr->size[1];
  c_scattered_absorbed_ir_coeff_4->size[1] = long_arr->size[1];
  c_scattered_absorbed_ir_coeff_4->size[2] = lat_arr->size[1];
  c_scattered_absorbed_ir_coeff_4->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, c_scattered_absorbed_ir_coeff_4, i, &r_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_scattered_absorbed_ir_coeff_4->data[i] = 0.0;
  }

  i = c_scattered_scattered_ir_coeff_->size[0] *
    c_scattered_scattered_ir_coeff_->size[1] *
    c_scattered_scattered_ir_coeff_->size[2] *
    c_scattered_scattered_ir_coeff_->size[3];
  c_scattered_scattered_ir_coeff_->size[0] = lat_arr->size[1];
  c_scattered_scattered_ir_coeff_->size[1] = long_arr->size[1];
  c_scattered_scattered_ir_coeff_->size[2] = lat_arr->size[1];
  c_scattered_scattered_ir_coeff_->size[3] = long_arr->size[1];
  emxEnsureCapacity_real_T(sp, c_scattered_scattered_ir_coeff_, i, &s_emlrtRTEI);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * lat_arr->size[1] *
    long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_scattered_scattered_ir_coeff_->data[i] = 0.0;
  }

  emxInit_real_T(sp, &vis_normalisation_matrix, 2, &v_emlrtRTEI, true);
  ir_normalisation = 1.0 / (scattering_power + 1.0);

  /* hardcoded solution to integral to avoid using symbolic variables */
  i = vis_normalisation_matrix->size[0] * vis_normalisation_matrix->size[1];
  vis_normalisation_matrix->size[0] = a_matrix->size[0];
  vis_normalisation_matrix->size[1] = a_matrix->size[1];
  emxEnsureCapacity_real_T(sp, vis_normalisation_matrix, i, &t_emlrtRTEI);
  loop_ub = a_matrix->size[0] * a_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    vis_normalisation_matrix->data[i] = 3.0 * (a_matrix->data[i] /
      0.48447307312968463) * 1.869604401089358 / 4.0;
  }

  emxInit_real_T(sp, &vis_matrix, 2, &w_emlrtRTEI, true);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, *(int32_T (*)[2])
    vis_normalisation_matrix->size, &emlrtECI, sp);
  i = vis_matrix->size[0] * vis_matrix->size[1];
  vis_matrix->size[0] = b_matrix->size[0];
  vis_matrix->size[1] = b_matrix->size[1];
  emxEnsureCapacity_real_T(sp, vis_matrix, i, &u_emlrtRTEI);
  loop_ub = b_matrix->size[0] * b_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    vis_matrix->data[i] = b_matrix->data[i] / 37.064574281525665 *
      6.326151572207948;
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])A0_matrix->size, *(int32_T (*)[2])
    vis_matrix->size, &emlrtECI, sp);
  loop_ub = A0_matrix->size[0] * A0_matrix->size[1];
  i = vis_normalisation_matrix->size[0] * vis_normalisation_matrix->size[1];
  vis_normalisation_matrix->size[0] = A0_matrix->size[0];
  vis_normalisation_matrix->size[1] = A0_matrix->size[1];
  emxEnsureCapacity_real_T(sp, vis_normalisation_matrix, i, &v_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    vis_normalisation_matrix->data[i] = 1.0 / ((A0_matrix->data[i] +
      vis_normalisation_matrix->data[i]) + vis_matrix->data[i]);
  }

  /* clearvars mA mB mC; */
  i = lat_arr->size[1];
  for (lat1_idx = 0; lat1_idx < i; lat1_idx++) {
    if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > lat_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1, lat_arr->size[1],
        &n_emlrtBCI, sp);
    }

    lat1 = lat_arr->data[lat1_idx];

    /*     %% Prepare for parfor iteration */
    /*  Set up local copies so parfor works (if using parfor version of code) */
    /* Reverted this for the stripped ver. */
    loop_ub = long_arr->size[1];
    for (long1_idx = 0; long1_idx < loop_ub; long1_idx++) {
      if ((long1_idx + 1 < 1) || (long1_idx + 1 > long_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, long_arr->size[1],
          &o_emlrtBCI, sp);
      }

      long1 = long_arr->data[long1_idx];

      /*         %% Get information about current location */
      if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > slope_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1, slope_matrix->size[0],
          &p_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > slope_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, slope_matrix->size[1],
          &p_emlrtBCI, sp);
      }

      slope1 = slope_matrix->data[lat1_idx + slope_matrix->size[0] * long1_idx];
      if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > aspect_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1, aspect_matrix->size[0],
          &q_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > aspect_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, aspect_matrix->size[1],
          &q_emlrtBCI, sp);
      }

      aspect1 = aspect_matrix->data[lat1_idx + aspect_matrix->size[0] *
        long1_idx];
      if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > elevation_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1, elevation_matrix->size[0],
          &r_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > elevation_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, elevation_matrix->size[1],
          &r_emlrtBCI, sp);
      }

      h1 = elevation_matrix->data[lat1_idx + elevation_matrix->size[0] *
        long1_idx];

      /*         %% Calculate flux coefficients */
      /*  Calculate which pixels are visible from the current pixel and */
      /*  calculate values to be used in flux coeff calculation */
      /*          vis_matrix = squeeze(vis_4dmat(lat1_idx, long1_idx, :, :)); */
      st.site = &emlrtRSI;
      mexable_viewshed(&st, elevation_matrix, lat1, long_arr->data[long1_idx],
                       r_moon, r_moon, sample_dens, public_raster_struct,
                       vis_matrix);
      if (2 > ew_matrix->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, ew_matrix->size[1], &l_emlrtBCI, sp);
      }

      if (1 > ew_matrix->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ew_matrix->size[1], &j_emlrtBCI, sp);
      }

      i1 = lat1_idx + 1;
      if ((i1 < 1) || (i1 > ew_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ew_matrix->size[0], &m_emlrtBCI, sp);
      }

      i1 = lat1_idx + 1;
      if ((i1 < 1) || (i1 > ew_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ew_matrix->size[0], &k_emlrtBCI, sp);
      }

      if (1 > ns_matrix->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, ns_matrix->size[0], &i_emlrtBCI, sp);
      }

      if (2 > ns_matrix->size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, ns_matrix->size[0], &g_emlrtBCI, sp);
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > ns_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ns_matrix->size[1], &h_emlrtBCI, sp);
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > ns_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ns_matrix->size[1], &f_emlrtBCI, sp);
      }

      i1 = lat1_idx + 1;
      if ((i1 < 1) || (i1 > slope_matrix->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, slope_matrix->size[0], &e_emlrtBCI,
          sp);
      }

      i1 = long1_idx + 1;
      if ((i1 < 1) || (i1 > slope_matrix->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, slope_matrix->size[1], &d_emlrtBCI,
          sp);
      }

      cos_theta2 = slope_matrix->data[lat1_idx + slope_matrix->size[0] *
        long1_idx];
      b_cosd(&cos_theta2);
      emission_area = muDoubleScalarAbs((ew_matrix->data[lat1_idx +
        ew_matrix->size[0]] - ew_matrix->data[lat1_idx]) * (ns_matrix->
        data[ns_matrix->size[0] * long1_idx] - ns_matrix->data[ns_matrix->size[0]
        * long1_idx + 1]) / cos_theta2);

      /*  Calculate flux coefficients for each pixel visible from current */
      /*  pixel (i.e. radiation emitted from px1 which is absorbed by px2 */
      /*  and which is scattered from px2) */
      if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > vis_normalisation_matrix->size[0]))
      {
        emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
          vis_normalisation_matrix->size[0], &s_emlrtBCI, sp);
      }

      if ((long1_idx + 1 < 1) || (long1_idx + 1 > vis_normalisation_matrix->
           size[1])) {
        emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
          vis_normalisation_matrix->size[1], &s_emlrtBCI, sp);
      }

      curr_vis_normalisation = vis_normalisation_matrix->data[lat1_idx +
        vis_normalisation_matrix->size[0] * long1_idx];
      i1 = lat_arr->size[1];
      for (lat2_idx = 0; lat2_idx < i1; lat2_idx++) {
        if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > lat_arr->size[1])) {
          emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1, lat_arr->size[1],
            &t_emlrtBCI, sp);
        }

        lat2 = lat_arr->data[lat2_idx];
        i2 = long_arr->size[1];
        for (long2_idx = 0; long2_idx < i2; long2_idx++) {
          i3 = long2_idx + 1;
          if ((i3 < 1) || (i3 > long_arr->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, long_arr->size[1], &c_emlrtBCI,
              sp);
          }

          if ((!(lat1 == lat2)) || (!(long1 == long_arr->data[long2_idx]))) {
            if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > vis_matrix->size[0])) {
              emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1, vis_matrix->size[0],
                &u_emlrtBCI, sp);
            }

            if ((long2_idx + 1 < 1) || (long2_idx + 1 > vis_matrix->size[1])) {
              emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1, vis_matrix->size[1],
                &u_emlrtBCI, sp);
            }

            if (!(vis_matrix->data[lat2_idx + vis_matrix->size[0] * long2_idx] ==
                  0.0)) {
              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > elevation_matrix->size[0]))
              {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  elevation_matrix->size[0], &v_emlrtBCI, sp);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 > elevation_matrix->
                   size[1])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  elevation_matrix->size[1], &v_emlrtBCI, sp);
              }

              theta2 = elevation_matrix->data[lat2_idx + elevation_matrix->size
                [0] * long2_idx];
              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > slope_matrix->size[0]))
              {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  slope_matrix->size[0], &w_emlrtBCI, sp);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 > slope_matrix->size[1]))
              {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  slope_matrix->size[1], &w_emlrtBCI, sp);
              }

              slope2 = slope_matrix->data[lat2_idx + slope_matrix->size[0] *
                long2_idx];
              i4 = lat2_idx + 1;
              if ((i4 < 1) || (i4 > aspect_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, aspect_matrix->size[0],
                  &b_emlrtBCI, sp);
              }

              if (i3 > aspect_matrix->size[1]) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, aspect_matrix->size[1],
                  &emlrtBCI, sp);
              }

              st.site = &b_emlrtRSI;

              /*  THINGS TO REPLACE */
              /*    A0_matrix(lat1_idx, long1_idx)  */
              /*        -> polled for lat1, lon1 AND lat2, lon2, so cant change this one */
              /*    a_OVER_pi_OVER_4_POWER_3_matrix(lat1_idx, long1_idx) */
              /*    b_OVER_pi_OVER_2_POWER_8_matrix(lat1_idx, long1_idx) */
              /*    vis_normalisation_matrix(lat1_idx, long1_idx) */
              /*    emissivity_matrix(lat1_idx, long1_idx) */
              b_st.site = &wd_emlrtRSI;
              my_geodetic2aer(&b_st, lat1, long1, h1, lat2, long_arr->
                              data[long2_idx], theta2, ref_sphere->Radius,
                              ref_sphere->Flattening, &cos_theta1, &albedo2, &a);
              b_st.site = &xd_emlrtRSI;
              my_geodetic2aer(&b_st, lat2, long_arr->data[long2_idx], theta2,
                              lat1, long1, h1, ref_sphere->Radius,
                              ref_sphere->Flattening, &az21, &cos_theta2,
                              &theta1);

              /*  calculate flux coefficients           */
              theta2 = muDoubleScalarAbs(albedo2);
              geometric_flux_coeff = muDoubleScalarAbs(cos_theta2);
              cos_theta2 = 90.0 - theta2;
              b_cosd(&cos_theta2);
              d = slope1;
              b_cosd(&d);
              albedo2 = 90.0 - theta2;
              b_sind(&albedo2);
              theta1 = slope1;
              b_sind(&theta1);
              theta2 = cos_theta1 - aspect1;
              b_cosd(&theta2);
              cos_theta1 = cos_theta2 * d + albedo2 * theta1 * theta2;
              cos_theta2 = 90.0 - geometric_flux_coeff;
              b_cosd(&cos_theta2);
              d = slope2;
              b_cosd(&d);
              albedo2 = 90.0 - geometric_flux_coeff;
              b_sind(&albedo2);
              b_sind(&slope2);
              theta1 = az21 - aspect_matrix->data[lat2_idx + aspect_matrix->
                size[0] * long2_idx];
              b_cosd(&theta1);
              cos_theta2 = cos_theta2 * d + albedo2 * slope2 * theta1;
              b_st.site = &yd_emlrtRSI;
              if ((cos_theta1 < -1.0) || (cos_theta1 > 1.0)) {
                emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "acos");
              }

              theta1 = muDoubleScalarAcos(cos_theta1);
              b_st.site = &ae_emlrtRSI;
              if ((cos_theta2 < -1.0) || (cos_theta2 > 1.0)) {
                emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "acos");
              }

              theta2 = muDoubleScalarAcos(cos_theta2);

              /*  SCATTERING FUNCTION ############################################################################################# */
              /*  geometric_flux_coeff is fraction of radiation emitted */
              /*  from px1 which can be absorbed by px2 (assuming */
              /*  perfect zero albedo) */
              /*  absorbed_flux_coeff is fraction of radiation emitted */
              /*  from px1 which is absorbed by px2 (accounting for */
              /*  albedo) */
              /*  scattered_flux_coeff is fraction of radiation from */
              /*  px1 which is incident on px2 but is re-scattered due */
              /*  to albedo */
              /*  Geometric */
              b_st.site = &be_emlrtRSI;
              c_st.site = &d_emlrtRSI;
              geometric_flux_coeff = cos_theta1 * cos_theta2 * emission_area /
                (12.566370614359172 * (a * a));
              if ((geometric_flux_coeff < 0.0) || (geometric_flux_coeff > 1.0) ||
                  (cos_theta1 < 0.0) || (cos_theta2 < 0.0)) {
                /*  run check to ensure physical coefficient */
                geometric_flux_coeff = 0.0;
              }

              /*  Visible */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > A0_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1, A0_matrix->size[0],
                  &x_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 > A0_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1, A0_matrix->size
                  [1], &x_emlrtBCI, &st);
              }

              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   a_OVER_pi_OVER_4_POWER_3_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  a_OVER_pi_OVER_4_POWER_3_matrix->size[0], &y_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   a_OVER_pi_OVER_4_POWER_3_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  a_OVER_pi_OVER_4_POWER_3_matrix->size[1], &y_emlrtBCI, &st);
              }

              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   b_OVER_pi_OVER_2_POWER_8_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  b_OVER_pi_OVER_2_POWER_8_matrix->size[0], &ab_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   b_OVER_pi_OVER_2_POWER_8_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  b_OVER_pi_OVER_2_POWER_8_matrix->size[1], &ab_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > A0_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1, A0_matrix->size[0],
                  &bb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 > A0_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1, A0_matrix->size
                  [1], &bb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   a_OVER_pi_OVER_4_POWER_3_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  a_OVER_pi_OVER_4_POWER_3_matrix->size[0], &cb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   a_OVER_pi_OVER_4_POWER_3_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  a_OVER_pi_OVER_4_POWER_3_matrix->size[1], &cb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   b_OVER_pi_OVER_2_POWER_8_matrix->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  b_OVER_pi_OVER_2_POWER_8_matrix->size[0], &db_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   b_OVER_pi_OVER_2_POWER_8_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  b_OVER_pi_OVER_2_POWER_8_matrix->size[1], &db_emlrtBCI, &st);
              }

              albedo2 = (A0_matrix->data[lat2_idx + A0_matrix->size[0] *
                         long2_idx] + a_OVER_pi_OVER_4_POWER_3_matrix->
                         data[lat2_idx + a_OVER_pi_OVER_4_POWER_3_matrix->size[0]
                         * long2_idx] * theta2 * theta2 * theta2) +
                b_OVER_pi_OVER_2_POWER_8_matrix->data[lat2_idx +
                b_OVER_pi_OVER_2_POWER_8_matrix->size[0] * long2_idx] * theta2 *
                theta2 * theta2 * theta2 * theta2 * theta2 * theta2 * theta2;
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   absorbed_vis_coeff_4dmat->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  absorbed_vis_coeff_4dmat->size[0], &eb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   absorbed_vis_coeff_4dmat->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  absorbed_vis_coeff_4dmat->size[1], &eb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   absorbed_vis_coeff_4dmat->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  absorbed_vis_coeff_4dmat->size[2], &eb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   absorbed_vis_coeff_4dmat->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  absorbed_vis_coeff_4dmat->size[3], &eb_emlrtBCI, &st);
              }

              theta2 = curr_vis_normalisation * ((A0_matrix->data[lat1_idx +
                A0_matrix->size[0] * long1_idx] +
                a_OVER_pi_OVER_4_POWER_3_matrix->data[lat1_idx +
                a_OVER_pi_OVER_4_POWER_3_matrix->size[0] * long1_idx] * theta1 *
                theta1 * theta1) + b_OVER_pi_OVER_2_POWER_8_matrix->
                data[lat1_idx + b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
                long1_idx] * theta1 * theta1 * theta1 * theta1 * theta1 * theta1
                * theta1 * theta1) * geometric_flux_coeff;
              absorbed_vis_coeff_4dmat->data[((lat1_idx +
                absorbed_vis_coeff_4dmat->size[0] * long1_idx) +
                absorbed_vis_coeff_4dmat->size[0] *
                absorbed_vis_coeff_4dmat->size[1] * lat2_idx) +
                absorbed_vis_coeff_4dmat->size[0] *
                absorbed_vis_coeff_4dmat->size[1] *
                absorbed_vis_coeff_4dmat->size[2] * long2_idx] = theta2 * (1.0 -
                albedo2);

              /*  scattered from 1, absorbed by 2 */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   scattered_vis_coeff_4dmat->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  scattered_vis_coeff_4dmat->size[0], &fb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   scattered_vis_coeff_4dmat->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  scattered_vis_coeff_4dmat->size[1], &fb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   scattered_vis_coeff_4dmat->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  scattered_vis_coeff_4dmat->size[2], &fb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   scattered_vis_coeff_4dmat->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  scattered_vis_coeff_4dmat->size[3], &fb_emlrtBCI, &st);
              }

              scattered_vis_coeff_4dmat->data[((lat1_idx +
                scattered_vis_coeff_4dmat->size[0] * long1_idx) +
                scattered_vis_coeff_4dmat->size[0] *
                scattered_vis_coeff_4dmat->size[1] * lat2_idx) +
                scattered_vis_coeff_4dmat->size[0] *
                scattered_vis_coeff_4dmat->size[1] *
                scattered_vis_coeff_4dmat->size[2] * long2_idx] = theta2 *
                albedo2;

              /*  scattered from 1, scattered by 2 */
              /*  IR */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 > emissivity_matrix->size
                   [0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  emissivity_matrix->size[0], &gb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   emissivity_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  emissivity_matrix->size[1], &gb_emlrtBCI, &st);
              }

              b_st.site = &ce_emlrtRSI;
              albedo2 = emissivity_matrix->data[lat1_idx +
                emissivity_matrix->size[0] * long1_idx] * mpower(&b_st,
                cos_theta1, scattering_power);
              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 > emissivity_matrix->size
                   [0])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  emissivity_matrix->size[0], &hb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   emissivity_matrix->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  emissivity_matrix->size[1], &hb_emlrtBCI, &st);
              }

              b_st.site = &de_emlrtRSI;
              theta1 = emissivity_matrix->data[lat2_idx +
                emissivity_matrix->size[0] * long2_idx] * mpower(&b_st,
                cos_theta2, scattering_power);
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   emitted_absorbed_ir_coeff_4dmat->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  emitted_absorbed_ir_coeff_4dmat->size[0], &ib_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   emitted_absorbed_ir_coeff_4dmat->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  emitted_absorbed_ir_coeff_4dmat->size[1], &ib_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   emitted_absorbed_ir_coeff_4dmat->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  emitted_absorbed_ir_coeff_4dmat->size[2], &ib_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   emitted_absorbed_ir_coeff_4dmat->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  emitted_absorbed_ir_coeff_4dmat->size[3], &ib_emlrtBCI, &st);
              }

              theta2 = ir_normalisation * albedo2 * geometric_flux_coeff;
              emitted_absorbed_ir_coeff_4dmat->data[((lat1_idx +
                emitted_absorbed_ir_coeff_4dmat->size[0] * long1_idx) +
                emitted_absorbed_ir_coeff_4dmat->size[0] *
                emitted_absorbed_ir_coeff_4dmat->size[1] * lat2_idx) +
                emitted_absorbed_ir_coeff_4dmat->size[0] *
                emitted_absorbed_ir_coeff_4dmat->size[1] *
                emitted_absorbed_ir_coeff_4dmat->size[2] * long2_idx] = theta2 *
                theta1;

              /*  emitted from 1, absorbed by 2 */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   c_emitted_scattered_ir_coeff_4d->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  c_emitted_scattered_ir_coeff_4d->size[0], &jb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   c_emitted_scattered_ir_coeff_4d->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  c_emitted_scattered_ir_coeff_4d->size[1], &jb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   c_emitted_scattered_ir_coeff_4d->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  c_emitted_scattered_ir_coeff_4d->size[2], &jb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   c_emitted_scattered_ir_coeff_4d->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  c_emitted_scattered_ir_coeff_4d->size[3], &jb_emlrtBCI, &st);
              }

              c_emitted_scattered_ir_coeff_4d->data[((lat1_idx +
                c_emitted_scattered_ir_coeff_4d->size[0] * long1_idx) +
                c_emitted_scattered_ir_coeff_4d->size[0] *
                c_emitted_scattered_ir_coeff_4d->size[1] * lat2_idx) +
                c_emitted_scattered_ir_coeff_4d->size[0] *
                c_emitted_scattered_ir_coeff_4d->size[1] *
                c_emitted_scattered_ir_coeff_4d->size[2] * long2_idx] = theta2 *
                (1.0 - theta1);

              /*  emitted from 1, scattered by 2 */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   c_scattered_absorbed_ir_coeff_4->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  c_scattered_absorbed_ir_coeff_4->size[0], &kb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   c_scattered_absorbed_ir_coeff_4->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  c_scattered_absorbed_ir_coeff_4->size[1], &kb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   c_scattered_absorbed_ir_coeff_4->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  c_scattered_absorbed_ir_coeff_4->size[2], &kb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   c_scattered_absorbed_ir_coeff_4->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  c_scattered_absorbed_ir_coeff_4->size[3], &kb_emlrtBCI, &st);
              }

              theta2 = (1.0 - albedo2) * geometric_flux_coeff;
              c_scattered_absorbed_ir_coeff_4->data[((lat1_idx +
                c_scattered_absorbed_ir_coeff_4->size[0] * long1_idx) +
                c_scattered_absorbed_ir_coeff_4->size[0] *
                c_scattered_absorbed_ir_coeff_4->size[1] * lat2_idx) +
                c_scattered_absorbed_ir_coeff_4->size[0] *
                c_scattered_absorbed_ir_coeff_4->size[1] *
                c_scattered_absorbed_ir_coeff_4->size[2] * long2_idx] = theta2 *
                theta1;

              /*  scattered from 1, absorbed by 2 */
              if ((lat1_idx + 1 < 1) || (lat1_idx + 1 >
                   c_scattered_scattered_ir_coeff_->size[0])) {
                emlrtDynamicBoundsCheckR2012b(lat1_idx + 1, 1,
                  c_scattered_scattered_ir_coeff_->size[0], &lb_emlrtBCI, &st);
              }

              if ((long1_idx + 1 < 1) || (long1_idx + 1 >
                   c_scattered_scattered_ir_coeff_->size[1])) {
                emlrtDynamicBoundsCheckR2012b(long1_idx + 1, 1,
                  c_scattered_scattered_ir_coeff_->size[1], &lb_emlrtBCI, &st);
              }

              if ((lat2_idx + 1 < 1) || (lat2_idx + 1 >
                   c_scattered_scattered_ir_coeff_->size[2])) {
                emlrtDynamicBoundsCheckR2012b(lat2_idx + 1, 1,
                  c_scattered_scattered_ir_coeff_->size[2], &lb_emlrtBCI, &st);
              }

              if ((long2_idx + 1 < 1) || (long2_idx + 1 >
                   c_scattered_scattered_ir_coeff_->size[3])) {
                emlrtDynamicBoundsCheckR2012b(long2_idx + 1, 1,
                  c_scattered_scattered_ir_coeff_->size[3], &lb_emlrtBCI, &st);
              }

              c_scattered_scattered_ir_coeff_->data[((lat1_idx +
                c_scattered_scattered_ir_coeff_->size[0] * long1_idx) +
                c_scattered_scattered_ir_coeff_->size[0] *
                c_scattered_scattered_ir_coeff_->size[1] * lat2_idx) +
                c_scattered_scattered_ir_coeff_->size[0] *
                c_scattered_scattered_ir_coeff_->size[1] *
                c_scattered_scattered_ir_coeff_->size[2] * long2_idx] = theta2 *
                (1.0 - theta1);

              /*  scattered from 1, scattered by 2 */
              /*                     %% ################################################################################################################# */
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

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    st.site = &c_emlrtRSI;
    b_st.site = &fe_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(1.0);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 5, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    c_st.site = &ie_emlrtRSI;
    emlrt_marshallIn(&c_st, c_feval(&c_st, y, b_y, c_y, &d_emlrtMCI),
                     "<output of feval>");
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&vis_matrix);
  emxFree_real_T(&vis_normalisation_matrix);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
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

/* End of code generation (combo_get_flux_coefficients.c) */
