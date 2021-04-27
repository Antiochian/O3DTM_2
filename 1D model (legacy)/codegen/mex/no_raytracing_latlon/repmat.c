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
#include "no_raytracing_latlon_emxutil.h"
#include "no_raytracing_latlon_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 28,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

/* Function Definitions */
void repmat(const emlrtStack *sp, real_T a, const real_T varargin_1[2],
            emxArray_real_T *b)
{
  emlrtStack st;
  real_T n;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (varargin_1[k] != varargin_1[k]) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
        MIN_int32_T, 12, MAX_int32_T);
    } else {
      k++;
    }
  }

  if (varargin_1[0] <= 0.0) {
    n = 0.0;
  } else {
    n = varargin_1[0];
  }

  if (varargin_1[1] <= 0.0) {
    n = 0.0;
  } else {
    n *= varargin_1[1];
  }

  if (!(n <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity_real_T(sp, b, i, &xc_emlrtRTEI);
  k = (int32_T)varargin_1[1];
  for (i = 0; i < k; i++) {
    b->data[i] = a;
  }
}

/* End of code generation (repmat.c) */
