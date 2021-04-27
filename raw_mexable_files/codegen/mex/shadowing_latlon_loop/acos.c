/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * acos.c
 *
 * Code generation for function 'acos'
 *
 */

/* Include files */
#include "acos.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ag_emlrtRSI = { 17, /* lineNo */
  "acos",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pathName */
};

/* Function Definitions */
void b_acos(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (p || ((x->data[k] < -1.0) || (x->data[k] > 1.0))) {
      p = true;
    }
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(sp, &u_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "acos");
  }

  st.site = &ag_emlrtRSI;
  nx = x->size[1];
  b_st.site = &lc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarAcos(x->data[k]);
  }
}

void c_acos(const emlrtStack *sp, emxArray_real32_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (p || ((x->data[k] < -1.0F) || (x->data[k] > 1.0F))) {
      p = true;
    }
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(sp, &u_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "acos");
  }

  st.site = &ag_emlrtRSI;
  nx = x->size[1];
  b_st.site = &lc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muSingleScalarAcos(x->data[k]);
  }
}

/* End of code generation (acos.c) */
