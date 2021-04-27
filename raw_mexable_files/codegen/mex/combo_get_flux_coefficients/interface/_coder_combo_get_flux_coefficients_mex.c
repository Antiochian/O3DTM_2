/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_combo_get_flux_coefficients_mex.c
 *
 * Code generation for function '_coder_combo_get_flux_coefficients_mex'
 *
 */

/* Include files */
#include "_coder_combo_get_flux_coefficients_mex.h"
#include "_coder_combo_get_flux_coefficients_api.h"
#include "combo_get_flux_coefficients.h"
#include "combo_get_flux_coefficients_data.h"
#include "combo_get_flux_coefficients_initialize.h"
#include "combo_get_flux_coefficients_terminate.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static jmp_buf emlrtJBEnviron;

/* Function Definitions */
void combo_get_flux_coefficients_mexFunction(int32_T nlhs, mxArray *plhs[6],
  int32_T nrhs, const mxArray *prhs[18])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[6];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 18) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 18, 4,
                        27, "combo_get_flux_coefficients");
  }

  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "combo_get_flux_coefficients");
  }

  /* Call the function. */
  combo_get_flux_coefficients_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(&combo_get_flux_coefficients_atexit);

  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);

  /* Module initialization. */
  combo_get_flux_coefficients_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    combo_get_flux_coefficients_mexFunction(nlhs, plhs, nrhs, prhs);

    /* Module termination. */
    combo_get_flux_coefficients_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                     &emlrtLockerFunction, omp_get_num_procs());
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_combo_get_flux_coefficients_mex.c) */
