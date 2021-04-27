/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cosd.c
 *
 * Code generation for function 'cosd'
 *
 */

/* Include files */
#include "cosd.h"
#include "eml_int_forloop_overflow_check.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo vf_emlrtRSI = { 10, /* lineNo */
  "cosd",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\cosd.m"/* pathName */
};

/* Function Definitions */
void b_cosd(real_T *x)
{
  real_T absx;
  int8_T n;
  if (muDoubleScalarIsInf(*x) || muDoubleScalarIsNaN(*x)) {
    *x = rtNaN;
  } else {
    *x = muDoubleScalarRem(*x, 360.0);
    absx = muDoubleScalarAbs(*x);
    if (absx > 180.0) {
      if (*x > 0.0) {
        *x -= 360.0;
      } else {
        *x += 360.0;
      }

      absx = muDoubleScalarAbs(*x);
    }

    if (absx <= 45.0) {
      *x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (*x > 0.0) {
        *x = 0.017453292519943295 * (*x - 90.0);
        n = 1;
      } else {
        *x = 0.017453292519943295 * (*x + 90.0);
        n = -1;
      }
    } else if (*x > 0.0) {
      *x = 0.017453292519943295 * (*x - 180.0);
      n = 2;
    } else {
      *x = 0.017453292519943295 * (*x + 180.0);
      n = -2;
    }

    if (n == 0) {
      *x = muDoubleScalarCos(*x);
    } else if (n == 1) {
      *x = -muDoubleScalarSin(*x);
    } else if (n == -1) {
      *x = muDoubleScalarSin(*x);
    } else {
      *x = -muDoubleScalarCos(*x);
    }
  }
}

void c_cosd(const emlrtStack *sp, emxArray_real_T *x)
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
  st.site = &vf_emlrtRSI;
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
      x->data[k] = rtNaN;
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
        x->data[k] = muDoubleScalarCos(b_x);
      } else {
        if (absx <= 135.0) {
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

        if (n == 1) {
          x->data[k] = -muDoubleScalarSin(b_x);
        } else if (n == -1) {
          x->data[k] = muDoubleScalarSin(b_x);
        } else {
          x->data[k] = -muDoubleScalarCos(b_x);
        }
      }
    }
  }
}

void d_cosd(const emlrtStack *sp, emxArray_real32_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  real32_T absx;
  real32_T b_x;
  int8_T n;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vf_emlrtRSI;
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
    if (muSingleScalarIsInf(x->data[k]) || muSingleScalarIsNaN(x->data[k])) {
      x->data[k] = rtNaNF;
    } else {
      b_x = muSingleScalarRem(x->data[k], 360.0F);
      absx = muSingleScalarAbs(b_x);
      if (absx > 180.0F) {
        if (b_x > 0.0F) {
          b_x -= 360.0F;
        } else {
          b_x += 360.0F;
        }

        absx = muSingleScalarAbs(b_x);
      }

      if (absx <= 45.0F) {
        b_x *= 0.0174532924F;
        x->data[k] = muSingleScalarCos(b_x);
      } else {
        if (absx <= 135.0F) {
          if (b_x > 0.0F) {
            b_x = 0.0174532924F * (b_x - 90.0F);
            n = 1;
          } else {
            b_x = 0.0174532924F * (b_x + 90.0F);
            n = -1;
          }
        } else if (b_x > 0.0F) {
          b_x = 0.0174532924F * (b_x - 180.0F);
          n = 2;
        } else {
          b_x = 0.0174532924F * (b_x + 180.0F);
          n = -2;
        }

        if (n == 1) {
          x->data[k] = -muSingleScalarSin(b_x);
        } else if (n == -1) {
          x->data[k] = muSingleScalarSin(b_x);
        } else {
          x->data[k] = -muSingleScalarCos(b_x);
        }
      }
    }
  }
}

/* End of code generation (cosd.c) */
