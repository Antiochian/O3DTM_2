/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_multiscattering_core_loop_wrapper_mex.c
 *
 * Code generation for function '_coder_multiscattering_core_loop_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_multiscattering_core_loop_wrapper_mex.h"
#include "_coder_multiscattering_core_loop_wrapper_api.h"
#include "multiscattering_core_loop_wrapper.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_initialize.h"
#include "multiscattering_core_loop_wrapper_terminate.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static jmp_buf emlrtJBEnviron;

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(&multiscattering_core_loop_wrapper_atexit);

  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);

  /* Module initialization. */
  multiscattering_core_loop_wrapper_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    multiscattering_core_loop_wrapper_mexFunction(nlhs, plhs, nrhs, prhs);

    /* Module termination. */
    multiscattering_core_loop_wrapper_terminate();
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

void multiscattering_core_loop_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[21])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[4];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 21) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 21, 4,
                        33, "multiscattering_core_loop_wrapper");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 33,
                        "multiscattering_core_loop_wrapper");
  }

  /* Call the function. */
  d_multiscattering_core_loop_wra(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

/* End of code generation (_coder_multiscattering_core_loop_wrapper_mex.c) */
