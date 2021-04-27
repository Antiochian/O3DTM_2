/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_calculateLOS.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MEXABLE_CALCULATELOS_H
#define MEXABLE_CALCULATELOS_H

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
  void interpolate(const emxArray_real_T *Z, const emxArray_real_T *lat, const
                   emxArray_real_T *lon, const double pR_RasterSize[2], double
                   pR_FullCycle, const double pR_XIntrinsicLimits[2], const
                   double pR_YIntrinsicLimits[2], const double
                   pR_pLongitudeLimits[2], double pR_FirstCornerLatitude, double
                   pR_FirstCornerLongitude, double pR_DeltaLatitudeNumerator,
                   double pR_DeltaLatitudeDenominator, double
                   pR_DeltaLongitudeNumerator, double
                   pR_DeltaLongitudeDenominator, emxArray_real_T *v);
  void losprofile(const emxArray_real_T *arclen, const emxArray_real_T *zin,
                  double apparentradius, emxArray_boolean_T *vis,
                  emxArray_real_T *x, emxArray_real_T *z, emxArray_real_T *x2,
                  emxArray_real_T *z2);
  void mexable_calculateLOS(const emxArray_real_T *Z, double lat1, double lon1,
    double lat2, double lon2, double talt, double actualradius, double
    apparentradius, double sample_dens, const struct2_T *public_raster_struct,
    emxArray_boolean_T *vis0, emxArray_real_T *dist, emxArray_real_T *h,
    emxArray_real_T *lattrk, emxArray_real_T *lontrk, emxArray_real_T *x1,
    emxArray_real_T *z1, emxArray_real_T *x2, emxArray_real_T *z2);
  void mexable_longitudeToIntrinsicX(double pR_FullCycle, const double
    pR_XIntrinsicLimits[2], const double pR_pLongitudeLimits[2], double
    pR_FirstCornerLongitude, double pR_DeltaLongitudeNumerator, double
    pR_DeltaLongitudeDenominator, emxArray_real_T *lon, emxArray_real_T *xi1);
  void sampleGreatCircle(double lat1, double lon1, double lat2, double lon2,
    double spacingInDegrees, emxArray_real_T *lat, emxArray_real_T *lon,
    emxArray_real_T *arclenInRadians);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for mexable_calculateLOS.h
 *
 * [EOF]
 */
