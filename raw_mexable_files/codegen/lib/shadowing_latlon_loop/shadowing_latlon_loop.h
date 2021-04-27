/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef SHADOWING_LATLON_LOOP_H
#define SHADOWING_LATLON_LOOP_H

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
  extern void shadowing_latlon_loop(const emxArray_real_T *z_arr, double
    bottom_layer_idx, double depth_update_wait_t, double depth_update_t_interval,
    double num_layers, double t_limit, double t_wait, const emxArray_real_T
    *rho_matrix, const emxArray_real_T *lat_arr, const emxArray_real_T *long_arr,
    const emxArray_real_T *dz_arr, double dz, const struct0_T *parameters, const
    emxArray_real_T *init_temps, const struct1_T *raytracing_params, const
    emxArray_real_T *ew_matrix, const emxArray_real_T *ns_matrix, double
    start_jd, double end_jd, const struct4_T *diviner_data, boolean_T
    recent_only, emxArray_real_T *Tmax_3dmat, emxArray_real_T *Tmin_3dmat,
    emxArray_cell_wrap_0 *jd_error_3dmat, emxArray_cell_wrap_0 *T_error_3dmat);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for shadowing_latlon_loop.h
 *
 * [EOF]
 */
