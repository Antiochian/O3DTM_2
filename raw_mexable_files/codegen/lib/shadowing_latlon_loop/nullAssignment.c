/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: nullAssignment.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Function Definitions */
/*
 * Arguments    : emxArray_boolean_T *x
 *                const emxArray_boolean_T *idx
 * Return Type  : void
 */
void b_nullAssignment(emxArray_boolean_T *x, const emxArray_boolean_T *idx)
{
  int i;
  int k;
  int k0;
  int nxin;
  int nxout;
  nxin = x->size[0];
  k0 = 0;
  i = idx->size[0];
  for (k = 0; k < i; k++) {
    k0 += idx->data[k];
  }

  nxout = x->size[0] - k0;
  k0 = -1;
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[0]) || (!idx->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }

  i = x->size[0];
  if (1 > nxout) {
    x->size[0] = 0;
  } else {
    x->size[0] = nxout;
  }

  emxEnsureCapacity_boolean_T(x, i);
}

/*
 * Arguments    : emxArray_real_T *x
 *                const emxArray_boolean_T *idx
 * Return Type  : void
 */
void nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx)
{
  int i;
  int k;
  int k0;
  int nxin;
  int nxout;
  nxin = x->size[0];
  k0 = 0;
  i = idx->size[0];
  for (k = 0; k < i; k++) {
    k0 += idx->data[k];
  }

  nxout = x->size[0] - k0;
  k0 = -1;
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[0]) || (!idx->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }

  i = x->size[0];
  if (1 > nxout) {
    x->size[0] = 0;
  } else {
    x->size[0] = nxout;
  }

  emxEnsureCapacity_real_T(x, i);
}

/*
 * File trailer for nullAssignment.c
 *
 * [EOF]
 */
