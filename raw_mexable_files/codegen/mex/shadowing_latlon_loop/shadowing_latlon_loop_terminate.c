/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_latlon_loop_terminate.c
 *
 * Code generation for function 'shadowing_latlon_loop_terminate'
 *
 */

/* Include files */
#include "shadowing_latlon_loop_terminate.h"
#include "_coder_shadowing_latlon_loop_mex.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"

/* Function Definitions */
void shadowing_latlon_loop_atexit(void)
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

void shadowing_latlon_loop_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (shadowing_latlon_loop_terminate.c) */
