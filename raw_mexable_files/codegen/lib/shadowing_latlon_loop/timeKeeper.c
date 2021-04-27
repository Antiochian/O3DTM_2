/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: timeKeeper.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "timeKeeper.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include <windows.h>

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  double tv_sec;
  double tv_nsec;
} struct_T;

#endif                                 /*typedef_struct_T*/

/* Variable Definitions */
static struct_T savedTime;
static boolean_T savedTime_not_empty;

/* Function Definitions */
/*
 * Arguments    : double *outTime_tv_sec
 *                double *outTime_tv_nsec
 * Return Type  : void
 */
void b_timeKeeper(double *outTime_tv_sec, double *outTime_tv_nsec)
{
  *outTime_tv_sec = savedTime.tv_sec;
  *outTime_tv_nsec = savedTime.tv_nsec;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void savedTime_not_empty_init(void)
{
  savedTime_not_empty = false;
}

/*
 * Arguments    : double newTime_tv_sec
 *                double newTime_tv_nsec
 * Return Type  : void
 */
void timeKeeper(double newTime_tv_sec, double newTime_tv_nsec)
{
  LARGE_INTEGER freqL;
  if (!savedTime_not_empty) {
    if (!freq_not_empty) {
      QueryPerformanceFrequency(&freqL);
      freq = (double)freqL.QuadPart;
      freq_not_empty = true;
    }

    QueryPerformanceCounter(&freqL);
    savedTime_not_empty = true;
  }

  savedTime.tv_sec = newTime_tv_sec;
  savedTime.tv_nsec = newTime_tv_nsec;
}

/*
 * File trailer for timeKeeper.c
 *
 * [EOF]
 */
