/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * no_raytracing_latlon_types.h
 *
 * Code generation for function 'no_raytracing_latlon'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

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

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  real_T dz;
  real_T dh;
  real_T dt;
  real_T P;
  real_T Q;
  real_T stefans_constant;
  real_T Chi_OVER_350_POWER_3;
  real_T S_OVER_R_AU2;
  real_T t_wait;
  emxArray_real_T *t_arr;
  real_T t_limit;
  real_T depth_update_wait_t_local;
  real_T depth_update_t_interval;
  real_T bottom_layer_idx_local;
  real_T surface_bc_test_difference;
  real_T surface_bc_break_counter;
  real_T num_layers;
  emxArray_real_T *p_arr;
  emxArray_real_T *q_arr;
  real_T c0;
  real_T c1;
  real_T c2;
  real_T c3;
  real_T c4;
} struct_T;

#endif                                 /*typedef_struct_T*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  real_T A0_local;
  real_T a_OVER_pi_OVER_4_POWER_3_local;
  real_T b_OVER_pi_OVER_2_POWER_8_local;
  real_T thermal_emission_local;
  real_T B_surface_local;
  emxArray_real_T *Kc_3dmat_local;
  emxArray_real_T *rho_matrix_local;
  emxArray_real_T *vis_flux_local;
  emxArray_real_T *ir_flux_local;
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  real_T height_px;
  real_T aspect;
  real_T slope;
  emxArray_real_T *h_arr_local;
  emxArray_real_T *decl_arr_local;
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T

struct emxArray_real32_T
{
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real32_T*/

#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T

typedef struct emxArray_real32_T emxArray_real32_T;

#endif                                 /*typedef_emxArray_real32_T*/

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

/* End of code generation (no_raytracing_latlon_types.h) */
