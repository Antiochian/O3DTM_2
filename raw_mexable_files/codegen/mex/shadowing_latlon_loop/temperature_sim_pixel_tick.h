/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * temperature_sim_pixel_tick.h
 *
 * Code generation for function 'temperature_sim_pixel_tick'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "shadowing_latlon_loop_types.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void temperature_sim_pixel_tick(const emlrtStack *sp, const emxArray_real_T
  *T_prev_arr, const struct_T *temperature_parameters, const b_struct_T
  *local_temperature_params, real_T theta_local, real_T *bottom_layer_idx_local,
  real_T *depth_update_wait_t_local, real_T t_relative_sec, const
  emxArray_real_T *dz_arr, emxArray_real_T *T_new_arr);

/* End of code generation (temperature_sim_pixel_tick.h) */
