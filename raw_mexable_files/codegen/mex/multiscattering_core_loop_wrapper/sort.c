/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 72, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 308,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 316,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 317,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 325,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 333,/* lineNo */
  "block_merge_sort",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 392,/* lineNo */
  "initialize_vector_sort",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 420,/* lineNo */
  "initialize_vector_sort",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 427,/* lineNo */
  "initialize_vector_sort",            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 56,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 308,/* lineNo */
  14,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 308,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

/* Function Definitions */
void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *iwork;
  emxArray_real_T *xwork;
  real_T x4[4];
  real_T d;
  real_T d1;
  int32_T idx4[4];
  int32_T b_n;
  int32_T i1;
  int32_T i3;
  int32_T i4;
  int32_T ib;
  int32_T k;
  int32_T n;
  int32_T nNaNs;
  int32_T quartetOffset;
  int8_T perm[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &gb_emlrtRSI;
  quartetOffset = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&st, idx, quartetOffset, &gg_emlrtRTEI);
  ib = x->size[1];
  for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
    idx->data[quartetOffset] = 0;
  }

  if (x->size[1] != 0) {
    emxInit_int32_T(&st, &iwork, 1, &jg_emlrtRTEI, true);
    b_st.site = &hb_emlrtRSI;
    n = x->size[1];
    c_st.site = &ib_emlrtRSI;
    b_n = x->size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    ib = x->size[1];
    quartetOffset = iwork->size[0];
    iwork->size[0] = ib;
    emxEnsureCapacity_int32_T(&c_st, iwork, quartetOffset, &hg_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      iwork->data[quartetOffset] = 0;
    }

    emxInit_real_T(&c_st, &xwork, 1, &kg_emlrtRTEI, true);
    ib = x->size[1];
    quartetOffset = xwork->size[0];
    xwork->size[0] = ib;
    emxEnsureCapacity_real_T(&c_st, xwork, quartetOffset, &ig_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      xwork->data[quartetOffset] = 0.0;
    }

    nNaNs = 0;
    ib = -1;
    d_st.site = &nb_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      e_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 0; k < b_n; k++) {
      if (muDoubleScalarIsNaN(x->data[k])) {
        i3 = (b_n - nNaNs) - 1;
        idx->data[i3] = k + 1;
        xwork->data[i3] = x->data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib] = k + 1;
        x4[ib] = x->data[k];
        if (ib + 1 == 4) {
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            ib = 2;
          } else {
            i1 = 2;
            ib = 1;
          }

          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }

          d = x4[i1 - 1];
          d1 = x4[i3 - 1];
          if (d <= d1) {
            d = x4[ib - 1];
            if (d <= d1) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)ib;
              perm[2] = (int8_T)i3;
              perm[3] = (int8_T)i4;
            } else if (d <= x4[i4 - 1]) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)ib;
              perm[3] = (int8_T)i4;
            } else {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)i4;
              perm[3] = (int8_T)ib;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[ib - 1] <= d1) {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)ib;
                perm[3] = (int8_T)i4;
              } else {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)i4;
                perm[3] = (int8_T)ib;
              }
            } else {
              perm[0] = (int8_T)i3;
              perm[1] = (int8_T)i4;
              perm[2] = (int8_T)i1;
              perm[3] = (int8_T)ib;
            }
          }

          idx->data[quartetOffset - 3] = idx4[perm[0] - 1];
          idx->data[quartetOffset - 2] = idx4[perm[1] - 1];
          idx->data[quartetOffset - 1] = idx4[perm[2] - 1];
          idx->data[quartetOffset] = idx4[perm[3] - 1];
          x->data[quartetOffset - 3] = x4[perm[0] - 1];
          x->data[quartetOffset - 2] = x4[perm[1] - 1];
          x->data[quartetOffset - 1] = x4[perm[2] - 1];
          x->data[quartetOffset] = x4[perm[3] - 1];
          ib = -1;
        }
      }
    }

    i4 = (b_n - nNaNs) - 1;
    if (ib + 1 > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib + 1 == 1) {
        perm[0] = 1;
      } else if (ib + 1 == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }

      d_st.site = &ob_emlrtRSI;
      if (ib + 1 > 2147483646) {
        e_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 0; k <= ib; k++) {
        i3 = perm[k] - 1;
        quartetOffset = (i4 - ib) + k;
        idx->data[quartetOffset] = idx4[i3];
        x->data[quartetOffset] = x4[i3];
      }
    }

    ib = (nNaNs >> 1) + 1;
    d_st.site = &pb_emlrtRSI;
    for (k = 0; k <= ib - 2; k++) {
      quartetOffset = (i4 + k) + 1;
      i1 = idx->data[quartetOffset];
      i3 = (b_n - k) - 1;
      idx->data[quartetOffset] = idx->data[i3];
      idx->data[i3] = i1;
      x->data[quartetOffset] = xwork->data[i3];
      x->data[i3] = xwork->data[quartetOffset];
    }

    if ((nNaNs & 1) != 0) {
      quartetOffset = i4 + ib;
      x->data[quartetOffset] = xwork->data[quartetOffset];
    }

    i1 = n - nNaNs;
    ib = 2;
    if (i1 > 1) {
      if (n >= 256) {
        quartetOffset = i1 >> 8;
        if (quartetOffset > 0) {
          c_st.site = &jb_emlrtRSI;
          for (ib = 0; ib < quartetOffset; ib++) {
            c_st.site = &kb_emlrtRSI;
            merge_pow2_block(idx, x, ib << 8);
          }

          ib = quartetOffset << 8;
          quartetOffset = i1 - ib;
          if (quartetOffset > 0) {
            c_st.site = &lb_emlrtRSI;
            merge_block(&c_st, idx, x, ib, quartetOffset, 2, iwork, xwork);
          }

          ib = 8;
        }
      }

      c_st.site = &mb_emlrtRSI;
      merge_block(&c_st, idx, x, 0, i1, ib, iwork, xwork);
    }

    emxFree_real_T(&xwork);
    emxFree_int32_T(&iwork);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sort.c) */
