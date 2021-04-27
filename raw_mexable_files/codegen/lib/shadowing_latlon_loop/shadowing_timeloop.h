/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_timeloop.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef SHADOWING_TIMELOOP_H
#define SHADOWING_TIMELOOP_H

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
  void shadowing_timeloop(const emxArray_real_T *T_arr, const emxArray_real_T
    *dz_arr, const b_struct_T *temperature_parameters, const c_struct_T
    *local_temperature_params, const struct1_T *raytracing_params, const
    d_struct_T local_raytracing_params, double lat, double b_long, const
    emxArray_real_T *sample_timepoints_local, const emxArray_real_T
    *c_sample_surface_temperatures_l, emxArray_real_T *Tmin_local,
    emxArray_real_T *Tmax_local, emxArray_real_T *T_error_local);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for shadowing_timeloop.h
 *
 * [EOF]
 */
