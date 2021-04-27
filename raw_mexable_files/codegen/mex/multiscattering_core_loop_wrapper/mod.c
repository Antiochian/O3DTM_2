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
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ee_emlrtRSI = { 72, /* lineNo */
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
  st.site = &ee_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, r, nx, &hf_emlrtRTEI);
  b_st.site = &be_emlrtRSI;
  nx = x->size[0];
  c_st.site = &fe_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    d_st.site = &cb_emlrtRSI;
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
  real_T b_r;
  real_T q;
  int32_T k;
  int32_T nx;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ee_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  nx = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, r, nx, &hf_emlrtRTEI);
  b_st.site = &be_emlrtRSI;
  nx = x->size[0];
  c_st.site = &fe_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k < nx; k++) {
    b_r = x->data[k];
    if (y == 0.0) {
      if (x->data[k] == 0.0) {
        b_r = y;
      }
    } else if (muDoubleScalarIsNaN(x->data[k]) || muDoubleScalarIsNaN(y) ||
               muDoubleScalarIsInf(x->data[k])) {
      b_r = rtNaN;
    } else if (x->data[k] == 0.0) {
      b_r = 0.0 / y;
    } else if (muDoubleScalarIsInf(y)) {
      if ((y < 0.0) != (x->data[k] < 0.0)) {
        b_r = y;
      }
    } else {
      b_r = muDoubleScalarRem(x->data[k], y);
      rEQ0 = (b_r == 0.0);
      if ((!rEQ0) && (y > muDoubleScalarFloor(y))) {
        q = muDoubleScalarAbs(x->data[k] / y);
        rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
                 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        b_r = y * 0.0;
      } else {
        if ((x->data[k] < 0.0) != (y < 0.0)) {
          b_r += y;
        }
      }
    }

    r->data[k] = b_r;
  }
}

/* End of code generation (mod.c) */
