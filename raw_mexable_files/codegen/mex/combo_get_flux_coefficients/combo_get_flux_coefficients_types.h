/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combo_get_flux_coefficients_types.h
 *
 * Code generation for function 'combo_get_flux_coefficients'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T RasterSize[2];
  real_T FullCycle;
  real_T XIntrinsicLimits[2];
  real_T YIntrinsicLimits[2];
  real_T pLongitudeLimits[2];
  real_T pLatitudeLimits[2];
  real_T FirstCornerLatitude;
  real_T FirstCornerLongitude;
  real_T DeltaLatitudeNumerator;
  real_T DeltaLatitudeDenominator;
  real_T DeltaLongitudeNumerator;
  real_T DeltaLongitudeDenominator;
  real_T NorthPoleLatitude;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  char_T Name[4];
  char_T LengthUnit[5];
  real_T Radius;
  real_T SemimajorAxis;
  real_T SemiminorAxis;
  real_T Eccentricity;
  real_T MeanRadius;
  real_T Flattening;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

/* End of code generation (combo_get_flux_coefficients_types.h) */
