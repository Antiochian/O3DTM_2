/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop_wrapper.h
 *
 * Code generation for function 'multiscattering_core_loop_wrapper'
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
emlrtCTX emlrtGetRootTLSGlobal(void);
void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData);
void multiscattering_core_loop_wrapper(const emlrtStack *sp, const
  emxArray_real_T *z_arr, real_T bottom_layer_idx, real_T depth_update_wait_t,
  real_T depth_update_t_interval, real_T num_layers, real_T t_limit, real_T
  t_wait, const emxArray_real_T *rho_matrix, const emxArray_real_T *lat_arr,
  const emxArray_real_T *long_arr, const emxArray_real_T *vis_flux_matrix, const
  emxArray_real_T *ir_flux_matrix, const emxArray_real_T *dz_arr, real_T dz,
  const struct0_T *parameters, const emxArray_real_T *init_temps, const
  struct1_T *raytracing_params, real_T start_jd, real_T end_jd, const struct4_T *
  diviner_data, boolean_T recent_only, emxArray_real_T *Tmax_3dmat,
  emxArray_real_T *Tmin_3dmat, emxArray_cell_wrap_0 *sample_timepoints,
  emxArray_cell_wrap_0 *T_error_3dmat);

/* End of code generation (multiscattering_core_loop_wrapper.h) */
