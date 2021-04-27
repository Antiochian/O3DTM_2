/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_shadowing_latlon_loop_api.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "_coder_shadowing_latlon_loop_api.h"
#include "_coder_shadowing_latlon_loop_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
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

/* Function Declarations */
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *recent_only, const char_T *identifier);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_cell_wrap_0 *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bottom_layer_idx, const char_T *identifier);
static real_T cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rho_matrix,
  const char_T *identifier, emxArray_real_T *y);
static creal_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *z_arr, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
static void emxFreeStruct_struct1_T(struct1_T *pStruct);
static void emxFreeStruct_struct4_T(struct4_T *pStruct);
static void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  boolean_T doPush);
static void emxInitStruct_struct4_T(const emlrtStack *sp, struct4_T *pStruct,
  boolean_T doPush);
static void emxInit_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0
  **pEmxArray, int32_T numDimensions, boolean_T doPush);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parameters,
  const char_T *identifier, struct0_T *y);
static boolean_T gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static datetime i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static creal_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5]);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *init_temps,
  const char_T *identifier, emxArray_real_T *y);
static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *raytracing_params, const char_T *identifier, struct1_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static struct3_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4]);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *diviner_data,
  const char_T *identifier, struct4_T *y);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y);

/* Function Definitions */
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *recent_only
 *                const char_T *identifier
 * Return Type  : boolean_T
 */
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *recent_only, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(recent_only), &thisId);
  emlrtDestroyArray(&recent_only);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_cell_wrap_0 *u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const emxArray_cell_wrap_0 *u)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T n;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(2, *(int32_T (*)[2])u->size));
  i = 0;
  n = u->size[0] * u->size[1];
  while (i < n) {
    b_y = NULL;
    iv[0] = u->data[i].f1->size[0];
    iv[1] = u->data[i].f1->size[1];
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (b_i = 0; b_i < u->data[i].f1->size[1]; b_i++) {
      pData[i1] = u->data[i].f1->data[b_i];
      i1++;
    }

    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
    i++;
  }

  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *bottom_layer_idx
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *bottom_layer_idx, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(bottom_layer_idx), &thisId);
  emlrtDestroyArray(&bottom_layer_idx);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, -1 };

  int32_T iv[3];
  int32_T i;
  const boolean_T bv[3] = { true, true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0] * iv[1] * iv[2];
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  ret->size[2] = iv[2];
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *rho_matrix
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rho_matrix,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(rho_matrix), &thisId, y);
  emlrtDestroyArray(&rho_matrix);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : creal_T
 */
static creal_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  creal_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 0U, &dims);
  emlrtImportArrayR2015b(sp, src, &ret, 8, true);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *z_arr
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *z_arr, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(z_arr), &thisId, y);
  emlrtDestroyArray(&z_arr);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[3] = { 0, 0, 0 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, u->size, 3);
  emlrtAssign(&y, m);
  return y;
}

/*
 * Arguments    : emxArray_real_T *emxArray
 *                int32_T oldNumel
 * Return Type  : void
 */
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : cell_wrap_0 *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : struct1_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_real_T(&pStruct->slope_matrix);
  emxFree_real_T(&pStruct->aspect_matrix);
  emxFree_real_T(&pStruct->elevation_matrix);
  emxFree_real_T(&pStruct->extended_elevation_matrix);
  emxFree_real_T(&pStruct->h_arr);
  emxFree_real_T(&pStruct->decl_arr);
}

/*
 * Arguments    : struct4_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct4_T(struct4_T *pStruct)
{
  emxFree_real_T(&pStruct->lat_arr);
  emxFree_real_T(&pStruct->long_arr);
  emxFree_real_T(&pStruct->T_arr);
  emxFree_real_T(&pStruct->jd_arr);
}

/*
 * Arguments    : emxArray_cell_wrap_0 **pEmxArray
 * Return Type  : void
 */
static void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray)
{
  int32_T i;
  int32_T numEl;
  if (*pEmxArray != (emxArray_cell_wrap_0 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_0 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_0(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        emlrtFreeMex((*pEmxArray)->data);
      }
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_0 *)NULL;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct1_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->slope_matrix, 2, doPush);
  emxInit_real_T(sp, &pStruct->aspect_matrix, 2, doPush);
  emxInit_real_T(sp, &pStruct->elevation_matrix, 2, doPush);
  emxInit_real_T(sp, &pStruct->extended_elevation_matrix, 2, doPush);
  emxInit_real_T(sp, &pStruct->h_arr, 2, doPush);
  emxInit_real_T(sp, &pStruct->decl_arr, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct4_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct4_T(const emlrtStack *sp, struct4_T *pStruct,
  boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->lat_arr, 2, doPush);
  emxInit_real_T(sp, &pStruct->long_arr, 2, doPush);
  emxInit_real_T(sp, &pStruct->T_arr, 2, doPush);
  emxInit_real_T(sp, &pStruct->jd_arr, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_cell_wrap_0 **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0
  **pEmxArray, int32_T numDimensions, boolean_T doPush)
{
  emxArray_cell_wrap_0 *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap_0 *)emlrtMallocMex(sizeof
    (emxArray_cell_wrap_0));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void *)
      &emxFree_cell_wrap_0);
  }

  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_0 *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void *)
      &emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : void
 */
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = { 1, 0 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *parameters
 *                const char_T *identifier
 *                struct0_T *y
 * Return Type  : void
 */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *parameters,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(parameters), &thisId, y);
  emlrtDestroyArray(&parameters);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : boolean_T
 */
static boolean_T gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct0_T *y
 * Return Type  : void
 */
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[45] = { "P", "rho_s", "rho_d", "H",
    "stefans_constant", "emissivity", "S", "R_AU", "Q", "A0", "a", "b", "Chi",
    "Ks", "Kd", "c0", "c1", "c2", "c3", "c4", "phase_start_dtm", "phase_end_dtm",
    "diviner_start_dtm", "diviner_end_dtm", "m", "n", "num_skin_depths",
    "max_depth", "initial_num_skin_depths", "initial_depth_t_wait",
    "grow_depth_t_wait", "decl", "T_min", "T_max", "T_bottom_limit",
    "surface_bc_test_difference", "surface_bc_break_counter", "live_graph",
    "live_graph_plot_interval", "show_results_table", "return_z_grid",
    "return_T_arr", "dt", "time_series_interval",
    "parameter_generation_datetime" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 45, fieldNames, 0U, &dims);
  thisId.fIdentifier = "P";
  y->P = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "P")),
    &thisId);
  thisId.fIdentifier = "rho_s";
  y->rho_s = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "rho_s")), &thisId);
  thisId.fIdentifier = "rho_d";
  y->rho_d = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "rho_d")), &thisId);
  thisId.fIdentifier = "H";
  y->H = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "H")),
    &thisId);
  thisId.fIdentifier = "stefans_constant";
  y->stefans_constant = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 4, "stefans_constant")), &thisId);
  thisId.fIdentifier = "emissivity";
  y->emissivity = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    5, "emissivity")), &thisId);
  thisId.fIdentifier = "S";
  y->S = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6, "S")),
    &thisId);
  thisId.fIdentifier = "R_AU";
  y->R_AU = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "R_AU")), &thisId);
  thisId.fIdentifier = "Q";
  y->Q = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "Q")),
    &thisId);
  thisId.fIdentifier = "A0";
  y->A0 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "A0")), &thisId);
  thisId.fIdentifier = "a";
  y->a = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10, "a")),
    &thisId);
  thisId.fIdentifier = "b";
  y->b = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11, "b")),
    &thisId);
  thisId.fIdentifier = "Chi";
  y->Chi = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12,
    "Chi")), &thisId);
  thisId.fIdentifier = "Ks";
  y->Ks = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13,
    "Ks")), &thisId);
  thisId.fIdentifier = "Kd";
  y->Kd = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14,
    "Kd")), &thisId);
  thisId.fIdentifier = "c0";
  y->c0 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 15,
    "c0")), &thisId);
  thisId.fIdentifier = "c1";
  y->c1 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 16,
    "c1")), &thisId);
  thisId.fIdentifier = "c2";
  y->c2 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 17,
    "c2")), &thisId);
  thisId.fIdentifier = "c3";
  y->c3 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 18,
    "c3")), &thisId);
  thisId.fIdentifier = "c4";
  y->c4 = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 19,
    "c4")), &thisId);
  thisId.fIdentifier = "phase_start_dtm";
  y->phase_start_dtm = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 20, "phase_start_dtm")), &thisId);
  thisId.fIdentifier = "phase_end_dtm";
  y->phase_end_dtm = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 21, "phase_end_dtm")), &thisId);
  thisId.fIdentifier = "diviner_start_dtm";
  y->diviner_start_dtm = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 22, "diviner_start_dtm")), &thisId);
  thisId.fIdentifier = "diviner_end_dtm";
  y->diviner_end_dtm = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 23, "diviner_end_dtm")), &thisId);
  thisId.fIdentifier = "m";
  y->m = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 24, "m")),
    &thisId);
  thisId.fIdentifier = "n";
  y->n = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 25, "n")),
    &thisId);
  thisId.fIdentifier = "num_skin_depths";
  y->num_skin_depths = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 26, "num_skin_depths")), &thisId);
  thisId.fIdentifier = "max_depth";
  y->max_depth = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    27, "max_depth")), &thisId);
  thisId.fIdentifier = "initial_num_skin_depths";
  y->initial_num_skin_depths = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 28, "initial_num_skin_depths")), &thisId);
  thisId.fIdentifier = "initial_depth_t_wait";
  y->initial_depth_t_wait = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 29, "initial_depth_t_wait")), &thisId);
  thisId.fIdentifier = "grow_depth_t_wait";
  y->grow_depth_t_wait = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 30, "grow_depth_t_wait")), &thisId);
  thisId.fIdentifier = "decl";
  y->decl = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 31,
    "decl")), &thisId);
  thisId.fIdentifier = "T_min";
  y->T_min = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 32,
    "T_min")), &thisId);
  thisId.fIdentifier = "T_max";
  y->T_max = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 33,
    "T_max")), &thisId);
  thisId.fIdentifier = "T_bottom_limit";
  y->T_bottom_limit = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 34, "T_bottom_limit")), &thisId);
  thisId.fIdentifier = "surface_bc_test_difference";
  y->surface_bc_test_difference = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 35, "surface_bc_test_difference")), &thisId);
  thisId.fIdentifier = "surface_bc_break_counter";
  y->surface_bc_break_counter = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 36, "surface_bc_break_counter")), &thisId);
  thisId.fIdentifier = "live_graph";
  y->live_graph = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    37, "live_graph")), &thisId);
  thisId.fIdentifier = "live_graph_plot_interval";
  y->live_graph_plot_interval = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 38, "live_graph_plot_interval")), &thisId);
  thisId.fIdentifier = "show_results_table";
  y->show_results_table = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 39, "show_results_table")), &thisId);
  thisId.fIdentifier = "return_z_grid";
  y->return_z_grid = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 40, "return_z_grid")), &thisId);
  thisId.fIdentifier = "return_T_arr";
  y->return_T_arr = l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 41, "return_T_arr")), &thisId);
  thisId.fIdentifier = "dt";
  y->dt = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 42,
    "dt")), &thisId);
  thisId.fIdentifier = "time_series_interval";
  y->time_series_interval = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 43, "time_series_interval")), &thisId);
  thisId.fIdentifier = "parameter_generation_datetime";
  y->parameter_generation_datetime = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 44, "parameter_generation_datetime")),
    &thisId);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : datetime
 */
static datetime i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  datetime y;
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[3];
  const char_T *propClasses[3] = { "matlab.internal.coder.datetime",
    "matlab.internal.coder.datetime", "matlab.internal.coder.datetime" };

  const char_T *propNames[3] = { "data", "fmt", "tz" };

  propValues[0] = NULL;
  propValues[1] = NULL;
  propValues[2] = NULL;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a(sp, parentId, u, "datetime");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(sp, u, 0,
    "matlab.internal.coder.datetime"));
  emlrtCheckMcosClass2017a(sp, parentId, u, "matlab.internal.coder.datetime");
  emlrtGetAllProperties(sp, u, 0, 3, propNames, propClasses, propValues);
  thisId.fIdentifier = "data";
  y.data = j_emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "fmt";
  k_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId);
  thisId.fIdentifier = "tz";
  k_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId);
  emlrtDestroyArrays(3, (const mxArray **)&propValues);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret[2]
 * Return Type  : void
 */
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : creal_T
 */
static creal_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  creal_T y;
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char_T ret[4]
 * Return Type  : void
 */
static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : void
 */
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char_T ret[5]
 * Return Type  : void
 */
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[5])
{
  static const int32_T dims[2] = { 1, 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 5);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : boolean_T
 */
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *init_temps
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *init_temps,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(init_temps), &thisId, y);
  emlrtDestroyArray(&init_temps);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *raytracing_params
 *                const char_T *identifier
 *                struct1_T *y
 * Return Type  : void
 */
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *raytracing_params, const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(raytracing_params), &thisId, y);
  emlrtDestroyArray(&raytracing_params);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct1_T *y
 * Return Type  : void
 */
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[20] = { "scattering_power",
    "t_calculation_step_length", "t_calculation_steps", "t_steps",
    "public_raster_struct", "extended_public_raster_struct", "sample_dens",
    "extended_sample_dens", "ref_sphere", "slope_matrix", "aspect_matrix",
    "elevation_matrix", "extended_elevation_matrix", "h_arr", "decl_arr", "P",
    "const_decl", "max_distance", "dt", "start_julian_date" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 20, fieldNames, 0U, &dims);
  thisId.fIdentifier = "scattering_power";
  y->scattering_power = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 0, "scattering_power")), &thisId);
  thisId.fIdentifier = "t_calculation_step_length";
  y->t_calculation_step_length = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 1, "t_calculation_step_length")), &thisId);
  thisId.fIdentifier = "t_calculation_steps";
  y->t_calculation_steps = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 2, "t_calculation_steps")), &thisId);
  thisId.fIdentifier = "t_steps";
  y->t_steps = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "t_steps")), &thisId);
  thisId.fIdentifier = "public_raster_struct";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "public_raster_struct")), &thisId, &y->public_raster_struct);
  thisId.fIdentifier = "extended_public_raster_struct";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "extended_public_raster_struct")), &thisId,
                     &y->extended_public_raster_struct);
  thisId.fIdentifier = "sample_dens";
  y->sample_dens = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 6, "sample_dens")), &thisId);
  thisId.fIdentifier = "extended_sample_dens";
  y->extended_sample_dens = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 7, "extended_sample_dens")), &thisId);
  thisId.fIdentifier = "ref_sphere";
  y->ref_sphere = s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    8, "ref_sphere")), &thisId);
  thisId.fIdentifier = "slope_matrix";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "slope_matrix")), &thisId, y->slope_matrix);
  thisId.fIdentifier = "aspect_matrix";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10,
    "aspect_matrix")), &thisId, y->aspect_matrix);
  thisId.fIdentifier = "elevation_matrix";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "elevation_matrix")), &thisId, y->elevation_matrix);
  thisId.fIdentifier = "extended_elevation_matrix";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12,
    "extended_elevation_matrix")), &thisId, y->extended_elevation_matrix);
  thisId.fIdentifier = "h_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13, "h_arr")),
                     &thisId, y->h_arr);
  thisId.fIdentifier = "decl_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14, "decl_arr")),
                     &thisId, y->decl_arr);
  thisId.fIdentifier = "P";
  y->P = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 15, "P")),
    &thisId);
  thisId.fIdentifier = "const_decl";
  y->const_decl = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    16, "const_decl")), &thisId);
  thisId.fIdentifier = "max_distance";
  y->max_distance = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 17, "max_distance")), &thisId);
  thisId.fIdentifier = "dt";
  y->dt = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 18,
    "dt")), &thisId);
  thisId.fIdentifier = "start_julian_date";
  y->start_julian_date = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 19, "start_julian_date")), &thisId);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct2_T *y
 * Return Type  : void
 */
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y)
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
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "RasterSize")), &thisId, y->RasterSize);
  thisId.fIdentifier = "FullCycle";
  y->FullCycle = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    1, "FullCycle")), &thisId);
  thisId.fIdentifier = "XIntrinsicLimits";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "XIntrinsicLimits")), &thisId, y->XIntrinsicLimits);
  thisId.fIdentifier = "YIntrinsicLimits";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "YIntrinsicLimits")), &thisId, y->YIntrinsicLimits);
  thisId.fIdentifier = "pLongitudeLimits";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "pLongitudeLimits")), &thisId, y->pLongitudeLimits);
  thisId.fIdentifier = "pLatitudeLimits";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "pLatitudeLimits")), &thisId, y->pLatitudeLimits);
  thisId.fIdentifier = "FirstCornerLatitude";
  y->FirstCornerLatitude = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 6, "FirstCornerLatitude")), &thisId);
  thisId.fIdentifier = "FirstCornerLongitude";
  y->FirstCornerLongitude = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 7, "FirstCornerLongitude")), &thisId);
  thisId.fIdentifier = "DeltaLatitudeNumerator";
  y->DeltaLatitudeNumerator = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 8, "DeltaLatitudeNumerator")), &thisId);
  thisId.fIdentifier = "DeltaLatitudeDenominator";
  y->DeltaLatitudeDenominator = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 9, "DeltaLatitudeDenominator")), &thisId);
  thisId.fIdentifier = "DeltaLongitudeNumerator";
  y->DeltaLongitudeNumerator = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 10, "DeltaLongitudeNumerator")), &thisId);
  thisId.fIdentifier = "DeltaLongitudeDenominator";
  y->DeltaLongitudeDenominator = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 11, "DeltaLongitudeDenominator")), &thisId);
  thisId.fIdentifier = "NorthPoleLatitude";
  y->NorthPoleLatitude = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 12, "NorthPoleLatitude")), &thisId);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y[2]
 * Return Type  : void
 */
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : struct3_T
 */
static struct3_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = { "Name", "LengthUnit", "Radius",
    "SemimajorAxis", "SemiminorAxis", "Eccentricity", "MeanRadius", "Flattening"
  };

  emlrtMsgIdentifier thisId;
  struct3_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 8, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Name";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "Name")),
                     &thisId, y.Name);
  thisId.fIdentifier = "LengthUnit";
  u_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "LengthUnit")), &thisId, y.LengthUnit);
  thisId.fIdentifier = "Radius";
  y.Radius = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "Radius")), &thisId);
  thisId.fIdentifier = "SemimajorAxis";
  y.SemimajorAxis = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 3, "SemimajorAxis")), &thisId);
  thisId.fIdentifier = "SemiminorAxis";
  y.SemiminorAxis = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 4, "SemiminorAxis")), &thisId);
  thisId.fIdentifier = "Eccentricity";
  y.Eccentricity = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 5, "Eccentricity")), &thisId);
  thisId.fIdentifier = "MeanRadius";
  y.MeanRadius = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    6, "MeanRadius")), &thisId);
  thisId.fIdentifier = "Flattening";
  y.Flattening = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    7, "Flattening")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char_T y[4]
 * Return Type  : void
 */
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char_T y[5]
 * Return Type  : void
 */
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[5])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  mb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *diviner_data
 *                const char_T *identifier
 *                struct4_T *y
 * Return Type  : void
 */
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *diviner_data,
  const char_T *identifier, struct4_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y_emlrt_marshallIn(sp, emlrtAlias(diviner_data), &thisId, y);
  emlrtDestroyArray(&diviner_data);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct4_T *y
 * Return Type  : void
 */
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct4_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[4] = { "lat_arr", "long_arr", "T_arr",
    "jd_arr" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, &dims);
  thisId.fIdentifier = "lat_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "lat_arr")),
                     &thisId, y->lat_arr);
  thisId.fIdentifier = "long_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "long_arr")),
                     &thisId, y->long_arr);
  thisId.fIdentifier = "T_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "T_arr")),
                     &thisId, y->T_arr);
  thisId.fIdentifier = "jd_arr";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "jd_arr")),
                     &thisId, y->jd_arr);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const mxArray * const prhs[21]
 *                int32_T nlhs
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void shadowing_latlon_loop_api(const mxArray * const prhs[21], int32_T nlhs,
  const mxArray *plhs[4])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_cell_wrap_0 *T_error_3dmat;
  emxArray_cell_wrap_0 *jd_error_3dmat;
  emxArray_real_T *Tmax_3dmat;
  emxArray_real_T *Tmin_3dmat;
  emxArray_real_T *dz_arr;
  emxArray_real_T *ew_matrix;
  emxArray_real_T *init_temps;
  emxArray_real_T *lat_arr;
  emxArray_real_T *long_arr;
  emxArray_real_T *ns_matrix;
  emxArray_real_T *rho_matrix;
  emxArray_real_T *z_arr;
  struct0_T parameters;
  struct1_T b_raytracing_params;
  struct1_T raytracing_params;
  struct4_T b_diviner_data;
  struct4_T diviner_data;
  real_T bottom_layer_idx;
  real_T depth_update_t_interval;
  real_T depth_update_wait_t;
  real_T dz;
  real_T end_jd;
  real_T num_layers;
  real_T start_jd;
  real_T t_limit;
  real_T t_wait;
  boolean_T recent_only;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &z_arr, 2, true);
  emxInit_real_T(&st, &rho_matrix, 3, true);
  emxInit_real_T(&st, &lat_arr, 2, true);
  emxInit_real_T(&st, &long_arr, 2, true);
  emxInit_real_T(&st, &dz_arr, 2, true);
  emxInit_real_T(&st, &init_temps, 2, true);
  emxInitStruct_struct1_T(&st, &raytracing_params, true);
  emxInit_real_T(&st, &ew_matrix, 2, true);
  emxInit_real_T(&st, &ns_matrix, 2, true);
  emxInitStruct_struct4_T(&st, &diviner_data, true);
  emxInit_real_T(&st, &Tmax_3dmat, 3, true);
  emxInit_real_T(&st, &Tmin_3dmat, 3, true);
  emxInit_cell_wrap_0(&st, &jd_error_3dmat, 2, true);
  emxInit_cell_wrap_0(&st, &T_error_3dmat, 2, true);

  /* Marshall function inputs */
  z_arr->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "z_arr", z_arr);
  bottom_layer_idx = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]),
    "bottom_layer_idx");
  depth_update_wait_t = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]),
    "depth_update_wait_t");
  depth_update_t_interval = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]),
    "depth_update_t_interval");
  num_layers = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "num_layers");
  t_limit = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "t_limit");
  t_wait = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "t_wait");
  rho_matrix->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "rho_matrix", rho_matrix);
  lat_arr->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "lat_arr", lat_arr);
  long_arr->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "long_arr", long_arr);
  dz_arr->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "dz_arr", dz_arr);
  dz = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "dz");
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "parameters", &parameters);
  init_temps->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "init_temps", init_temps);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "raytracing_params",
                     &raytracing_params);
  ew_matrix->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "ew_matrix", ew_matrix);
  ns_matrix->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[16]), "ns_matrix", ns_matrix);
  start_jd = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "start_jd");
  end_jd = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "end_jd");
  x_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "diviner_data", &diviner_data);
  recent_only = ab_emlrt_marshallIn(&st, emlrtAliasP(prhs[20]), "recent_only");

  /* Invoke the target function */
  b_raytracing_params = raytracing_params;
  b_diviner_data = diviner_data;
  shadowing_latlon_loop(z_arr, bottom_layer_idx, depth_update_wait_t,
                        depth_update_t_interval, num_layers, t_limit, t_wait,
                        rho_matrix, lat_arr, long_arr, dz_arr, dz, &parameters,
                        init_temps, &b_raytracing_params, ew_matrix, ns_matrix,
                        start_jd, end_jd, &b_diviner_data, recent_only,
                        Tmax_3dmat, Tmin_3dmat, jd_error_3dmat, T_error_3dmat);

  /* Marshall function outputs */
  Tmax_3dmat->canFreeData = false;
  plhs[0] = emlrt_marshallOut(Tmax_3dmat);
  emxFree_real_T(&Tmax_3dmat);
  emxFreeStruct_struct4_T(&diviner_data);
  emxFree_real_T(&ns_matrix);
  emxFree_real_T(&ew_matrix);
  emxFreeStruct_struct1_T(&raytracing_params);
  emxFree_real_T(&init_temps);
  emxFree_real_T(&dz_arr);
  emxFree_real_T(&long_arr);
  emxFree_real_T(&lat_arr);
  emxFree_real_T(&rho_matrix);
  emxFree_real_T(&z_arr);
  if (nlhs > 1) {
    Tmin_3dmat->canFreeData = false;
    plhs[1] = emlrt_marshallOut(Tmin_3dmat);
  }

  emxFree_real_T(&Tmin_3dmat);
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(jd_error_3dmat);
  }

  emxFree_cell_wrap_0(&jd_error_3dmat);
  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(T_error_3dmat);
  }

  emxFree_cell_wrap_0(&T_error_3dmat);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void shadowing_latlon_loop_atexit(void)
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
  shadowing_latlon_loop_xil_terminate();
  shadowing_latlon_loop_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void shadowing_latlon_loop_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void shadowing_latlon_loop_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_shadowing_latlon_loop_api.c
 *
 * [EOF]
 */
