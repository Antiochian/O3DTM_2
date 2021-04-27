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
void mexable_los2(const emlrtStack *sp, const emxArray_real_T *Z, const
                  emxArray_real_T *lat1, const emxArray_real_T *lon1, const
                  emxArray_real_T *lat2, const emxArray_real_T *lon2, const
                  emxArray_real_T *inp_talt, real_T actualradius, real_T
                  sample_dens, const struct2_T *public_raster_struct,
                  emxArray_boolean_T *vis);

/* End of code generation (mexable_los2.h) */
