/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * no_raytracing_latlon_data.c
 *
 * Code generation for function 'no_raytracing_latlon_data'
 *
 */

/* Include files */
#include "no_raytracing_latlon_data.h"
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
  "no_raytracing_latlon",              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo s_emlrtRSI = { 45,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 70,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 103,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 21,         /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 9,         /* lineNo */
  "getTime",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 19,        /* lineNo */
  "callEMLRTClockGettime",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 29,        /* lineNo */
  "getTimeEMLRT",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 11,        /* lineNo */
  "cos",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 33,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 12,        /* lineNo */
  "atan2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 46,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 66,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 202,       /* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 188,       /* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo pe_emlrtRSI = { 14,        /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

emlrtRSInfo qe_emlrtRSI = { 31,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo re_emlrtRSI = { 67,        /* lineNo */
  "minimum2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo se_emlrtRSI = { 64,        /* lineNo */
  "binaryMinOrMax",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\binaryMinOrMax.m"/* pathName */
};

emlrtRSInfo kg_emlrtRSI = { 35,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtMCInfo emlrtMCI = { 64,           /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

emlrtRTEInfo i_emlrtRTEI = { 37,       /* lineNo */
  9,                                   /* colNo */
  "checkPOSIXStatus",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pName */
};

emlrtRTEInfo k_emlrtRTEI = { 19,       /* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRTEInfo s_emlrtRTEI = { 14,       /* lineNo */
  9,                                   /* colNo */
  "acos",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pName */
};

emlrtRTEInfo be_emlrtRTEI = { 46,      /* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

emlrtRTEInfo ye_emlrtRTEI = { 17,      /* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRSInfo pg_emlrtRSI = { 64,        /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* End of code generation (no_raytracing_latlon_data.c) */
