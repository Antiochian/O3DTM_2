/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mod.h
 *
 * Code generation for function 'mod'
 *
 */

#pragma once

/* Include files */
#include "combo_get_flux_coefficients_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_mod(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *r);
void c_mod(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
           emxArray_real_T *r);

/* End of code generation (mod.h) */
