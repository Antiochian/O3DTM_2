/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_combo_get_flux_coefficients_api.c
 *
 * Code generation for function '_coder_combo_get_flux_coefficients_api'
 *
 */

/* Include files */
#include "_coder_combo_get_flux_coefficients_api.h"
#include "combo_get_flux_coefficients.h"
#include "combo_get_flux_coefficients_data.h"
#include "combo_get_flux_coefficients_emxutil.h"
#include "combo_get_flux_coefficients_mexutil.h"
#include "combo_get_flux_coefficients_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo mf_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_combo_get_flux_coefficients_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lat_arr,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *slope_matrix,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *public_raster_struct, const char_T *identifier, struct0_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static struct1_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ref_sphere, const char_T *identifier);
static struct1_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5]);

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lat_arr,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(lat_arr), &thisId, y);
  emlrtDestroyArray(&lat_arr);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *slope_matrix,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(slope_matrix), &thisId, y);
  emlrtDestroyArray(&slope_matrix);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[4] = { 0, 0, 0, 0 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(4, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, u->size, 4);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *public_raster_struct, const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(public_raster_struct), &thisId, y);
  emlrtDestroyArray(&public_raster_struct);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[13] = { "RasterSize", "FullCycle",
    "XIntrinsicLimits", "YIntrinsicLimits", "pLongitudeLimits",
    "pLatitudeLimits", "FirstCornerLatitude", "FirstCornerLongitude",
    "DeltaLatitudeNumerator", "DeltaLatitudeDenominator",
    "DeltaLongitudeNumerator", "DeltaLongitudeDenominator", "NorthPoleLatitude"
  };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 13, fieldNames, 0U, &dims);
  thisId.fIdentifier = "RasterSize";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "RasterSize")), &thisId, y->RasterSize);
  thisId.fIdentifier = "FullCycle";
  y->FullCycle = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    1, "FullCycle")), &thisId);
  thisId.fIdentifier = "XIntrinsicLimits";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "XIntrinsicLimits")), &thisId, y->XIntrinsicLimits);
  thisId.fIdentifier = "YIntrinsicLimits";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "YIntrinsicLimits")), &thisId, y->YIntrinsicLimits);
  thisId.fIdentifier = "pLongitudeLimits";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "pLongitudeLimits")), &thisId, y->pLongitudeLimits);
  thisId.fIdentifier = "pLatitudeLimits";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "pLatitudeLimits")), &thisId, y->pLatitudeLimits);
  thisId.fIdentifier = "FirstCornerLatitude";
  y->FirstCornerLatitude = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 6, "FirstCornerLatitude")), &thisId);
  thisId.fIdentifier = "FirstCornerLongitude";
  y->FirstCornerLongitude = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 7, "FirstCornerLongitude")), &thisId);
  thisId.fIdentifier = "DeltaLatitudeNumerator";
  y->DeltaLatitudeNumerator = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 8, "DeltaLatitudeNumerator")), &thisId);
  thisId.fIdentifier = "DeltaLatitudeDenominator";
  y->DeltaLatitudeDenominator = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 9, "DeltaLatitudeDenominator")), &thisId);
  thisId.fIdentifier = "DeltaLongitudeNumerator";
  y->DeltaLongitudeNumerator = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 10, "DeltaLongitudeNumerator")), &thisId);
  thisId.fIdentifier = "DeltaLongitudeDenominator";
  y->DeltaLongitudeDenominator = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 11, "DeltaLongitudeDenominator")), &thisId);
  thisId.fIdentifier = "NorthPoleLatitude";
  y->NorthPoleLatitude = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 12, "NorthPoleLatitude")), &thisId);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct1_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *ref_sphere, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(ref_sphere), &thisId);
  emlrtDestroyArray(&ref_sphere);
  return y;
}

static struct1_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = { "Name", "LengthUnit", "Radius",
    "SemimajorAxis", "SemiminorAxis", "Eccentricity", "MeanRadius", "Flattening"
  };

  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 8, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Name";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "Name")),
                     &thisId, y.Name);
  thisId.fIdentifier = "LengthUnit";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "LengthUnit")), &thisId, y.LengthUnit);
  thisId.fIdentifier = "Radius";
  y.Radius = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "Radius")), &thisId);
  thisId.fIdentifier = "SemimajorAxis";
  y.SemimajorAxis = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 3, "SemimajorAxis")), &thisId);
  thisId.fIdentifier = "SemiminorAxis";
  y.SemiminorAxis = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 4, "SemiminorAxis")), &thisId);
  thisId.fIdentifier = "Eccentricity";
  y.Eccentricity = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 5, "Eccentricity")), &thisId);
  thisId.fIdentifier = "MeanRadius";
  y.MeanRadius = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    6, "MeanRadius")), &thisId);
  thisId.fIdentifier = "Flattening";
  y.Flattening = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    7, "Flattening")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2] = { 1, 2 };

  real_T (*r)[2];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5])
{
  static const int32_T dims[2] = { 1, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 5);
  emlrtDestroyArray(&src);
}

void combo_get_flux_coefficients_api(const mxArray * const prhs[18], int32_T
  nlhs, const mxArray *plhs[6])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_real_T *A0_matrix;
  emxArray_real_T *a_OVER_pi_OVER_4_POWER_3_matrix;
  emxArray_real_T *a_matrix;
  emxArray_real_T *absorbed_vis_coeff_4dmat;
  emxArray_real_T *aspect_matrix;
  emxArray_real_T *b_OVER_pi_OVER_2_POWER_8_matrix;
  emxArray_real_T *b_matrix;
  emxArray_real_T *c_emitted_scattered_ir_coeff_4d;
  emxArray_real_T *c_scattered_absorbed_ir_coeff_4;
  emxArray_real_T *c_scattered_scattered_ir_coeff_;
  emxArray_real_T *elevation_matrix;
  emxArray_real_T *emissivity_matrix;
  emxArray_real_T *emitted_absorbed_ir_coeff_4dmat;
  emxArray_real_T *ew_matrix;
  emxArray_real_T *lat_arr;
  emxArray_real_T *long_arr;
  emxArray_real_T *ns_matrix;
  emxArray_real_T *scattered_vis_coeff_4dmat;
  emxArray_real_T *slope_matrix;
  struct0_T public_raster_struct;
  struct1_T ref_sphere;
  real_T r_moon;
  real_T sample_dens;
  real_T scattering_power;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &lat_arr, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &long_arr, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &slope_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &aspect_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &elevation_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &ew_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &ns_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &A0_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &a_OVER_pi_OVER_4_POWER_3_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &b_OVER_pi_OVER_2_POWER_8_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &a_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &b_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &emissivity_matrix, 2, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &absorbed_vis_coeff_4dmat, 4, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &scattered_vis_coeff_4dmat, 4, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &emitted_absorbed_ir_coeff_4dmat, 4, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &c_emitted_scattered_ir_coeff_4d, 4, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &c_scattered_absorbed_ir_coeff_4, 4, &mf_emlrtRTEI, true);
  emxInit_real_T(&st, &c_scattered_scattered_ir_coeff_, 4, &mf_emlrtRTEI, true);

  /* Marshall function inputs */
  lat_arr->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "lat_arr", lat_arr);
  long_arr->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "long_arr", long_arr);
  slope_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "slope_matrix", slope_matrix);
  aspect_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "aspect_matrix", aspect_matrix);
  elevation_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "elevation_matrix",
                     elevation_matrix);
  r_moon = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "r_moon");
  sample_dens = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "sample_dens");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "public_raster_struct",
                     &public_raster_struct);
  ew_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "ew_matrix", ew_matrix);
  ns_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "ns_matrix", ns_matrix);
  ref_sphere = j_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "ref_sphere");
  A0_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "A0_matrix", A0_matrix);
  a_OVER_pi_OVER_4_POWER_3_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[12]),
                     "a_OVER_pi_OVER_4_POWER_3_matrix",
                     a_OVER_pi_OVER_4_POWER_3_matrix);
  b_OVER_pi_OVER_2_POWER_8_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[13]),
                     "b_OVER_pi_OVER_2_POWER_8_matrix",
                     b_OVER_pi_OVER_2_POWER_8_matrix);
  a_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "a_matrix", a_matrix);
  b_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "b_matrix", b_matrix);
  emissivity_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "emissivity_matrix",
                     emissivity_matrix);
  scattering_power = emlrt_marshallIn(&st, emlrtAliasP(prhs[17]),
    "scattering_power");

  /* Invoke the target function */
  combo_get_flux_coefficients(&st, lat_arr, long_arr, slope_matrix,
    aspect_matrix, elevation_matrix, r_moon, sample_dens, &public_raster_struct,
    ew_matrix, ns_matrix, &ref_sphere, A0_matrix,
    a_OVER_pi_OVER_4_POWER_3_matrix, b_OVER_pi_OVER_2_POWER_8_matrix, a_matrix,
    b_matrix, emissivity_matrix, scattering_power, absorbed_vis_coeff_4dmat,
    scattered_vis_coeff_4dmat, emitted_absorbed_ir_coeff_4dmat,
    c_emitted_scattered_ir_coeff_4d, c_scattered_absorbed_ir_coeff_4,
    c_scattered_scattered_ir_coeff_);

  /* Marshall function outputs */
  absorbed_vis_coeff_4dmat->canFreeData = false;
  plhs[0] = emlrt_marshallOut(absorbed_vis_coeff_4dmat);
  emxFree_real_T(&absorbed_vis_coeff_4dmat);
  emxFree_real_T(&emissivity_matrix);
  emxFree_real_T(&b_matrix);
  emxFree_real_T(&a_matrix);
  emxFree_real_T(&b_OVER_pi_OVER_2_POWER_8_matrix);
  emxFree_real_T(&a_OVER_pi_OVER_4_POWER_3_matrix);
  emxFree_real_T(&A0_matrix);
  emxFree_real_T(&ns_matrix);
  emxFree_real_T(&ew_matrix);
  emxFree_real_T(&elevation_matrix);
  emxFree_real_T(&aspect_matrix);
  emxFree_real_T(&slope_matrix);
  emxFree_real_T(&long_arr);
  emxFree_real_T(&lat_arr);
  if (nlhs > 1) {
    scattered_vis_coeff_4dmat->canFreeData = false;
    plhs[1] = emlrt_marshallOut(scattered_vis_coeff_4dmat);
  }

  emxFree_real_T(&scattered_vis_coeff_4dmat);
  if (nlhs > 2) {
    emitted_absorbed_ir_coeff_4dmat->canFreeData = false;
    plhs[2] = emlrt_marshallOut(emitted_absorbed_ir_coeff_4dmat);
  }

  emxFree_real_T(&emitted_absorbed_ir_coeff_4dmat);
  if (nlhs > 3) {
    c_emitted_scattered_ir_coeff_4d->canFreeData = false;
    plhs[3] = emlrt_marshallOut(c_emitted_scattered_ir_coeff_4d);
  }

  emxFree_real_T(&c_emitted_scattered_ir_coeff_4d);
  if (nlhs > 4) {
    c_scattered_absorbed_ir_coeff_4->canFreeData = false;
    plhs[4] = emlrt_marshallOut(c_scattered_absorbed_ir_coeff_4);
  }

  emxFree_real_T(&c_scattered_absorbed_ir_coeff_4);
  if (nlhs > 5) {
    c_scattered_scattered_ir_coeff_->canFreeData = false;
    plhs[5] = emlrt_marshallOut(c_scattered_scattered_ir_coeff_);
  }

  emxFree_real_T(&c_scattered_scattered_ir_coeff_);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_combo_get_flux_coefficients_api.c) */
