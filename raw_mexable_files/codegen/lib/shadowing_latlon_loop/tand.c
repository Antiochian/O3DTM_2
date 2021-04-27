/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: tand.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "tand.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void b_tand(emxArray_real_T *x)
{
  double absx;
  double b_x;
  int k;
  int nx;
  signed char n;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (rtIsInf(x->data[k]) || rtIsNaN(x->data[k])) {
      b_x = rtNaN;
    } else {
      b_x = rt_remd_snf(x->data[k], 360.0);
      absx = fabs(b_x);
      if (absx > 180.0) {
        if (b_x > 0.0) {
          b_x -= 360.0;
        } else {
          b_x += 360.0;
        }

        absx = fabs(b_x);
      }

      if (absx <= 45.0) {
        b_x *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (b_x > 0.0) {
          b_x = 0.017453292519943295 * (b_x - 90.0);
          n = 1;
        } else {
          b_x = 0.017453292519943295 * (b_x + 90.0);
          n = -1;
        }
      } else if (b_x > 0.0) {
        b_x = 0.017453292519943295 * (b_x - 180.0);
        n = 2;
      } else {
        b_x = 0.017453292519943295 * (b_x + 180.0);
        n = -2;
      }

      b_x = tan(b_x);
      if ((n == 1) || (n == -1)) {
        absx = 1.0 / b_x;
        b_x = -(1.0 / b_x);
        if (rtIsInf(b_x) && (n == 1)) {
          b_x = absx;
        }
      }
    }

    x->data[k] = b_x;
  }
}

/*
 * File trailer for tand.c
 *
 * [EOF]
 */
