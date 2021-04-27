/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop_emxutil.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef SHADOWING_LATLON_LOOP_EMXUTIL_H
#define SHADOWING_LATLON_LOOP_EMXUTIL_H

/* Include Files */
#include "rtwtypes.h"
#include "shadowing_latlon_loop_types.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int
    oldNumel);
  extern void emxEnsureCapacity_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int
    oldNumel);
  extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);
  extern void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int oldNumel);
  extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray, int
    oldNumel);
  extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
  extern void emxExpand_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int
    fromIndex, int toIndex);
  extern void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
  extern void emxFreeStruct_struct1_T(struct1_T *pStruct);
  extern void emxFreeStruct_struct4_T(struct4_T *pStruct);
  extern void emxFreeStruct_struct_T(b_struct_T *pStruct);
  extern void emxFreeStruct_struct_T1(c_struct_T *pStruct);
  extern void emxFreeStruct_struct_T2(d_struct_T *pStruct);
  extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
  extern void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);
  extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
  extern void emxFree_int8_T(emxArray_int8_T **pEmxArray);
  extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);
  extern void emxFree_real_T(emxArray_real_T **pEmxArray);
  extern void emxInitStruct_cell_wrap_0(cell_wrap_0 *pStruct);
  extern void emxInitStruct_struct1_T(struct1_T *pStruct);
  extern void emxInitStruct_struct4_T(struct4_T *pStruct);
  extern void emxInitStruct_struct_T(b_struct_T *pStruct);
  extern void emxInitStruct_struct_T1(c_struct_T *pStruct);
  extern void emxInitStruct_struct_T2(d_struct_T *pStruct);
  extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int
    numDimensions);
  extern void emxInit_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray, int
    numDimensions);
  extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
  extern void emxInit_int8_T(emxArray_int8_T **pEmxArray, int numDimensions);
  extern void emxInit_real32_T(emxArray_real32_T **pEmxArray, int numDimensions);
  extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
  extern void emxTrim_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
    int toIndex);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for shadowing_latlon_loop_emxutil.h
 *
 * [EOF]
 */
