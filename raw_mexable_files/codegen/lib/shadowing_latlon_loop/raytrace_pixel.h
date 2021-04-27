/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: raytrace_pixel.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef RAYTRACE_PIXEL_H
#define RAYTRACE_PIXEL_H

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
  void raytrace_pixel(double lat, double b_long, double
                      c_raytracing_params_t_calculati, double
                      d_raytracing_params_t_calculati, double
                      raytracing_params_t_steps, const struct2_T
                      *c_raytracing_params_public_rast, double
                      c_raytracing_params_extended_sa, const struct3_T
                      raytracing_params_ref_sphere, const emxArray_real_T
                      *c_raytracing_params_extended_el, double
                      raytracing_params_max_distance, double
                      c_local_raytracing_params_heigh, double
                      local_raytracing_params_aspect, double
                      local_raytracing_params_slope, const emxArray_real_T
                      *c_local_raytracing_params_h_arr, const emxArray_real_T
                      *c_local_raytracing_params_decl_, emxArray_real_T
                      *theta_arr);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for raytrace_pixel.h
 *
 * [EOF]
 */
