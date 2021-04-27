/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * no_raytracing_latlon_initialize.c
 *
 * Code generation for function 'no_raytracing_latlon_initialize'
 *
 */

/* Include files */
#include "no_raytracing_latlon_initialize.h"
#include "_coder_no_raytracing_latlon_mex.h"
#include "no_raytracing_latlon_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void no_raytracing_latlon_once(void);

/* Function Definitions */
static void no_raytracing_latlon_once(void)
{
  mex_InitInfAndNan();
  timeKeeper_free();
}

void no_raytracing_latlon_initialize(void)
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
    no_raytracing_latlon_once();
  }
}

/* End of code generation (no_raytracing_latlon_initialize.c) */
