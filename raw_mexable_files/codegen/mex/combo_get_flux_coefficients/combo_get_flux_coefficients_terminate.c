/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients_terminate.c
 *
 * Code generation for function 'combo_get_flux_coefficients_terminate'
 *
 */

/* Include files */
#include "combo_get_flux_coefficients_terminate.h"
#include "_coder_combo_get_flux_coefficients_mex.h"
#include "combo_get_flux_coefficients_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void combo_get_flux_coefficients_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void combo_get_flux_coefficients_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (combo_get_flux_coefficients_terminate.c) */
