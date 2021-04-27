/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_los2.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MEXABLE_LOS2_H
#define MEXABLE_LOS2_H

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
  void mexable_los2(const emxArray_real_T *Z, const emxArray_real_T *lat1, const
                    emxArray_real_T *lon1, const emxArray_real_T *lat2, const
                    emxArray_real_T *lon2, const emxArray_real_T *inp_talt,
                    double actualradius, double sample_dens, const struct2_T
                    *public_raster_struct, emxArray_boolean_T *vis);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for mexable_los2.h
 *
 * [EOF]
 */
