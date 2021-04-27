/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * reshapeSizeChecks.c
 *
 * Code generation for function 'reshapeSizeChecks'
 *
 */

/* Include files */
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo mg_emlrtRSI = { 109,/* lineNo */
  "computeDimsData",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRTEInfo u_emlrtRTEI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

/* Function Definitions */
void computeDimsData(const emlrtStack *sp, real_T varargin_3)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mg_emlrtRSI;
  if ((varargin_3 != varargin_3) || muDoubleScalarIsInf(varargin_3)) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }
}

/* End of code generation (reshapeSizeChecks.c) */
