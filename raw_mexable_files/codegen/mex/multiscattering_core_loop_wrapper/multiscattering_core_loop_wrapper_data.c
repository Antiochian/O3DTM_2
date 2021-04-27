/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * multiscattering_core_loop_wrapper_data.c
 *
 * Code generation for function 'multiscattering_core_loop_wrapper_data'
 *
 */

/* Include files */
#include "multiscattering_core_loop_wrapper_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
omp_lock_t emlrtLockGlobal;
omp_nest_lock_t emlrtNestLockGlobal;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131595U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "multiscattering_core_loop_wrapper", /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo x_emlrtRSI = { 70,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 29,        /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 35,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 9,         /* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 19,        /* lineNo */
  "callEMLRTClockGettime",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 29,        /* lineNo */
  "getTimeEMLRT",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo ud_emlrtRSI = { 11,        /* lineNo */
  "cos",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m"/* pathName */
};

emlrtRSInfo vd_emlrtRSI = { 33,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo wd_emlrtRSI = { 11,        /* lineNo */
  "sin",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sin.m"/* pathName */
};

emlrtRSInfo yd_emlrtRSI = { 12,        /* lineNo */
  "atan2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

emlrtRSInfo ae_emlrtRSI = { 46,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo be_emlrtRSI = { 66,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo ce_emlrtRSI = { 202,       /* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo fe_emlrtRSI = { 188,       /* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtMCInfo emlrtMCI = { 64,           /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

emlrtRTEInfo e_emlrtRTEI = { 52,       /* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

emlrtRTEInfo j_emlrtRTEI = { 37,       /* lineNo */
  9,                                   /* colNo */
  "checkPOSIXStatus",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pName */
};

emlrtRTEInfo p_emlrtRTEI = { 19,       /* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRTEInfo gf_emlrtRTEI = { 17,      /* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRTEInfo hf_emlrtRTEI = { 46,      /* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

emlrtRSInfo rf_emlrtRSI = { 64,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* End of code generation (multiscattering_core_loop_wrapper_data.c) */
