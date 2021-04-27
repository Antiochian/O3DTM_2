/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tic.c
 *
 * Code generation for function 'tic'
 *
 */

/* Include files */
#include "tic.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"
#include "emlrt.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 34, /* lineNo */
  "tic",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m"/* pathName */
};

/* Function Definitions */
void tic(const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec t;
  int32_T status;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ab_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&t);
  d_st.site = &db_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
      "Coder:toolbox:POSIXCallFailed", "Coder:toolbox:POSIXCallFailed", 5, 4, 26,
      "emlrtClockGettimeMonotonic", 12, status);
  }

  st.site = &ab_emlrtRSI;
  timeKeeper(&st, t);
}

/* End of code generation (tic.c) */
