/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tand.c
 *
 * Code generation for function 'tand'
 *
 */

/* Include files */
#include "tand.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ig_emlrtRSI = { 10, /* lineNo */
  "tand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\tand.m"/* pathName */
};

/* Function Definitions */
void b_tand(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T absx;
  real_T b_x;
  int32_T k;
  int32_T nx;
  int8_T n;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ig_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[1];
  b_st.site = &lc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    if (muDoubleScalarIsInf(x->data[k]) || muDoubleScalarIsNaN(x->data[k])) {
      b_x = rtNaN;
    } else {
      b_x = muDoubleScalarRem(x->data[k], 360.0);
      absx = muDoubleScalarAbs(b_x);
      if (absx > 180.0) {
        if (b_x > 0.0) {
          b_x -= 360.0;
        } else {
          b_x += 360.0;
        }

        absx = muDoubleScalarAbs(b_x);
      }

      if (absx <= 45.0) {
        b_x *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (b_x > 0.0) {
          b_x = 0.017453292519943295 * (b_x - 90.0);
          n = 1;
        } else {
          b_x = 0.017453292519943295 * (b_x + 90.0);
          n = -1;
        }
      } else if (b_x > 0.0) {
        b_x = 0.017453292519943295 * (b_x - 180.0);
        n = 2;
      } else {
        b_x = 0.017453292519943295 * (b_x + 180.0);
        n = -2;
      }

      b_x = muDoubleScalarTan(b_x);
      if ((n == 1) || (n == -1)) {
        absx = 1.0 / b_x;
        b_x = -(1.0 / b_x);
        if (muDoubleScalarIsInf(b_x) && (n == 1)) {
          b_x = absx;
        }
      }
    }

    x->data[k] = b_x;
  }
}

/* End of code generation (tand.c) */
