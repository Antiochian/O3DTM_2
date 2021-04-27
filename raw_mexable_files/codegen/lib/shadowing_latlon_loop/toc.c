/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: toc.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "toc.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"
#include <windows.h>

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : double
 */
double toc(void)
{
  LARGE_INTEGER freqL;
  double timeRemainder;
  double tstart_tv_nsec;
  double tstart_tv_sec;
  b_timeKeeper(&tstart_tv_sec, &tstart_tv_nsec);
  if (!freq_not_empty) {
    QueryPerformanceFrequency(&freqL);
    freq = (double)freqL.QuadPart;
    freq_not_empty = true;
  }

  QueryPerformanceCounter(&freqL);
  timeRemainder = b_mod((double)freqL.QuadPart, freq);
  return (((double)freqL.QuadPart - timeRemainder) / freq - tstart_tv_sec) +
    (timeRemainder * 1.0E+9 / freq - tstart_tv_nsec) / 1.0E+9;
}

/*
 * File trailer for toc.c
 *
 * [EOF]
 */
