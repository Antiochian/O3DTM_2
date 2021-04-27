/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_calculateLOS.c
 *
 * Code generation for function 'mexable_calculateLOS'
 *
 */

/* Include files */
#include "mexable_calculateLOS.h"
#include "cos.h"
#include "eml_int_forloop_overflow_check.h"
#include "linspace.h"
#include "mod.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "scalexpAlloc.h"
#include "sin.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = { 82, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 83, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 85, /* lineNo */
  "greatcircleinv",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 36, /* lineNo */
  "sampleGreatCircle",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 48, /* lineNo */
  "sampleGreatCircle",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 58, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 59, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 61, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 67, /* lineNo */
  "doTrack2",                          /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 107,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 108,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 110,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 113,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 112,/* lineNo */
  "greatcirclefwd",                    /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 17, /* lineNo */
  "asin",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 71, /* lineNo */
  "mexable_wrapTo2Pi",                 /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 319,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 323,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 324,/* lineNo */
  "adjustterrain",                     /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 18, /* lineNo */
  "repelem",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 54, /* lineNo */
  "repelemVector",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 55, /* lineNo */
  "repelemVector",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = { 14,/* lineNo */
  9,                                   /* colNo */
  "asin",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  72,                                  /* lineNo */
  8,                                   /* colNo */
  "mexable_wrapTo2Pi",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  23,                                  /* colNo */
  "greatcirclefwd",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  110,                                 /* lineNo */
  13,                                  /* colNo */
  "greatcirclefwd",                    /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  67,                                  /* lineNo */
  1,                                   /* colNo */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  66,                                  /* lineNo */
  5,                                   /* colNo */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  48,                                  /* colNo */
  "lambdaTrack",                       /* aName */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  1,                                   /* colNo */
  "lambda",                            /* aName */
  "mexable_wrapTo2Pi",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  1,                                   /* colNo */
  "lambdaTrack",                       /* aName */
  "doTrack2",                          /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  5,                                   /* colNo */
  "lat",                               /* aName */
  "sampleGreatCircle",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  5,                                   /* colNo */
  "lon",                               /* aName */
  "sampleGreatCircle",                 /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  324,                                 /* lineNo */
  6,                                   /* colNo */
  "adjustterrain",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  323,                                 /* lineNo */
  6,                                   /* colNo */
  "adjustterrain",                     /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 47,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 59,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 107,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 108,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 110,/* lineNo */
  13,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 110,/* lineNo */
  33,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 113,/* lineNo */
  52,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 66,/* lineNo */
  6,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 66,/* lineNo */
  28,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 67,/* lineNo */
  36,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 71,/* lineNo */
  14,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 72,/* lineNo */
  9,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 27,/* lineNo */
  7,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 67,/* lineNo */
  48,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 59,/* lineNo */
  19,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 316,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 317,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 321,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 48,/* lineNo */
  24,                                  /* colNo */
  "repelem",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 323,/* lineNo */
  11,                                  /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 323,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 324,/* lineNo */
  1,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 319,/* lineNo */
  5,                                   /* colNo */
  "mexable_calculateLOS",              /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\raw_mexable_files\\mexable_calculateLOS.m"/* pName */
};

/* Function Definitions */
void adjustterrain(const emlrtStack *sp, const emxArray_real_T *arclen, const
                   emxArray_real_T *zin, real_T apparentradius, emxArray_real_T *
                   x, emxArray_real_T *z)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *phi;
  emxArray_real_T *phi0;
  int32_T idx;
  int32_T j;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* ----------------------------------------------------------------------- */
  /*  Adjust the terrain slice for the curvature of the sphere. The radius */
  /*  may potentially be different from the actual body, for example to */
  /*  model refraction of radio waves. */
  j = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = zin->size[1];
  emxEnsureCapacity_real_T(sp, z, j, &uf_emlrtRTEI);
  idx = zin->size[0] * zin->size[1];
  for (j = 0; j < idx; j++) {
    z->data[j] = apparentradius + zin->data[j];
  }

  emxInit_real_T(sp, &phi0, 2, &vf_emlrtRTEI, true);
  j = phi0->size[0] * phi0->size[1];
  phi0->size[0] = 1;
  phi0->size[1] = arclen->size[1];
  emxEnsureCapacity_real_T(sp, phi0, j, &vf_emlrtRTEI);
  idx = arclen->size[0] * arclen->size[1];
  for (j = 0; j < idx; j++) {
    phi0->data[j] = arclen->data[j] / apparentradius;
  }

  emxInit_real_T(sp, &phi, 2, &cg_emlrtRTEI, true);
  if (phi0->size[1] == 1) {
    st.site = &we_emlrtRSI;
    n = z->size[1];
    b_st.site = &af_emlrtRSI;
    j = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = z->size[1];
    emxEnsureCapacity_real_T(&b_st, phi, j, &xf_emlrtRTEI);
    idx = -1;
    c_st.site = &bf_emlrtRSI;
    c_st.site = &cf_emlrtRSI;
    if ((1 <= z->size[1]) && (z->size[1] > 2147483646)) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (j = 0; j < n; j++) {
      idx++;
      phi->data[idx] = phi0->data[0];
    }
  } else {
    j = phi->size[0] * phi->size[1];
    phi->size[0] = 1;
    phi->size[1] = phi0->size[1];
    emxEnsureCapacity_real_T(sp, phi, j, &wf_emlrtRTEI);
    idx = phi0->size[0] * phi0->size[1];
    for (j = 0; j < idx; j++) {
      phi->data[j] = phi0->data[j];
    }
  }

  emxFree_real_T(&phi0);
  st.site = &xe_emlrtRSI;
  j = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = phi->size[1];
  emxEnsureCapacity_real_T(&st, x, j, &yf_emlrtRTEI);
  idx = phi->size[0] * phi->size[1];
  for (j = 0; j < idx; j++) {
    x->data[j] = phi->data[j];
  }

  b_st.site = &wd_emlrtRSI;
  idx = phi->size[1];
  c_st.site = &vd_emlrtRSI;
  if ((1 <= phi->size[1]) && (phi->size[1] > 2147483646)) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (n = 0; n < idx; n++) {
    x->data[n] = muDoubleScalarSin(x->data[n]);
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])z->size, *(int32_T (*)[2])x->size,
    &cb_emlrtECI, sp);
  j = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = z->size[1];
  emxEnsureCapacity_real_T(sp, x, j, &ag_emlrtRTEI);
  idx = z->size[0] * z->size[1] - 1;
  for (j = 0; j <= idx; j++) {
    x->data[j] *= z->data[j];
  }

  st.site = &ye_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  idx = phi->size[1];
  c_st.site = &vd_emlrtRSI;
  if ((1 <= phi->size[1]) && (phi->size[1] > 2147483646)) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (n = 0; n < idx; n++) {
    phi->data[n] = muDoubleScalarCos(phi->data[n]);
  }

  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])z->size, *(int32_T (*)[2])phi->size,
    &bb_emlrtECI, sp);
  j = z->size[0] * z->size[1];
  idx = z->size[0] * z->size[1];
  z->size[0] = 1;
  emxEnsureCapacity_real_T(sp, z, idx, &bg_emlrtRTEI);
  idx = j - 1;
  for (j = 0; j <= idx; j++) {
    z->data[j] = z->data[j] * phi->data[j] - apparentradius;
  }

  emxFree_real_T(&phi);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sampleGreatCircle(const emlrtStack *sp, real_T lat1, real_T lon1, real_T
  lat2, real_T lon2, real_T spacingInDegrees, emxArray_real_T *lat,
  emxArray_real_T *lon, emxArray_real_T *arclenInRadians)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_boolean_T *positiveInput;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_int32_T *r3;
  emxArray_real_T *cosDelta;
  emxArray_real_T *r;
  emxArray_real_T *sinDelta;
  emxArray_real_T *z;
  real_T a;
  real_T a_tmp;
  real_T cosAz;
  real_T cosphi1_tmp;
  real_T cosphi2;
  real_T lambda1;
  real_T maxdist;
  real_T phi1;
  real_T phi2;
  int32_T i;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* -------------------------------------------------------------------------- */
  /*   Compute sort of maximum angular distance between the end points. */
  maxdist = muDoubleScalarMax(muDoubleScalarAbs(lat2 - lat1), muDoubleScalarAbs
    (lon2 - lon1));
  if (maxdist > spacingInDegrees) {
    /*   Insert points using linear interpolation. */
    st.site = &hd_emlrtRSI;
    phi1 = 0.017453292519943295 * lat1;
    lambda1 = 0.017453292519943295 * lon1;
    phi2 = 0.017453292519943295 * lat2;

    /* -------------------------------------------------------------------------- */
    /*  Interpolate regularly spaced points along a great circle. */
    b_st.site = &jd_emlrtRSI;

    /* -------------------------------------------------------------------------- */
    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    cosphi1_tmp = muDoubleScalarCos(phi1);
    cosphi2 = muDoubleScalarCos(phi2);
    c_st.site = &bd_emlrtRSI;
    cosAz = muDoubleScalarSin((phi2 - phi1) / 2.0);
    d_st.site = &x_emlrtRSI;
    c_st.site = &cd_emlrtRSI;
    a_tmp = 0.017453292519943295 * lon2 - lambda1;
    a = muDoubleScalarSin(a_tmp / 2.0);
    d_st.site = &x_emlrtRSI;
    cosAz = cosAz * cosAz + cosphi1_tmp * cosphi2 * (a * a);
    c_st.site = &dd_emlrtRSI;
    if (cosAz < 0.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &r_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    cosAz = muDoubleScalarSqrt(cosAz);
    c_st.site = &dd_emlrtRSI;
    if (cosAz > 1.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &q_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    emxInit_real_T(&c_st, &r, 2, &rf_emlrtRTEI, true);
    cosAz = muDoubleScalarAsin(cosAz);
    phi1 = muDoubleScalarSin(phi1);
    a = muDoubleScalarAtan2(cosphi2 * muDoubleScalarSin(a_tmp), cosphi1_tmp *
      muDoubleScalarSin(phi2) - phi1 * cosphi2 * muDoubleScalarCos(a_tmp));
    b_st.site = &kd_emlrtRSI;
    linspace(&b_st, 2.0 * cosAz, muDoubleScalarCeil(maxdist / spacingInDegrees)
             + 1.0, r);
    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = r->size[1];
    emxEnsureCapacity_real_T(&st, arclenInRadians, i, &af_emlrtRTEI);
    nx = r->size[1];
    for (i = 0; i < nx; i++) {
      arclenInRadians->data[i] = r->data[i];
    }

    emxFree_real_T(&r);
    emxInit_real_T(&st, &cosDelta, 1, &bf_emlrtRTEI, true);
    b_st.site = &ld_emlrtRSI;

    /* -------------------------------------------------------------------------- */
    /*  Points on a great circles given specified start point, azimuths and */
    /*  spherical distances.  All angles are in radians. */
    /*  Reference */
    /*  --------- */
    /*  J. P. Snyder, "Map Projections - A Working Manual,"  US Geological Survey */
    /*  Professional Paper 1395, US Government Printing Office, Washington, DC, */
    /*  1987, pp. 29-32. */
    cosAz = muDoubleScalarCos(a);
    i = cosDelta->size[0];
    cosDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, cosDelta, i, &bf_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] = arclenInRadians->data[i];
    }

    emxInit_real_T(&b_st, &sinDelta, 1, &cf_emlrtRTEI, true);
    c_st.site = &pd_emlrtRSI;
    b_cos(&c_st, cosDelta);
    i = sinDelta->size[0];
    sinDelta->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, sinDelta, i, &cf_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] = arclenInRadians->data[i];
    }

    c_st.site = &qd_emlrtRSI;
    b_sin(&c_st, sinDelta);
    i = lat->size[0];
    lat->size[0] = cosDelta->size[0];
    emxEnsureCapacity_real_T(&b_st, lat, i, &df_emlrtRTEI);
    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] = phi1 * cosDelta->data[i];
    }

    emxInit_real_T(&b_st, &z, 1, &hf_emlrtRTEI, true);
    i = z->size[0];
    z->size[0] = sinDelta->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &ef_emlrtRTEI);
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = cosphi1_tmp * sinDelta->data[i] * cosAz;
    }

    if (lat->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(lat->size[0], z->size[0], &x_emlrtECI, &b_st);
    }

    c_st.site = &rd_emlrtRSI;
    nx = lat->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] += z->data[i];
    }

    p = false;
    i = lat->size[0];
    for (k = 0; k < i; k++) {
      if (p || ((lat->data[k] < -1.0) || (lat->data[k] > 1.0))) {
        p = true;
      }
    }

    if (p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &q_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    d_st.site = &xd_emlrtRSI;
    nx = lat->size[0];
    e_st.site = &vd_emlrtRSI;
    if ((1 <= lat->size[0]) && (lat->size[0] > 2147483646)) {
      f_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 0; k < nx; k++) {
      lat->data[k] = muDoubleScalarAsin(lat->data[k]);
    }

    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] *= cosphi1_tmp;
    }

    i = z->size[0];
    z->size[0] = arclenInRadians->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &ff_emlrtRTEI);
    nx = arclenInRadians->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = arclenInRadians->data[i];
    }

    c_st.site = &sd_emlrtRSI;
    b_sin(&c_st, z);
    nx = z->size[0];
    for (i = 0; i < nx; i++) {
      z->data[i] = phi1 * z->data[i] * cosAz;
    }

    if (cosDelta->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(cosDelta->size[0], z->size[0], &w_emlrtECI, &b_st);
    }

    cosAz = muDoubleScalarSin(a);
    c_st.site = &td_emlrtRSI;
    nx = sinDelta->size[0];
    for (i = 0; i < nx; i++) {
      sinDelta->data[i] *= cosAz;
    }

    nx = cosDelta->size[0];
    for (i = 0; i < nx; i++) {
      cosDelta->data[i] -= z->data[i];
    }

    d_st.site = &yd_emlrtRSI;
    e_st.site = &ae_emlrtRSI;
    if (sinDelta->size[0] <= cosDelta->size[0]) {
      nx = sinDelta->size[0];
    } else {
      nx = cosDelta->size[0];
    }

    i = z->size[0];
    if (sinDelta->size[0] <= cosDelta->size[0]) {
      z->size[0] = sinDelta->size[0];
    } else {
      z->size[0] = cosDelta->size[0];
    }

    emxEnsureCapacity_real_T(&e_st, z, i, &gf_emlrtRTEI);
    if (!dimagree(z, sinDelta, cosDelta)) {
      emlrtErrorWithMessageIdR2018a(&e_st, &p_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    i = lon->size[0];
    lon->size[0] = nx;
    emxEnsureCapacity_real_T(&d_st, lon, i, &hf_emlrtRTEI);
    e_st.site = &be_emlrtRSI;
    f_st.site = &ce_emlrtRSI;
    if ((1 <= z->size[0]) && (z->size[0] > 2147483646)) {
      g_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (k = 0; k < nx; k++) {
      lon->data[k] = muDoubleScalarAtan2(sinDelta->data[k], cosDelta->data[k]);
    }

    emxFree_real_T(&sinDelta);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] += lambda1;
    }

    emxInit_boolean_T(&b_st, &r1, 1, &pf_emlrtRTEI, true);

    /*  lambdaTrack = wrapToPi(lambdaTrack); */
    i = r1->size[0];
    r1->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(&st, r1, i, &if_emlrtRTEI);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r1->data[i] = (lon->data[i] < -3.1415926535897931);
    }

    emxInit_boolean_T(&st, &r2, 1, &pf_emlrtRTEI, true);
    i = r2->size[0];
    r2->size[0] = lon->size[0];
    emxEnsureCapacity_boolean_T(&st, r2, i, &jf_emlrtRTEI);
    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      r2->data[i] = (3.1415926535897931 < lon->data[i]);
    }

    if (r1->size[0] != r2->size[0]) {
      emlrtSizeEqCheck1DR2012b(r1->size[0], r2->size[0], &ab_emlrtECI, &st);
    }

    k = r1->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r1->data[i] || r2->data[i]) {
        nx++;
      }
    }

    emxInit_int32_T(&st, &r3, 1, &qf_emlrtRTEI, true);
    i = r3->size[0];
    r3->size[0] = nx;
    emxEnsureCapacity_int32_T(&st, r3, i, &kf_emlrtRTEI);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r1->data[i] || r2->data[i]) {
        r3->data[nx] = i + 1;
        nx++;
      }
    }

    b_st.site = &md_emlrtRSI;
    i = z->size[0];
    z->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i, &lf_emlrtRTEI);
    nx = r3->size[0];
    for (i = 0; i < nx; i++) {
      if ((r3->data[i] < 1) || (r3->data[i] > lon->size[0])) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, lon->size[0], &qe_emlrtBCI,
          &b_st);
      }

      z->data[i] = lon->data[r3->data[i] - 1] + 3.1415926535897931;
    }

    emxFree_int32_T(&r3);
    emxInit_boolean_T(&b_st, &positiveInput, 1, &mf_emlrtRTEI, true);

    /* -------------------------------------------------------------------------- */
    i = positiveInput->size[0];
    positiveInput->size[0] = z->size[0];
    emxEnsureCapacity_boolean_T(&b_st, positiveInput, i, &mf_emlrtRTEI);
    nx = z->size[0];
    for (i = 0; i < nx; i++) {
      positiveInput->data[i] = (z->data[i] > 0.0);
    }

    i = cosDelta->size[0];
    cosDelta->size[0] = z->size[0];
    emxEnsureCapacity_real_T(&b_st, cosDelta, i, &nf_emlrtRTEI);
    nx = z->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      cosDelta->data[i] = z->data[i];
    }

    emxInit_boolean_T(&b_st, &r4, 1, &pf_emlrtRTEI, true);
    c_st.site = &de_emlrtRSI;
    b_mod(&c_st, cosDelta, z);
    i = r4->size[0];
    r4->size[0] = z->size[0];
    emxEnsureCapacity_boolean_T(&b_st, r4, i, &of_emlrtRTEI);
    nx = z->size[0];
    emxFree_real_T(&cosDelta);
    for (i = 0; i < nx; i++) {
      r4->data[i] = (z->data[i] == 0.0);
    }

    if (r4->size[0] != positiveInput->size[0]) {
      emlrtSizeEqCheck1DR2012b(r4->size[0], positiveInput->size[0], &v_emlrtECI,
        &b_st);
    }

    k = r4->size[0];
    for (i = 0; i < k; i++) {
      if (r4->data[i] && positiveInput->data[i]) {
        if ((i + 1 < 1) || (i + 1 > z->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &re_emlrtBCI,
            &b_st);
        }

        z->data[i] = 6.2831853071795862;
      }
    }

    emxFree_boolean_T(&r4);
    emxFree_boolean_T(&positiveInput);
    k = r1->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (r1->data[i] || r2->data[i]) {
        nx++;
      }
    }

    if (nx != z->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(nx, z->size[0], &y_emlrtECI, &st);
    }

    k = r1->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (r1->data[i] || r2->data[i]) {
        if ((i + 1 < 1) || (i + 1 > lon->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, lon->size[0], &se_emlrtBCI,
            &st);
        }

        lon->data[i] = z->data[nx] - 3.1415926535897931;
        nx++;
      }
    }

    emxFree_real_T(&z);
    emxFree_boolean_T(&r2);
    emxFree_boolean_T(&r1);
    nx = lat->size[0];
    for (i = 0; i < nx; i++) {
      lat->data[i] *= 57.295779513082323;
    }

    nx = lon->size[0];
    for (i = 0; i < nx; i++) {
      lon->data[i] *= 57.295779513082323;
    }

    /*   Use exact endpoint. */
    if (lat->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(lat->size[0], 1, lat->size[0], &te_emlrtBCI,
        sp);
    }

    lat->data[lat->size[0] - 1] = lat2;
    if (lon->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(lon->size[0], 1, lon->size[0], &ue_emlrtBCI,
        sp);
    }

    lon->data[lon->size[0] - 1] = lon2;
  } else {
    i = lat->size[0];
    lat->size[0] = 2;
    emxEnsureCapacity_real_T(sp, lat, i, &we_emlrtRTEI);
    lat->data[0] = lat1;
    lat->data[1] = lat2;
    i = lon->size[0];
    lon->size[0] = 2;
    emxEnsureCapacity_real_T(sp, lon, i, &xe_emlrtRTEI);
    lon->data[0] = lon1;
    lon->data[1] = lon2;
    st.site = &id_emlrtRSI;
    phi1 = 0.017453292519943295 * lat1;
    phi2 = 0.017453292519943295 * lat2;

    /* -------------------------------------------------------------------------- */
    /*  Great circle distance and azimuth between points on a sphere, using the */
    /*  Haversine Formula for distance.  All angles are in radians. */
    b_st.site = &bd_emlrtRSI;
    cosAz = muDoubleScalarSin((phi2 - phi1) / 2.0);
    c_st.site = &x_emlrtRSI;
    b_st.site = &cd_emlrtRSI;
    a = muDoubleScalarSin((0.017453292519943295 * lon2 - 0.017453292519943295 *
      lon1) / 2.0);
    c_st.site = &x_emlrtRSI;
    cosAz = cosAz * cosAz + muDoubleScalarCos(phi1) * muDoubleScalarCos(phi2) *
      (a * a);
    b_st.site = &dd_emlrtRSI;
    if (cosAz < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &r_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    cosAz = muDoubleScalarSqrt(cosAz);
    b_st.site = &dd_emlrtRSI;
    if (cosAz > 1.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "asin");
    }

    cosAz = muDoubleScalarAsin(cosAz);
    i = arclenInRadians->size[0];
    arclenInRadians->size[0] = 1;
    emxEnsureCapacity_real_T(sp, arclenInRadians, i, &ye_emlrtRTEI);
    arclenInRadians->data[0] = 2.0 * cosAz;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mexable_calculateLOS.c) */
