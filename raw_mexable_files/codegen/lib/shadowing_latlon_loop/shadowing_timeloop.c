/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_timeloop.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "shadowing_timeloop.h"
#include "raytrace_pixel.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>

/* Function Definitions */
/*
 * Unpack temperature params
 * unpack global params
 * Arguments    : const emxArray_real_T *T_arr
 *                const emxArray_real_T *dz_arr
 *                const b_struct_T *temperature_parameters
 *                const c_struct_T *local_temperature_params
 *                const struct1_T *raytracing_params
 *                const d_struct_T local_raytracing_params
 *                double lat
 *                double b_long
 *                const emxArray_real_T *sample_timepoints_local
 *                const emxArray_real_T *c_sample_surface_temperatures_l
 *                emxArray_real_T *Tmin_local
 *                emxArray_real_T *Tmax_local
 *                emxArray_real_T *T_error_local
 * Return Type  : void
 */
void shadowing_timeloop(const emxArray_real_T *T_arr, const emxArray_real_T
  *dz_arr, const b_struct_T *temperature_parameters, const c_struct_T
  *local_temperature_params, const struct1_T *raytracing_params, const
  d_struct_T local_raytracing_params, double lat, double b_long, const
  emxArray_real_T *sample_timepoints_local, const emxArray_real_T
  *c_sample_surface_temperatures_l, emxArray_real_T *Tmin_local, emxArray_real_T
  *Tmax_local, emxArray_real_T *T_error_local)
{
  emxArray_real_T *T_new_arr;
  emxArray_real_T *b_T_arr;
  emxArray_real_T *sample_T_bounds;
  emxArray_real_T *sample_t_idx;
  emxArray_real_T *sample_weights;
  emxArray_real_T *theta_arr;
  double dv[1];
  double Chi_OVER_350_POWER_3;
  double b_bottom_layer_idx_local;
  double bottom_layer_idx_local;
  double d;
  double depth_update_wait_t_local;
  double dj;
  double exact_idx;
  double lower_idx;
  double thermal_emission_local;
  double upcoming_sample_idx;
  int i;
  int i1;
  int loop_ub;
  int t_idx;
  unsigned int unnamed_idx_2;
  unsigned int upcoming_sample_idx_ptr;
  boolean_T HAS_EVER_BEEN_ILLUMINATED;
  boolean_T exitg1;
  emxInit_real_T(&T_new_arr, 3);

  /* seconds from 19-Feb-2000 21:10:27 */
  depth_update_wait_t_local = temperature_parameters->depth_update_wait_t_local;
  bottom_layer_idx_local = temperature_parameters->bottom_layer_idx_local;

  /*  dh = temperature_parameters.dh; */
  /*  Initialise temperature arrays from T_arr */
  i = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
  T_new_arr->size[0] = 1;
  T_new_arr->size[1] = 1;
  T_new_arr->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(T_new_arr, i);
  loop_ub = T_arr->size[0] * T_arr->size[1] * T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    T_new_arr->data[i] = T_arr->data[i];
  }

  i = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
  Tmax_local->size[0] = 1;
  Tmax_local->size[1] = 1;
  Tmax_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(Tmax_local, i);
  loop_ub = T_arr->size[2];
  for (i = 0; i < loop_ub; i++) {
    Tmax_local->data[i] = rtNaN;
  }

  i = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
  Tmin_local->size[0] = 1;
  Tmin_local->size[1] = 1;
  Tmin_local->size[2] = T_arr->size[2];
  emxEnsureCapacity_real_T(Tmin_local, i);
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
  emxEnsureCapacity_real_T(T_error_local, i);
  for (i = 0; i < loop_ub; i++) {
    T_error_local->data[i] = rtNaN;
  }

  emxInit_real_T(&sample_t_idx, 2);
  i = sample_t_idx->size[0] * sample_t_idx->size[1];
  sample_t_idx->size[0] = 1;
  sample_t_idx->size[1] = 2 * sample_timepoints_local->size[1];
  emxEnsureCapacity_real_T(sample_t_idx, i);
  loop_ub = 2 * sample_timepoints_local->size[1];
  for (i = 0; i < loop_ub; i++) {
    sample_t_idx->data[i] = rtNaN;
  }

  emxInit_real_T(&sample_weights, 2);
  loop_ub = sample_timepoints_local->size[1];
  i = sample_weights->size[0] * sample_weights->size[1];
  sample_weights->size[0] = 1;
  sample_weights->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sample_weights, i);
  for (i = 0; i < loop_ub; i++) {
    sample_weights->data[i] = rtNaN;
  }

  emxInit_real_T(&sample_T_bounds, 2);
  loop_ub = sample_timepoints_local->size[1] << 1;
  i = sample_T_bounds->size[0] * sample_T_bounds->size[1];
  sample_T_bounds->size[0] = 1;
  sample_T_bounds->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sample_T_bounds, i);
  for (i = 0; i < loop_ub; i++) {
    sample_T_bounds->data[i] = rtNaN;
  }

  i = sample_timepoints_local->size[1];
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    exact_idx = (sample_timepoints_local->data[loop_ub] -
                 raytracing_params->start_julian_date) / dj;
    lower_idx = floor(exact_idx);
    sample_weights->data[loop_ub] = exact_idx - lower_idx;
    d = 2.0 * ((double)loop_ub + 1.0);
    sample_t_idx->data[(int)(d + -1.0) - 1] = lower_idx;
    sample_t_idx->data[(int)d - 1] = ceil(exact_idx);
  }

  emxInit_real_T(&theta_arr, 2);
  sample_t_idx->data[sample_t_idx->size[1] - 1] = 0.0;

  /* dummy value, never reached */
  /* track the currently-in-demand t_idx using a pointer index "upcoming_sample_idx_ptr" */
  /*  and "upcoming_sample_idx" for the actual value (save lookup time) */
  upcoming_sample_idx_ptr = 1U;

  /* this redundant phrasing is to demonstrate how the update process works */
  upcoming_sample_idx = sample_t_idx->data[0];
  raytrace_pixel(lat, b_long, raytracing_params->t_calculation_step_length,
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
  emxInit_real_T(&b_T_arr, 3);
  for (t_idx = 0; t_idx < i; t_idx++) {
    /* seconds since diviner start data */
    /*     %% Calculate theta */
    if ((!HAS_EVER_BEEN_ILLUMINATED) && (!rtIsNaN(theta_arr->data[t_idx]))) {
      HAS_EVER_BEEN_ILLUMINATED = true;
    }

    /*     %% Calculate temps */
    b_bottom_layer_idx_local = bottom_layer_idx_local;
    loop_ub = T_new_arr->size[2];
    i1 = b_T_arr->size[0] * b_T_arr->size[1] * b_T_arr->size[2];
    b_T_arr->size[0] = 1;
    b_T_arr->size[1] = 1;
    b_T_arr->size[2] = T_new_arr->size[2];
    emxEnsureCapacity_real_T(b_T_arr, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_T_arr->data[i1] = T_new_arr->data[i1];
    }

    unnamed_idx_2 = (unsigned int)T_new_arr->size[2];
    i1 = T_new_arr->size[0] * T_new_arr->size[1] * T_new_arr->size[2];
    T_new_arr->size[0] = 1;
    T_new_arr->size[1] = 1;
    T_new_arr->size[2] = (int)unnamed_idx_2;
    emxEnsureCapacity_real_T(T_new_arr, i1);
    loop_ub = (int)unnamed_idx_2;
    for (i1 = 0; i1 < loop_ub; i1++) {
      T_new_arr->data[i1] = rtNaN;
    }

    Chi_OVER_350_POWER_3 = temperature_parameters->Chi_OVER_350_POWER_3;

    /* confusingly, the following three parameters are not actually local, they are constant over all pixels. They are called */
    /* "local" because at one point I was experimenting with dynamically changing */
    /* the t_intervals depending on how "interesting" an area was, and so gave */
    /* different pixels different t_interval and bottom_layer values. The idea */
    /* might be workable, but its fiddly to implement and I ran out of time. */
    /* I moved them back to the constant parameters and left the name as-is. */
    /* unpack local params */
    thermal_emission_local = local_temperature_params->thermal_emission_local;

    /*  Increase simulation depth */
    if ((bottom_layer_idx_local < temperature_parameters->num_layers) &&
        (temperature_parameters->t_arr->data[t_idx] > depth_update_wait_t_local))
    {
      /*  extend simulation by 1 layer, using bottom BC to define new */
      /*  temperature */
      depth_update_wait_t_local +=
        temperature_parameters->depth_update_t_interval;
      b_bottom_layer_idx_local = bottom_layer_idx_local + 1.0;

      /*  T_arr or T_3dmat_local??? */
      dj = b_T_arr->data[(int)((bottom_layer_idx_local + 1.0) - 1.0) - 1];
      b_T_arr->data[(int)(bottom_layer_idx_local + 1.0) - 1] = dj + dz_arr->
        data[(int)((bottom_layer_idx_local + 1.0) - 1.0) - 1] *
        temperature_parameters->Q / (local_temperature_params->
        Kc_3dmat_local->data[(int)((bottom_layer_idx_local + 1.0) - 1.0) - 1] *
        (temperature_parameters->Chi_OVER_350_POWER_3 * dj * dj * dj + 1.0));
    }

    /*  Calculate Q_local */
    d = theta_arr->data[t_idx];
    dj = (1.0 - ((local_temperature_params->A0_local +
                  local_temperature_params->a_OVER_pi_OVER_4_POWER_3_local *
                  rt_powd_snf(d, 3.0)) +
                 local_temperature_params->b_OVER_pi_OVER_2_POWER_8_local *
                 rt_powd_snf(d, 8.0))) * temperature_parameters->S_OVER_R_AU2 *
      cos(d);
    dv[0] = dj;
    loop_ub = 0;
    if (rtIsNaN(dj)) {
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
    lower_idx = 0.0;
    dj = temperature_parameters->surface_bc_test_difference + 1.0;
    bottom_layer_idx_local = b_T_arr->data[0];

    /* surface temperature */
    /*  Root finding */
    exact_idx = b_T_arr->data[0];
    exitg1 = false;
    while ((!exitg1) && (dj > temperature_parameters->surface_bc_test_difference))
    {
      dj = local_temperature_params->Kc_3dmat_local->data[0] *
        (Chi_OVER_350_POWER_3 * bottom_layer_idx_local * bottom_layer_idx_local *
         bottom_layer_idx_local + 1.0);
      exact_idx = bottom_layer_idx_local - ((thermal_emission_local *
        bottom_layer_idx_local * bottom_layer_idx_local * bottom_layer_idx_local
        * bottom_layer_idx_local - dv[0]) - dj * (((-3.0 *
        bottom_layer_idx_local + 4.0 * b_T_arr->data[1]) - b_T_arr->data[2]) /
        (2.0 * dz_arr->data[0]))) / ((4.0 * thermal_emission_local *
        bottom_layer_idx_local * bottom_layer_idx_local * bottom_layer_idx_local
        - 3.0 * local_temperature_params->B_surface_local *
        bottom_layer_idx_local * bottom_layer_idx_local * (((4.0 * b_T_arr->
        data[1] - 3.0 * bottom_layer_idx_local) - b_T_arr->data[2]) / (2.0 *
        temperature_parameters->dz))) + 3.0 / (2.0 * dz_arr->data[0]) * dj);
      if (exact_idx <= 0.0) {
        /* fprintf('\nNegative T in surface BC, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
        printf("\nNegative T in surface BC, returning NaN\n");
        fflush(stdout);
        exact_idx = rtNaN;
        exitg1 = true;
      } else {
        dj = fabs(exact_idx - bottom_layer_idx_local);
        bottom_layer_idx_local = exact_idx;
        lower_idx++;
        if (lower_idx > temperature_parameters->surface_bc_break_counter) {
          /* fprintf('\nSurface BC iteration limit, returning NaN (lat_idx=%i, long_idx=%i, t_idx=%i)\n', lat_idx, long_idx, t_idx) */
          printf("\nSurface BC iteration limit, returning NaN\n");
          fflush(stdout);
          exact_idx = rtNaN;
          exitg1 = true;
        }
      }
    }

    /* WHILE LOOP END */
    T_new_arr->data[0] = exact_idx;

    /* surface temperature */
    /*  Bottom BC */
    dj = b_T_arr->data[(int)(b_bottom_layer_idx_local - 1.0) - 1];
    T_new_arr->data[(int)b_bottom_layer_idx_local - 1] = dj + dz_arr->data[(int)
      (b_bottom_layer_idx_local - 1.0) - 1] * temperature_parameters->Q /
      (local_temperature_params->Kc_3dmat_local->data[(int)
       (b_bottom_layer_idx_local - 1.0) - 1] *
       (temperature_parameters->Chi_OVER_350_POWER_3 * dj * dj * dj + 1.0));

    /*  Middle layers */
    i1 = (int)b_bottom_layer_idx_local;
    for (loop_ub = 0; loop_ub <= i1 - 3; loop_ub++) {
      d = b_T_arr->data[loop_ub];
      dj = temperature_parameters->p_arr->data[loop_ub + 1] *
        local_temperature_params->Kc_3dmat_local->data[loop_ub] *
        (Chi_OVER_350_POWER_3 * d * d * d + 1.0);
      exact_idx = b_T_arr->data[loop_ub + 1];
      lower_idx = temperature_parameters->q_arr->data[loop_ub + 1] *
        local_temperature_params->Kc_3dmat_local->data[loop_ub + 1] *
        (Chi_OVER_350_POWER_3 * exact_idx * exact_idx * exact_idx + 1.0);
      T_new_arr->data[loop_ub + 1] = exact_idx + temperature_parameters->dt /
        (local_temperature_params->rho_matrix_local->data[loop_ub + 1] *
         ((((temperature_parameters->c0 + temperature_parameters->c1 * exact_idx)
            + temperature_parameters->c2 * exact_idx * exact_idx) +
           temperature_parameters->c3 * exact_idx * exact_idx * exact_idx) +
          temperature_parameters->c4 * exact_idx * exact_idx * exact_idx *
          exact_idx)) * ((dj * d - (dj + lower_idx) * exact_idx) + lower_idx *
                         b_T_arr->data[loop_ub + 2]);
    }

    bottom_layer_idx_local = b_bottom_layer_idx_local;

    /*  %% FIND TEST ERRORS */
    if ((double)t_idx + 1.0 == upcoming_sample_idx) {
      sample_T_bounds->data[(int)upcoming_sample_idx_ptr - 1] = T_new_arr->data
        [0];
      upcoming_sample_idx_ptr++;
      upcoming_sample_idx = sample_t_idx->data[(int)upcoming_sample_idx_ptr - 1];
    }

    if ((temperature_parameters->t_arr->data[t_idx] >= temperature_parameters->P
         * temperature_parameters->t_wait) && HAS_EVER_BEEN_ILLUMINATED) {
      /* don't save min/max unless element has been illuminated at least once */
      i1 = b_T_arr->size[0] * b_T_arr->size[1] * b_T_arr->size[2];
      b_T_arr->size[0] = 1;
      b_T_arr->size[1] = 1;
      b_T_arr->size[2] = Tmin_local->size[2];
      emxEnsureCapacity_real_T(b_T_arr, i1);
      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_T_arr->data[i1] = Tmin_local->data[i1];
      }

      if (Tmin_local->size[2] <= T_new_arr->size[2]) {
        i1 = Tmin_local->size[2];
      } else {
        i1 = T_new_arr->size[2];
      }

      loop_ub = Tmin_local->size[0] * Tmin_local->size[1] * Tmin_local->size[2];
      Tmin_local->size[0] = 1;
      Tmin_local->size[1] = 1;
      Tmin_local->size[2] = i1;
      emxEnsureCapacity_real_T(Tmin_local, loop_ub);
      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        Tmin_local->data[loop_ub] = fmin(b_T_arr->data[loop_ub], T_new_arr->
          data[loop_ub]);
      }

      i1 = b_T_arr->size[0] * b_T_arr->size[1] * b_T_arr->size[2];
      b_T_arr->size[0] = 1;
      b_T_arr->size[1] = 1;
      b_T_arr->size[2] = Tmax_local->size[2];
      emxEnsureCapacity_real_T(b_T_arr, i1);
      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_T_arr->data[i1] = Tmax_local->data[i1];
      }

      if (Tmax_local->size[2] <= T_new_arr->size[2]) {
        i1 = Tmax_local->size[2];
      } else {
        i1 = T_new_arr->size[2];
      }

      loop_ub = Tmax_local->size[0] * Tmax_local->size[1] * Tmax_local->size[2];
      Tmax_local->size[0] = 1;
      Tmax_local->size[1] = 1;
      Tmax_local->size[2] = i1;
      emxEnsureCapacity_real_T(Tmax_local, loop_ub);
      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        Tmax_local->data[loop_ub] = fmax(b_T_arr->data[loop_ub], T_new_arr->
          data[loop_ub]);
      }
    }
  }

  emxFree_real_T(&b_T_arr);
  emxFree_real_T(&theta_arr);
  emxFree_real_T(&sample_t_idx);
  emxFree_real_T(&T_new_arr);

  /*  Interpolate errors */
  if (HAS_EVER_BEEN_ILLUMINATED) {
    /* save errors like normal */
    i = sample_timepoints_local->size[1];
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      i1 = (loop_ub + 1) << 1;
      d = sample_T_bounds->data[i1 + -2];
      T_error_local->data[loop_ub] = (d + sample_weights->data[loop_ub] *
        (sample_T_bounds->data[i1 + -1] - d)) -
        c_sample_surface_temperatures_l->data[loop_ub];
    }
  } else {
    /* don't save errors, leave NaN */
    i = sample_timepoints_local->size[1];
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      T_error_local->data[loop_ub] = rtNaN;
    }
  }

  emxFree_real_T(&sample_T_bounds);
  emxFree_real_T(&sample_weights);
}

/*
 * File trailer for shadowing_timeloop.c
 *
 * [EOF]
 */
