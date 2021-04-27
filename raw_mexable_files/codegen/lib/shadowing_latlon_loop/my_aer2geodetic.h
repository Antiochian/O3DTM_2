/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: my_aer2geodetic.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MY_AER2GEODETIC_H
#define MY_AER2GEODETIC_H

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
  void my_aer2geodetic(const emxArray_real_T *az, const emxArray_real_T *elev,
                       double slantRange, double lat0, double lon0, double h0,
                       double spheroid_MeanRadius, double spheroid_Flattening,
                       emxArray_real_T *lat, emxArray_real_T *lon,
                       emxArray_real_T *h);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for my_aer2geodetic.h
 *
 * [EOF]
 */
