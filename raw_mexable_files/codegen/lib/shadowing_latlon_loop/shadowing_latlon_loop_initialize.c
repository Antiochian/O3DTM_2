/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop_initialize.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "shadowing_latlon_loop_initialize.h"
#include "getTime.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "timeKeeper.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void shadowing_latlon_loop_initialize(void)
{
  omp_init_nest_lock(&emlrtNestLockGlobal);
  savedTime_not_empty_init();
  freq_not_empty_init();
  isInitialized_shadowing_latlon_loop_compiled = true;
}

/*
 * File trailer for shadowing_latlon_loop_initialize.c
 *
 * [EOF]
 */
