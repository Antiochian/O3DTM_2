/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "eml_int_forloop_overflow_check.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 49, /* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 133,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 194,/* lineNo */
  "colMajorFlatIter",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

/* Function Definitions */
real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y;
  int32_T k;
  int32_T vlen;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  st.site = &fb_emlrtRSI;
  vlen = x->size[1];
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    b_st.site = &gb_emlrtRSI;
    y = x->data[0];
    c_st.site = &hb_emlrtRSI;
    if ((2 <= x->size[1]) && (x->size[1] > 2147483646)) {
      d_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 2; k <= vlen; k++) {
      y += x->data[k - 1];
    }
  }

  y /= (real_T)x->size[1];
  return y;
}

/* End of code generation (mean.c) */
