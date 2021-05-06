/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * raytrace_pixel.h
 *
 * Code generation for function 'raytrace_pixel'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "shadowing_latlon_loop_types.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void raytrace_pixel(const emlrtStack *sp, real_T lat, real_T b_long, real_T
                    c_raytracing_params_t_calculati, real_T
                    d_raytracing_params_t_calculati, real_T
                    raytracing_params_t_steps, const struct2_T
                    *c_raytracing_params_public_rast, real_T
                    c_raytracing_params_extended_sa, const struct3_T
                    raytracing_params_ref_sphere, const emxArray_real_T
                    *c_raytracing_params_extended_el, real_T
                    raytracing_params_max_distance, real_T
                    c_local_raytracing_params_heigh, real_T
                    local_raytracing_params_aspect, real_T
                    local_raytracing_params_slope, const emxArray_real_T
                    *c_local_raytracing_params_h_arr, const emxArray_real_T
                    *c_local_raytracing_params_decl_, emxArray_real_T *theta_arr);

/* End of code generation (raytrace_pixel.h) */
