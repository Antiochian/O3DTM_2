/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_timeloop.h
 *
 * Code generation for function 'shadowing_timeloop'
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
void shadowing_timeloop(const emlrtStack *sp, const emxArray_real_T *T_arr,
  const emxArray_real_T *dz_arr, const struct_T *temperature_parameters, const
  b_struct_T *local_temperature_params, const struct1_T *raytracing_params,
  const c_struct_T local_raytracing_params, real_T lat, real_T b_long, const
  emxArray_real_T *sample_timepoints_local, const emxArray_real_T
  *c_sample_surface_temperatures_l, emxArray_real_T *Tmin_local, emxArray_real_T
  *Tmax_local, emxArray_real_T *T_error_local);

/* End of code generation (shadowing_timeloop.h) */
