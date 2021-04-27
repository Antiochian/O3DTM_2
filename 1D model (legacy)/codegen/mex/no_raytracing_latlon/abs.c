/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo dg_emlrtRSI = { 18, /* lineNo */
  "abs",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 75, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 31,/* lineNo */
  21,                                  /* colNo */
  "applyScalarFunction",               /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[1];
  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, y, k, &oh_emlrtRTEI);
  b_st.site = &eg_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
