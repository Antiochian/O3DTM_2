/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cosd.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "cosd.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_rtwutil.h"
#include "shadowing_latlon_loop_types.h"
#include "rt_nonfinite.h"
#include <float.h>
#include <math.h>

/* Function Declarations */
static float rt_remf_snf(float u0, float u1);

/* Function Definitions */
/*
 * Arguments    : float u0
 *                float u1
 * Return Type  : float
 */
static float rt_remf_snf(float u0, float u1)
{
  float q;
  float y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1) || rtIsInfF(u0)) {
    y = rtNaNF;
  } else if (rtIsInfF(u1)) {
    y = u0;
  } else if ((u1 != 0.0F) && (u1 != truncf(u1))) {
    q = fabsf(u0 / u1);
    if (!(fabsf(q - floorf(q + 0.5F)) > FLT_EPSILON * q)) {
      y = 0.0F * u0;
    } else {
      y = fmodf(u0, u1);
    }
  } else {
    y = fmodf(u0, u1);
  }

  return y;
}

/*
 * Arguments    : double *x
 * Return Type  : void
 */
void b_cosd(double *x)
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
      *x = cos(*x);
    } else if (n == 1) {
      *x = -sin(*x);
    } else if (n == -1) {
      *x = sin(*x);
    } else {
      *x = -cos(*x);
    }
  }
}

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void c_cosd(emxArray_real_T *x)
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
        x->data[k] = cos(b_x);
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
          x->data[k] = -sin(b_x);
        } else if (n == -1) {
          x->data[k] = sin(b_x);
        } else {
          x->data[k] = -cos(b_x);
        }
      }
    }
  }
}

/*
 * Arguments    : emxArray_real32_T *x
 * Return Type  : void
 */
void d_cosd(emxArray_real32_T *x)
{
  float absx;
  float b_x;
  int k;
  int nx;
  signed char n;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (rtIsInfF(x->data[k]) || rtIsNaNF(x->data[k])) {
      x->data[k] = rtNaNF;
    } else {
      b_x = rt_remf_snf(x->data[k], 360.0F);
      absx = fabsf(b_x);
      if (absx > 180.0F) {
        if (b_x > 0.0F) {
          b_x -= 360.0F;
        } else {
          b_x += 360.0F;
        }

        absx = fabsf(b_x);
      }

      if (absx <= 45.0F) {
        b_x *= 0.0174532924F;
        x->data[k] = cosf(b_x);
      } else {
        if (absx <= 135.0F) {
          if (b_x > 0.0F) {
            b_x = 0.0174532924F * (b_x - 90.0F);
            n = 1;
          } else {
            b_x = 0.0174532924F * (b_x + 90.0F);
            n = -1;
          }
        } else if (b_x > 0.0F) {
          b_x = 0.0174532924F * (b_x - 180.0F);
          n = 2;
        } else {
          b_x = 0.0174532924F * (b_x + 180.0F);
          n = -2;
        }

        if (n == 1) {
          x->data[k] = -sinf(b_x);
        } else if (n == -1) {
          x->data[k] = sinf(b_x);
        } else {
          x->data[k] = -cosf(b_x);
        }
      }
    }
  }
}

/*
 * File trailer for cosd.c
 *
 * [EOF]
 */
