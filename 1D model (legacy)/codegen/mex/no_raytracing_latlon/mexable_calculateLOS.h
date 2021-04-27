/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_calculateLOS.h
 *
 * Code generation for function 'mexable_calculateLOS'
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
void interpolate(const emlrtStack *sp, const emxArray_real_T *Z, const
                 emxArray_real_T *lat, const emxArray_real_T *lon, const real_T
                 pR_RasterSize[2], real_T pR_FullCycle, const real_T
                 pR_XIntrinsicLimits[2], const real_T pR_YIntrinsicLimits[2],
                 const real_T pR_pLongitudeLimits[2], real_T
                 pR_FirstCornerLatitude, real_T pR_FirstCornerLongitude, real_T
                 pR_DeltaLatitudeNumerator, real_T pR_DeltaLatitudeDenominator,
                 real_T pR_DeltaLongitudeNumerator, real_T
                 pR_DeltaLongitudeDenominator, emxArray_real_T *v);
void losprofile(const emlrtStack *sp, const emxArray_real_T *arclen, const
                emxArray_real_T *zin, real_T apparentradius, emxArray_boolean_T *
                vis, emxArray_real_T *x, emxArray_real_T *z, emxArray_real_T *x2,
                emxArray_real_T *z2);
void mexable_longitudeToIntrinsicX(const emlrtStack *sp, real_T pR_FullCycle,
  const real_T pR_XIntrinsicLimits[2], const real_T pR_pLongitudeLimits[2],
  real_T pR_FirstCornerLongitude, real_T pR_DeltaLongitudeNumerator, real_T
  pR_DeltaLongitudeDenominator, emxArray_real_T *lon, emxArray_real_T *xi1);
void sampleGreatCircle(const emlrtStack *sp, real_T lat1, real_T lon1, real_T
  lat2, real_T lon2, real_T spacingInDegrees, emxArray_real_T *lat,
  emxArray_real_T *lon, emxArray_real_T *arclenInRadians);

/* End of code generation (mexable_calculateLOS.h) */
