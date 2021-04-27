/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_shadowing_latlon_loop_api.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef _CODER_SHADOWING_LATLON_LOOP_API_H
#define _CODER_SHADOWING_LATLON_LOOP_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  real_T RasterSize[2];
  real_T FullCycle;
  real_T XIntrinsicLimits[2];
  real_T YIntrinsicLimits[2];
  real_T pLongitudeLimits[2];
  real_T pLatitudeLimits[2];
  real_T FirstCornerLatitude;
  real_T FirstCornerLongitude;
  real_T DeltaLatitudeNumerator;
  real_T DeltaLatitudeDenominator;
  real_T DeltaLongitudeNumerator;
  real_T DeltaLongitudeDenominator;
  real_T NorthPoleLatitude;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  char_T Name[4];
  char_T LengthUnit[5];
  real_T Radius;
  real_T SemimajorAxis;
  real_T SemiminorAxis;
  real_T Eccentricity;
  real_T MeanRadius;
  real_T Flattening;
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T scattering_power;
  real_T t_calculation_step_length;
  real_T t_calculation_steps;
  real_T t_steps;
  struct2_T public_raster_struct;
  struct2_T extended_public_raster_struct;
  real_T sample_dens;
  real_T extended_sample_dens;
  struct3_T ref_sphere;
  emxArray_real_T *slope_matrix;
  emxArray_real_T *aspect_matrix;
  emxArray_real_T *elevation_matrix;
  emxArray_real_T *extended_elevation_matrix;
  emxArray_real_T *h_arr;
  emxArray_real_T *decl_arr;
  real_T P;
  real_T const_decl;
  real_T max_distance;
  real_T dt;
  real_T start_julian_date;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct4_T
#define typedef_struct4_T

typedef struct {
  emxArray_real_T *lat_arr;
  emxArray_real_T *long_arr;
  emxArray_real_T *T_arr;
  emxArray_real_T *jd_arr;
} struct4_T;

#endif                                 /*typedef_struct4_T*/

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef typedef_emxArray_cell_wrap_0
#define typedef_emxArray_cell_wrap_0

typedef struct {
  cell_wrap_0 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_0;

#endif                                 /*typedef_emxArray_cell_wrap_0*/

#ifndef typedef_datetime
#define typedef_datetime

typedef struct {
  creal_T data;
} datetime;

#endif                                 /*typedef_datetime*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T P;
  real_T rho_s;
  real_T rho_d;
  real_T H;
  real_T stefans_constant;
  real_T emissivity;
  real_T S;
  real_T R_AU;
  real_T Q;
  real_T A0;
  real_T a;
  real_T b;
  real_T Chi;
  real_T Ks;
  real_T Kd;
  real_T c0;
  real_T c1;
  real_T c2;
  real_T c3;
  real_T c4;
  datetime phase_start_dtm;
  datetime phase_end_dtm;
  datetime diviner_start_dtm;
  datetime diviner_end_dtm;
  real_T m;
  real_T n;
  real_T num_skin_depths;
  real_T max_depth;
  real_T initial_num_skin_depths;
  real_T initial_depth_t_wait;
  real_T grow_depth_t_wait;
  real_T decl;
  real_T T_min;
  real_T T_max;
  real_T T_bottom_limit;
  real_T surface_bc_test_difference;
  real_T surface_bc_break_counter;
  boolean_T live_graph;
  real_T live_graph_plot_interval;
  boolean_T show_results_table;
  boolean_T return_z_grid;
  boolean_T return_T_arr;
  real_T dt;
  real_T time_series_interval;
  datetime parameter_generation_datetime;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void shadowing_latlon_loop(emxArray_real_T *z_arr, real_T bottom_layer_idx,
    real_T depth_update_wait_t, real_T depth_update_t_interval, real_T
    num_layers, real_T t_limit, real_T t_wait, emxArray_real_T *rho_matrix,
    emxArray_real_T *lat_arr, emxArray_real_T *long_arr, emxArray_real_T *dz_arr,
    real_T dz, struct0_T *parameters, emxArray_real_T *init_temps, struct1_T
    *raytracing_params, emxArray_real_T *ew_matrix, emxArray_real_T *ns_matrix,
    real_T start_jd, real_T end_jd, struct4_T *diviner_data, boolean_T
    recent_only, emxArray_real_T *Tmax_3dmat, emxArray_real_T *Tmin_3dmat,
    emxArray_cell_wrap_0 *jd_error_3dmat, emxArray_cell_wrap_0 *T_error_3dmat);
  void shadowing_latlon_loop_api(const mxArray * const prhs[21], int32_T nlhs,
    const mxArray *plhs[4]);
  void shadowing_latlon_loop_atexit(void);
  void shadowing_latlon_loop_initialize(void);
  void shadowing_latlon_loop_terminate(void);
  void shadowing_latlon_loop_xil_shutdown(void);
  void shadowing_latlon_loop_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_shadowing_latlon_loop_api.h
 *
 * [EOF]
 */
