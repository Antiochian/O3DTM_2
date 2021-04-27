/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_no_raytracing_latlon_mex.c
 *
 * Code generation for function '_coder_no_raytracing_latlon_mex'
 *
 */

/* Include files */
#include "_coder_no_raytracing_latlon_mex.h"
#include "_coder_no_raytracing_latlon_api.h"
#include "no_raytracing_latlon.h"
#include "no_raytracing_latlon_data.h"
#include "no_raytracing_latlon_initialize.h"
#include "no_raytracing_latlon_terminate.h"
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

  mexAtExit(&no_raytracing_latlon_atexit);

  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);

  /* Module initialization. */
  no_raytracing_latlon_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    no_raytracing_latlon_mexFunction(nlhs, plhs, nrhs, prhs);

    /* Module termination. */
    no_raytracing_latlon_terminate();
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

void no_raytracing_latlon_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T
  nrhs, const mxArray *prhs[21])
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
                        20, "no_raytracing_latlon");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "no_raytracing_latlon");
  }

  /* Call the function. */
  no_raytracing_latlon_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

/* End of code generation (_coder_no_raytracing_latlon_mex.c) */
