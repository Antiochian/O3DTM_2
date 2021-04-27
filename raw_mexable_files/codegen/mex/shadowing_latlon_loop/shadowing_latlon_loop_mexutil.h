/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_latlon_loop_mexutil.h
 *
 * Code generation for function 'shadowing_latlon_loop_mexutil'
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
real_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  const mxArray *d, emlrtMCInfo *location);
real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *a__output_of_feval_,
  const char_T *identifier);
void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* End of code generation (shadowing_latlon_loop_mexutil.h) */
