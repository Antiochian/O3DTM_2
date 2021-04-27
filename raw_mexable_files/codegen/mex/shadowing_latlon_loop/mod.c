/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "mod.h"
#include "eml_int_forloop_overflow_check.h"
#include "mod1.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo tc_emlrtRSI = { 72, /* lineNo */
  "mod",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\mod.m"/* pathName */
};

/* Function Definitions */
void b_mod(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_r;
  real_T q;
  int32_T k;
  int32_T nx;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, r, nx, &ae_emlrtRTEI);
  b_st.site = &qc_emlrtRSI;
  nx = x->size[0];
  c_st.site = &uc_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    d_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    if (muDoubleScalarIsNaN(x->data[k]) || muDoubleScalarIsInf(x->data[k])) {
      b_r = rtNaN;
    } else if (x->data[k] == 0.0) {
      b_r = 0.0;
    } else {
      b_r = muDoubleScalarRem(x->data[k], 6.2831853071795862);
      rEQ0 = (b_r == 0.0);
      if (!rEQ0) {
        q = muDoubleScalarAbs(x->data[k] / 6.2831853071795862);
        rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
                 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = 0.0;
      } else {
        if (x->data[k] < 0.0) {
          b_r += 6.2831853071795862;
        }
      }
    }

    r->data[k] = b_r;
  }
}

void c_mod(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
           emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, r, nx, &ae_emlrtRTEI);
  b_st.site = &qc_emlrtRSI;
  nx = x->size[0];
  c_st.site = &uc_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    d_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    r->data[k] = d_mod(x->data[k], y);
  }
}

void e_mod(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&st, r, nx, &ae_emlrtRTEI);
  b_st.site = &qc_emlrtRSI;
  nx = x->size[1];
  c_st.site = &uc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    d_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    r->data[k] = d_mod(x->data[k], 360.0);
  }
}

/* End of code generation (mod.c) */
