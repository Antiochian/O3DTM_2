/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_timeloop.c
 *
 * Code generation for function 'shadowing_timeloop'
 *
 */

/* Include files */
#include "shadowing_timeloop.h"
#include "eml_int_forloop_overflow_check.h"
#include "raytrace_pixel.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "temperature_sim_pixel_tick.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo jf_emlrtRSI = { 76, /* lineNo */
  "shadowing_timeloop",                /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 92, /* lineNo */
  "shadowing_timeloop",                /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 100,/* lineNo */
  "shadowing_timeloop",                /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 101,/* lineNo */
  "shadowing_timeloop",                /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 102,/* lineNo */
  "shadowing_timeloop",                /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 29, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 109,/* lineNo */
  "computeDimsData",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  116,                                 /* lineNo */
  9,                                   /* colNo */
  "T_error_local",                     /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  97,                                  /* lineNo */
  31,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  9,                                   /* colNo */
  "sample_T_bounds",                   /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  9,                                   /* colNo */
  "T_error_local",                     /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  5,                                   /* colNo */
  "sample_t_idx",                      /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  5,                                   /* colNo */
  "sample_weights",                    /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  1,                                   /* colNo */
  "sample_t_idx",                      /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 55, /* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 55, /* lineNo */
  22,                                  /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  41,                                  /* colNo */
  "sample_timepoints_local",           /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  36,                                  /* colNo */
  "sample_t_idx",                      /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  28,                                  /* colNo */
  "t_arr",                             /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  84,                                  /* lineNo */
  29,                                  /* colNo */
  "theta_arr",                         /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  62,                                  /* colNo */
  "T_new_arr",                         /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  110,                                 /* lineNo */
  56,                                  /* colNo */
  "sample_surface_temperatures_local", /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  33,                                  /* colNo */
  "sample_weights",                    /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo db_emlrtRTEI = { 52,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  40,                                  /* colNo */
  "sample_T_bounds",                   /* aName */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo jk_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 57,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 92,/* lineNo */
  97,                                  /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 64,/* lineNo */
  67,                                  /* colNo */
  "binaryMinOrMax",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\binaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 76,/* lineNo */
  1,                                   /* colNo */
  "shadowing_timeloop",                /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\shadowing_timeloop.m"/* pName */
};

/* Function Definitions */
void shadowing_timeloop(const emlrtStack *sp, const emxArray_real_T *T_arr,
  const emxArray_real_T *dz_arr, const struct_T *temperature_parameters, const
  b_struct_T *local_temperature_params, const struct1_T *raytracing_params,
  const c_struct_T local_raytracing_params, real_T lat, real_T b_long, const
  emxArray_real_T *sample_timepoints_local, const emxArray_real_T
  *c_sample_surface_temperatures_l, emxArray_real_T *Tmin_local, emxArray_real_T
  *Tmax_local, emxArray_real_T *T_error_local)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *T_new_arr;
  emxArray_real_T *b_T_new_arr;
  emxArray_real_T *sample_T_bounds;
  emxArray_real_T *sample_t_idx;
  emxArray_real_T *sample_weights;
  emxArray_real_T *theta_arr;
  emxArray_real_T *z;
  real_T bottom_layer_idx_local;
  real_T d;
  real_T depth_update_wait_t_local;
  real_T dj;
  real_T exact_idx;
  real_T lower_idx;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T sample_idx;
  uint32_T upcoming_sample_idx_ptr;
  boolean_T HAS_EVER_BEEN_ILLUMINATED;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &T_new_arr, 3, &jk_emlrtRTEI, true);

  /*  Unpack temperature params */
  /* unpack global params */
  /* seconds from 19-Feb-2000 21:10:27 */
  depth_update_wait_t_local = temperature_parameters->depth_update_wait_t_local;
  bottom_layer_idx_local = temperature_parameters->bottom_layer_idx_local;

  /*  dh = temperature_parameters.dh; */
  /*  Initialise temperature arrays from T_arr */
  i = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
  T_new_arr->size[0] = 1;
  T_new_arr->size[1] = 1;
  T_new_arr->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, T_new_arr, i, &jk_emlrtRTEI);
  loop_ub = T_arr->size[0] * T_arr->size[1] * T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    T_new_arr->data[i] = T_arr->data[i];
  }

  i = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
  Tmax_local->size[0] = 1;
  Tmax_local->size[1] = 1;
  Tmax_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, Tmax_local, i, &kk_emlrtRTEI);
  loop_ub = T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmax_local->data[i] = rtNaN;
  }

  i = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
  Tmin_local->size[0] = 1;
  Tmin_local->size[1] = 1;
  Tmin_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(sp, Tmin_local, i, &lk_emlrtRTEI);
  loop_ub = T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmin_local->data[i] = rtNaN;
  }

  /*  Unpack raytracing params */
  /*  max_distance = raytracing_params.max_distance; */
  /*  ref_sphere = raytracing_params.ref_sphere; */
  /*  extended_elevation_matrix = raytracing_params.extended_elevation_matrix; */
  /*  const_decl = raytracing_params.const_decl; */
  /*  public_raster_struct = raytracing_params.public_raster_struct; */
  /*  height_px = local_raytracing_params.height_px; */
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
  /* weight them such that for target times EG: [1.3, 6.8, 7.0] we have: */
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
  emxEnsureCapacity_real_T(sp, T_error_local, i, &mk_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    T_error_local->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_t_idx, 2, &nk_emlrtRTEI, true);
  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[0] = 1;
  emxEnsureCapacity_real_T(sp, sample_t_idx, i, &nk_emlrtRTEI);
  d = 2.0 * (real_T)sample_timepoints_local->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, sp);
  }

  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, sample_t_idx, i, &nk_emlrtRTEI);
  d = 2.0 * (real_T)sample_timepoints_local->size[1];
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    sample_t_idx->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_weights, 2, &ok_emlrtRTEI, true);
  loop_ub = sample_timepoints_local->size[1];
  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[0] = 1;
  sample_weights->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, sample_weights, i, &ok_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    sample_weights->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &sample_T_bounds, 2, &pk_emlrtRTEI, true);
  loop_ub = sample_timepoints_local->size[1] << 1;
  i = sample_T_bounds->size[0] * sample_T_bounds->size[1];
  sample_T_bounds->size[0] = 1;
  sample_T_bounds->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, sample_T_bounds, i, &pk_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    sample_T_bounds->data[i] = rtNaN;
  }

  i = sample_timepoints_local->size[1];
  for (sample_idx = 0; sample_idx < i; sample_idx++) {
    i1 = sample_timepoints_local->size[1];
    loop_ub = sample_idx + 1;
    if ((loop_ub < 1) || (loop_ub > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &tg_emlrtBCI, sp);
    }

    exact_idx = (sample_timepoints_local->data[sample_idx] -
                 raytracing_params->start_julian_date) / dj;
    lower_idx = muDoubleScalarFloor(exact_idx);
    if (((int32_T)(sample_idx + 1U) < 1) || ((int32_T)(sample_idx + 1U) >
         sample_weights->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(sample_idx + 1U), 1,
        sample_weights->size[1], &rg_emlrtBCI, sp);
    }

    sample_weights->data[sample_idx] = exact_idx - lower_idx;
    d = 2.0 * ((real_T)sample_idx + 1.0);
    loop_ub = sample_t_idx->size[1];
    if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) > sample_t_idx->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1, sample_t_idx->size[1],
        &qg_emlrtBCI, sp);
    }

    sample_t_idx->data[(int32_T)(d + -1.0) - 1] = lower_idx;
    if (((int32_T)d < 1) || ((int32_T)d > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, loop_ub, &qg_emlrtBCI, sp);
    }

    sample_t_idx->data[(int32_T)d - 1] = muDoubleScalarCeil(exact_idx);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  if (sample_t_idx->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(sample_t_idx->size[1], 1, sample_t_idx->size[1],
      &sg_emlrtBCI, sp);
  }

  sample_t_idx->data[sample_t_idx->size[1] - 1] = 0.0;

  /* dummy value, never reached */
  /* track the currently-in-demand t_idx using a pointer index "upcoming_sample_idx_ptr" */
  /*  and "upcoming_sample_idx" for the actual value (save lookup time) */
  upcoming_sample_idx_ptr = 1U;

  /* this redundant phrasing is to demonstrate how the update process works */
  if (1 > sample_t_idx->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, sample_t_idx->size[1], &ug_emlrtBCI, sp);
  }

  emxInit_real_T(sp, &theta_arr, 2, &sk_emlrtRTEI, true);
  dj = sample_t_idx->data[0];
  st.site = &jf_emlrtRSI;
  raytrace_pixel(&st, lat, b_long, raytracing_params->t_calculation_step_length,
                 raytracing_params->t_calculation_steps,
                 raytracing_params->t_steps,
                 &raytracing_params->public_raster_struct,
                 raytracing_params->extended_sample_dens,
                 raytracing_params->ref_sphere,
                 raytracing_params->extended_elevation_matrix,
                 raytracing_params->max_distance,
                 local_raytracing_params.height_px,
                 local_raytracing_params.aspect, local_raytracing_params.slope,
                 local_raytracing_params.h_arr_local,
                 local_raytracing_params.decl_arr_local, theta_arr);
  HAS_EVER_BEEN_ILLUMINATED = false;

  /* Bool to check if sunlight *EVER* reaches this point. */
  /*  do time sim */
  i = temperature_parameters->t_arr->size[1];
  emxInit_real_T(sp, &z, 3, &ae_emlrtRTEI, true);
  emxInit_real_T(sp, &b_T_new_arr, 3, &qk_emlrtRTEI, true);
  for (sample_idx = 0; sample_idx < i; sample_idx++) {
    i1 = sample_idx + 1;
    if ((i1 < 1) || (i1 > temperature_parameters->t_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, temperature_parameters->t_arr->size[1],
        &vg_emlrtBCI, sp);
    }

    /* seconds since diviner start data */
    /*     %% Calculate theta */
    if (i1 > theta_arr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, theta_arr->size[1], &wg_emlrtBCI, sp);
    }

    if ((!HAS_EVER_BEEN_ILLUMINATED) && (!muDoubleScalarIsNaN(theta_arr->
          data[sample_idx]))) {
      HAS_EVER_BEEN_ILLUMINATED = true;
    }

    /*     %% Calculate temps */
    i1 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
    b_T_new_arr->size[0] = 1;
    b_T_new_arr->size[1] = 1;
    b_T_new_arr->size[2] = T_new_arr->size[2];
    emxEnsureCapacity_real_T(sp, b_T_new_arr, i1, &qk_emlrtRTEI);
    loop_ub = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2] - 1;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_T_new_arr->data[i1] = T_new_arr->data[i1];
    }

    st.site = &kf_emlrtRSI;
    temperature_sim_pixel_tick(&st, b_T_new_arr, temperature_parameters,
      local_temperature_params, theta_arr->data[sample_idx],
      &bottom_layer_idx_local, &depth_update_wait_t_local,
      temperature_parameters->t_arr->data[sample_idx], dz_arr, T_new_arr);

    /*  %% FIND TEST ERRORS */
    if ((real_T)sample_idx + 1.0 == dj) {
      if (1 > T_new_arr->size[2]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, T_new_arr->size[2], &xg_emlrtBCI, sp);
      }

      if (((int32_T)upcoming_sample_idx_ptr < 1) || ((int32_T)
           upcoming_sample_idx_ptr > sample_T_bounds->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)upcoming_sample_idx_ptr, 1,
          sample_T_bounds->size[1], &og_emlrtBCI, sp);
      }

      sample_T_bounds->data[(int32_T)upcoming_sample_idx_ptr - 1] =
        T_new_arr->data[0];
      upcoming_sample_idx_ptr++;
      if (((int32_T)upcoming_sample_idx_ptr < 1) || ((int32_T)
           upcoming_sample_idx_ptr > sample_t_idx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)upcoming_sample_idx_ptr, 1,
          sample_t_idx->size[1], &ng_emlrtBCI, sp);
      }

      dj = sample_t_idx->data[(int32_T)upcoming_sample_idx_ptr - 1];
    }

    if ((temperature_parameters->t_arr->data[sample_idx] >=
         temperature_parameters->P * temperature_parameters->t_wait) &&
        HAS_EVER_BEEN_ILLUMINATED) {
      /* don't save min/max unless element has been illuminated at least once */
      st.site = &lf_emlrtRSI;
      i1 = T_new_arr->size[2];
      b_st.site = &ih_emlrtRSI;
      c_st.site = &jh_emlrtRSI;
      loop_ub = 1;
      if (T_new_arr->size[2] > 1) {
        loop_ub = T_new_arr->size[2];
      }

      if (T_new_arr->size[2] > muIntScalarMax_sint32(i1, loop_ub)) {
        emlrtErrorWithMessageIdR2018a(&st, &db_emlrtRTEI,
          "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }

      st.site = &mf_emlrtRSI;
      b_st.site = &pe_emlrtRSI;
      c_st.site = &qe_emlrtRSI;
      d_st.site = &re_emlrtRSI;
      e_st.site = &se_emlrtRSI;
      i1 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
      b_T_new_arr->size[0] = 1;
      b_T_new_arr->size[1] = 1;
      b_T_new_arr->size[2] = Tmin_local->size[2];
      emxEnsureCapacity_real_T(&e_st, b_T_new_arr, i1, &rk_emlrtRTEI);
      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_T_new_arr->data[i1] = Tmin_local->data[i1];
      }

      f_st.site = &pc_emlrtRSI;
      if (Tmin_local->size[2] <= T_new_arr->size[2]) {
        i1 = Tmin_local->size[2];
      } else {
        i1 = T_new_arr->size[2];
      }

      loop_ub = z->size[0] * z->size[1] * z->size[2];
      z->size[0] = 1;
      z->size[1] = 1;
      if (Tmin_local->size[2] <= T_new_arr->size[2]) {
        z->size[2] = Tmin_local->size[2];
      } else {
        z->size[2] = T_new_arr->size[2];
      }

      emxEnsureCapacity_real_T(&f_st, z, loop_ub, &xe_emlrtRTEI);
      if (!c_dimagree(z, Tmin_local, T_new_arr)) {
        emlrtErrorWithMessageIdR2018a(&f_st, &m_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      Tmin_local->size[0] = 1;
      Tmin_local->size[1] = 1;
      Tmin_local->size[2] = i1;
      emxEnsureCapacity_real_T(&e_st, Tmin_local, loop_ub, &ae_emlrtRTEI);
      f_st.site = &qc_emlrtRSI;
      g_st.site = &rc_emlrtRSI;
      if ((1 <= z->size[2]) && (z->size[2] > 2147483646)) {
        h_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        Tmin_local->data[loop_ub] = muDoubleScalarMin(b_T_new_arr->data[loop_ub],
          T_new_arr->data[loop_ub]);
      }

      st.site = &nf_emlrtRSI;
      b_st.site = &bg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      d_st.site = &dg_emlrtRSI;
      e_st.site = &se_emlrtRSI;
      i1 = b_T_new_arr->size[0] * b_T_new_arr->size[1] * b_T_new_arr->size[2];
      b_T_new_arr->size[0] = 1;
      b_T_new_arr->size[1] = 1;
      b_T_new_arr->size[2] = Tmax_local->size[2];
      emxEnsureCapacity_real_T(&e_st, b_T_new_arr, i1, &rk_emlrtRTEI);
      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_T_new_arr->data[i1] = Tmax_local->data[i1];
      }

      f_st.site = &pc_emlrtRSI;
      if (Tmax_local->size[2] <= T_new_arr->size[2]) {
        i1 = Tmax_local->size[2];
      } else {
        i1 = T_new_arr->size[2];
      }

      loop_ub = z->size[0] * z->size[1] * z->size[2];
      z->size[0] = 1;
      z->size[1] = 1;
      if (Tmax_local->size[2] <= T_new_arr->size[2]) {
        z->size[2] = Tmax_local->size[2];
      } else {
        z->size[2] = T_new_arr->size[2];
      }

      emxEnsureCapacity_real_T(&f_st, z, loop_ub, &xe_emlrtRTEI);
      if (!c_dimagree(z, Tmax_local, T_new_arr)) {
        emlrtErrorWithMessageIdR2018a(&f_st, &m_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      Tmax_local->size[0] = 1;
      Tmax_local->size[1] = 1;
      Tmax_local->size[2] = i1;
      emxEnsureCapacity_real_T(&e_st, Tmax_local, loop_ub, &ae_emlrtRTEI);
      f_st.site = &qc_emlrtRSI;
      g_st.site = &rc_emlrtRSI;
      if ((1 <= z->size[2]) && (z->size[2] > 2147483646)) {
        h_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
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
  emxFree_real_T(&theta_arr);
  emxFree_real_T(&sample_t_idx);
  emxFree_real_T(&T_new_arr);

  /*  Interpolate errors */
  if (HAS_EVER_BEEN_ILLUMINATED) {
    /* save errors like normal */
    i = sample_timepoints_local->size[1];
    for (sample_idx = 0; sample_idx < i; sample_idx++) {
      i1 = sample_idx + 1;
      if ((i1 < 1) || (i1 > c_sample_surface_temperatures_l->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1,
          c_sample_surface_temperatures_l->size[1], &yg_emlrtBCI, sp);
      }

      d = 2.0 * ((real_T)sample_idx + 1.0);
      if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) >
           sample_T_bounds->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1,
          sample_T_bounds->size[1], &bh_emlrtBCI, sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > sample_T_bounds->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, sample_T_bounds->size[1],
          &bh_emlrtBCI, sp);
      }

      if (i1 > sample_weights->size[1]) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, sample_weights->size[1],
          &ah_emlrtBCI, sp);
      }

      if (((int32_T)(sample_idx + 1U) < 1) || ((int32_T)(sample_idx + 1U) >
           T_error_local->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(sample_idx + 1U), 1,
          T_error_local->size[1], &mg_emlrtBCI, sp);
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
  } else {
    /* don't save errors, leave NaN */
    i = sample_timepoints_local->size[1];
    for (sample_idx = 0; sample_idx < i; sample_idx++) {
      if (((int32_T)(sample_idx + 1U) < 1) || ((int32_T)(sample_idx + 1U) >
           T_error_local->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(sample_idx + 1U), 1,
          T_error_local->size[1], &pg_emlrtBCI, sp);
      }

      T_error_local->data[sample_idx] = rtNaN;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  emxFree_real_T(&sample_T_bounds);
  emxFree_real_T(&sample_weights);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (shadowing_timeloop.c) */
