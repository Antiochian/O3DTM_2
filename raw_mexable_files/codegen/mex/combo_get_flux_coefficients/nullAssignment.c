/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "nullAssignment.h"
#include "combo_get_flux_coefficients_data.h"
#include "combo_get_flux_coefficients_emxutil.h"
#include "combo_get_flux_coefficients_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo fd_emlrtRSI = { 13, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 17, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 169,/* lineNo */
  "onearg_null_assignment",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 172,/* lineNo */
  "onearg_null_assignment",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 132,/* lineNo */
  "num_true",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = { 85,/* lineNo */
  27,                                  /* colNo */
  "validate_inputs",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 181,/* lineNo */
  9,                                   /* colNo */
  "onearg_null_assignment",            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

/* Function Declarations */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  b_b = b->size[0];
  st.site = &jd_emlrtRSI;
  if ((1 <= b->size[0]) && (b->size[0] > 2147483646)) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < b_b; k++) {
    n += b->data[k];
  }

  return n;
}

void b_nullAssignment(const emlrtStack *sp, emxArray_boolean_T *x, const
                      emxArray_boolean_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nrowx;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:subsdeldimmismatch",
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &gd_emlrtRSI;
  nxin = x->size[0];
  nrowx = x->size[0];
  b_st.site = &hd_emlrtRSI;
  nxout = x->size[0] - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &id_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[0]) || (!idx->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }

  if (nxout > nrowx) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  nxin = x->size[0];
  if (1 > nxout) {
    x->size[0] = 0;
  } else {
    x->size[0] = nxout;
  }

  emxEnsureCapacity_boolean_T(&st, x, nxin, &nf_emlrtRTEI);
}

void nullAssignment(const emlrtStack *sp, emxArray_real_T *x, const
                    emxArray_boolean_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nrowx;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = idx->size[0];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }

  if (k > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &l_emlrtRTEI, "MATLAB:subsdeldimmismatch",
      "MATLAB:subsdeldimmismatch", 0);
  }

  st.site = &gd_emlrtRSI;
  nxin = x->size[0];
  nrowx = x->size[0];
  b_st.site = &hd_emlrtRSI;
  nxout = x->size[0] - num_true(&b_st, idx);
  k0 = -1;
  b_st.site = &id_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[0]) || (!idx->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }

  if (nxout > nrowx) {
    emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  nxin = x->size[0];
  if (1 > nxout) {
    x->size[0] = 0;
  } else {
    x->size[0] = nxout;
  }

  emxEnsureCapacity_real_T(&st, x, nxin, &nf_emlrtRTEI);
}

/* End of code generation (nullAssignment.c) */
