/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo vd_emlrtRSI = { 43, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = { 121,/* lineNo */
  5,                                   /* colNo */
  "errOrWarnIf",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

/* Function Definitions */
void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
                     indexSize[2])
{
  emlrtStack st;
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }

  st.site = &vd_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
      "Coder:FE:PotentialVectorVector", "Coder:FE:PotentialVectorVector", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */
