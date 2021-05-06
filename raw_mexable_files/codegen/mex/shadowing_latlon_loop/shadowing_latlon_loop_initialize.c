/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_latlon_loop_initialize.c
 *
 * Code generation for function 'shadowing_latlon_loop_initialize'
 *
 */

/* Include files */
#include "shadowing_latlon_loop_initialize.h"
#include "_coder_shadowing_latlon_loop_mex.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"

/* Function Declarations */
static void shadowing_latlon_loop_once(void);

/* Function Definitions */
static void shadowing_latlon_loop_once(void)
{
  mex_InitInfAndNan();
  timeKeeper_free();
}

void shadowing_latlon_loop_initialize(void)
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
    shadowing_latlon_loop_once();
  }
}

/* End of code generation (shadowing_latlon_loop_initialize.c) */
