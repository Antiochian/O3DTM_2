/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients_mexutil.h
 *
 * Code generation for function 'combo_get_flux_coefficients_mexutil'
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
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_feval_,
  const char_T *identifier);
real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* End of code generation (combo_get_flux_coefficients_mexutil.h) */
