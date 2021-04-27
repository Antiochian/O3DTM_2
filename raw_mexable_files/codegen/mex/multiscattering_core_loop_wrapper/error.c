/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 27,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo tf_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const char_T u[45] = { 'N', 'o', 'n', '-', 'z', 'e', 'r', 'o', ' ', 'f',
    'l', 'a', 't', 't', 'e', 'n', 'i', 'n', 'g', ' ', 'b', 'r', 'e', 'a', 'k',
    's', ' ', 'h', 'a', 'r', 'd', 'c', 'o', 'd', 'e', 'd', ' ', 'f', 'e', 'a',
    't', 'u', 'r', 'e', 's' };

  emlrtStack st;
  const mxArray *propValues[1];
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const char_T *propClasses[1] = { "coder.internal.string" };

  const char_T *propNames[1] = { "Value" };

  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = NULL;
  emlrtAssign(&y, emlrtCreateClassInstance("coder.internal.string"));
  m = NULL;
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 45, m1, &u[0]);
  emlrtAssign(&b_y, m1);
  emlrtAssign(&m, b_y);
  propValues[0] = m;
  emlrtSetAllProperties(sp, &y, 0, 1, propNames, propClasses, propValues);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(sp, y, 0,
    "coder.internal.string"));
  st.site = &tf_emlrtRSI;
  b_error(&st, y, &b_emlrtMCI);
}

/* End of code generation (error.c) */
