/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sind.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "sind.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : double *x
 * Return Type  : void
 */
void b_sind(double *x)
{
  double absx;
  signed char n;
  if (rtIsInf(*x) || rtIsNaN(*x)) {
    *x = rtNaN;
  } else {
    *x = rt_remd_snf(*x, 360.0);
    absx = fabs(*x);
    if (absx > 180.0) {
      if (*x > 0.0) {
        *x -= 360.0;
      } else {
        *x += 360.0;
      }

      absx = fabs(*x);
    }

    if (absx <= 45.0) {
      *x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (*x > 0.0) {
        *x = 0.017453292519943295 * (*x - 90.0);
        n = 1;
      } else {
        *x = 0.017453292519943295 * (*x + 90.0);
        n = -1;
      }
    } else if (*x > 0.0) {
      *x = 0.017453292519943295 * (*x - 180.0);
      n = 2;
    } else {
      *x = 0.017453292519943295 * (*x + 180.0);
      n = -2;
    }

    if (n == 0) {
      *x = sin(*x);
    } else if (n == 1) {
      *x = cos(*x);
    } else if (n == -1) {
      *x = -cos(*x);
    } else {
      *x = -sin(*x);
    }
  }
}

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void c_sind(emxArray_real_T *x)
{
  double absx;
  double b_x;
  int k;
  int nx;
  signed char n;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (rtIsInf(x->data[k]) || rtIsNaN(x->data[k])) {
      x->data[k] = rtNaN;
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
        x->data[k] = sin(b_x);
      } else {
        if (absx <= 135.0) {
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

        if (n == 1) {
          x->data[k] = cos(b_x);
        } else if (n == -1) {
          x->data[k] = -cos(b_x);
        } else {
          x->data[k] = -sin(b_x);
        }
      }
    }
  }
}

/*
 * File trailer for sind.c
 *
 * [EOF]
 */
