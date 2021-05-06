/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_viewshed.h
 *
 * Code generation for function 'mexable_viewshed'
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
void mexable_viewshed(const emlrtStack *sp, const emxArray_real_T *Z, real_T
                      lat1, real_T lon1, real_T actualradius, real_T
                      apparentradius, real_T sample_dens, const struct2_T
                      *public_raster_struct, emxArray_real_T *vismap);

/* End of code generation (mexable_viewshed.h) */
