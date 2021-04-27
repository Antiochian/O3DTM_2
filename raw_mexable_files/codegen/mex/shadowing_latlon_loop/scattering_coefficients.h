/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scattering_coefficients.h
 *
 * Code generation for function 'scattering_coefficients'
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
void scattering_coefficients(const emlrtStack *sp, real_T lat1, real_T long1,
  real_T lat2, real_T long2, real_T lat1_idx, real_T long1_idx, real_T lat2_idx,
  real_T long2_idx, real_T h1, real_T h2, real_T slope1, real_T slope2, real_T
  aspect1, real_T aspect2, real_T emission_area, const struct3_T ref_sphere,
  const emxArray_real_T *A0_matrix, const emxArray_real_T
  *a_OVER_pi_OVER_4_POWER_3_matrix, const emxArray_real_T
  *b_OVER_pi_OVER_2_POWER_8_matrix, real_T curr_vis_normalisation, real_T
  ir_normalisation, const emxArray_real_T *emissivity_matrix, real_T
  scattering_power, real_T *absorbed_vis_coeff, real_T *scattered_vis_coeff,
  real_T *emitted_absorbed_ir_coeff, real_T *emitted_scattered_ir_coeff, real_T *
  scattered_absorbed_ir_coeff, real_T *scattered_scattered_ir_coeff);

/* End of code generation (scattering_coefficients.h) */
