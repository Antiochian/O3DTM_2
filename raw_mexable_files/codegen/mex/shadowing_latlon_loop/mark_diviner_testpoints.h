/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mark_diviner_testpoints.h
 *
 * Code generation for function 'mark_diviner_testpoints'
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
void mark_diviner_testpoints(const emlrtStack *sp, real_T start_jd, real_T
  end_jd, const emxArray_real_T *lat_arr, const emxArray_real_T *long_arr, const
  emxArray_real_T *diviner_data_lat_arr, const emxArray_real_T
  *diviner_data_long_arr, const emxArray_real_T *diviner_data_T_arr, const
  emxArray_real_T *diviner_data_jd_arr, boolean_T recent_only,
  emxArray_cell_wrap_0 *sample_timepoints, emxArray_cell_wrap_0
  *sample_surface_temperatures);

/* End of code generation (mark_diviner_testpoints.h) */
