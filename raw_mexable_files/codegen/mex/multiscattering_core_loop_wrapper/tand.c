/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tand.c
 *
 * Code generation for function 'tand'
 *
 */

/* Include files */
#include "tand.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_tand(real_T *x)
{
  real_T absx;
  int8_T n;
  if (muDoubleScalarIsInf(*x) || muDoubleScalarIsNaN(*x)) {
    *x = rtNaN;
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

    *x = muDoubleScalarTan(*x);
    if ((n == 1) || (n == -1)) {
      absx = 1.0 / *x;
      *x = -(1.0 / *x);
      if (muDoubleScalarIsInf(*x) && (n == 1)) {
        *x = absx;
      }
    }
  }
}

/* End of code generation (tand.c) */
