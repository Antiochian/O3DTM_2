/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: tic.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "tic.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"
#include <windows.h>

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void tic(void)
{
  LARGE_INTEGER freqL;
  double timeRemainder;
  if (!freq_not_empty) {
    QueryPerformanceFrequency(&freqL);
    freq = (double)freqL.QuadPart;
    freq_not_empty = true;
  }

  QueryPerformanceCounter(&freqL);
  timeRemainder = b_mod((double)freqL.QuadPart, freq);
  timeKeeper(((double)freqL.QuadPart - timeRemainder) / freq, timeRemainder *
             1.0E+9 / freq);
}

/*
 * File trailer for tic.c
 *
 * [EOF]
 */
