/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: raytrace_pixel.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "raytrace_pixel.h"
#include "cosd.h"
#include "cotd.h"
#include "mexable_los2.h"
#include "mod.h"
#include "my_aer2geodetic.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include "sind.h"
#include "tand.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Unpack raytracing params
 * Arguments    : double lat
 *                double b_long
 *                double c_raytracing_params_t_calculati
 *                double d_raytracing_params_t_calculati
 *                double raytracing_params_t_steps
 *                const struct2_T *c_raytracing_params_public_rast
 *                double c_raytracing_params_extended_sa
 *                const struct3_T raytracing_params_ref_sphere
 *                const emxArray_real_T *c_raytracing_params_extended_el
 *                double raytracing_params_max_distance
 *                double c_local_raytracing_params_heigh
 *                double local_raytracing_params_aspect
 *                double local_raytracing_params_slope
 *                const emxArray_real_T *c_local_raytracing_params_h_arr
 *                const emxArray_real_T *c_local_raytracing_params_decl_
 *                emxArray_real_T *theta_arr
 * Return Type  : void
 */
void raytrace_pixel(double lat, double b_long, double
                    c_raytracing_params_t_calculati, double
                    d_raytracing_params_t_calculati, double
                    raytracing_params_t_steps, const struct2_T
                    *c_raytracing_params_public_rast, double
                    c_raytracing_params_extended_sa, const struct3_T
                    raytracing_params_ref_sphere, const emxArray_real_T
                    *c_raytracing_params_extended_el, double
                    raytracing_params_max_distance, double
                    c_local_raytracing_params_heigh, double
                    local_raytracing_params_aspect, double
                    local_raytracing_params_slope, const emxArray_real_T
                    *c_local_raytracing_params_h_arr, const emxArray_real_T
                    *c_local_raytracing_params_decl_, emxArray_real_T *theta_arr)
{
  emxArray_boolean_T *sun_vis;
  emxArray_int32_T *r;
  emxArray_int8_T *sigma_ns;
  emxArray_real32_T *sigma_ew;
  emxArray_real32_T *sigma_w;
  emxArray_real_T *az_sun;
  emxArray_real_T *elev_sun;
  emxArray_real_T *gamma_so;
  emxArray_real_T *h;
  emxArray_real_T *long_sun;
  emxArray_real_T *t_arr;
  emxArray_real_T *theta;
  emxArray_real_T *theta_matrix;
  emxArray_real_T *theta_z;
  emxArray_real_T *z1;
  double apnd;
  double cdiff;
  double ndbl;
  double r_moon;
  double slant_range;
  double t_arr_start;
  float f;
  int i;
  int i1;
  int i2;
  int idx;
  int k;
  int loop_ub;
  int n;
  int nm1d2;
  int t_calculation_step_idx;
  emxInit_real_T(&theta_matrix, 2);
  r_moon = raytracing_params_ref_sphere.Radius;

  /*  unpack local params */
  i = theta_matrix->size[0] * theta_matrix->size[1];
  theta_matrix->size[0] = (int)d_raytracing_params_t_calculati;
  theta_matrix->size[1] = (int)c_raytracing_params_t_calculati;
  emxEnsureCapacity_real_T(theta_matrix, i);
  loop_ub = (int)d_raytracing_params_t_calculati * (int)
    c_raytracing_params_t_calculati;
  for (i = 0; i < loop_ub; i++) {
    theta_matrix->data[i] = 0.0;
  }

  loop_ub = (int)d_raytracing_params_t_calculati - 1;

#pragma omp parallel \
 num_threads(omp_get_max_threads()) \
 private(r,z1,theta,t_arr,sigma_ns,sigma_w,theta_z,sigma_ew,az_sun,elev_sun,h,long_sun,gamma_so,sun_vis,slant_range,t_arr_start,k,nm1d2,n,f,ndbl,apnd,cdiff)

  {
    emxInit_int32_T(&r, 2);
    emxInit_real_T(&z1, 2);
    emxInit_real_T(&theta, 2);
    emxInit_real_T(&t_arr, 2);
    emxInit_int8_T(&sigma_ns, 2);
    emxInit_real32_T(&sigma_w, 2);
    emxInit_real_T(&theta_z, 2);
    emxInit_real32_T(&sigma_ew, 2);
    emxInit_real_T(&az_sun, 2);
    emxInit_real_T(&elev_sun, 2);
    emxInit_real_T(&h, 2);
    emxInit_real_T(&long_sun, 2);
    emxInit_real_T(&gamma_so, 2);
    emxInit_boolean_T(&sun_vis, 2);

#pragma omp for nowait

    for (t_calculation_step_idx = 0; t_calculation_step_idx <= loop_ub;
         t_calculation_step_idx++) {
      /*  Time loop */
      k = theta->size[0] * theta->size[1];
      theta->size[0] = 1;
      theta->size[1] = (int)c_raytracing_params_t_calculati;
      emxEnsureCapacity_real_T(theta, k);
      nm1d2 = (int)c_raytracing_params_t_calculati;
      for (k = 0; k < nm1d2; k++) {
        theta->data[k] = rtNaN;
      }

      t_arr_start = (((double)t_calculation_step_idx + 1.0) - 1.0) *
        c_raytracing_params_t_calculati + 1.0;
      slant_range = (t_arr_start + c_raytracing_params_t_calculati) - 1.0;
      if (slant_range > raytracing_params_t_steps) {
        slant_range = raytracing_params_t_steps;
      }

      if (rtIsNaN(t_arr_start) || rtIsNaN(slant_range)) {
        k = t_arr->size[0] * t_arr->size[1];
        t_arr->size[0] = 1;
        t_arr->size[1] = 1;
        emxEnsureCapacity_real_T(t_arr, k);
        t_arr->data[0] = rtNaN;
      } else if (slant_range < t_arr_start) {
        t_arr->size[0] = 1;
        t_arr->size[1] = 0;
      } else if ((rtIsInf(t_arr_start) || rtIsInf(slant_range)) && (t_arr_start ==
                  slant_range)) {
        k = t_arr->size[0] * t_arr->size[1];
        t_arr->size[0] = 1;
        t_arr->size[1] = 1;
        emxEnsureCapacity_real_T(t_arr, k);
        t_arr->data[0] = rtNaN;
      } else if (t_arr_start == t_arr_start) {
        k = t_arr->size[0] * t_arr->size[1];
        t_arr->size[0] = 1;
        nm1d2 = (int)floor(slant_range - t_arr_start);
        t_arr->size[1] = nm1d2 + 1;
        emxEnsureCapacity_real_T(t_arr, k);
        for (k = 0; k <= nm1d2; k++) {
          t_arr->data[k] = t_arr_start + (double)k;
        }
      } else {
        ndbl = floor((slant_range - t_arr_start) + 0.5);
        apnd = t_arr_start + ndbl;
        cdiff = apnd - slant_range;
        if (fabs(cdiff) < 4.4408920985006262E-16 * fmax(fabs(t_arr_start), fabs
             (slant_range))) {
          ndbl++;
          apnd = slant_range;
        } else if (cdiff > 0.0) {
          apnd = t_arr_start + (ndbl - 1.0);
        } else {
          ndbl++;
        }

        if (ndbl >= 0.0) {
          n = (int)ndbl;
        } else {
          n = 0;
        }

        k = t_arr->size[0] * t_arr->size[1];
        t_arr->size[0] = 1;
        t_arr->size[1] = n;
        emxEnsureCapacity_real_T(t_arr, k);
        if (n > 0) {
          t_arr->data[0] = t_arr_start;
          if (n > 1) {
            t_arr->data[n - 1] = apnd;
            nm1d2 = (n - 1) / 2;
            for (k = 0; k <= nm1d2 - 2; k++) {
              t_arr->data[k + 1] = t_arr_start + ((double)k + 1.0);
              t_arr->data[(n - k) - 2] = apnd - ((double)k + 1.0);
            }

            if (nm1d2 << 1 == n - 1) {
              t_arr->data[nm1d2] = (t_arr_start + apnd) / 2.0;
            } else {
              t_arr->data[nm1d2] = t_arr_start + (double)nm1d2;
              t_arr->data[nm1d2 + 1] = apnd - (double)nm1d2;
            }
          }
        }
      }

      /*  array of time values to calculate for at this iteration */
      if (t_arr->size[1] != 0) {
        k = elev_sun->size[0] * elev_sun->size[1];
        elev_sun->size[0] = 1;
        elev_sun->size[1] = t_arr->size[1];
        emxEnsureCapacity_real_T(elev_sun, k);
        nm1d2 = t_arr->size[0] * t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          elev_sun->data[k] = c_local_raytracing_params_decl_->data[(int)
            t_arr->data[k] - 1];
        }

        k = long_sun->size[0] * long_sun->size[1];
        long_sun->size[0] = 1;
        long_sun->size[1] = t_arr->size[1];
        emxEnsureCapacity_real_T(long_sun, k);
        nm1d2 = t_arr->size[0] * t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = c_local_raytracing_params_h_arr->data[(int)
            t_arr->data[k] - 1] + 180.0;
        }

        k = h->size[0] * h->size[1];
        h->size[0] = 1;
        h->size[1] = long_sun->size[1];
        emxEnsureCapacity_real_T(h, k);
        nm1d2 = long_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          h->data[k] = b_mod(long_sun->data[k], 360.0);
        }

        k = h->size[0] * h->size[1];
        n = h->size[0] * h->size[1];
        h->size[0] = 1;
        emxEnsureCapacity_real_T(h, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          h->data[k] -= 180.0;
        }

        k = sigma_ew->size[0] * sigma_ew->size[1];
        sigma_ew->size[0] = 1;
        sigma_ew->size[1] = t_arr->size[1];
        emxEnsureCapacity_real32_T(sigma_ew, k);
        nm1d2 = t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_ew->data[k] = 1.0F;
        }

        nm1d2 = h->size[1];
        k = long_sun->size[0] * long_sun->size[1];
        long_sun->size[0] = 1;
        long_sun->size[1] = h->size[1];
        emxEnsureCapacity_real_T(long_sun, k);
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = fabs(h->data[k]);
        }

        slant_range = lat;
        b_cotd(&slant_range);
        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = elev_sun->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = elev_sun->size[0] * elev_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = elev_sun->data[k];
        }

        b_tand(gamma_so);
        k = gamma_so->size[0] * gamma_so->size[1];
        n = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        emxEnsureCapacity_real_T(gamma_so, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          gamma_so->data[k] *= slant_range;
        }

        k = z1->size[0] * z1->size[1];
        z1->size[0] = 1;
        n = gamma_so->size[1];
        z1->size[1] = gamma_so->size[1];
        emxEnsureCapacity_real_T(z1, k);
        for (k = 0; k < n; k++) {
          z1->data[k] = fmax(gamma_so->data[k], -1.0);
        }

        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = z1->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = z1->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = fmin(z1->data[k], 1.0);
        }

        nm1d2 = gamma_so->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = 57.295779513082323 * acos(gamma_so->data[k]);
        }

        n = long_sun->size[1];
        for (k = 0; k < n; k++) {
          if (long_sun->data[k] > gamma_so->data[k]) {
            sigma_ew->data[k] = -1.0F;
          }
        }

        k = sigma_ns->size[0] * sigma_ns->size[1];
        sigma_ns->size[0] = 1;
        sigma_ns->size[1] = t_arr->size[1];
        emxEnsureCapacity_int8_T(sigma_ns, k);
        nm1d2 = t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_ns->data[k] = 1;
        }

        k = sun_vis->size[0] * sun_vis->size[1];
        sun_vis->size[0] = 1;
        sun_vis->size[1] = elev_sun->size[1];
        emxEnsureCapacity_boolean_T(sun_vis, k);
        nm1d2 = elev_sun->size[0] * elev_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          sun_vis->data[k] = (lat * (lat - elev_sun->data[k]) < 0.0);
        }

        n = sun_vis->size[1] - 1;
        nm1d2 = 0;
        for (k = 0; k <= n; k++) {
          if (sun_vis->data[k]) {
            nm1d2++;
          }
        }

        k = r->size[0] * r->size[1];
        r->size[0] = 1;
        r->size[1] = nm1d2;
        emxEnsureCapacity_int32_T(r, k);
        nm1d2 = 0;
        for (k = 0; k <= n; k++) {
          if (sun_vis->data[k]) {
            r->data[nm1d2] = k + 1;
            nm1d2++;
          }
        }

        nm1d2 = r->size[0] * r->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_ns->data[r->data[k] - 1] = -1;
        }

        k = sigma_w->size[0] * sigma_w->size[1];
        sigma_w->size[0] = 1;
        sigma_w->size[1] = t_arr->size[1];
        emxEnsureCapacity_real32_T(sigma_w, k);
        nm1d2 = t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_w->data[k] = 1.0F;
        }

        n = h->size[1];
        for (k = 0; k < n; k++) {
          if (h->data[k] < 0.0) {
            sigma_w->data[k] = -1.0F;
          }
        }

        k = long_sun->size[0] * long_sun->size[1];
        long_sun->size[0] = 1;
        long_sun->size[1] = elev_sun->size[1];
        emxEnsureCapacity_real_T(long_sun, k);
        nm1d2 = elev_sun->size[0] * elev_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = elev_sun->data[k];
        }

        c_cosd(long_sun);
        k = theta_z->size[0] * theta_z->size[1];
        theta_z->size[0] = 1;
        theta_z->size[1] = elev_sun->size[1];
        emxEnsureCapacity_real_T(theta_z, k);
        nm1d2 = elev_sun->size[0] * elev_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          theta_z->data[k] = elev_sun->data[k];
        }

        c_sind(theta_z);
        slant_range = lat;
        b_sind(&slant_range);
        t_arr_start = lat;
        b_cosd(&t_arr_start);
        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = h->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = h->size[0] * h->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = h->data[k];
        }

        c_cosd(gamma_so);
        k = theta_z->size[0] * theta_z->size[1];
        n = theta_z->size[0] * theta_z->size[1];
        theta_z->size[0] = 1;
        emxEnsureCapacity_real_T(theta_z, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          theta_z->data[k] = theta_z->data[k] * slant_range + long_sun->data[k] *
            t_arr_start * gamma_so->data[k];
        }

        nm1d2 = theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          theta_z->data[k] = acos(theta_z->data[k]);
        }

        /* rounding error can cause gamma_so to be complex, fix with max(-1,min(1, RES )) */
        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = theta_z->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = theta_z->size[0] * theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = theta_z->data[k];
        }

        nm1d2 = theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = sin(gamma_so->data[k]);
        }

        c_sind(h);
        k = h->size[0] * h->size[1];
        n = h->size[0] * h->size[1];
        h->size[0] = 1;
        emxEnsureCapacity_real_T(h, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          h->data[k] = h->data[k] * long_sun->data[k] / gamma_so->data[k];
        }

        k = long_sun->size[0] * long_sun->size[1];
        long_sun->size[0] = 1;
        long_sun->size[1] = h->size[1];
        emxEnsureCapacity_real_T(long_sun, k);
        nm1d2 = h->size[1];
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = fmax(-1.0, h->data[k]);
        }

        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = long_sun->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = long_sun->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = fmin(1.0, long_sun->data[k]);
        }

        nm1d2 = gamma_so->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = 57.295779513082323 * asin(gamma_so->data[k]);
        }

        n = theta_z->size[1];
        for (k = 0; k < n; k++) {
          if (theta_z->data[k] == 0.0) {
            gamma_so->data[k] = 0.0;
          }
        }

        /*  Avoid division by 0 error */
        k = sigma_ew->size[0] * sigma_ew->size[1];
        n = sigma_ew->size[0] * sigma_ew->size[1];
        sigma_ew->size[0] = 1;
        emxEnsureCapacity_real32_T(sigma_ew, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          sigma_ew->data[k] *= (float)sigma_ns->data[k];
        }

        k = sigma_ew->size[0] * sigma_ew->size[1];
        n = sigma_ew->size[0] * sigma_ew->size[1];
        sigma_ew->size[0] = 1;
        emxEnsureCapacity_real32_T(sigma_ew, n);
        nm1d2 = k - 1;
        for (k = 0; k <= nm1d2; k++) {
          f = sigma_ew->data[k];
          f = f * (float)gamma_so->data[k] + (1.0F - f) / 2.0F * sigma_w->data[k]
            * 180.0F;
          sigma_ew->data[k] = f;
        }

        k = long_sun->size[0] * long_sun->size[1];
        long_sun->size[0] = 1;
        long_sun->size[1] = theta_z->size[1];
        emxEnsureCapacity_real_T(long_sun, k);
        nm1d2 = theta_z->size[0] * theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = theta_z->data[k];
        }

        nm1d2 = theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          long_sun->data[k] = sin(long_sun->data[k]);
        }

        k = gamma_so->size[0] * gamma_so->size[1];
        gamma_so->size[0] = 1;
        gamma_so->size[1] = theta_z->size[1];
        emxEnsureCapacity_real_T(gamma_so, k);
        nm1d2 = theta_z->size[0] * theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = theta_z->data[k];
        }

        nm1d2 = theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          gamma_so->data[k] = cos(gamma_so->data[k]);
        }

        slant_range = local_raytracing_params_slope;
        b_cosd(&slant_range);
        t_arr_start = local_raytracing_params_slope;
        b_sind(&t_arr_start);
        k = sigma_w->size[0] * sigma_w->size[1];
        sigma_w->size[0] = 1;
        sigma_w->size[1] = sigma_ew->size[1];
        emxEnsureCapacity_real32_T(sigma_w, k);
        nm1d2 = sigma_ew->size[0] * sigma_ew->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_w->data[k] = sigma_ew->data[k] - (float)
            local_raytracing_params_aspect;
        }

        d_cosd(sigma_w);
        k = sigma_w->size[0] * sigma_w->size[1];
        sigma_w->size[0] = 1;
        sigma_w->size[1] = gamma_so->size[1];
        emxEnsureCapacity_real32_T(sigma_w, k);
        nm1d2 = gamma_so->size[0] * gamma_so->size[1] - 1;
        for (k = 0; k <= nm1d2; k++) {
          sigma_w->data[k] = (float)(gamma_so->data[k] * slant_range) + (float)
            (long_sun->data[k] * t_arr_start) * sigma_w->data[k];
        }

        nm1d2 = sigma_w->size[1];
        for (k = 0; k < nm1d2; k++) {
          sigma_w->data[k] = acosf(sigma_w->data[k]);
        }

        nm1d2 = sigma_w->size[1];
        for (k = 0; k < nm1d2; k++) {
          theta->data[k] = sigma_w->data[k];
        }

        n = theta_z->size[1];
        for (k = 0; k < n; k++) {
          if (theta_z->data[k] > 1.5707963267948966) {
            theta->data[k] = rtNaN;
          }
        }

        n = theta->size[1];
        for (k = 0; k < n; k++) {
          if (theta->data[k] > 1.5707963267948966) {
            theta->data[k] = rtNaN;
          }
        }

        k = az_sun->size[0] * az_sun->size[1];
        az_sun->size[0] = 1;
        az_sun->size[1] = t_arr->size[1];
        emxEnsureCapacity_real_T(az_sun, k);
        nm1d2 = t_arr->size[1];
        for (k = 0; k < nm1d2; k++) {
          az_sun->data[k] = rtNaN;
        }

        n = t_arr->size[1];
        for (k = 0; k < n; k++) {
          if (!(lat < elev_sun->data[k])) {
            az_sun->data[k] = sigma_ew->data[k] + 180.0F;
          }
        }

        n = t_arr->size[1];
        for (k = 0; k < n; k++) {
          if (lat < elev_sun->data[k]) {
            az_sun->data[k] = -sigma_ew->data[k];
          }
        }

        k = elev_sun->size[0] * elev_sun->size[1];
        elev_sun->size[0] = 1;
        elev_sun->size[1] = theta_z->size[1];
        emxEnsureCapacity_real_T(elev_sun, k);
        nm1d2 = theta_z->size[0] * theta_z->size[1];
        for (k = 0; k < nm1d2; k++) {
          elev_sun->data[k] = 90.0 - 57.295779513082323 * theta_z->data[k];
        }

        slant_range = 1.1 * raytracing_params_max_distance;

        /*  ensure outside of grid */
        /*  no longer necessary to switch to double with rewritten builtins */
        my_aer2geodetic(az_sun, elev_sun, slant_range, lat, b_long,
                        c_local_raytracing_params_heigh,
                        raytracing_params_ref_sphere.MeanRadius,
                        raytracing_params_ref_sphere.Flattening, h, long_sun,
                        gamma_so);
        k = elev_sun->size[0] * elev_sun->size[1];
        elev_sun->size[0] = 1;
        elev_sun->size[1] = h->size[1];
        emxEnsureCapacity_real_T(elev_sun, k);
        nm1d2 = h->size[1];
        for (k = 0; k < nm1d2; k++) {
          elev_sun->data[k] = lat;
        }

        k = az_sun->size[0] * az_sun->size[1];
        az_sun->size[0] = 1;
        az_sun->size[1] = h->size[1];
        emxEnsureCapacity_real_T(az_sun, k);
        nm1d2 = h->size[1];
        for (k = 0; k < nm1d2; k++) {
          az_sun->data[k] = b_long;
        }

        mexable_los2(c_raytracing_params_extended_el, elev_sun, az_sun, h,
                     long_sun, gamma_so, r_moon, c_raytracing_params_extended_sa,
                     c_raytracing_params_public_rast, sun_vis);
        n = theta_z->size[1];
        for (k = 0; k < n; k++) {
          if (theta_z->data[k] == 0.0) {
            sun_vis->data[k] = true;
          }
        }

        n = sun_vis->size[1];
        for (k = 0; k < n; k++) {
          if (!sun_vis->data[k]) {
            theta->data[k] = rtNaN;
          }
        }

        if (theta->size[1] < c_raytracing_params_t_calculati) {
          if ((double)theta->size[1] + 1.0 > c_raytracing_params_t_calculati) {
            k = 0;
            n = 0;
          } else {
            k = theta->size[1];
            n = (int)c_raytracing_params_t_calculati;
          }

          nm1d2 = n - k;
          for (n = 0; n < nm1d2; n++) {
            theta->data[k + n] = rtNaN;
          }
        }

        nm1d2 = theta->size[1];
        for (k = 0; k < nm1d2; k++) {
          theta_matrix->data[t_calculation_step_idx + theta_matrix->size[0] * k]
            = theta->data[k];
        }
      }
    }

    emxFree_boolean_T(&sun_vis);
    emxFree_real_T(&gamma_so);
    emxFree_real_T(&long_sun);
    emxFree_real_T(&h);
    emxFree_real_T(&elev_sun);
    emxFree_real_T(&az_sun);
    emxFree_real32_T(&sigma_ew);
    emxFree_real_T(&theta_z);
    emxFree_real32_T(&sigma_w);
    emxFree_int8_T(&sigma_ns);
    emxFree_real_T(&t_arr);
    emxFree_real_T(&theta);
    emxFree_real_T(&z1);
    emxFree_int32_T(&r);
  }

  i = theta_arr->size[0] * theta_arr->size[1];
  theta_arr->size[0] = 1;
  loop_ub = (int)(c_raytracing_params_t_calculati *
                  d_raytracing_params_t_calculati);
  theta_arr->size[1] = loop_ub;
  emxEnsureCapacity_real_T(theta_arr, i);
  for (i = 0; i < loop_ub; i++) {
    theta_arr->data[i] = rtNaN;
  }

  i = (int)d_raytracing_params_t_calculati;
  for (idx = 0; idx < i; idx++) {
    /*  get values in correct order for time series */
    r_moon = c_raytracing_params_t_calculati * (((double)idx + 1.0) - 1.0) + 1.0;
    if (r_moon > c_raytracing_params_t_calculati * ((double)idx + 1.0)) {
      i1 = 1;
    } else {
      i1 = (int)r_moon;
    }

    loop_ub = theta_matrix->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      theta_arr->data[(i1 + i2) - 1] = theta_matrix->data[idx +
        theta_matrix->size[0] * i2];
    }
  }

  emxFree_real_T(&theta_matrix);
  i = theta_arr->size[0] * theta_arr->size[1];
  if (1.0 > raytracing_params_t_steps) {
    theta_arr->size[1] = 0;
  } else {
    theta_arr->size[1] = (int)raytracing_params_t_steps;
  }

  emxEnsureCapacity_real_T(theta_arr, i);
}

/*
 * File trailer for raytrace_pixel.c
 *
 * [EOF]
 */
