/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * toc.c
 *
 * Code generation for function 'toc'
 *
 */

/* Include files */
#include "toc.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"
#include "emlrt.h"

/* Variable Definitions */
static emlrtRSInfo kh_emlrtRSI = { 31, /* lineNo */
  "toc",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 36, /* lineNo */
  "toc",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m"/* pathName */
};

/* Function Definitions */
real_T toc(const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tnow;
  real_T tstart_tv_nsec;
  real_T tstart_tv_sec;
  int32_T status;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_timeKeeper(&st, &tstart_tv_sec, &tstart_tv_nsec);
  st.site = &lh_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tnow);
  d_st.site = &db_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
      "Coder:toolbox:POSIXCallFailed", "Coder:toolbox:POSIXCallFailed", 5, 4, 26,
      "emlrtClockGettimeMonotonic", 12, status);
  }

  return (tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec - tstart_tv_nsec) /
    1.0E+9;
}

/* End of code generation (toc.c) */
