/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop_wrapper_terminate.c
 *
 * Code generation for function 'multiscattering_core_loop_wrapper_terminate'
 *
 */

/* Include files */
#include "multiscattering_core_loop_wrapper_terminate.h"
#include "_coder_multiscattering_core_loop_wrapper_mex.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Definitions */
void multiscattering_core_loop_wrapper_atexit(void)
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

void multiscattering_core_loop_wrapper_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (multiscattering_core_loop_wrapper_terminate.c) */
