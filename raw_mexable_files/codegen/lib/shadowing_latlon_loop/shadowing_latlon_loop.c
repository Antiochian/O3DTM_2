/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "shadowing_latlon_loop.h"
#include "colon.h"
#include "cosd.h"
#include "mark_diviner_testpoints.h"
#include "mexable_viewshed.h"
#include "my_geodetic2aer.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_initialize.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "shadowing_timeloop.h"
#include "sind.h"
#include "tic.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>

/* Function Definitions */
/*
 * Generate a list of times and temperatures to compare the model to and
 *  save results.
 * Arguments    : const emxArray_real_T *z_arr
 *                double bottom_layer_idx
 *                double depth_update_wait_t
 *                double depth_update_t_interval
 *                double num_layers
 *                double t_limit
 *                double t_wait
 *                const emxArray_real_T *rho_matrix
 *                const emxArray_real_T *lat_arr
 *                const emxArray_real_T *long_arr
 *                const emxArray_real_T *dz_arr
 *                double dz
 *                const struct0_T *parameters
 *                const emxArray_real_T *init_temps
 *                const struct1_T *raytracing_params
 *                const emxArray_real_T *ew_matrix
 *                const emxArray_real_T *ns_matrix
 *                double start_jd
 *                double end_jd
 *                const struct4_T *diviner_data
 *                boolean_T recent_only
 *                emxArray_real_T *Tmax_3dmat
 *                emxArray_real_T *Tmin_3dmat
 *                emxArray_cell_wrap_0 *jd_error_3dmat
 *                emxArray_cell_wrap_0 *T_error_3dmat
 * Return Type  : void
 */
void shadowing_latlon_loop(const emxArray_real_T *z_arr, double bottom_layer_idx,
  double depth_update_wait_t, double depth_update_t_interval, double num_layers,
  double t_limit, double t_wait, const emxArray_real_T *rho_matrix, const
  emxArray_real_T *lat_arr, const emxArray_real_T *long_arr, const
  emxArray_real_T *dz_arr, double dz, const struct0_T *parameters, const
  emxArray_real_T *init_temps, const struct1_T *raytracing_params, const
  emxArray_real_T *ew_matrix, const emxArray_real_T *ns_matrix, double start_jd,
  double end_jd, const struct4_T *diviner_data, boolean_T recent_only,
  emxArray_real_T *Tmax_3dmat, emxArray_real_T *Tmin_3dmat, emxArray_cell_wrap_0
  *jd_error_3dmat, emxArray_cell_wrap_0 *T_error_3dmat)
{
  b_struct_T expl_temp;
  c_struct_T b_expl_temp;
  d_struct_T c_expl_temp;
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
  double Chi_OVER_350_POWER_3;
  double Kd;
  double T0;
  double TN;
  double T_bottom_limit;
  double a;
  double aspect1;
  double az21;
  double b_long;
  double c_local_raytracing_params_heigh;
  double curr_vis_normalisation;
  double d;
  double d1;
  double emission_area;
  double ir_normalisation;
  double lat;
  double lat2;
  double local_raytracing_params_aspect;
  double local_raytracing_params_slope;
  double r_moon;
  double rho_d;
  double slope1;
  int b_loop_ub;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int f_loop_ub;
  int i;
  int i1;
  int i3;
  int i4;
  int i5;
  int i6;
  int i7;
  int lat1_idx;
  int layer_idx;
  int long1_idx;
  int long_idx;
  int loop_ub;
  int vlen;
  short i2;
  short pixel_count;
  if (!isInitialized_shadowing_latlon_loop_compiled) {
    shadowing_latlon_loop_initialize();
  }

  emxInit_real_T(&A0_matrix, 2);
  emxInit_cell_wrap_0(&sample_timepoints, 2);
  emxInit_cell_wrap_0(&sample_surface_temperatures, 2);
  mark_diviner_testpoints(start_jd, end_jd, lat_arr, long_arr,
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
  emxEnsureCapacity_real_T(A0_matrix, i);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    A0_matrix->data[i] = parameters->A0;
  }

  emxInit_real_T(&a_matrix, 2);
  i = a_matrix->size[0] * a_matrix->size[1];
  a_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  a_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(a_matrix, i);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    a_matrix->data[i] = parameters->a;
  }

  emxInit_real_T(&b_matrix, 2);
  i = b_matrix->size[0] * b_matrix->size[1];
  b_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  b_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(b_matrix, i);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_matrix->data[i] = parameters->b;
  }

  emxInit_real_T(&emissivity_matrix, 2);
  i = emissivity_matrix->size[0] * emissivity_matrix->size[1];
  emissivity_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  emissivity_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(emissivity_matrix, i);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    emissivity_matrix->data[i] = parameters->emissivity;
  }

  emxInit_real_T(&H_matrix, 2);
  i = H_matrix->size[0] * H_matrix->size[1];
  H_matrix->size[0] = raytracing_params->elevation_matrix->size[0];
  H_matrix->size[1] = raytracing_params->elevation_matrix->size[1];
  emxEnsureCapacity_real_T(H_matrix, i);
  loop_ub = raytracing_params->elevation_matrix->size[0] *
    raytracing_params->elevation_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    H_matrix->data[i] = parameters->H;
  }

  emxInit_real_T(&thermal_emission_matrix, 2);

  /*  pre-calculate constant parameters */
  i = thermal_emission_matrix->size[0] * thermal_emission_matrix->size[1];
  thermal_emission_matrix->size[0] = emissivity_matrix->size[0];
  thermal_emission_matrix->size[1] = emissivity_matrix->size[1];
  emxEnsureCapacity_real_T(thermal_emission_matrix, i);
  loop_ub = emissivity_matrix->size[0] * emissivity_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    thermal_emission_matrix->data[i] = emissivity_matrix->data[i] *
      parameters->stefans_constant;
  }

  emxInit_real_T(&a_OVER_pi_OVER_4_POWER_3_matrix, 2);
  Chi_OVER_350_POWER_3 = parameters->Chi * 2.3323615160349852E-8;
  i = a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
    a_OVER_pi_OVER_4_POWER_3_matrix->size[1];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[0] = a_matrix->size[0];
  a_OVER_pi_OVER_4_POWER_3_matrix->size[1] = a_matrix->size[1];
  emxEnsureCapacity_real_T(a_OVER_pi_OVER_4_POWER_3_matrix, i);
  loop_ub = a_matrix->size[0] * a_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    a_OVER_pi_OVER_4_POWER_3_matrix->data[i] = a_matrix->data[i] *
      2.0640982037247677;
  }

  emxInit_real_T(&b_OVER_pi_OVER_2_POWER_8_matrix, 2);
  i = b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
    b_OVER_pi_OVER_2_POWER_8_matrix->size[1];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[0] = b_matrix->size[0];
  b_OVER_pi_OVER_2_POWER_8_matrix->size[1] = b_matrix->size[1];
  emxEnsureCapacity_real_T(b_OVER_pi_OVER_2_POWER_8_matrix, i);
  loop_ub = b_matrix->size[0] * b_matrix->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_OVER_pi_OVER_2_POWER_8_matrix->data[i] = b_matrix->data[i] *
      0.026979940263294394;
  }

  emxInit_real_T(&T_3dmat, 3);

  /*  Initialise Temperatures */
  i = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  T_3dmat->size[0] = lat_arr->size[1];
  T_3dmat->size[1] = long_arr->size[1];
  T_3dmat->size[2] = (int)num_layers;
  emxEnsureCapacity_real_T(T_3dmat, i);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * (int)num_layers;
  for (i = 0; i < loop_ub; i++) {
    T_3dmat->data[i] = rtNaN;
  }

  i = lat_arr->size[1];
  for (lat1_idx = 0; lat1_idx < i; lat1_idx++) {
    /*     %% Prepare for parfor iteration */
    i1 = long_arr->size[1];
    for (long1_idx = 0; long1_idx < i1; long1_idx++) {
      T0 = init_temps->data[lat1_idx + init_temps->size[0] * long1_idx];
      TN = T0 / 1.4142135623730951;
      if (TN < T_bottom_limit) {
        /*  set roughly constant initial temperature profile for very */
        /*  cold regions */
        TN = T_bottom_limit;
      }

      loop_ub = (int)num_layers;
      for (layer_idx = 0; layer_idx < loop_ub; layer_idx++) {
        d = H_matrix->data[lat1_idx + H_matrix->size[0] * long1_idx];
        if ((d == 0.0) && (z_arr->data[layer_idx] == 0.0)) {
          T_3dmat->data[(lat1_idx + T_3dmat->size[0] * long1_idx) +
            T_3dmat->size[0] * T_3dmat->size[1] * layer_idx] = T0;
        } else {
          T_3dmat->data[(lat1_idx + T_3dmat->size[0] * long1_idx) +
            T_3dmat->size[0] * T_3dmat->size[1] * layer_idx] = TN - (TN - T0) *
            exp(-z_arr->data[layer_idx] / d);
        }
      }
    }
  }

  /*  Generate vis normalisation matrix */
  /* hardcoded solution to integral to avoid using symbolic variables */
  loop_ub = A0_matrix->size[0] * A0_matrix->size[1];
  i = a_matrix->size[0] * a_matrix->size[1];
  a_matrix->size[0] = A0_matrix->size[0];
  a_matrix->size[1] = A0_matrix->size[1];
  emxEnsureCapacity_real_T(a_matrix, i);
  for (i = 0; i < loop_ub; i++) {
    a_matrix->data[i] = 1.0 / ((A0_matrix->data[i] + 3.0 * (a_matrix->data[i] /
      0.48447307312968463) * 1.869604401089358 / 4.0) + b_matrix->data[i] /
      37.064574281525665 * 6.326151572207948);
  }

  /* clearvars mA mB mC; */
  /*  Old prog starts */
  i = Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * Tmax_3dmat->size[2];
  Tmax_3dmat->size[0] = T_3dmat->size[0];
  Tmax_3dmat->size[1] = T_3dmat->size[1];
  Tmax_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(Tmax_3dmat, i);
  loop_ub = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmax_3dmat->data[i] = -300.0;
  }

  /*  Tmax_dtm_3dmat = NaN(size(T_3dmat)); %date-tracking was removed (but */
  /*  could be readded pretty easily) */
  i = Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * Tmin_3dmat->size[2];
  Tmin_3dmat->size[0] = T_3dmat->size[0];
  Tmin_3dmat->size[1] = T_3dmat->size[1];
  Tmin_3dmat->size[2] = T_3dmat->size[2];
  emxEnsureCapacity_real_T(Tmin_3dmat, i);
  loop_ub = T_3dmat->size[0] * T_3dmat->size[1] * T_3dmat->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmin_3dmat->data[i] = 600.0;
  }

  emxInit_real_T(&Kc_3dmat, 3);

  /*  Tmin_dtm_3dmat = NaN(size(T_3dmat)); */
  /*  Prepare for loop */
  /*  Prepare for loop by pre-calculating constant values which do not need to */
  /*  be calculated every iteration (therefore increasing performance) */
  i = Kc_3dmat->size[0] * Kc_3dmat->size[1] * Kc_3dmat->size[2];
  Kc_3dmat->size[0] = lat_arr->size[1];
  Kc_3dmat->size[1] = long_arr->size[1];
  Kc_3dmat->size[2] = (int)num_layers;
  emxEnsureCapacity_real_T(Kc_3dmat, i);
  loop_ub = lat_arr->size[1] * long_arr->size[1] * (int)num_layers;
  for (i = 0; i < loop_ub; i++) {
    Kc_3dmat->data[i] = rtNaN;
  }

  i = b_matrix->size[0] * b_matrix->size[1];
  b_matrix->size[0] = lat_arr->size[1];
  b_matrix->size[1] = long_arr->size[1];
  emxEnsureCapacity_real_T(b_matrix, i);
  loop_ub = lat_arr->size[1] * long_arr->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_matrix->data[i] = 0.0;
  }

  /* PREALLOC */
  i = lat_arr->size[1];
  for (long1_idx = 0; long1_idx < i; long1_idx++) {
    i1 = long_arr->size[1];
    for (long_idx = 0; long_idx < i1; long_idx++) {
      loop_ub = (int)num_layers;
      for (layer_idx = 0; layer_idx < loop_ub; layer_idx++) {
        Kc_3dmat->data[(long1_idx + Kc_3dmat->size[0] * long_idx) +
          Kc_3dmat->size[0] * Kc_3dmat->size[1] * layer_idx] = Kd - (Kd -
          parameters->Ks) * (rho_d - rho_matrix->data[(long1_idx +
          rho_matrix->size[0] * long_idx) + rho_matrix->size[0] *
                             rho_matrix->size[1] * layer_idx]) / (rho_d -
          parameters->rho_s);
      }

      b_matrix->data[long1_idx + b_matrix->size[0] * long_idx] = Kc_3dmat->
        data[long1_idx + Kc_3dmat->size[0] * long_idx] * Chi_OVER_350_POWER_3;
    }
  }

  emxInitStruct_struct_T(&expl_temp);
  i = expl_temp.p_arr->size[0] * expl_temp.p_arr->size[1];
  expl_temp.p_arr->size[0] = 1;
  expl_temp.p_arr->size[1] = (int)num_layers;
  emxEnsureCapacity_real_T(expl_temp.p_arr, i);
  loop_ub = (int)num_layers;
  for (i = 0; i < loop_ub; i++) {
    expl_temp.p_arr->data[i] = rtNaN;
  }

  i = expl_temp.q_arr->size[0] * expl_temp.q_arr->size[1];
  expl_temp.q_arr->size[0] = 1;
  expl_temp.q_arr->size[1] = (int)num_layers;
  emxEnsureCapacity_real_T(expl_temp.q_arr, i);
  loop_ub = (int)num_layers;
  for (i = 0; i < loop_ub; i++) {
    expl_temp.q_arr->data[i] = rtNaN;
  }

  i = (int)((num_layers - 1.0) + -1.0);
  for (layer_idx = 0; layer_idx < i; layer_idx++) {
    d = dz_arr->data[layer_idx + 1];
    d1 = dz_arr->data[layer_idx];
    rho_d = d * d1 * (d + d1);
    expl_temp.p_arr->data[layer_idx + 1] = 2.0 * d / rho_d;
    expl_temp.q_arr->data[layer_idx + 1] = 2.0 * d1 / rho_d;
  }

  /*  CREATE TEMPERATURE PARAMETERS */
  /*  set general parameters */
  if (rtIsNaN(parameters->dt) || rtIsNaN(t_limit)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(expl_temp.t_arr, i);
    expl_temp.t_arr->data[0] = rtNaN;
  } else if ((parameters->dt == 0.0) || ((0.0 < t_limit) && (parameters->dt <
               0.0)) || ((t_limit < 0.0) && (parameters->dt > 0.0))) {
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 0;
  } else if (rtIsInf(t_limit) && (rtIsInf(parameters->dt) || (0.0 == t_limit)))
  {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(expl_temp.t_arr, i);
    expl_temp.t_arr->data[0] = rtNaN;
  } else if (rtIsInf(parameters->dt)) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    expl_temp.t_arr->size[1] = 1;
    emxEnsureCapacity_real_T(expl_temp.t_arr, i);
    expl_temp.t_arr->data[0] = 0.0;
  } else if (floor(parameters->dt) == parameters->dt) {
    i = expl_temp.t_arr->size[0] * expl_temp.t_arr->size[1];
    expl_temp.t_arr->size[0] = 1;
    loop_ub = (int)floor(t_limit / parameters->dt);
    expl_temp.t_arr->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(expl_temp.t_arr, i);
    for (i = 0; i <= loop_ub; i++) {
      expl_temp.t_arr->data[i] = parameters->dt * (double)i;
    }
  } else {
    eml_float_colon(parameters->dt, t_limit, expl_temp.t_arr);
  }

  /*  SIMULATION START */
  pixel_count = 0;
  d = (double)lat_arr->size[1] * (double)long_arr->size[1];
  if (d < 32768.0) {
    if (d >= -32768.0) {
      i2 = (short)d;
    } else {
      i2 = MIN_int16_T;
    }
  } else {
    i2 = MAX_int16_T;
  }

  printf("Started  pixel:  %5d / %5d in %7d seconds\n", 0, i2, 0);
  fflush(stdout);
  tic();
  i = lat_arr->size[1];
  i1 = jd_error_3dmat->size[0] * jd_error_3dmat->size[1];
  jd_error_3dmat->size[0] = lat_arr->size[1];
  jd_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(jd_error_3dmat, i1);
  i1 = T_error_3dmat->size[0] * T_error_3dmat->size[1];
  T_error_3dmat->size[0] = lat_arr->size[1];
  T_error_3dmat->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(T_error_3dmat, i1);
  if (0 <= lat_arr->size[1] - 1) {
    i3 = long_arr->size[1];
    if (0 <= long_arr->size[1] - 1) {
      vlen = long_arr->size[1];
      b_loop_ub = raytracing_params->h_arr->size[0] * raytracing_params->
        h_arr->size[1];
      i4 = Kc_3dmat->size[2];
      c_loop_ub = Kc_3dmat->size[2];
      i5 = rho_matrix->size[2];
      d_loop_ub = rho_matrix->size[2];
      i6 = lat_arr->size[1];
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
      e_loop_ub = raytracing_params->decl_arr->size[0] *
        raytracing_params->decl_arr->size[1];
      i7 = T_3dmat->size[2];
      f_loop_ub = T_3dmat->size[2];
    }
  }

  emxInit_real_T(&Tmin_local, 3);
  emxInit_real_T(&Tmax_local, 3);
  emxInitStruct_struct_T1(&b_expl_temp);
  emxInitStruct_struct_T2(&c_expl_temp);
  emxInit_real_T(&b_T_3dmat, 3);
  for (long1_idx = 0; long1_idx < i; long1_idx++) {
    lat = lat_arr->data[long1_idx];
    for (long_idx = 0; long_idx < i3; long_idx++) {
      /*          long = long_arr(long_idx); */
      /*         %% RAYTRACING PREP SEGMENT */
      b_long = long_arr->data[long_idx];
      slope1 = raytracing_params->slope_matrix->data[long1_idx +
        raytracing_params->slope_matrix->size[0] * long_idx];
      aspect1 = raytracing_params->aspect_matrix->data[long1_idx +
        raytracing_params->aspect_matrix->size[0] * long_idx];
      c_local_raytracing_params_heigh = raytracing_params->
        elevation_matrix->data[long1_idx + raytracing_params->
        elevation_matrix->size[0] * long_idx];
      if (lat >= 0.0) {
        local_raytracing_params_aspect = aspect1;
        local_raytracing_params_slope = slope1;
      } else {
        local_raytracing_params_aspect = -aspect1;
        local_raytracing_params_slope = -slope1;
      }

      if (long_arr->size[1] == 0) {
        Kd = 0.0;
      } else {
        Kd = long_arr->data[0];
        for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
          Kd += long_arr->data[loop_ub - 1];
        }
      }

      Kd /= (double)long_arr->size[1];
      i1 = c_expl_temp.h_arr_local->size[0] * c_expl_temp.h_arr_local->size[1];
      c_expl_temp.h_arr_local->size[0] = 1;
      c_expl_temp.h_arr_local->size[1] = raytracing_params->h_arr->size[1];
      emxEnsureCapacity_real_T(c_expl_temp.h_arr_local, i1);
      rho_d = long_arr->data[long_idx];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        c_expl_temp.h_arr_local->data[i1] = (raytracing_params->h_arr->data[i1]
          + rho_d) - Kd;
      }

      /* what is this? */
      /*         %% TEMPERATURE PREP SEGMENT */
      i1 = b_expl_temp.Kc_3dmat_local->size[0] *
        b_expl_temp.Kc_3dmat_local->size[1] * b_expl_temp.Kc_3dmat_local->size[2];
      b_expl_temp.Kc_3dmat_local->size[0] = 1;
      b_expl_temp.Kc_3dmat_local->size[1] = 1;
      b_expl_temp.Kc_3dmat_local->size[2] = i4;
      emxEnsureCapacity_real_T(b_expl_temp.Kc_3dmat_local, i1);
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        b_expl_temp.Kc_3dmat_local->data[i1] = Kc_3dmat->data[(long1_idx +
          Kc_3dmat->size[0] * long_idx) + Kc_3dmat->size[0] * Kc_3dmat->size[1] *
          i1];
      }

      i1 = b_expl_temp.rho_matrix_local->size[0] *
        b_expl_temp.rho_matrix_local->size[1] *
        b_expl_temp.rho_matrix_local->size[2];
      b_expl_temp.rho_matrix_local->size[0] = 1;
      b_expl_temp.rho_matrix_local->size[1] = 1;
      b_expl_temp.rho_matrix_local->size[2] = i5;
      emxEnsureCapacity_real_T(b_expl_temp.rho_matrix_local, i1);
      for (i1 = 0; i1 < d_loop_ub; i1++) {
        b_expl_temp.rho_matrix_local->data[i1] = rho_matrix->data[(long1_idx +
          rho_matrix->size[0] * long_idx) + rho_matrix->size[0] *
          rho_matrix->size[1] * i1];
      }

      /*         %% GENERATE 1-BOUNCE FLUX COEFFICIENT ON-THE-FLY */
      mexable_viewshed(raytracing_params->elevation_matrix, lat, long_arr->
                       data[long_idx], r_moon, r_moon,
                       raytracing_params->sample_dens,
                       &raytracing_params->public_raster_struct, H_matrix);
      d = slope1;
      b_cosd(&d);
      emission_area = fabs((ew_matrix->data[long1_idx + ew_matrix->size[0]] -
                            ew_matrix->data[long1_idx]) * (ns_matrix->
        data[ns_matrix->size[0] * long_idx] - ns_matrix->data[ns_matrix->size[0]
        * long_idx + 1]) / d);
      curr_vis_normalisation = a_matrix->data[long1_idx + a_matrix->size[0] *
        long_idx];
      i1 = b_expl_temp.vis_flux_local->size[0] *
        b_expl_temp.vis_flux_local->size[1];
      b_expl_temp.vis_flux_local->size[0] = raytracing_params->
        elevation_matrix->size[0];
      b_expl_temp.vis_flux_local->size[1] = raytracing_params->
        elevation_matrix->size[1];
      emxEnsureCapacity_real_T(b_expl_temp.vis_flux_local, i1);
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
      emxEnsureCapacity_real_T(b_expl_temp.ir_flux_local, i1);
      loop_ub = raytracing_params->elevation_matrix->size[0] *
        raytracing_params->elevation_matrix->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_expl_temp.ir_flux_local->data[i1] = rtNaN;
      }

      for (loop_ub = 0; loop_ub < i6; loop_ub++) {
        lat2 = lat_arr->data[loop_ub];
        i1 = long_arr->size[1];
        for (lat1_idx = 0; lat1_idx < i1; lat1_idx++) {
          if (((!(lat == lat2)) || (!(b_long == long_arr->data[lat1_idx]))) && (
               !(H_matrix->data[loop_ub + H_matrix->size[0] * lat1_idx] == 0.0)))
          {
            rho_d = raytracing_params->elevation_matrix->data[loop_ub +
              raytracing_params->elevation_matrix->size[0] * lat1_idx];
            Chi_OVER_350_POWER_3 = raytracing_params->slope_matrix->data[loop_ub
              + raytracing_params->slope_matrix->size[0] * lat1_idx];

            /*  THINGS TO REPLACE */
            /*    A0_matrix(lat1_idx, long1_idx)  */
            /*        -> polled for lat1, lon1 AND lat2, lon2, so cant change this one */
            /*    a_OVER_pi_OVER_4_POWER_3_matrix(lat1_idx, long1_idx) */
            /*    b_OVER_pi_OVER_2_POWER_8_matrix(lat1_idx, long1_idx) */
            /*    vis_normalisation_matrix(lat1_idx, long1_idx) */
            /*    emissivity_matrix(lat1_idx, long1_idx) */
            my_geodetic2aer(lat, b_long, c_local_raytracing_params_heigh, lat2,
                            long_arr->data[lat1_idx], rho_d,
                            raytracing_params->ref_sphere.Radius,
                            raytracing_params->ref_sphere.Flattening, &TN, &Kd,
                            &a);
            my_geodetic2aer(lat2, long_arr->data[lat1_idx], rho_d, lat, b_long,
                            c_local_raytracing_params_heigh,
                            raytracing_params->ref_sphere.Radius,
                            raytracing_params->ref_sphere.Flattening, &az21, &T0,
                            &T_bottom_limit);

            /*  calculate flux coefficients           */
            Kd = fabs(Kd);
            T0 = fabs(T0);
            d = 90.0 - Kd;
            b_cosd(&d);
            d1 = slope1;
            b_cosd(&d1);
            Kd = 90.0 - Kd;
            b_sind(&Kd);
            T_bottom_limit = slope1;
            b_sind(&T_bottom_limit);
            rho_d = TN - aspect1;
            b_cosd(&rho_d);
            TN = d * d1 + Kd * T_bottom_limit * rho_d;
            d = 90.0 - T0;
            b_cosd(&d);
            d1 = Chi_OVER_350_POWER_3;
            b_cosd(&d1);
            Kd = 90.0 - T0;
            b_sind(&Kd);
            b_sind(&Chi_OVER_350_POWER_3);
            T_bottom_limit = az21 - raytracing_params->aspect_matrix->
              data[loop_ub + raytracing_params->aspect_matrix->size[0] *
              lat1_idx];
            b_cosd(&T_bottom_limit);
            Kd = d * d1 + Kd * Chi_OVER_350_POWER_3 * T_bottom_limit;
            T_bottom_limit = acos(TN);
            T0 = acos(Kd);

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
            rho_d = TN * Kd * emission_area / (12.566370614359172 * (a * a));
            if ((rho_d < 0.0) || (rho_d > 1.0) || (TN < 0.0) || (Kd < 0.0)) {
              /*  run check to ensure physical coefficient */
              rho_d = 0.0;
            }

            /*  Visible */
            /*  scattered from 1, absorbed by 2 */
            /*  scattered from 1, scattered by 2 */
            /*  IR */
            /*  emitted from 1, absorbed by 2 */
            /*  emitted from 1, scattered by 2 */
            /*  scattered from 1, absorbed by 2 */
            /*  scattered from 1, scattered by 2 */
            b_expl_temp.vis_flux_local->data[loop_ub +
              b_expl_temp.vis_flux_local->size[0] * lat1_idx] =
              curr_vis_normalisation * ((A0_matrix->data[long1_idx +
              A0_matrix->size[0] * long_idx] +
              a_OVER_pi_OVER_4_POWER_3_matrix->data[long1_idx +
              a_OVER_pi_OVER_4_POWER_3_matrix->size[0] * long_idx] *
              T_bottom_limit * T_bottom_limit * T_bottom_limit) +
              b_OVER_pi_OVER_2_POWER_8_matrix->data[long1_idx +
              b_OVER_pi_OVER_2_POWER_8_matrix->size[0] * long_idx] *
              T_bottom_limit * T_bottom_limit * T_bottom_limit * T_bottom_limit *
              T_bottom_limit * T_bottom_limit * T_bottom_limit * T_bottom_limit)
              * rho_d * (1.0 - ((A0_matrix->data[loop_ub + A0_matrix->size[0] *
                                 lat1_idx] +
                                 a_OVER_pi_OVER_4_POWER_3_matrix->data[loop_ub +
                                 a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
                                 lat1_idx] * T0 * T0 * T0) +
                                b_OVER_pi_OVER_2_POWER_8_matrix->data[loop_ub +
                                b_OVER_pi_OVER_2_POWER_8_matrix->size[0] *
                                lat1_idx] * T0 * T0 * T0 * T0 * T0 * T0 * T0 *
                                T0));
            b_expl_temp.ir_flux_local->data[loop_ub +
              b_expl_temp.ir_flux_local->size[0] * lat1_idx] = ir_normalisation *
              (emissivity_matrix->data[long1_idx + emissivity_matrix->size[0] *
               long_idx] * rt_powd_snf(TN, raytracing_params->scattering_power))
              * rho_d * (emissivity_matrix->data[loop_ub +
                         emissivity_matrix->size[0] * lat1_idx] * rt_powd_snf(Kd,
              raytracing_params->scattering_power));
          } else {
            /*  Values not needed for current pixel */
            /*  Values not needed for pixels not visible from current */
            /*  pixel */
          }
        }
      }

      /*         %% TIME LOOP */
      i1 = jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx].
        f1->size[0] * jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] *
        long_idx].f1->size[1];
      jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx]
        .f1->size[0] = 1;
      jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx]
        .f1->size[1] = sample_timepoints->data[long1_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      emxEnsureCapacity_real_T(jd_error_3dmat->data[long1_idx +
        jd_error_3dmat->size[0] * long_idx].f1, i1);
      loop_ub = sample_timepoints->data[long1_idx + sample_timepoints->size[0] *
        long_idx].f1->size[0] * sample_timepoints->data[long1_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        jd_error_3dmat->data[long1_idx + jd_error_3dmat->size[0] * long_idx].
          f1->data[i1] = sample_timepoints->data[long1_idx +
          sample_timepoints->size[0] * long_idx].f1->data[i1];
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
      emxEnsureCapacity_real_T(c_expl_temp.decl_arr_local, i1);
      for (i1 = 0; i1 < e_loop_ub; i1++) {
        c_expl_temp.decl_arr_local->data[i1] = raytracing_params->decl_arr->
          data[i1];
      }

      c_expl_temp.slope = local_raytracing_params_slope;
      c_expl_temp.aspect = local_raytracing_params_aspect;
      c_expl_temp.height_px = c_local_raytracing_params_heigh;
      i1 = b_T_3dmat->size[0] * b_T_3dmat->size[1] * b_T_3dmat->size[2];
      b_T_3dmat->size[0] = 1;
      b_T_3dmat->size[1] = 1;
      b_T_3dmat->size[2] = i7;
      emxEnsureCapacity_real_T(b_T_3dmat, i1);
      for (i1 = 0; i1 < f_loop_ub; i1++) {
        b_T_3dmat->data[i1] = T_3dmat->data[(long1_idx + T_3dmat->size[0] *
          long_idx) + T_3dmat->size[0] * T_3dmat->size[1] * i1];
      }

      shadowing_timeloop(b_T_3dmat, dz_arr, &expl_temp, &b_expl_temp,
                         raytracing_params, c_expl_temp, lat, long_arr->
                         data[long_idx], jd_error_3dmat->data[long1_idx +
                         jd_error_3dmat->size[0] * long_idx].f1,
                         sample_surface_temperatures->data[long1_idx +
                         sample_surface_temperatures->size[0] * long_idx].f1,
                         Tmin_local, Tmax_local, T_error_3dmat->data[long1_idx +
                         T_error_3dmat->size[0] * long_idx].f1);
      loop_ub = Tmin_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Tmin_3dmat->data[(long1_idx + Tmin_3dmat->size[0] * long_idx) +
          Tmin_3dmat->size[0] * Tmin_3dmat->size[1] * i1] = Tmin_local->data[i1];
      }

      loop_ub = Tmax_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Tmax_3dmat->data[(long1_idx + Tmax_3dmat->size[0] * long_idx) +
          Tmax_3dmat->size[0] * Tmax_3dmat->size[1] * i1] = Tmax_local->data[i1];
      }

      i1 = pixel_count + 1;
      if (pixel_count + 1 > 32767) {
        i1 = 32767;
      }

      pixel_count = (short)i1;
      d = rt_roundd_snf(toc());
      if (d < 2.147483648E+9) {
        if (d >= -2.147483648E+9) {
          loop_ub = (int)d;
        } else {
          loop_ub = MIN_int32_T;
        }
      } else if (d >= 2.147483648E+9) {
        loop_ub = MAX_int32_T;
      } else {
        loop_ub = 0;
      }

      printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);

      /* hard coded length of string = 46 chars */
      printf("Finished pixel:  %5d / %5d in %7d seconds\n", (short)i1, i2,
             loop_ub);
      fflush(stdout);
    }

    /* end long */
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
}

/*
 * File trailer for shadowing_latlon_loop.c
 *
 * [EOF]
 */
