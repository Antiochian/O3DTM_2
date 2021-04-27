/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop_wrapper_initialize.c
 *
 * Code generation for function 'multiscattering_core_loop_wrapper_initialize'
 *
 */

/* Include files */
#include "multiscattering_core_loop_wrapper_initialize.h"
#include "_coder_multiscattering_core_loop_wrapper_mex.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void c_multiscattering_core_loop_wra(void);

/* Function Definitions */
static void c_multiscattering_core_loop_wra(void)
{
  mex_InitInfAndNan();
  timeKeeper_free();
}

void multiscattering_core_loop_wrapper_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_multiscattering_core_loop_wra();
  }
}

/* End of code generation (multiscattering_core_loop_wrapper_initialize.c) */
