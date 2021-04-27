/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * useConstantDim.c
 *
 * Code generation for function 'useConstantDim'
 *
 */

/* Include files */
#include "useConstantDim.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ud_emlrtRSI = { 32, /* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 97, /* lineNo */
  "ndlooper",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 125,/* lineNo */
  "looper",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 290,/* lineNo */
  "vcumop",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

/* Function Definitions */
void useConstantDim(const emlrtStack *sp, emxArray_real_T *varargin_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ud_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &vd_emlrtRSI;
  if (varargin_2->size[1] != 0) {
    c_st.site = &wd_emlrtRSI;
    if ((varargin_2->size[1] != 0) && (varargin_2->size[1] != 1)) {
      b = varargin_2->size[1];
      d_st.site = &xd_emlrtRSI;
      if ((1 <= varargin_2->size[1] - 1) && (varargin_2->size[1] - 1 >
           2147483646)) {
        e_st.site = &x_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 0; k <= b - 2; k++) {
        varargin_2->data[k + 1] = muDoubleScalarMax(varargin_2->data[k],
          varargin_2->data[k + 1]);
      }
    }
  }
}

/* End of code generation (useConstantDim.c) */
