/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "indexShapeCheck.h"
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo ue_emlrtRSI = { 138,/* lineNo */
  "eml_find",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 158,/* lineNo */
  "eml_find",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 253,/* lineNo */
  "find_first_nonempty_triples",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 254,/* lineNo */
  "find_first_nonempty_triples",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 255,/* lineNo */
  "find_first_nonempty_triples",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = { 239,/* lineNo */
  1,                                   /* colNo */
  "find_first_nonempty_triples",       /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 195,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 197,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 199,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 253,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 254,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 45,/* lineNo */
  20,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

/* Function Definitions */
void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i, emxArray_int32_T *j)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *v;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T jj;
  int32_T nx;
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  nx = x->size[0] * x->size[1];
  if (nx == 0) {
    i->size[0] = 0;
    j->size[0] = 0;
  } else {
    emxInit_boolean_T(sp, &v, 1, &lh_emlrtRTEI, true);
    st.site = &ue_emlrtRSI;
    idx = 0;
    jj = i->size[0];
    i->size[0] = nx;
    emxEnsureCapacity_int32_T(&st, i, jj, &gh_emlrtRTEI);
    jj = j->size[0];
    j->size[0] = nx;
    emxEnsureCapacity_int32_T(&st, j, jj, &hh_emlrtRTEI);
    jj = v->size[0];
    v->size[0] = nx;
    emxEnsureCapacity_boolean_T(&st, v, jj, &ih_emlrtRTEI);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= x->size[1])) {
      guard1 = false;
      if (x->data[(ii + x->size[0] * (jj - 1)) - 1]) {
        idx++;
        i->data[idx - 1] = ii;
        j->data[idx - 1] = jj;
        v->data[idx - 1] = x->data[(ii + x->size[0] * (jj - 1)) - 1];
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ii++;
        if (ii > x->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }

    if (idx > nx) {
      emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (nx == 1) {
      if (idx == 0) {
        i->size[0] = 0;
        j->size[0] = 0;
      }
    } else {
      if (1 > idx) {
        jj = 0;
      } else {
        jj = idx;
      }

      iv[0] = 1;
      iv[1] = jj;
      b_st.site = &we_emlrtRSI;
      indexShapeCheck(&b_st, i->size[0], iv);
      ii = i->size[0];
      i->size[0] = jj;
      emxEnsureCapacity_int32_T(&st, i, ii, &jh_emlrtRTEI);
      if (1 > idx) {
        jj = 0;
      } else {
        jj = idx;
      }

      iv[0] = 1;
      iv[1] = jj;
      b_st.site = &xe_emlrtRSI;
      indexShapeCheck(&b_st, j->size[0], iv);
      ii = j->size[0];
      j->size[0] = jj;
      emxEnsureCapacity_int32_T(&st, j, ii, &kh_emlrtRTEI);
      iv[0] = 1;
      if (1 > idx) {
        iv[1] = 0;
      } else {
        iv[1] = idx;
      }

      b_st.site = &ye_emlrtRSI;
      indexShapeCheck(&b_st, v->size[0], iv);
    }

    emxFree_boolean_T(&v);
  }

  if ((x->size[0] == 1) && (i->size[0] != 1) && (x->size[1] >= 2)) {
    st.site = &ve_emlrtRSI;
    warning(&st);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (find.c) */
