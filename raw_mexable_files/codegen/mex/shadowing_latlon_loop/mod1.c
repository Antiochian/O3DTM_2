/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mod1.c
 *
 * Code generation for function 'mod1'
 *
 */

/* Include files */
#include "mod1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T d_mod(real_T x, real_T y)
{
  real_T q;
  real_T r;
  boolean_T rEQ0;
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = y;
    }
  } else if (muDoubleScalarIsNaN(x) || muDoubleScalarIsNaN(y) ||
             muDoubleScalarIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0 / y;
  } else if (muDoubleScalarIsInf(y)) {
    if ((y < 0.0) != (x < 0.0)) {
      r = y;
    }
  } else {
    r = muDoubleScalarRem(x, y);
    rEQ0 = (r == 0.0);
    if ((!rEQ0) && (y > muDoubleScalarFloor(y))) {
      q = muDoubleScalarAbs(x / y);
      rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
               2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = y * 0.0;
    } else {
      if ((x < 0.0) != (y < 0.0)) {
        r += y;
      }
    }
  }

  return r;
}

/* End of code generation (mod1.c) */
