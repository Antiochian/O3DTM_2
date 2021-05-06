/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * shadowing_latlon_loop_data.c
 *
 * Code generation for function 'shadowing_latlon_loop_data'
 *
 */

/* Include files */
#include "shadowing_latlon_loop_data.h"
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
  "shadowing_latlon_loop",             /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo r_emlrtRSI = { 28,         /* lineNo */
  "repmat",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo s_emlrtRSI = { 45,         /* lineNo */
  "mpower",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 70,         /* lineNo */
  "power",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 103,        /* lineNo */
  "colon",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 21,         /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 9,         /* lineNo */
  "getTime",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\getTime.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 19,        /* lineNo */
  "callEMLRTClockGettime",             /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 29,        /* lineNo */
  "getTimeEMLRT",                      /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 12,        /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 18,        /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 21,        /* lineNo */
  "mexable_calculateLOS",              /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

emlrtRSInfo kc_emlrtRSI = { 11,        /* lineNo */
  "cos",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\cos.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 33,        /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

emlrtRSInfo oc_emlrtRSI = { 12,        /* lineNo */
  "atan2",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m"/* pathName */
};

emlrtRSInfo pc_emlrtRSI = { 46,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 66,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 202,       /* lineNo */
  "flatIter",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 188,       /* lineNo */
  "flatIter",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo pe_emlrtRSI = { 14,        /* lineNo */
  "min",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

emlrtRSInfo qe_emlrtRSI = { 31,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo re_emlrtRSI = { 67,        /* lineNo */
  "minimum2",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo se_emlrtRSI = { 64,        /* lineNo */
  "binaryMinOrMax",                    /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\binaryMinOrMax.m"/* pathName */
};

emlrtRSInfo bg_emlrtRSI = { 14,        /* lineNo */
  "max",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

emlrtRSInfo cg_emlrtRSI = { 29,        /* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo dg_emlrtRSI = { 58,        /* lineNo */
  "maximum2",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo hh_emlrtRSI = { 35,        /* lineNo */
  "fprintf",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRTEInfo c_emlrtRTEI = { 1,        /* lineNo */
  71,                                  /* colNo */
  "shadowing_latlon_loop",             /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\shadowing_latlon_loop.m"/* pName */
};

emlrtMCInfo emlrtMCI = { 64,           /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

emlrtMCInfo d_emlrtMCI = { 27,         /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

emlrtRTEInfo k_emlrtRTEI = { 37,       /* lineNo */
  9,                                   /* colNo */
  "checkPOSIXStatus",                  /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+time\\private\\callEMLRTClockGettime.m"/* pName */
};

emlrtRTEInfo m_emlrtRTEI = { 19,       /* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRTEInfo u_emlrtRTEI = { 14,       /* lineNo */
  9,                                   /* colNo */
  "acos",                              /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pName */
};

emlrtRTEInfo ae_emlrtRTEI = { 46,      /* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

emlrtRTEInfo ge_emlrtRTEI = { 65,      /* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo xe_emlrtRTEI = { 17,      /* lineNo */
  9,                                   /* colNo */
  "scalexpAlloc",                      /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

emlrtRSInfo mh_emlrtRSI = { 64,        /* lineNo */
  "fprintf",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

emlrtRSInfo oh_emlrtRSI = { 27,        /* lineNo */
  "error",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* End of code generation (shadowing_latlon_loop_data.c) */
