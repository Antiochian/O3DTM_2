/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hypot.c
 *
 * Code generation for function 'hypot'
 *
 */

/* Include files */
#include "hypot.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo tg_emlrtRSI = { 13, /* lineNo */
  "hypot",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\hypot.m"/* pathName */
};

/* Function Definitions */
void b_hypot(const emlrtStack *sp, const emxArray_real_T *x, const
             emxArray_real_T *y, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *z;
  int32_T csz_idx_1;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &z, 2, &ae_emlrtRTEI, true);
  st.site = &tg_emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  if (x->size[1] <= y->size[1]) {
    csz_idx_1 = x->size[1];
  } else {
    csz_idx_1 = y->size[1];
  }

  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  if (x->size[1] <= y->size[1]) {
    z->size[1] = x->size[1];
  } else {
    z->size[1] = y->size[1];
  }

  emxEnsureCapacity_real_T(&b_st, z, k, &xe_emlrtRTEI);
  if (!b_dimagree(z, x, y)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  k = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, r, k, &ae_emlrtRTEI);
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  if ((1 <= z->size[1]) && (z->size[1] > 2147483646)) {
    d_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  emxFree_real_T(&z);
  for (k = 0; k < csz_idx_1; k++) {
    r->data[k] = muDoubleScalarHypot(x->data[k], y->data[k]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (hypot.c) */
