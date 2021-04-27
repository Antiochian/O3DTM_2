/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo t_emlrtRTEI = { 123,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 118,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

/* Function Definitions */
void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(sp, &u_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &t_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */
