/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mexable_viewshed.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "mexable_viewshed.h"
#include "mexable_calculateLOS.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * VIEWSHED Areas visible from point on terrain elevation grid
 * Arguments    : const emxArray_real_T *Z
 *                double lat1
 *                double lon1
 *                double actualradius
 *                double apparentradius
 *                double sample_dens
 *                const struct2_T *public_raster_struct
 *                emxArray_real_T *vismap
 * Return Type  : void
 */
void mexable_viewshed(const emxArray_real_T *Z, double lat1, double lon1, double
                      actualradius, double apparentradius, double sample_dens,
                      const struct2_T *public_raster_struct, emxArray_real_T
                      *vismap)
{
  emxArray_boolean_T *qNaN;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *vis0;
  emxArray_boolean_T *visprofile;
  emxArray_boolean_T *x;
  emxArray_int32_T *b_ii;
  emxArray_int32_T *b_jj;
  emxArray_int32_T *r;
  emxArray_int32_T *r3;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *arclenInRadians;
  emxArray_real_T *b_r;
  emxArray_real_T *c;
  emxArray_real_T *lat2;
  emxArray_real_T *lattrk;
  emxArray_real_T *lon2;
  emxArray_real_T *lontrk;
  emxArray_real_T *r5;
  emxArray_real_T *x2;
  emxArray_real_T *xi;
  emxArray_real_T *y2;
  emxArray_real_T *yi;
  emxArray_real_T *z1;
  emxArray_real_T *z2;
  double b_public_raster_struct_tmp;
  double public_raster_struct_tmp;
  double yIntrinsicLimits1;
  int i;
  int idx;
  int ii;
  int jj;
  int k;
  int nx;
  boolean_T exitg1;
  boolean_T guard1 = false;
  i = vismap->size[0] * vismap->size[1];
  vismap->size[0] = Z->size[0];
  vismap->size[1] = Z->size[1];
  emxEnsureCapacity_real_T(vismap, i);
  idx = Z->size[0] * Z->size[1];
  for (i = 0; i < idx; i++) {
    vismap->data[i] = rtNaN;
  }

  emxInit_real_T(&y2, 2);
  emxInit_real_T(&lon2, 2);
  if (Z->size[1] < 1) {
    lon2->size[0] = 1;
    lon2->size[1] = 0;
    y2->size[0] = 1;
    y2->size[1] = 0;
  } else {
    i = lon2->size[0] * lon2->size[1];
    lon2->size[0] = 1;
    lon2->size[1] = (int)((double)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(lon2, i);
    idx = (int)((double)Z->size[1] - 1.0);
    for (i = 0; i <= idx; i++) {
      lon2->data[i] = (double)i + 1.0;
    }

    i = y2->size[0] * y2->size[1];
    y2->size[0] = 1;
    y2->size[1] = (int)((double)Z->size[1] - 1.0) + 1;
    emxEnsureCapacity_real_T(y2, i);
    idx = (int)((double)Z->size[1] - 1.0);
    for (i = 0; i <= idx; i++) {
      y2->data[i] = (double)i + 1.0;
    }
  }

  emxInit_real_T(&x2, 2);
  ii = Z->size[0] - 2;
  jj = Z->size[0] - 2;
  i = x2->size[0] * x2->size[1];
  x2->size[0] = 1;
  x2->size[1] = (((Z->size[0] + Z->size[0]) + lon2->size[1]) + y2->size[1]) - 4;
  emxEnsureCapacity_real_T(x2, i);
  idx = Z->size[0] - 2;
  for (i = 0; i < idx; i++) {
    x2->data[i] = 1.0;
  }

  idx = Z->size[0] - 2;
  for (i = 0; i < idx; i++) {
    x2->data[i + ii] = (unsigned int)Z->size[1];
  }

  idx = lon2->size[1];
  for (i = 0; i < idx; i++) {
    x2->data[(i + ii) + jj] = lon2->data[i];
  }

  idx = y2->size[1];
  for (i = 0; i < idx; i++) {
    x2->data[((i + ii) + jj) + lon2->size[1]] = y2->data[i];
  }

  if (Z->size[0] - 1 < 2) {
    lon2->size[0] = 1;
    lon2->size[1] = 0;
  } else {
    i = lon2->size[0] * lon2->size[1];
    lon2->size[0] = 1;
    lon2->size[1] = (int)(((double)Z->size[0] - 1.0) - 2.0) + 1;
    emxEnsureCapacity_real_T(lon2, i);
    idx = (int)(((double)Z->size[0] - 1.0) - 2.0);
    for (i = 0; i <= idx; i++) {
      lon2->data[i] = (double)i + 2.0;
    }
  }

  i = y2->size[0] * y2->size[1];
  y2->size[0] = 1;
  y2->size[1] = ((lon2->size[1] + lon2->size[1]) + Z->size[1]) + Z->size[1];
  emxEnsureCapacity_real_T(y2, i);
  idx = lon2->size[1];
  for (i = 0; i < idx; i++) {
    y2->data[i] = lon2->data[i];
  }

  idx = lon2->size[1];
  for (i = 0; i < idx; i++) {
    y2->data[i + lon2->size[1]] = lon2->data[i];
  }

  idx = Z->size[1];
  for (i = 0; i < idx; i++) {
    y2->data[(i + lon2->size[1]) + lon2->size[1]] = 1.0;
  }

  idx = Z->size[1];
  for (i = 0; i < idx; i++) {
    y2->data[((i + lon2->size[1]) + lon2->size[1]) + Z->size[1]] = (unsigned int)
      Z->size[0];
  }

  emxInit_real_T(&lat2, 2);

  /*  lat2 = intrinsicYToLatitude(R, y2); */
  /*  lon2 = intrinsicXToLongitude(R, x2); */
  /* --------------------------------------------------- */
  yIntrinsicLimits1 = public_raster_struct->YIntrinsicLimits[0];
  i = lat2->size[0] * lat2->size[1];
  lat2->size[0] = 1;
  lat2->size[1] = y2->size[1];
  emxEnsureCapacity_real_T(lat2, i);
  public_raster_struct_tmp = public_raster_struct->DeltaLatitudeDenominator *
    public_raster_struct->FirstCornerLatitude;
  idx = y2->size[0] * y2->size[1];
  for (i = 0; i < idx; i++) {
    lat2->data[i] = (public_raster_struct->DeltaLatitudeNumerator * (y2->data[i]
      - public_raster_struct->YIntrinsicLimits[0]) + public_raster_struct_tmp) /
      public_raster_struct->DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  jj = y2->size[1] - 1;
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (y2->data[idx] == yIntrinsicLimits1) {
      ii++;
    }
  }

  emxInit_int32_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = ii;
  emxEnsureCapacity_int32_T(r, i);
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (y2->data[idx] == yIntrinsicLimits1) {
      r->data[ii] = idx + 1;
      ii++;
    }
  }

  idx = r->size[0] * r->size[1] - 1;
  for (i = 0; i <= idx; i++) {
    lat2->data[r->data[i] - 1] = public_raster_struct->FirstCornerLatitude;
  }

  emxFree_int32_T(&r);
  emxInit_boolean_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(r1, i);
  idx = lat2->size[0] * lat2->size[1];
  for (i = 0; i < idx; i++) {
    r1->data[i] = (lat2->data[i] < -public_raster_struct->NorthPoleLatitude);
  }

  emxInit_boolean_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = lat2->size[1];
  emxEnsureCapacity_boolean_T(r2, i);
  idx = lat2->size[0] * lat2->size[1];
  for (i = 0; i < idx; i++) {
    r2->data[i] = (public_raster_struct->NorthPoleLatitude < lat2->data[i]);
  }

  jj = r1->size[1];
  for (idx = 0; idx < jj; idx++) {
    if (r1->data[idx] || r2->data[idx]) {
      lat2->data[idx] = rtNaN;
    }
  }

  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = lon2->size[0] * lon2->size[1];
  lon2->size[0] = 1;
  lon2->size[1] = x2->size[1];
  emxEnsureCapacity_real_T(lon2, i);
  b_public_raster_struct_tmp = public_raster_struct->DeltaLongitudeDenominator *
    public_raster_struct->FirstCornerLongitude;
  idx = x2->size[0] * x2->size[1];
  for (i = 0; i < idx; i++) {
    lon2->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (x2->data[i]
      - public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct_tmp)
      / public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  jj = x2->size[1] - 1;
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (x2->data[idx] == yIntrinsicLimits1) {
      ii++;
    }
  }

  emxInit_int32_T(&r3, 2);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = ii;
  emxEnsureCapacity_int32_T(r3, i);
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (x2->data[idx] == yIntrinsicLimits1) {
      r3->data[ii] = idx + 1;
      ii++;
    }
  }

  idx = r3->size[0] * r3->size[1] - 1;
  for (i = 0; i <= idx; i++) {
    lon2->data[r3->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r3);
  i = lat2->size[1];
  emxInit_boolean_T(&visprofile, 1);
  emxInit_real_T(&lontrk, 1);
  emxInit_real_T(&arclenInRadians, 1);
  emxInit_boolean_T(&vis0, 1);
  emxInit_real_T(&z1, 2);
  emxInit_real_T(&z2, 2);
  emxInit_boolean_T(&qNaN, 1);
  emxInit_real_T(&xi, 1);
  emxInit_real_T(&yi, 1);
  emxInit_real_T(&c, 1);
  emxInit_real_T(&b_r, 1);
  emxInit_boolean_T(&r4, 1);
  emxInit_real_T(&r5, 1);
  for (k = 0; k < i; k++) {
    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    sampleGreatCircle(lat1, lon1, lat2->data[k], lon2->data[k], 0.9 /
                      sample_dens, yi, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    /*  Visibility of points along the profile between the start and end points. */
    idx = arclenInRadians->size[0];
    for (jj = 0; jj < idx; jj++) {
      arclenInRadians->data[jj] *= actualradius;
    }

    interpolate(Z, yi, lontrk, public_raster_struct->RasterSize,
                public_raster_struct->FullCycle,
                public_raster_struct->XIntrinsicLimits,
                public_raster_struct->YIntrinsicLimits,
                public_raster_struct->pLongitudeLimits,
                public_raster_struct->FirstCornerLatitude,
                public_raster_struct->FirstCornerLongitude,
                public_raster_struct->DeltaLatitudeNumerator,
                public_raster_struct->DeltaLatitudeDenominator,
                public_raster_struct->DeltaLongitudeNumerator,
                public_raster_struct->DeltaLongitudeDenominator, r5);
    losprofile(arclenInRadians, r5, apparentradius, vis0, y2, z1, x2, z2);

    /* EMBED  Encode data points into regular data grid */
    /*  */
    /*    Streamlined version of the public IMBEDM function */
    /*  */
    /*    Z = EMBED(LAT, LON, VALUE, Z, R) resets certain entries of a regular */
    /*    data grid, Z.  R is a geographic raster reference object.  Its */
    /*    RasterSize property must be consistent with size(Z). The entries to be */
    /*    reset correspond to the locations defined by the latitude and longitude */
    /*    position vectors LAT and LON. The entries are reset to the same number */
    /*    if VALUE is a scalar, or to individually specified numbers if VALUE is */
    /*    a vector the same size as LAT and LON. If any points lie outside the */
    /*    input grid, a warning is issued.  All input angles are in degrees. */
    /* -------------------------------------------------------------------------- */
    /*   Eliminate NaNs from the input data */
    jj = qNaN->size[0];
    qNaN->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(qNaN, jj);
    idx = yi->size[0];
    for (jj = 0; jj < idx; jj++) {
      qNaN->data[jj] = rtIsNaN(yi->data[jj]);
    }

    jj = r4->size[0];
    r4->size[0] = lontrk->size[0];
    emxEnsureCapacity_boolean_T(r4, jj);
    idx = lontrk->size[0];
    for (jj = 0; jj < idx; jj++) {
      r4->data[jj] = rtIsNaN(lontrk->data[jj]);
    }

    idx = qNaN->size[0];
    for (jj = 0; jj < idx; jj++) {
      qNaN->data[jj] = (qNaN->data[jj] || r4->data[jj]);
    }

    nullAssignment(yi, qNaN);
    nullAssignment(lontrk, qNaN);
    b_nullAssignment(vis0, qNaN);

    /*   Convert the lat and lon data to cell positions */
    /*     [r, c] = geographicToDiscrete(R, lat, lon); */
    /*     qOutside = isnan(r); */
    /*   As an optimization, avoid [r, c] = geographicToDiscrete(R, lat, lon); */
    /*   because it takes time to validate its latitude-longitude inputs. */
    mexable_longitudeToIntrinsicX(public_raster_struct->FullCycle,
      public_raster_struct->XIntrinsicLimits,
      public_raster_struct->pLongitudeLimits,
      public_raster_struct->FirstCornerLongitude,
      public_raster_struct->DeltaLongitudeNumerator,
      public_raster_struct->DeltaLongitudeDenominator, lontrk, xi);

    /* latitudeToIntrinsicY Convert from latitude to intrinsic Y */
    /*  */
    /*    yIntrinsic = latitudeToIntrinsicY(R, LAT) returns the */
    /*    intrinsic Y value of the line corresponding to the small */
    /*    circle at latitude LAT, based on the relationship */
    /*    defined by the referencing object R. The input may */
    /*    include values that fall completely outside the latitude */
    /*    limits of the raster (or image). In this case yIntrinsic */
    /*    is either extrapolated outside the intrinsic Y limits -- */
    /*    for elements of LAT that fall within the interval */
    /*    [-90 90] degrees, or set to NaN -- for elements of LAT */
    /*    that do not correspond to valid latitudes. NaN-valued */
    /*    elements of LAT map to NaNs in yIntrinsic. */
    /*  Elements of LAT are less than -90 degrees or */
    /*  that exceed +90 degrees should map to NaN. */
    jj = r4->size[0];
    r4->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(r4, jj);
    idx = yi->size[0];
    jj = visprofile->size[0];
    visprofile->size[0] = yi->size[0];
    emxEnsureCapacity_boolean_T(visprofile, jj);
    for (jj = 0; jj < idx; jj++) {
      r4->data[jj] = (yi->data[jj] < -90.0);
      visprofile->data[jj] = (90.0 < yi->data[jj]);
    }

    jj = r4->size[0];
    for (idx = 0; idx < jj; idx++) {
      if (r4->data[idx] || visprofile->data[idx]) {
        yi->data[idx] = rtNaN;
      }
    }

    /*  Shift and scale latitude */
    idx = yi->size[0];
    for (jj = 0; jj < idx; jj++) {
      yi->data[jj] = public_raster_struct->YIntrinsicLimits[0] + (yi->data[jj] -
        public_raster_struct->FirstCornerLatitude) *
        public_raster_struct->DeltaLatitudeDenominator /
        public_raster_struct->DeltaLatitudeNumerator;
    }

    jj = qNaN->size[0];
    qNaN->size[0] = xi->size[0];
    emxEnsureCapacity_boolean_T(qNaN, jj);
    idx = xi->size[0];
    for (ii = 0; ii < idx; ii++) {
      qNaN->data[ii] = ((xi->data[ii] < public_raster_struct->XIntrinsicLimits[0])
                        || (public_raster_struct->XIntrinsicLimits[1] < xi->
                            data[ii]) || (yi->data[ii] <
        public_raster_struct->YIntrinsicLimits[0]) ||
                        (public_raster_struct->YIntrinsicLimits[1] < yi->data[ii]));
      xi->data[ii] = rt_roundd_snf(xi->data[ii]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    nx = yi->size[0];
    for (ii = 0; ii < nx; ii++) {
      yi->data[ii] = rt_roundd_snf(yi->data[ii]);
    }

    /*  <-- ***** Error fix that will be corrected in next MATLAB version ***** */
    /*  Remove any points that fall outside the grid */
    jj = b_r->size[0];
    b_r->size[0] = yi->size[0];
    emxEnsureCapacity_real_T(b_r, jj);
    nx = yi->size[0];
    for (ii = 0; ii < nx; ii++) {
      b_r->data[ii] = fmin(yi->data[ii], public_raster_struct->RasterSize[0]);
    }

    nullAssignment(b_r, qNaN);
    jj = c->size[0];
    c->size[0] = xi->size[0];
    emxEnsureCapacity_real_T(c, jj);
    nx = xi->size[0];
    for (ii = 0; ii < nx; ii++) {
      c->data[ii] = fmin(xi->data[ii], public_raster_struct->RasterSize[1]);
    }

    nullAssignment(c, qNaN);
    b_nullAssignment(vis0, qNaN);

    /*   Embed the points into the grid */
    ii = vismap->size[0];
    idx = vis0->size[0];
    for (jj = 0; jj < idx; jj++) {
      vismap->data[(int)((c->data[jj] - 1.0) * (double)ii + b_r->data[jj]) - 1] =
        vis0->data[jj];
    }
  }

  emxFree_boolean_T(&vis0);
  emxFree_real_T(&lon2);
  emxFree_real_T(&lat2);
  emxInit_boolean_T(&x, 2);

  /*  Calculate LOS directly to fill in any remaining unassigned (NaN-valued) */
  /*  elements of vismap. */
  i = x->size[0] * x->size[1];
  x->size[0] = vismap->size[0];
  x->size[1] = vismap->size[1];
  emxEnsureCapacity_boolean_T(x, i);
  idx = vismap->size[0] * vismap->size[1];
  for (i = 0; i < idx; i++) {
    x->data[i] = rtIsNaN(vismap->data[i]);
  }

  nx = x->size[0] * x->size[1];
  emxInit_int32_T(&b_ii, 1);
  emxInit_int32_T(&b_jj, 1);
  if (nx == 0) {
    b_ii->size[0] = 0;
    b_jj->size[0] = 0;
  } else {
    idx = 0;
    i = b_ii->size[0];
    b_ii->size[0] = nx;
    emxEnsureCapacity_int32_T(b_ii, i);
    i = b_jj->size[0];
    b_jj->size[0] = nx;
    emxEnsureCapacity_int32_T(b_jj, i);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= x->size[1])) {
      guard1 = false;
      if (x->data[(ii + x->size[0] * (jj - 1)) - 1]) {
        idx++;
        b_ii->data[idx - 1] = ii;
        b_jj->data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ii++;
        if (ii > x->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }

    if (nx == 1) {
      if (idx == 0) {
        b_ii->size[0] = 0;
        b_jj->size[0] = 0;
      }
    } else {
      i = b_ii->size[0];
      if (1 > idx) {
        b_ii->size[0] = 0;
      } else {
        b_ii->size[0] = idx;
      }

      emxEnsureCapacity_int32_T(b_ii, i);
      i = b_jj->size[0];
      if (1 > idx) {
        b_jj->size[0] = 0;
      } else {
        b_jj->size[0] = idx;
      }

      emxEnsureCapacity_int32_T(b_jj, i);
    }
  }

  emxFree_boolean_T(&x);
  i = c->size[0];
  c->size[0] = b_ii->size[0];
  emxEnsureCapacity_real_T(c, i);
  idx = b_ii->size[0];
  for (i = 0; i < idx; i++) {
    c->data[i] = b_ii->data[i];
  }

  emxFree_int32_T(&b_ii);
  i = b_r->size[0];
  b_r->size[0] = b_jj->size[0];
  emxEnsureCapacity_real_T(b_r, i);
  idx = b_jj->size[0];
  for (i = 0; i < idx; i++) {
    b_r->data[i] = b_jj->data[i];
  }

  emxFree_int32_T(&b_jj);

  /* --------------------------------------------------- */
  yIntrinsicLimits1 = public_raster_struct->YIntrinsicLimits[0];
  i = xi->size[0];
  xi->size[0] = b_r->size[0];
  emxEnsureCapacity_real_T(xi, i);
  idx = b_r->size[0];
  for (i = 0; i < idx; i++) {
    xi->data[i] = (public_raster_struct->DeltaLatitudeNumerator * (b_r->data[i]
      - public_raster_struct->YIntrinsicLimits[0]) + public_raster_struct_tmp) /
      public_raster_struct->DeltaLatitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner latitude. */
  jj = b_r->size[0] - 1;
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (b_r->data[idx] == yIntrinsicLimits1) {
      ii++;
    }
  }

  emxInit_int32_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = ii;
  emxEnsureCapacity_int32_T(r6, i);
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (b_r->data[idx] == yIntrinsicLimits1) {
      r6->data[ii] = idx + 1;
      ii++;
    }
  }

  idx = r6->size[0];
  for (i = 0; i < idx; i++) {
    xi->data[r6->data[i] - 1] = public_raster_struct->FirstCornerLatitude;
  }

  emxFree_int32_T(&r6);
  i = r4->size[0];
  r4->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  idx = xi->size[0];
  for (i = 0; i < idx; i++) {
    r4->data[i] = (xi->data[i] < -public_raster_struct->NorthPoleLatitude);
  }

  i = visprofile->size[0];
  visprofile->size[0] = xi->size[0];
  emxEnsureCapacity_boolean_T(visprofile, i);
  idx = xi->size[0];
  for (i = 0; i < idx; i++) {
    visprofile->data[i] = (public_raster_struct->NorthPoleLatitude < xi->data[i]);
  }

  jj = r4->size[0];
  for (idx = 0; idx < jj; idx++) {
    if (r4->data[idx] || visprofile->data[idx]) {
      xi->data[idx] = rtNaN;
    }
  }

  emxFree_boolean_T(&r4);

  /* ---------------------------------------------------   */
  yIntrinsicLimits1 = public_raster_struct->XIntrinsicLimits[0];
  i = yi->size[0];
  yi->size[0] = c->size[0];
  emxEnsureCapacity_real_T(yi, i);
  idx = c->size[0];
  for (i = 0; i < idx; i++) {
    yi->data[i] = (public_raster_struct->DeltaLongitudeNumerator * (c->data[i] -
      public_raster_struct->XIntrinsicLimits[0]) + b_public_raster_struct_tmp) /
      public_raster_struct->DeltaLongitudeDenominator;
  }

  /*  Ensure perfect consistency with the first corner longitude. */
  jj = c->size[0] - 1;
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (c->data[idx] == yIntrinsicLimits1) {
      ii++;
    }
  }

  emxInit_int32_T(&r7, 1);
  i = r7->size[0];
  r7->size[0] = ii;
  emxEnsureCapacity_int32_T(r7, i);
  ii = 0;
  for (idx = 0; idx <= jj; idx++) {
    if (c->data[idx] == yIntrinsicLimits1) {
      r7->data[ii] = idx + 1;
      ii++;
    }
  }

  idx = r7->size[0];
  for (i = 0; i < idx; i++) {
    yi->data[r7->data[i] - 1] = public_raster_struct->FirstCornerLongitude;
  }

  emxFree_int32_T(&r7);
  i = qNaN->size[0];
  qNaN->size[0] = c->size[0];
  emxEnsureCapacity_boolean_T(qNaN, i);
  idx = c->size[0];
  for (i = 0; i < idx; i++) {
    qNaN->data[i] = false;
  }

  i = c->size[0];
  emxInit_real_T(&lattrk, 1);
  for (k = 0; k < i; k++) {
    /*  Perform the line-of-sight computations needed by LOS2 and VIEWSHED. */
    /*  Copyright 2014-2015 The MathWorks, Inc. */
    /*  Sample at slightly less than the elevation grid spacing. */
    /*  Intermediate points along the great circle arc between start and end. */
    sampleGreatCircle(lat1, lon1, xi->data[k], yi->data[k], 0.9 / sample_dens,
                      lattrk, lontrk, arclenInRadians);

    /*  Elevation profile between the start and end points. */
    /*  Visibility of points along the profile between the start and end points. */
    idx = arclenInRadians->size[0];
    for (jj = 0; jj < idx; jj++) {
      arclenInRadians->data[jj] *= actualradius;
    }

    interpolate(Z, lattrk, lontrk, public_raster_struct->RasterSize,
                public_raster_struct->FullCycle,
                public_raster_struct->XIntrinsicLimits,
                public_raster_struct->YIntrinsicLimits,
                public_raster_struct->pLongitudeLimits,
                public_raster_struct->FirstCornerLatitude,
                public_raster_struct->FirstCornerLongitude,
                public_raster_struct->DeltaLatitudeNumerator,
                public_raster_struct->DeltaLatitudeDenominator,
                public_raster_struct->DeltaLongitudeNumerator,
                public_raster_struct->DeltaLongitudeDenominator, r5);
    losprofile(arclenInRadians, r5, apparentradius, visprofile, y2, z1, x2, z2);
    qNaN->data[k] = visprofile->data[visprofile->size[0] - 1];
  }

  emxFree_real_T(&r5);
  emxFree_real_T(&lattrk);
  emxFree_real_T(&yi);
  emxFree_real_T(&xi);
  emxFree_real_T(&z2);
  emxFree_real_T(&z1);
  emxFree_real_T(&arclenInRadians);
  emxFree_real_T(&lontrk);
  emxFree_boolean_T(&visprofile);
  emxFree_real_T(&y2);
  emxFree_real_T(&x2);
  ii = vismap->size[0];
  idx = qNaN->size[0];
  for (i = 0; i < idx; i++) {
    vismap->data[(int)((b_r->data[i] - 1.0) * (double)ii + c->data[i]) - 1] =
      qNaN->data[i];
  }

  emxFree_real_T(&b_r);
  emxFree_real_T(&c);
  emxFree_boolean_T(&qNaN);
}

/*
 * File trailer for mexable_viewshed.c
 *
 * [EOF]
 */
