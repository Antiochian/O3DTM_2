/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scalexpAlloc.h
 *
 * Code generation for function 'scalexpAlloc'
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
boolean_T b_dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                     const emxArray_real_T *varargin_2);
boolean_T c_dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                     const emxArray_real_T *varargin_2);
boolean_T dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                   const emxArray_real_T *varargin_2);

/* End of code generation (scalexpAlloc.h) */
