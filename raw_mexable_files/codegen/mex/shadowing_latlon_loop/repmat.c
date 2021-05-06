/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "assertValidSizeArg.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Variable Definitions */
static emlrtRTEInfo wc_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

/* Function Definitions */
void repmat(const emlrtStack *sp, real_T a, const real_T varargin_1[2],
            emxArray_real_T *b)
{
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  assertValidSizeArg(&st, varargin_1);
  i = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity_real_T(sp, b, i, &wc_emlrtRTEI);
  loop_ub = (int32_T)varargin_1[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = a;
  }
}

/* End of code generation (repmat.c) */
