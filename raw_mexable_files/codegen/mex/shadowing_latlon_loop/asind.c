/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * asind.c
 *
 * Code generation for function 'asind'
 *
 */

/* Include files */
#include "asind.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo fg_emlrtRSI = { 17, /* lineNo */
  "asind",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asind.m"/* pathName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asind",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asind.m"/* pName */
};

/* Function Definitions */
void b_asind(const emlrtStack *sp, emxArray_real_T *x)
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
    emlrtErrorWithMessageIdR2018a(sp, &eb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      5, "asind");
  }

  st.site = &fg_emlrtRSI;
  nx = x->size[1];
  b_st.site = &lc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = 57.295779513082323 * muDoubleScalarAsin(x->data[k]);
  }
}

/* End of code generation (asind.c) */
