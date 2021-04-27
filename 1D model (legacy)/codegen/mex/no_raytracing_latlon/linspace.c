/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linspace.c
 *
 * Code generation for function 'linspace'
 *
 */

/* Include files */
#include "linspace.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo dc_emlrtRSI = { 42, /* lineNo */
  "linspace",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"/* pathName */
};

static emlrtRTEInfo n_emlrtRTEI = { 33,/* lineNo */
  37,                                  /* colNo */
  "linspace",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 49,/* lineNo */
  20,                                  /* colNo */
  "linspace",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"/* pName */
};

/* Function Definitions */
void linspace(const emlrtStack *sp, real_T d2, real_T n, emxArray_real_T *y)
{
  emlrtStack st;
  real_T delta1;
  int32_T k;
  int32_T y_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  if (!(n >= 0.0)) {
    if (muDoubleScalarIsNaN(n)) {
      emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI,
        "Coder:toolbox:MustNotBeNaN", "Coder:toolbox:MustNotBeNaN", 3, 4, 1, "N");
    }

    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    st.site = &dc_emlrtRSI;
    delta1 = muDoubleScalarFloor(n);
    y_tmp = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)delta1;
    emxEnsureCapacity_real_T(&st, y, y_tmp, &kf_emlrtRTEI);
    if ((int32_T)delta1 >= 1) {
      y_tmp = (int32_T)delta1 - 1;
      y->data[(int32_T)delta1 - 1] = d2;
      if (y->size[1] >= 2) {
        y->data[0] = 0.0;
        if (y->size[1] >= 3) {
          if ((0.0 == -d2) && ((int32_T)delta1 > 2)) {
            for (k = 2; k <= y_tmp; k++) {
              y->data[k - 1] = d2 * ((real_T)(((k << 1) - (int32_T)delta1) - 1) /
                ((real_T)(int32_T)delta1 - 1.0));
            }

            if (((int32_T)delta1 & 1) == 1) {
              y->data[(int32_T)delta1 >> 1] = 0.0;
            }
          } else if ((d2 < 0.0) && (muDoubleScalarAbs(d2) >
                      8.9884656743115785E+307)) {
            delta1 = d2 / ((real_T)y->size[1] - 1.0);
            y_tmp = y->size[1];
            for (k = 0; k <= y_tmp - 3; k++) {
              y->data[k + 1] = delta1 * ((real_T)k + 1.0);
            }
          } else {
            delta1 = d2 / ((real_T)y->size[1] - 1.0);
            y_tmp = y->size[1];
            for (k = 0; k <= y_tmp - 3; k++) {
              y->data[k + 1] = ((real_T)k + 1.0) * delta1;
            }
          }
        }
      }
    }
  }
}

/* End of code generation (linspace.c) */
