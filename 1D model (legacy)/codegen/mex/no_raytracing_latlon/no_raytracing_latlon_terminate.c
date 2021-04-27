/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * no_raytracing_latlon_terminate.c
 *
 * Code generation for function 'no_raytracing_latlon_terminate'
 *
 */

/* Include files */
#include "no_raytracing_latlon_terminate.h"
#include "_coder_no_raytracing_latlon_mex.h"
#include "no_raytracing_latlon_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Definitions */
void no_raytracing_latlon_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  timeKeeper_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void no_raytracing_latlon_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (no_raytracing_latlon_terminate.c) */
