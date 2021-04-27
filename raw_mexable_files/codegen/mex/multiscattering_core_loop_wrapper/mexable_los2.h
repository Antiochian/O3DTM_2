/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_los2.h
 *
 * Code generation for function 'mexable_los2'
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
boolean_T mexable_los2(const emlrtStack *sp, const emxArray_real_T *Z, real_T
  lat1, real_T lon1, real_T lat2, real_T lon2, real_T inp_talt, real_T
  actualradius, real_T sample_dens, const struct2_T *public_raster_struct);

/* End of code generation (mexable_los2.h) */
