/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop_emxAPI.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "shadowing_latlon_loop_emxAPI.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include <stdlib.h>

/* Function Definitions */
/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_cell_wrap_0 *
 */
emxArray_cell_wrap_0 *emxCreateND_cell_wrap_0(int numDimensions, const int *size)
{
  emxArray_cell_wrap_0 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_0(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (cell_wrap_0 *)calloc((unsigned int)numEl, sizeof(cell_wrap_0));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size)
{
  emxArray_real_T *emx;
  int i;
  int numEl;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : cell_wrap_0 *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_cell_wrap_0 *
 */
emxArray_cell_wrap_0 *emxCreateWrapperND_cell_wrap_0(cell_wrap_0 *data, int
  numDimensions, const int *size)
{
  emxArray_cell_wrap_0 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_0(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapperND_real_T(double *data, int numDimensions,
  const int *size)
{
  emxArray_real_T *emx;
  int i;
  int numEl;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : cell_wrap_0 *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_cell_wrap_0 *
 */
emxArray_cell_wrap_0 *emxCreateWrapper_cell_wrap_0(cell_wrap_0 *data, int rows,
  int cols)
{
  emxArray_cell_wrap_0 *emx;
  emxInit_cell_wrap_0(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols)
{
  emxArray_real_T *emx;
  emxInit_real_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_cell_wrap_0 *
 */
emxArray_cell_wrap_0 *emxCreate_cell_wrap_0(int rows, int cols)
{
  emxArray_cell_wrap_0 *emx;
  int numEl;
  emxInit_cell_wrap_0(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (cell_wrap_0 *)calloc((unsigned int)numEl, sizeof(cell_wrap_0));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreate_real_T(int rows, int cols)
{
  emxArray_real_T *emx;
  int numEl;
  emxInit_real_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_cell_wrap_0 *emxArray
 * Return Type  : void
 */
void emxDestroyArray_cell_wrap_0(emxArray_cell_wrap_0 *emxArray)
{
  emxFree_cell_wrap_0(&emxArray);
}

/*
 * Arguments    : emxArray_real_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_real_T(emxArray_real_T *emxArray)
{
  emxFree_real_T(&emxArray);
}

/*
 * Arguments    : struct1_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct1_T(struct1_T emxArray)
{
  emxFreeStruct_struct1_T(&emxArray);
}

/*
 * Arguments    : struct4_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct4_T(struct4_T emxArray)
{
  emxFreeStruct_struct4_T(&emxArray);
}

/*
 * Arguments    : emxArray_cell_wrap_0 **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray, int
  numDimensions)
{
  emxInit_cell_wrap_0(pEmxArray, numDimensions);
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxInit_real_T(pEmxArray, numDimensions);
}

/*
 * Arguments    : struct1_T *pStruct
 * Return Type  : void
 */
void emxInit_struct1_T(struct1_T *pStruct)
{
  emxInitStruct_struct1_T(pStruct);
}

/*
 * Arguments    : struct4_T *pStruct
 * Return Type  : void
 */
void emxInit_struct4_T(struct4_T *pStruct)
{
  emxInitStruct_struct4_T(pStruct);
}

/*
 * File trailer for shadowing_latlon_loop_emxAPI.c
 *
 * [EOF]
 */
