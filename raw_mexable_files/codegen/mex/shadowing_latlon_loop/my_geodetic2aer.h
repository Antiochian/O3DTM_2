/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * my_geodetic2aer.h
 *
 * Code generation for function 'my_geodetic2aer'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void my_geodetic2aer(const emlrtStack *sp, real_T lat, real_T lon, real_T h,
                     real_T lat0, real_T lon0, real_T h0, real_T spheroid_Radius,
                     real_T spheroid_Flattening, real_T *az, real_T *elev,
                     real_T *slantRange);

/* End of code generation (my_geodetic2aer.h) */
