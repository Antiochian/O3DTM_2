/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: interp2.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef INTERP2_H
#define INTERP2_H

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
  void interp2_local(const emxArray_real_T *V, const emxArray_real_T *Xq, const
                     emxArray_real_T *Yq, emxArray_real_T *Vq);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for interp2.h
 *
 * [EOF]
 */
