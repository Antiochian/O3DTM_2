/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients.h
 *
 * Code generation for function 'combo_get_flux_coefficients'
 *
 */

#pragma once

/* Include files */
#include "combo_get_flux_coefficients_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
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
  *c_scattered_scattered_ir_coeff_);
emlrtCTX emlrtGetRootTLSGlobal(void);
void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData);

/* End of code generation (combo_get_flux_coefficients.h) */
