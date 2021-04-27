/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mark_diviner_testpoints.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "mark_diviner_testpoints.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Function Definitions */
/*
 * This function reads the diviner dataset and saves some temperatures to be
 *  used as test points during the code's execution. The code by default
 *  saves the max/min temperatures, throwing away all other calculated values
 *  to save space - this function provides a list of "calibration" timepoints
 *  to save as well.
 *
 *  It returns two latxlon cell arrays, where each component corresponds to a
 *  pixel and contains a variable-length list of values. The first cell array contains a
 *  list of timepoints in julian date format, the second contains a list of
 *  surface temperatures in Kelvin.
 *
 *  These are the EXACT timestamps of the Diviner dataset, and may not line
 *  up with the model. Later on in the raytrace_pixel subroutine
 *  interpolation will be done to bring them into alignment
 * Arguments    : double start_jd
 *                double end_jd
 *                const emxArray_real_T *lat_arr
 *                const emxArray_real_T *long_arr
 *                const emxArray_real_T *diviner_data_lat_arr
 *                const emxArray_real_T *diviner_data_long_arr
 *                const emxArray_real_T *diviner_data_T_arr
 *                const emxArray_real_T *diviner_data_jd_arr
 *                boolean_T recent_only
 *                emxArray_cell_wrap_0 *sample_timepoints
 *                emxArray_cell_wrap_0 *sample_surface_temperatures
 * Return Type  : void
 */
void mark_diviner_testpoints(double start_jd, double end_jd, const
  emxArray_real_T *lat_arr, const emxArray_real_T *long_arr, const
  emxArray_real_T *diviner_data_lat_arr, const emxArray_real_T
  *diviner_data_long_arr, const emxArray_real_T *diviner_data_T_arr, const
  emxArray_real_T *diviner_data_jd_arr, boolean_T recent_only,
  emxArray_cell_wrap_0 *sample_timepoints, emxArray_cell_wrap_0
  *sample_surface_temperatures)
{
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  double a;
  int b_i;
  int end;
  int i;
  int i1;
  int lat_idx;
  int long_idx;
  int loop_ub;

  /*  diviner_data = load(create_static_path(sprintf('crater_environments/diviner_temperatures/%s_diviner_temperatures.mat', crater_name))); */
  /*  diviner_data = diviner_data.output; */
  i = sample_timepoints->size[0] * sample_timepoints->size[1];
  sample_timepoints->size[0] = lat_arr->size[1];
  sample_timepoints->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sample_timepoints, i);
  i = sample_surface_temperatures->size[0] * sample_surface_temperatures->size[1];
  sample_surface_temperatures->size[0] = lat_arr->size[1];
  sample_surface_temperatures->size[1] = long_arr->size[1];
  emxEnsureCapacity_cell_wrap_0(sample_surface_temperatures, i);
  if (recent_only) {
    a = end_jd - 360.0;
  } else {
    a = start_jd;
  }

  i = lat_arr->size[1];
  emxInit_boolean_T(&r, 2);
  emxInit_boolean_T(&r1, 2);
  emxInit_int32_T(&r2, 2);
  emxInit_int32_T(&r3, 2);
  for (lat_idx = 0; lat_idx < i; lat_idx++) {
    i1 = long_arr->size[1];
    for (long_idx = 0; long_idx < i1; long_idx++) {
      b_i = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = diviner_data_lat_arr->size[1];
      emxEnsureCapacity_boolean_T(r, b_i);
      loop_ub = diviner_data_lat_arr->size[0] * diviner_data_lat_arr->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r->data[b_i] = ((diviner_data_lat_arr->data[b_i] == lat_arr->
                         data[lat_idx]) && (diviner_data_long_arr->data[b_i] ==
          long_arr->data[long_idx]) && (diviner_data_jd_arr->data[b_i] >= a));
      }

      b_i = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = diviner_data_jd_arr->size[1];
      emxEnsureCapacity_boolean_T(r1, b_i);
      loop_ub = diviner_data_jd_arr->size[0] * diviner_data_jd_arr->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r1->data[b_i] = (diviner_data_jd_arr->data[b_i] <= end_jd);
      }

      /* Select all relevant measurements */
      /* save results for this pixel into cell array */
      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      b_i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(r2, b_i);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r2->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      b_i = sample_timepoints->data[lat_idx + sample_timepoints->size[0] *
        long_idx].f1->size[0] * sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1->size[1];
      sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx].
        f1->size[0] = 1;
      sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx].
        f1->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(sample_timepoints->data[lat_idx +
        sample_timepoints->size[0] * long_idx].f1, b_i);
      loop_ub = r2->size[0] * r2->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        sample_timepoints->data[lat_idx + sample_timepoints->size[0] * long_idx]
          .f1->data[b_i] = diviner_data_jd_arr->data[r2->data[b_i] - 1];
      }

      end = r->size[1] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          loop_ub++;
        }
      }

      b_i = r3->size[0] * r3->size[1];
      r3->size[0] = 1;
      r3->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(r3, b_i);
      loop_ub = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (r->data[b_i] && r1->data[b_i]) {
          r3->data[loop_ub] = b_i + 1;
          loop_ub++;
        }
      }

      b_i = sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[0] *
        sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1];
      sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[0] = 1;
      sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1->size[1] = r3->size
        [1];
      emxEnsureCapacity_real_T(sample_surface_temperatures->data[lat_idx +
        sample_surface_temperatures->size[0] * long_idx].f1, b_i);
      loop_ub = r3->size[0] * r3->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        sample_surface_temperatures->data[lat_idx +
          sample_surface_temperatures->size[0] * long_idx].f1->data[b_i] =
          diviner_data_T_arr->data[r3->data[b_i] - 1];
      }
    }
  }

  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
}

/*
 * File trailer for mark_diviner_testpoints.c
 *
 * [EOF]
 */
