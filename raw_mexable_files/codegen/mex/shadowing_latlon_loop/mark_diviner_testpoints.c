/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mark_diviner_testpoints.c
 *
 * Code generation for function 'mark_diviner_testpoints'
 *
 */

/* Include files */
#include "mark_diviner_testpoints.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 36,  /* lineNo */
  "mark_diviner_testpoints",           /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 37,  /* lineNo */
  "mark_diviner_testpoints",           /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 40,  /* lineNo */
  "mark_diviner_testpoints",           /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 43,  /* lineNo */
  "mark_diviner_testpoints",           /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pathName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  39,                                  /* lineNo */
  19,                                  /* colNo */
  "lat_arr",                           /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  25,                                  /* colNo */
  "long_arr",                          /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  44,                                  /* lineNo */
  28,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  44,                                  /* lineNo */
  63,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  44,                                  /* lineNo */
  100,                                 /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  44,                                  /* lineNo */
  137,                                 /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  27,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  36,                                  /* colNo */
  "sample_timepoints",                 /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  37,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  46,                                  /* colNo */
  "sample_surface_temperatures",       /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  57,                                  /* colNo */
  "diviner_data.T_arr",                /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  48,                                  /* colNo */
  "diviner_data.jd_arr",               /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  9,                                   /* colNo */
  "sample_timepoints",                 /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  9,                                   /* colNo */
  "sample_surface_temperatures",       /* aName */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo hc_emlrtRTEI = { 24,/* lineNo */
  34,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 25,/* lineNo */
  44,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 44,/* lineNo */
  28,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 44,/* lineNo */
  63,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 44,/* lineNo */
  100,                                 /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 44,/* lineNo */
  137,                                 /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 1,/* lineNo */
  63,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 51,/* lineNo */
  9,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 43,/* lineNo */
  9,                                   /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 47,/* lineNo */
  57,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 48,/* lineNo */
  48,                                  /* colNo */
  "mark_diviner_testpoints",           /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mark_diviner_testpoints.m"/* pName */
};

/* Function Definitions */
void mark_diviner_testpoints(const emlrtStack *sp, real_T start_jd, real_T
  end_jd, const emxArray_real_T *lat_arr, const emxArray_real_T *long_arr, const
  emxArray_real_T *diviner_data_lat_arr, const emxArray_real_T
  *diviner_data_long_arr, const emxArray_real_T *diviner_data_T_arr, const
  emxArray_real_T *diviner_data_jd_arr, boolean_T recent_only,
  emxArray_cell_wrap_0 *sample_timepoints, emxArray_cell_wrap_0
  *sample_surface_temperatures)
{
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *lat_repl;
  emxArray_real_T *long_repl;
  emxArray_real_T *max_jd_repl;
  emxArray_real_T *min_jd_repl;
  real_T b_diviner_data_jd_arr[2];
  real_T min_jd;
  int32_T b_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T lat_idx;
  int32_T long_idx;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  This function reads the diviner dataset and saves some temperatures to be */
  /*  used as test points during the code's execution. The code by default */
  /*  saves the max/min temperatures, throwing away all other calculated values */
  /*  to save space - this function provides a list of "calibration" timepoints */
  /*  to save as well. */
  /*   */
  /*  It returns two latxlon cell arrays, where each component corresponds to a */
  /*  pixel and contains a variable-length list of values. The first cell array contains a */
  /*  list of timepoints in julian date format, the second contains a list of */
  /*  surface temperatures in Kelvin. */
  /*  */
  /*  These are the EXACT timestamps of the Diviner dataset, and may not line */
  /*  up with the model. Later on in the raytrace_pixel subroutine */
  /*  interpolation will be done to bring them into alignment */
  /*  diviner_data = load(create_static_path(sprintf('crater_environments/diviner_temperatures/%s_diviner_temperatures.mat', crater_name))); */
  /*  diviner_data = diviner_data.output; */
  i = sample_timepoints->size[0] * sample_timepoints->size[1];
  sample_timepoints->size[0] = lat_arr->size[1];
  sample_timepoints->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, sample_timepoints, i, &hc_emlrtRTEI);
  i = sample_surface_temperatures->size[0] * sample_surface_temperatures->size[1];
  sample_surface_temperatures->size[0] = lat_arr->size[1];
  sample_surface_temperatures->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, sample_surface_temperatures, i,
    &ic_emlrtRTEI);
  if (recent_only) {
    min_jd = end_jd - 360.0;
  } else {
    min_jd = start_jd;
  }

  emxInit_real_T(sp, &min_jd_repl, 2, &qc_emlrtRTEI, true);
  emxInit_real_T(sp, &max_jd_repl, 2, &rc_emlrtRTEI, true);
  b_diviner_data_jd_arr[0] = diviner_data_jd_arr->size[0];
  b_diviner_data_jd_arr[1] = diviner_data_jd_arr->size[1];
  st.site = &n_emlrtRSI;
  repmat(&st, min_jd, b_diviner_data_jd_arr, min_jd_repl);
  b_diviner_data_jd_arr[0] = diviner_data_jd_arr->size[0];
  b_diviner_data_jd_arr[1] = diviner_data_jd_arr->size[1];
  st.site = &o_emlrtRSI;
  repmat(&st, end_jd, b_diviner_data_jd_arr, max_jd_repl);
  i = lat_arr->size[1];
  emxInit_real_T(sp, &lat_repl, 2, &sc_emlrtRTEI, true);
  emxInit_real_T(sp, &long_repl, 2, &tc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r, 2, &nc_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r1, 2, &nc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 2, &uc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 2, &vc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 2, &vc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 2, &uc_emlrtRTEI, true);
  for (lat_idx = 0; lat_idx < i; lat_idx++) {
    i1 = lat_idx + 1;
    if ((i1 < 1) || (i1 > lat_arr->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, lat_arr->size[1], &tc_emlrtBCI, sp);
    }

    b_diviner_data_jd_arr[0] = diviner_data_lat_arr->size[0];
    b_diviner_data_jd_arr[1] = diviner_data_lat_arr->size[1];
    st.site = &p_emlrtRSI;
    repmat(&st, lat_arr->data[lat_idx], b_diviner_data_jd_arr, lat_repl);
    i1 = long_arr->size[1];
    if (0 <= long_arr->size[1] - 1) {
      b_diviner_data_jd_arr[0] = diviner_data_long_arr->size[0];
      b_diviner_data_jd_arr[1] = diviner_data_long_arr->size[1];
    }

    for (long_idx = 0; long_idx < i1; long_idx++) {
      i2 = long_idx + 1;
      if ((i2 < 1) || (i2 > long_arr->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, long_arr->size[1], &uc_emlrtBCI, sp);
      }

      st.site = &q_emlrtRSI;
      repmat(&st, long_arr->data[long_idx], b_diviner_data_jd_arr, long_repl);
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])diviner_data_lat_arr->size,
        *(int32_T (*)[2])lat_repl->size, &d_emlrtECI, sp);
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])diviner_data_long_arr->size,
        *(int32_T (*)[2])long_repl->size, &e_emlrtECI, sp);
      i2 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = diviner_data_lat_arr->size[1];
      emxEnsureCapacity_boolean_T(sp, r, i2, &jc_emlrtRTEI);
      loop_ub = diviner_data_lat_arr->size[0] * diviner_data_lat_arr->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r->data[i2] = (diviner_data_lat_arr->data[i2] == lat_repl->data[i2]);
      }

      i2 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = diviner_data_long_arr->size[1];
      emxEnsureCapacity_boolean_T(sp, r1, i2, &kc_emlrtRTEI);
      loop_ub = diviner_data_long_arr->size[0] * diviner_data_long_arr->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r1->data[i2] = (diviner_data_long_arr->data[i2] == long_repl->data[i2]);
      }

      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])
        r1->size, &d_emlrtECI, sp);
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])diviner_data_jd_arr->size,
        *(int32_T (*)[2])min_jd_repl->size, &f_emlrtECI, sp);
      i2 = r->size[0] * r->size[1];
      end = r->size[0] * r->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, r, end, &jc_emlrtRTEI);
      loop_ub = i2 - 1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        r->data[i2] = (r->data[i2] && r1->data[i2]);
      }

      i2 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = diviner_data_jd_arr->size[1];
      emxEnsureCapacity_boolean_T(sp, r1, i2, &lc_emlrtRTEI);
      loop_ub = diviner_data_jd_arr->size[0] * diviner_data_jd_arr->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r1->data[i2] = (diviner_data_jd_arr->data[i2] >= min_jd_repl->data[i2]);
      }

      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])
        r1->size, &d_emlrtECI, sp);
      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])diviner_data_jd_arr->size,
        *(int32_T (*)[2])max_jd_repl->size, &g_emlrtECI, sp);
      i2 = r->size[0] * r->size[1];
      end = r->size[0] * r->size[1];
      r->size[0] = 1;
      emxEnsureCapacity_boolean_T(sp, r, end, &jc_emlrtRTEI);
      loop_ub = i2 - 1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        r->data[i2] = (r->data[i2] && r1->data[i2]);
      }

      i2 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = diviner_data_jd_arr->size[1];
      emxEnsureCapacity_boolean_T(sp, r1, i2, &mc_emlrtRTEI);
      loop_ub = diviner_data_jd_arr->size[0] * diviner_data_jd_arr->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        r1->data[i2] = (diviner_data_jd_arr->data[i2] <= max_jd_repl->data[i2]);
      }

      emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])r->size, *(int32_T (*)[2])
        r1->size, &d_emlrtECI, sp);

      /* Select all relevant measurements */
      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      i2 = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r2, i2, &nc_emlrtRTEI);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r2->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      loop_ub = r2->size[0] * r2->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        if ((r2->data[i2] < 1) || (r2->data[i2] > diviner_data_T_arr->size[1]))
        {
          emlrtDynamicBoundsCheckR2012b(r2->data[i2], 1,
            diviner_data_T_arr->size[1], &ad_emlrtBCI, sp);
        }
      }

      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      i2 = r3->size[0] * r3->size[1];
      r3->size[0] = 1;
      r3->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r3, i2, &nc_emlrtRTEI);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r3->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      loop_ub = r3->size[0] * r3->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        if ((r3->data[i2] < 1) || (r3->data[i2] > diviner_data_jd_arr->size[1]))
        {
          emlrtDynamicBoundsCheckR2012b(r3->data[i2], 1,
            diviner_data_jd_arr->size[1], &bd_emlrtBCI, sp);
        }
      }

      /* save results for this pixel into cell array */
      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      i2 = r4->size[0] * r4->size[1];
      r4->size[0] = 1;
      r4->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r4, i2, &nc_emlrtRTEI);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r4->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      loop_ub = r4->size[0] * r4->size[1] - 1;
      if (lat_idx > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0, sample_timepoints->size[0] - 1,
          &vc_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &wc_emlrtBCI, sp);
      }

      i2 = sample_timepoints->data[lat_idx + sample_timepoints->size[0] *
        long_idx].f1->size[0] * sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx].
        f1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1, i2, &oc_emlrtRTEI);
      if (lat_idx > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0, sample_timepoints->size[0] - 1,
          &vc_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &wc_emlrtBCI, sp);
      }

      i2 = sample_timepoints->data[lat_idx + sample_timepoints->size[0] *
        long_idx].f1->size[0] * sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx].
        f1->size[1] = r4->size[1];
      emxEnsureCapacity_real_T(sp, sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1, i2, &oc_emlrtRTEI);
      i2 = sample_timepoints->size[0];
      end = sample_timepoints->size[1];
      if (lat_idx > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0, sample_timepoints->size[0] - 1,
          &vc_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &wc_emlrtBCI, sp);
      }

      if (lat_idx > sample_timepoints->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0, sample_timepoints->size[0] - 1,
          &vc_emlrtBCI, sp);
      }

      if (long_idx > sample_timepoints->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0, sample_timepoints->size[1] -
          1, &wc_emlrtBCI, sp);
      }

      for (b_i = 0; b_i <= loop_ub; b_i++) {
        if (lat_idx > i2 - 1) {
          emlrtDynamicBoundsCheckR2012b(lat_idx, 0, i2 - 1, &cd_emlrtBCI, sp);
        }

        if (long_idx > end - 1) {
          emlrtDynamicBoundsCheckR2012b(long_idx, 0, end - 1, &cd_emlrtBCI, sp);
        }

        sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx]
          .f1->data[b_i] = diviner_data_jd_arr->data[r4->data[b_i] - 1];
      }

      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      i2 = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(sp, r5, i2, &nc_emlrtRTEI);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r5->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      loop_ub = r5->size[0] * r5->size[1] - 1;
      if (lat_idx > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0,
          sample_surface_temperatures->size[0] - 1, &xc_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &yc_emlrtBCI, sp);
      }

      i2 = sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[0] *
        sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[0] = 1;
      emxEnsureCapacity_real_T(sp, sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1, i2, &pc_emlrtRTEI);
      if (lat_idx > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0,
          sample_surface_temperatures->size[0] - 1, &xc_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &yc_emlrtBCI, sp);
      }

      i2 = sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[0] *
        sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1] = r5->size
        [1];
      emxEnsureCapacity_real_T(sp, sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1, i2, &pc_emlrtRTEI);
      i2 = sample_surface_temperatures->size[0];
      end = sample_surface_temperatures->size[1];
      if (lat_idx > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0,
          sample_surface_temperatures->size[0] - 1, &xc_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &yc_emlrtBCI, sp);
      }

      if (lat_idx > sample_surface_temperatures->size[0] - 1) {
        emlrtDynamicBoundsCheckR2012b(lat_idx, 0,
          sample_surface_temperatures->size[0] - 1, &xc_emlrtBCI, sp);
      }

      if (long_idx > sample_surface_temperatures->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(long_idx, 0,
          sample_surface_temperatures->size[1] - 1, &yc_emlrtBCI, sp);
      }

      for (b_i = 0; b_i <= loop_ub; b_i++) {
        if (lat_idx > i2 - 1) {
          emlrtDynamicBoundsCheckR2012b(lat_idx, 0, i2 - 1, &dd_emlrtBCI, sp);
        }

        if (long_idx > end - 1) {
          emlrtDynamicBoundsCheckR2012b(long_idx, 0, end - 1, &dd_emlrtBCI, sp);
        }

        sample_surface_temperatures->data[lat_idx +
          sample_surface_temperatures->size[0] * long_idx].f1->data[b_i] =
          diviner_data_T_arr->data[r5->data[b_i] - 1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&long_repl);
  emxFree_real_T(&lat_repl);
  emxFree_real_T(&max_jd_repl);
  emxFree_real_T(&min_jd_repl);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mark_diviner_testpoints.c) */
