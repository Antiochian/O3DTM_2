/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mark_diviner_testpoints.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MARK_DIVINER_TESTPOINTS_H
#define MARK_DIVINER_TESTPOINTS_H

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
  void mark_diviner_testpoints(double start_jd, double end_jd, const
    emxArray_real_T *lat_arr, const emxArray_real_T *long_arr, const
    emxArray_real_T *diviner_data_lat_arr, const emxArray_real_T
    *diviner_data_long_arr, const emxArray_real_T *diviner_data_T_arr, const
    emxArray_real_T *diviner_data_jd_arr, boolean_T recent_only,
    emxArray_cell_wrap_0 *sample_timepoints, emxArray_cell_wrap_0
    *sample_surface_temperatures);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for mark_diviner_testpoints.h
 *
 * [EOF]
 */
