/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * raytrace_tick.h
 *
 * Code generation for function 'raytrace_tick'
 *
 */

#pragma once

/* Include files */
#include "multiscattering_core_loop_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void raytrace_tick(const emlrtStack *sp, real_T decl, real_T raytrace_h, const
                   emxArray_real_T *lat_arr, const emxArray_real_T *long_arr,
                   const emxArray_real_T *elevation_matrix, const
                   emxArray_real_T *extended_elevation_matrix, const
                   emxArray_real_T *slope_matrix, const emxArray_real_T
                   *aspect_matrix, real_T ref_sphere_MeanRadius, real_T
                   ref_sphere_Flattening, real_T max_distance, const struct2_T
                   *public_raster_struct, real_T r_moon, real_T sample_dens,
                   emxArray_real_T *theta_arr);

/* End of code generation (raytrace_tick.h) */
