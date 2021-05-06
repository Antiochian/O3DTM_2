/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * atan2d.c
 *
 * Code generation for function 'atan2d'
 *
 */

/* Include files */
#include "atan2d.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ug_emlrtRSI = { 12, /* lineNo */
  "atan2d",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\atan2d.m"/* pathName */
};

/* Function Definitions */
void b_atan2d(const emlrtStack *sp, const emxArray_real_T *y, const
              emxArray_real_T *x, emxArray_real_T *r)
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
  st.site = &ug_emlrtRSI;
  b_st.site = &pc_emlrtRSI;
  if (y->size[1] <= x->size[1]) {
    csz_idx_1 = y->size[1];
  } else {
    csz_idx_1 = x->size[1];
  }

  k = z->size[0] * z->size[1];
  z->size[0] = 1;
  if (y->size[1] <= x->size[1]) {
    z->size[1] = y->size[1];
  } else {
    z->size[1] = x->size[1];
  }

  emxEnsureCapacity_real_T(&b_st, z, k, &xe_emlrtRTEI);
  if (!b_dimagree(z, y, x)) {
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
    r->data[k] = 57.295779513082323 * muDoubleScalarAtan2(y->data[k], x->data[k]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (atan2d.c) */
