/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * interp2.h
 *
 * Code generation for function 'interp2'
 *
 */

#pragma once

/* Include files */
#include "no_raytracing_latlon_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void interp2_local(const emlrtStack *sp, const emxArray_real_T *V, const
                   emxArray_real_T *Xq, const emxArray_real_T *Yq,
                   emxArray_real_T *Vq);

/* End of code generation (interp2.h) */
