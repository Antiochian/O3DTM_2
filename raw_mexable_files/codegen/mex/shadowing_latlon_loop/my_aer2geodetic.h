/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * my_aer2geodetic.h
 *
 * Code generation for function 'my_aer2geodetic'
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
void my_aer2geodetic(const emlrtStack *sp, const emxArray_real_T *az, const
                     emxArray_real_T *elev, real_T slantRange, real_T lat0,
                     real_T lon0, real_T h0, real_T spheroid_MeanRadius, real_T
                     spheroid_Flattening, emxArray_real_T *lat, emxArray_real_T *
                     lon, emxArray_real_T *h);

/* End of code generation (my_aer2geodetic.h) */
