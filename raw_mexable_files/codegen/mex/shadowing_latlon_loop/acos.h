/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * acos.h
 *
 * Code generation for function 'acos'
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
void b_acos(const emlrtStack *sp, emxArray_real_T *x);
void c_acos(const emlrtStack *sp, emxArray_real32_T *x);

/* End of code generation (acos.h) */
