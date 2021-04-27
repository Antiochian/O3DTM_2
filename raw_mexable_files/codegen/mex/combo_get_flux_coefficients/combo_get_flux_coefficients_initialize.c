/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients_initialize.c
 *
 * Code generation for function 'combo_get_flux_coefficients_initialize'
 *
 */

/* Include files */
#include "combo_get_flux_coefficients_initialize.h"
#include "_coder_combo_get_flux_coefficients_mex.h"
#include "combo_get_flux_coefficients_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void combo_get_flux_coefficients_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (combo_get_flux_coefficients_initialize.c) */
