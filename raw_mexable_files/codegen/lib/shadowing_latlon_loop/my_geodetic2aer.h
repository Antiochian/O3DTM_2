/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: my_geodetic2aer.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MY_GEODETIC2AER_H
#define MY_GEODETIC2AER_H

/* Include Files */
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void my_geodetic2aer(double lat, double lon, double h, double lat0, double
                       lon0, double h0, double spheroid_Radius, double
                       spheroid_Flattening, double *az, double *elev, double
                       *slantRange);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for my_geodetic2aer.h
 *
 * [EOF]
 */
