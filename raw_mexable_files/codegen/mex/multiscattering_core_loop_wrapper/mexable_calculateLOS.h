/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_calculateLOS.h
 *
 * Code generation for function 'mexable_calculateLOS'
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
void adjustterrain(const emlrtStack *sp, const emxArray_real_T *arclen, const
                   emxArray_real_T *zin, real_T apparentradius, emxArray_real_T *
                   x, emxArray_real_T *z);
void sampleGreatCircle(const emlrtStack *sp, real_T lat1, real_T lon1, real_T
  lat2, real_T lon2, real_T spacingInDegrees, emxArray_real_T *lat,
  emxArray_real_T *lon, emxArray_real_T *arclenInRadians);

/* End of code generation (mexable_calculateLOS.h) */
