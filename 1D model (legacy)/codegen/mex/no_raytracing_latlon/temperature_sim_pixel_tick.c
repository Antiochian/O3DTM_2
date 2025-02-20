/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temperature_sim_pixel_tick.c
 *
 * Code generation for function 'temperature_sim_pixel_tick'
 *
 */

/* Include files */
#include "temperature_sim_pixel_tick.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_mexutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 88,  /* lineNo */
  9,                                   /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pName */
};

static emlrtRSInfo hg_emlrtRSI = { 53, /* lineNo */
  "temperature_sim_pixel_tick",        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 79, /* lineNo */
  "temperature_sim_pixel_tick",        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 88, /* lineNo */
  "temperature_sim_pixel_tick",        /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pathName */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  11,                                  /* colNo */
  "T_new_arr",                         /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  21,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  15,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  17,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 97, /* lineNo */
  17,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  121,                                 /* colNo */
  "dz_arr",                            /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  94,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  77,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  107,                                 /* colNo */
  "dz_arr",                            /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  93,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  82,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  30,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  11,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  30,                                  /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 47, /* lineNo */
  30,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  59,                                  /* colNo */
  "dz_arr",                            /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 48, /* lineNo */
  59,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  97,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 48, /* lineNo */
  97,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  5,                                   /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 48, /* lineNo */
  5,                                   /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  47,                                  /* colNo */
  "dz_arr",                            /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 98, /* lineNo */
  47,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  83,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 98, /* lineNo */
  83,                                  /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  1,                                   /* colNo */
  "T_new_arr",                         /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 98, /* lineNo */
  1,                                   /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  17,                                  /* colNo */
  "p_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  34,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "q_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  33,                                  /* colNo */
  "Kc_3dmat_local",                    /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  37,                                  /* colNo */
  "rho_matrix_local",                  /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  132,                                 /* colNo */
  "T_arr",                             /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  5,                                   /* colNo */
  "T_new_arr",                         /* aName */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m",                             /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo kj_emlrtRTEI = { 3,/* lineNo */
  1,                                   /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "temperature_sim_pixel_tick",        /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\temperature_sim_pixel_t"
  "ick.m"                              /* pName */
};

/* Function Definitions */
void temperature_sim_pixel_tick(const emlrtStack *sp, const emxArray_real_T
  *T_prev_arr, const struct_T *temperature_parameters, const b_struct_T
  *local_temperature_params, real_T theta_local, real_T *bottom_layer_idx_local,
  real_T *depth_update_wait_t_local, real_T t_relative_sec, const
  emxArray_real_T *dz_arr, emxArray_real_T *T_new_arr)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 43 };

  static const int32_T iv3[2] = { 1, 45 };

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
  emxArray_real_T *T_arr;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T dv[1];
  real_T Chi_OVER_350_POWER_3;
  real_T K_value;
  real_T T;
  real_T T_above_matrix;
  real_T break_iter;
  real_T difference;
  real_T thermal_emission_local;
  int32_T i;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &T_arr, 3, &kj_emlrtRTEI, true);
  loop_ub = T_prev_arr->size[2];
  i = T_arr->size[0] * T_arr->size[1] * T_arr->size[2];
  T_arr->size[0] = 1;
  T_arr->size[1] = 1;
  T_arr->size[2] = T_prev_arr->size[2];
  emxEnsureCapacity_real_T(sp, T_arr, i, &kj_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    T_arr->data[i] = T_prev_arr->data[i];
  }

  i = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
  T_new_arr->size[0] = 1;
  T_new_arr->size[1] = 1;
  T_new_arr->size[2] = T_prev_arr->size[2];
  emxEnsureCapacity_real_T(sp, T_new_arr, i, &lj_emlrtRTEI);
  loop_ub = T_prev_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    T_new_arr->data[i] = rtNaN;
  }

  Chi_OVER_350_POWER_3 = temperature_parameters->Chi_OVER_350_POWER_3;

  /* unpack local params */
  thermal_emission_local = local_temperature_params->thermal_emission_local;

  /*  vis_flux_local = local_temperature_params.vis_flux_local; */
  /*  ir_flux_local = local_temperature_params.ir_flux_local; */
  /*  Increase simulation depth */
  if ((*bottom_layer_idx_local < temperature_parameters->num_layers) &&
      (t_relative_sec > *depth_update_wait_t_local)) {
    /*  extend simulation by 1 layer, using bottom BC to define new */
    /*  temperature */
    *depth_update_wait_t_local +=
      temperature_parameters->depth_update_t_interval;
    (*bottom_layer_idx_local)++;

    /*  T_arr or T_3dmat_local??? */
    difference = *bottom_layer_idx_local - 1.0;
    if (difference != (int32_T)muDoubleScalarFloor(difference)) {
      emlrtIntegerCheckR2012b(difference, &gb_emlrtDCI, sp);
    }

    if (((int32_T)difference < 1) || ((int32_T)difference > T_prev_arr->size[2]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)difference, 1, T_prev_arr->size[2],
        &sg_emlrtBCI, sp);
    }

    T_above_matrix = T_prev_arr->data[(int32_T)(*bottom_layer_idx_local - 1.0) -
      1];
    difference = *bottom_layer_idx_local - 1.0;
    if (difference != (int32_T)muDoubleScalarFloor(difference)) {
      emlrtIntegerCheckR2012b(difference, &hb_emlrtDCI, sp);
    }

    if (((int32_T)difference < 1) || ((int32_T)difference > dz_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)difference, 1, dz_arr->size[1],
        &tg_emlrtBCI, sp);
    }

    K_value = *bottom_layer_idx_local - 1.0;
    if (K_value != (int32_T)muDoubleScalarFloor(K_value)) {
      emlrtIntegerCheckR2012b(K_value, &ib_emlrtDCI, sp);
    }

    if (((int32_T)K_value < 1) || ((int32_T)K_value >
         local_temperature_params->Kc_3dmat_local->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)K_value, 1,
        local_temperature_params->Kc_3dmat_local->size[2], &ug_emlrtBCI, sp);
    }

    if (*bottom_layer_idx_local != (int32_T)muDoubleScalarFloor
        (*bottom_layer_idx_local)) {
      emlrtIntegerCheckR2012b(*bottom_layer_idx_local, &jb_emlrtDCI, sp);
    }

    i = (int32_T)*bottom_layer_idx_local;
    if ((i < 1) || (i > T_prev_arr->size[2])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, T_prev_arr->size[2], &vg_emlrtBCI, sp);
    }

    T_arr->data[i - 1] = T_above_matrix + dz_arr->data[(int32_T)difference - 1] *
      temperature_parameters->Q / (local_temperature_params->
      Kc_3dmat_local->data[(int32_T)K_value - 1] *
      (temperature_parameters->Chi_OVER_350_POWER_3 * T_above_matrix *
       T_above_matrix * T_above_matrix + 1.0));
  }

  /*  Calculate Q_local */
  st.site = &hg_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  st.site = &hg_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  T_above_matrix = (1.0 - ((local_temperature_params->A0_local +
    local_temperature_params->a_OVER_pi_OVER_4_POWER_3_local *
    muDoubleScalarPower(theta_local, 3.0)) +
    local_temperature_params->b_OVER_pi_OVER_2_POWER_8_local *
    muDoubleScalarPower(theta_local, 8.0))) *
    temperature_parameters->S_OVER_R_AU2 * muDoubleScalarCos(theta_local);
  dv[0] = T_above_matrix;
  loop_ub = 0;
  if (muDoubleScalarIsNaN(T_above_matrix)) {
    loop_ub = 1;
  }

  if (0 <= loop_ub - 1) {
    dv[0] = 0.0;
  }

  /*  Qsun_scattered = solar_albedo*S_OVER_R_AU2*cos_theta; */
  /*  Qsun_scattered(isnan(Qsun_scattered)) = 0; */
  /*  sigmaT4 = stefans_constant*T_arr(1); */
  /*  Qabsorbed_vis = vis_flux_local*Qsun_scattered; */
  /*  Qabsorbed_ir = ir_flux_local*sigmaT4; */
  /* convert to double? */
  /*  Q_surface = double(Qabsorbed_ir + Qabsorbed_vis + Qsun); */
  /*  Surface BC */
  break_iter = 0.0;
  difference = temperature_parameters->surface_bc_test_difference + 1.0;
  if (1 > T_arr->size[2]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, T_arr->size[2], &rg_emlrtBCI, sp);
  }

  T = T_arr->data[0];

  /* surface temperature */
  /*  Root finding */
  T_above_matrix = T_arr->data[0];
  exitg1 = false;
  while ((!exitg1) && (difference >
                       temperature_parameters->surface_bc_test_difference)) {
    if (1 > local_temperature_params->Kc_3dmat_local->size[2]) {
      emlrtDynamicBoundsCheckR2012b(1, 1,
        local_temperature_params->Kc_3dmat_local->size[2], &qg_emlrtBCI, sp);
    }

    K_value = local_temperature_params->Kc_3dmat_local->data[0] *
      (Chi_OVER_350_POWER_3 * T * T * T + 1.0);
    if (2 > T_arr->size[2]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, T_arr->size[2], &pg_emlrtBCI, sp);
    }

    if (3 > T_arr->size[2]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, T_arr->size[2], &og_emlrtBCI, sp);
    }

    if (1 > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, dz_arr->size[1], &ng_emlrtBCI, sp);
    }

    if (2 > T_arr->size[2]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, T_arr->size[2], &mg_emlrtBCI, sp);
    }

    if (3 > T_arr->size[2]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, T_arr->size[2], &lg_emlrtBCI, sp);
    }

    if (1 > dz_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, dz_arr->size[1], &kg_emlrtBCI, sp);
    }

    T_above_matrix = T - ((thermal_emission_local * T * T * T * T - dv[0]) -
                          K_value * (((-3.0 * T + 4.0 * T_arr->data[1]) -
      T_arr->data[2]) / (2.0 * dz_arr->data[0]))) / ((4.0 *
      thermal_emission_local * T * T * T - 3.0 *
      local_temperature_params->B_surface_local * T * T * (((4.0 * T_arr->data[1]
      - 3.0 * T) - T_arr->data[2]) / (2.0 * temperature_parameters->dz))) + 3.0 /
      (2.0 * dz_arr->data[0]) * K_value);
    if (T_above_matrix <= 0.0) {
      /* fprintf('\nNegative T in surface BC, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
      st.site = &ig_emlrtRSI;
      b_st.site = &kg_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m);
      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 43, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      c_st.site = &pg_emlrtRSI;
      emlrt_marshallIn(&c_st, d_feval(&c_st, y, b_y, d_y, &emlrtMCI),
                       "<output of feval>");
      T_above_matrix = rtNaN;
      exitg1 = true;
    } else {
      difference = muDoubleScalarAbs(T_above_matrix - T);
      T = T_above_matrix;
      break_iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      if (break_iter > temperature_parameters->surface_bc_break_counter) {
        /* fprintf('\nSurface BC iteration limit, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
        emlrtAssertMATLABThread(sp, &emlrtRTEI);
        st.site = &jg_emlrtRSI;
        b_st.site = &kg_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
        emlrtAssign(&c_y, m);
        e_y = NULL;
        m = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&e_y, m);
        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv3[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &pg_emlrtRSI;
        T_above_matrix = emlrt_marshallIn(&c_st, d_feval(&c_st, c_y, e_y, f_y,
          &emlrtMCI), "<output of feval>");
        g_y = NULL;
        m = emlrtCreateDoubleScalar(T_above_matrix);
        emlrtAssign(&g_y, m);
        emlrtDisplayR2012b(g_y, "ans", &emlrtRTEI, sp);
        T_above_matrix = rtNaN;
        exitg1 = true;
      }
    }
  }

  /* WHILE LOOP END */
  if (1 > T_prev_arr->size[2]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, T_prev_arr->size[2], &gg_emlrtBCI, sp);
  }

  T_new_arr->data[0] = T_above_matrix;

  /* surface temperature */
  /*  Bottom BC */
  difference = *bottom_layer_idx_local - 1.0;
  if (difference != (int32_T)muDoubleScalarFloor(difference)) {
    emlrtIntegerCheckR2012b(difference, &fb_emlrtDCI, sp);
  }

  if (((int32_T)difference < 1) || ((int32_T)difference > T_arr->size[2])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)difference, 1, T_arr->size[2],
      &jg_emlrtBCI, sp);
  }

  difference = *bottom_layer_idx_local - 1.0;
  if (difference != (int32_T)muDoubleScalarFloor(difference)) {
    emlrtIntegerCheckR2012b(difference, &kb_emlrtDCI, sp);
  }

  if (((int32_T)difference < 1) || ((int32_T)difference > dz_arr->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)difference, 1, dz_arr->size[1],
      &wg_emlrtBCI, sp);
  }

  K_value = *bottom_layer_idx_local - 1.0;
  if (K_value != (int32_T)muDoubleScalarFloor(K_value)) {
    emlrtIntegerCheckR2012b(K_value, &lb_emlrtDCI, sp);
  }

  if (((int32_T)K_value < 1) || ((int32_T)K_value >
       local_temperature_params->Kc_3dmat_local->size[2])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)K_value, 1,
      local_temperature_params->Kc_3dmat_local->size[2], &xg_emlrtBCI, sp);
  }

  if (*bottom_layer_idx_local != (int32_T)muDoubleScalarFloor
      (*bottom_layer_idx_local)) {
    emlrtIntegerCheckR2012b(*bottom_layer_idx_local, &mb_emlrtDCI, sp);
  }

  i = (int32_T)*bottom_layer_idx_local;
  if ((i < 1) || (i > T_prev_arr->size[2])) {
    emlrtDynamicBoundsCheckR2012b(i, 1, T_prev_arr->size[2], &yg_emlrtBCI, sp);
  }

  T_above_matrix = T_arr->data[(int32_T)(*bottom_layer_idx_local - 1.0) - 1];
  T_new_arr->data[i - 1] = T_above_matrix + dz_arr->data[(int32_T)difference - 1]
    * temperature_parameters->Q / (local_temperature_params->
    Kc_3dmat_local->data[(int32_T)K_value - 1] *
    (temperature_parameters->Chi_OVER_350_POWER_3 * T_above_matrix *
     T_above_matrix * T_above_matrix + 1.0));

  /*  Middle layers */
  i = (int32_T)((*bottom_layer_idx_local - 1.0) + -1.0);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    if ((loop_ub + 2 < 1) || (loop_ub + 2 > T_arr->size[2])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 2, 1, T_arr->size[2], &ig_emlrtBCI,
        sp);
    }

    if (((int32_T)(((real_T)loop_ub + 2.0) - 1.0) < 1) || ((int32_T)(((real_T)
           loop_ub + 2.0) - 1.0) > T_arr->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(((real_T)loop_ub + 2.0) - 1.0), 1,
        T_arr->size[2], &hg_emlrtBCI, sp);
    }

    if (((int32_T)(loop_ub + 2U) < 1) || ((int32_T)(loop_ub + 2U) >
         temperature_parameters->p_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 2U), 1,
        temperature_parameters->p_arr->size[1], &ah_emlrtBCI, sp);
    }

    if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) >
         local_temperature_params->Kc_3dmat_local->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1,
        local_temperature_params->Kc_3dmat_local->size[2], &bh_emlrtBCI, sp);
    }

    T_above_matrix = temperature_parameters->p_arr->data[loop_ub + 1] *
      local_temperature_params->Kc_3dmat_local->data[loop_ub] *
      (Chi_OVER_350_POWER_3 * T_arr->data[loop_ub] * T_arr->data[loop_ub] *
       T_arr->data[loop_ub] + 1.0);
    if (((int32_T)(loop_ub + 2U) < 1) || ((int32_T)(loop_ub + 2U) >
         temperature_parameters->q_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 2U), 1,
        temperature_parameters->q_arr->size[1], &ch_emlrtBCI, sp);
    }

    if (((int32_T)(loop_ub + 2U) < 1) || ((int32_T)(loop_ub + 2U) >
         local_temperature_params->Kc_3dmat_local->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 2U), 1,
        local_temperature_params->Kc_3dmat_local->size[2], &dh_emlrtBCI, sp);
    }

    K_value = T_arr->data[loop_ub + 1];
    difference = temperature_parameters->q_arr->data[loop_ub + 1] *
      local_temperature_params->Kc_3dmat_local->data[loop_ub + 1] *
      (Chi_OVER_350_POWER_3 * K_value * K_value * K_value + 1.0);
    if (((int32_T)(loop_ub + 2U) < 1) || ((int32_T)(loop_ub + 2U) >
         local_temperature_params->rho_matrix_local->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 2U), 1,
        local_temperature_params->rho_matrix_local->size[2], &eh_emlrtBCI, sp);
    }

    if (((int32_T)(loop_ub + 3U) < 1) || ((int32_T)(loop_ub + 3U) > T_arr->size
         [2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 3U), 1, T_arr->size[2],
        &fh_emlrtBCI, sp);
    }

    if (((int32_T)(loop_ub + 2U) < 1) || ((int32_T)(loop_ub + 2U) >
         T_new_arr->size[2])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 2U), 1, T_new_arr->size
        [2], &gh_emlrtBCI, sp);
    }

    T_new_arr->data[loop_ub + 1] = K_value + temperature_parameters->dt /
      (local_temperature_params->rho_matrix_local->data[loop_ub + 1] *
       ((((temperature_parameters->c0 + temperature_parameters->c1 * K_value) +
          temperature_parameters->c2 * K_value * K_value) +
         temperature_parameters->c3 * K_value * K_value * K_value) +
        temperature_parameters->c4 * K_value * K_value * K_value * K_value)) *
      ((T_above_matrix * T_arr->data[loop_ub] - (T_above_matrix + difference) *
        K_value) + difference * T_arr->data[loop_ub + 2]);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&T_arr);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (temperature_sim_pixel_tick.c) */
