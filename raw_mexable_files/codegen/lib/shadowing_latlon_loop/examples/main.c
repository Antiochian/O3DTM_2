/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop.h"
#include "shadowing_latlon_loop_emxAPI.h"
#include "shadowing_latlon_loop_terminate.h"
#include "shadowing_latlon_loop_types.h"

/* Function Declarations */
static void argInit_1x2_real_T(double result[2]);
static void argInit_1x4_char_T(char result[4]);
static void argInit_1x5_char_T(char result[5]);
static emxArray_real_T *argInit_1xUnbounded_real_T(void);
static boolean_T argInit_boolean_T(void);
static char argInit_char_T(void);
static creal_T argInit_creal_T(void);
static datetime argInit_datetime(void);
static double argInit_real_T(void);
static void argInit_struct0_T(struct0_T *result);
static void argInit_struct1_T(struct1_T *result);
static void argInit_struct2_T(struct2_T *result);
static struct3_T argInit_struct3_T(void);
static struct4_T argInit_struct4_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static emxArray_real_T *c_argInit_UnboundedxUnboundedxU(void);
static void main_shadowing_latlon_loop(void);

/* Function Definitions */
/*
 * Arguments    : double result[2]
 * Return Type  : void
 */
static void argInit_1x2_real_T(double result[2])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_real_T();
  }
}

/*
 * Arguments    : char result[4]
 * Return Type  : void
 */
static void argInit_1x4_char_T(char result[4])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 4; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_char_T();
  }
}

/*
 * Arguments    : char result[5]
 * Return Type  : void
 */
static void argInit_1x5_char_T(char result[5])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 5; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_char_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *argInit_1xUnbounded_real_T(void)
{
  emxArray_real_T *result;
  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreate_real_T(1, 2);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 1; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result->data[idx1] = argInit_real_T();
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : boolean_T
 */
static boolean_T argInit_boolean_T(void)
{
  return false;
}

/*
 * Arguments    : void
 * Return Type  : char
 */
static char argInit_char_T(void)
{
  return '?';
}

/*
 * Arguments    : void
 * Return Type  : creal_T
 */
static creal_T argInit_creal_T(void)
{
  creal_T result;
  double re_tmp;

  /* Set the value of the complex variable.
     Change this value to the value that the application requires. */
  re_tmp = argInit_real_T();
  result.re = re_tmp;
  result.im = re_tmp;
  return result;
}

/*
 * Arguments    : void
 * Return Type  : datetime
 */
static datetime argInit_datetime(void)
{
  datetime result;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result.data = argInit_creal_T();
  return result;
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : struct0_T *result
 * Return Type  : void
 */
static void argInit_struct0_T(struct0_T *result)
{
  double result_tmp;
  boolean_T b_result_tmp;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result->rho_s = result_tmp;
  result->rho_d = result_tmp;
  result->H = result_tmp;
  result->stefans_constant = result_tmp;
  result->emissivity = result_tmp;
  result->S = result_tmp;
  result->R_AU = result_tmp;
  result->Q = result_tmp;
  result->A0 = result_tmp;
  result->a = result_tmp;
  result->b = result_tmp;
  result->Chi = result_tmp;
  result->Ks = result_tmp;
  result->Kd = result_tmp;
  result->c0 = result_tmp;
  result->c1 = result_tmp;
  result->c2 = result_tmp;
  result->c3 = result_tmp;
  result->c4 = result_tmp;
  result->phase_start_dtm = argInit_datetime();
  result->m = result_tmp;
  result->n = result_tmp;
  result->num_skin_depths = result_tmp;
  result->max_depth = result_tmp;
  result->initial_num_skin_depths = result_tmp;
  result->initial_depth_t_wait = result_tmp;
  result->grow_depth_t_wait = result_tmp;
  result->decl = result_tmp;
  result->T_min = result_tmp;
  result->T_max = result_tmp;
  result->T_bottom_limit = result_tmp;
  result->surface_bc_test_difference = result_tmp;
  result->surface_bc_break_counter = result_tmp;
  result->live_graph_plot_interval = result_tmp;
  b_result_tmp = argInit_boolean_T();
  result->show_results_table = b_result_tmp;
  result->return_z_grid = b_result_tmp;
  result->return_T_arr = b_result_tmp;
  result->dt = result_tmp;
  result->time_series_interval = result_tmp;
  result->P = result_tmp;
  result->live_graph = b_result_tmp;
  result->phase_end_dtm = result->phase_start_dtm;
  result->diviner_start_dtm = result->phase_start_dtm;
  result->diviner_end_dtm = result->phase_start_dtm;
  result->parameter_generation_datetime = result->phase_start_dtm;
}

/*
 * Arguments    : struct1_T *result
 * Return Type  : void
 */
static void argInit_struct1_T(struct1_T *result)
{
  double result_tmp;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result->t_calculation_step_length = result_tmp;
  result->t_calculation_steps = result_tmp;
  result->t_steps = result_tmp;
  argInit_struct2_T(&result->public_raster_struct);
  result->sample_dens = result_tmp;
  result->extended_sample_dens = result_tmp;
  result->P = result_tmp;
  result->const_decl = result_tmp;
  result->max_distance = result_tmp;
  result->dt = result_tmp;
  result->start_julian_date = result_tmp;
  result->scattering_power = result_tmp;
  result->ref_sphere = argInit_struct3_T();
  result->slope_matrix = c_argInit_UnboundedxUnbounded_r();
  result->aspect_matrix = c_argInit_UnboundedxUnbounded_r();
  result->elevation_matrix = c_argInit_UnboundedxUnbounded_r();
  result->extended_elevation_matrix = c_argInit_UnboundedxUnbounded_r();
  result->h_arr = argInit_1xUnbounded_real_T();
  result->decl_arr = argInit_1xUnbounded_real_T();
  result->extended_public_raster_struct = result->public_raster_struct;
}

/*
 * Arguments    : struct2_T *result
 * Return Type  : void
 */
static void argInit_struct2_T(struct2_T *result)
{
  double result_tmp;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  argInit_1x2_real_T(result->RasterSize);
  result_tmp = argInit_real_T();
  result->FirstCornerLatitude = result_tmp;
  result->FirstCornerLongitude = result_tmp;
  result->DeltaLatitudeNumerator = result_tmp;
  result->DeltaLatitudeDenominator = result_tmp;
  result->DeltaLongitudeNumerator = result_tmp;
  result->DeltaLongitudeDenominator = result_tmp;
  result->NorthPoleLatitude = result_tmp;
  result->FullCycle = result_tmp;
  result->XIntrinsicLimits[0] = result->RasterSize[0];
  result->YIntrinsicLimits[0] = result->RasterSize[0];
  result->pLongitudeLimits[0] = result->RasterSize[0];
  result->pLatitudeLimits[0] = result->RasterSize[0];
  result->XIntrinsicLimits[1] = result->RasterSize[1];
  result->YIntrinsicLimits[1] = result->RasterSize[1];
  result->pLongitudeLimits[1] = result->RasterSize[1];
  result->pLatitudeLimits[1] = result->RasterSize[1];
}

/*
 * Arguments    : void
 * Return Type  : struct3_T
 */
static struct3_T argInit_struct3_T(void)
{
  struct3_T result;
  double result_tmp;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result.SemimajorAxis = result_tmp;
  result.SemiminorAxis = result_tmp;
  result.Eccentricity = result_tmp;
  result.MeanRadius = result_tmp;
  result.Flattening = result_tmp;
  argInit_1x4_char_T(result.Name);
  argInit_1x5_char_T(result.LengthUnit);
  result.Radius = result_tmp;
  return result;
}

/*
 * Arguments    : void
 * Return Type  : struct4_T
 */
static struct4_T argInit_struct4_T(void)
{
  struct4_T result;

  /* Set the value of each structure field.
     Change this value to the value that the application requires. */
  result.lat_arr = argInit_1xUnbounded_real_T();
  result.long_arr = argInit_1xUnbounded_real_T();
  result.T_arr = argInit_1xUnbounded_real_T();
  result.jd_arr = argInit_1xUnbounded_real_T();
  return result;
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void)
{
  emxArray_real_T *result;
  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreate_real_T(2, 2);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result->data[idx0 + result->size[0] * idx1] = argInit_real_T();
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *c_argInit_UnboundedxUnboundedxU(void)
{
  static const int iv[3] = { 2, 2, 2 };

  emxArray_real_T *result;
  int idx0;
  int idx1;
  int idx2;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(3, iv);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      for (idx2 = 0; idx2 < result->size[2U]; idx2++) {
        /* Set the value of the array element.
           Change this value to the value that the application requires. */
        result->data[(idx0 + result->size[0] * idx1) + result->size[0] *
          result->size[1] * idx2] = argInit_real_T();
      }
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_shadowing_latlon_loop(void)
{
  emxArray_cell_wrap_0 *T_error_3dmat;
  emxArray_cell_wrap_0 *jd_error_3dmat;
  emxArray_real_T *Tmax_3dmat;
  emxArray_real_T *Tmin_3dmat;
  emxArray_real_T *dz_arr;
  emxArray_real_T *ew_matrix;
  emxArray_real_T *init_temps;
  emxArray_real_T *lat_arr;
  emxArray_real_T *long_arr;
  emxArray_real_T *ns_matrix;
  emxArray_real_T *rho_matrix;
  emxArray_real_T *z_arr;
  struct0_T r;
  struct1_T raytracing_params;
  struct4_T diviner_data;
  double bottom_layer_idx_tmp;
  emxInitArray_real_T(&Tmax_3dmat, 3);
  emxInitArray_real_T(&Tmin_3dmat, 3);
  emxInitArray_cell_wrap_0(&jd_error_3dmat, 2);
  emxInitArray_cell_wrap_0(&T_error_3dmat, 2);

  /* Initialize function 'shadowing_latlon_loop' input arguments. */
  /* Initialize function input argument 'z_arr'. */
  z_arr = argInit_1xUnbounded_real_T();
  bottom_layer_idx_tmp = argInit_real_T();

  /* Initialize function input argument 'rho_matrix'. */
  rho_matrix = c_argInit_UnboundedxUnboundedxU();

  /* Initialize function input argument 'lat_arr'. */
  lat_arr = argInit_1xUnbounded_real_T();

  /* Initialize function input argument 'long_arr'. */
  long_arr = argInit_1xUnbounded_real_T();

  /* Initialize function input argument 'dz_arr'. */
  dz_arr = argInit_1xUnbounded_real_T();

  /* Initialize function input argument 'parameters'. */
  /* Initialize function input argument 'init_temps'. */
  init_temps = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'raytracing_params'. */
  argInit_struct1_T(&raytracing_params);

  /* Initialize function input argument 'ew_matrix'. */
  ew_matrix = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'ns_matrix'. */
  ns_matrix = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'diviner_data'. */
  diviner_data = argInit_struct4_T();

  /* Call the entry-point 'shadowing_latlon_loop'. */
  argInit_struct0_T(&r);
  shadowing_latlon_loop(z_arr, bottom_layer_idx_tmp, bottom_layer_idx_tmp,
                        bottom_layer_idx_tmp, bottom_layer_idx_tmp,
                        bottom_layer_idx_tmp, bottom_layer_idx_tmp, rho_matrix,
                        lat_arr, long_arr, dz_arr, bottom_layer_idx_tmp, &r,
                        init_temps, &raytracing_params, ew_matrix, ns_matrix,
                        bottom_layer_idx_tmp, bottom_layer_idx_tmp,
                        &diviner_data, argInit_boolean_T(), Tmax_3dmat,
                        Tmin_3dmat, jd_error_3dmat, T_error_3dmat);
  emxDestroyArray_cell_wrap_0(T_error_3dmat);
  emxDestroyArray_cell_wrap_0(jd_error_3dmat);
  emxDestroyArray_real_T(Tmin_3dmat);
  emxDestroyArray_real_T(Tmax_3dmat);
  emxDestroy_struct4_T(diviner_data);
  emxDestroyArray_real_T(ns_matrix);
  emxDestroyArray_real_T(ew_matrix);
  emxDestroy_struct1_T(raytracing_params);
  emxDestroyArray_real_T(init_temps);
  emxDestroyArray_real_T(dz_arr);
  emxDestroyArray_real_T(long_arr);
  emxDestroyArray_real_T(lat_arr);
  emxDestroyArray_real_T(rho_matrix);
  emxDestroyArray_real_T(z_arr);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_shadowing_latlon_loop();

  /* Terminate the application.
     You do not need to do this more than one time. */
  shadowing_latlon_loop_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
