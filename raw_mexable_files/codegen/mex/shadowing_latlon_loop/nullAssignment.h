/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.h
 *
 * Code generation for function 'nullAssignment'
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
void b_nullAssignment(const emlrtStack *sp, emxArray_boolean_T *x, const
                      emxArray_boolean_T *idx);
void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                    emxArray_boolean_T *idx);

/* End of code generation (nullAssignment.h) */
