/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_viewshed.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef MEXABLE_VIEWSHED_H
#define MEXABLE_VIEWSHED_H

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
  void mexable_viewshed(const emxArray_real_T *Z, double lat1, double lon1,
                        double actualradius, double apparentradius, double
                        sample_dens, const struct2_T *public_raster_struct,
                        emxArray_real_T *vismap);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for mexable_viewshed.h
 *
 * [EOF]
 */
