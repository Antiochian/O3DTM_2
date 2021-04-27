/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop.h
 *
 * Code generation for function 'multiscattering_core_loop'
 *
 */

#pragma once

/* Include files */
#include "multiscattering_core_loop_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void multiscattering_core_loop(const emlrtStack *sp, emxArray_real_T *T_3dmat,
  real_T bottom_layer_idx, real_T decl, real_T raytrace_h, real_T num_layers,
  const emxArray_real_T *rho_matrix, const emxArray_real_T *lat_arr, const
  emxArray_real_T *long_arr, const emxArray_real_T *vis_flux_matrix, const
  emxArray_real_T *ir_flux_matrix, const emxArray_real_T *dz_arr, real_T dz,
  const emxArray_real_T *elevation_matrix, const emxArray_real_T *slope_matrix,
  const emxArray_real_T *aspect_matrix, const struct1_T *raytracing_params,
  const struct_T *temperature_parameters);

/* End of code generation (multiscattering_core_loop.h) */
