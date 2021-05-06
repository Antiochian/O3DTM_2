/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cotd.c
 *
 * Code generation for function 'cotd'
 *
 */

/* Include files */
#include "cotd.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_cotd(real_T *x)
{
  real_T absx;
  real_T z;
  int8_T n;
  if (muDoubleScalarIsInf(*x) || muDoubleScalarIsNaN(*x)) {
    absx = rtNaN;
  } else {
    *x = muDoubleScalarRem(*x, 360.0);
    absx = muDoubleScalarAbs(*x);
    if (absx > 180.0) {
      if (*x > 0.0) {
        *x -= 360.0;
      } else {
        *x += 360.0;
      }

      absx = muDoubleScalarAbs(*x);
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

    absx = muDoubleScalarTan(*x);
    if ((n == 1) || (n == -1)) {
      z = 1.0 / absx;
      absx = -(1.0 / absx);
      if (muDoubleScalarIsInf(absx) && (n == 1)) {
        absx = z;
      }
    }
  }

  *x = 1.0 / absx;
}

/* End of code generation (cotd.c) */
