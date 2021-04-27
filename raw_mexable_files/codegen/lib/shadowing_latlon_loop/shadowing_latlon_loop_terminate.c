/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop_terminate.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "shadowing_latlon_loop_terminate.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void shadowing_latlon_loop_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
  isInitialized_shadowing_latlon_loop_compiled = false;
}

/*
 * File trailer for shadowing_latlon_loop_terminate.c
 *
 * [EOF]
 */
