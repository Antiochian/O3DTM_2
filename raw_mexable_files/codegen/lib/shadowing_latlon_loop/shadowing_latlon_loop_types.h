/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: shadowing_latlon_loop_types.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

#ifndef SHADOWING_LATLON_LOOP_TYPES_H
#define SHADOWING_LATLON_LOOP_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  double RasterSize[2];
  double FullCycle;
  double XIntrinsicLimits[2];
  double YIntrinsicLimits[2];
  double pLongitudeLimits[2];
  double pLatitudeLimits[2];
  double FirstCornerLatitude;
  double FirstCornerLongitude;
  double DeltaLatitudeNumerator;
  double DeltaLatitudeDenominator;
  double DeltaLongitudeNumerator;
  double DeltaLongitudeDenominator;
  double NorthPoleLatitude;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  char Name[4];
  char LengthUnit[5];
  double Radius;
  double SemimajorAxis;
  double SemiminorAxis;
  double Eccentricity;
  double MeanRadius;
  double Flattening;
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  double scattering_power;
  double t_calculation_step_length;
  double t_calculation_steps;
  double t_steps;
  struct2_T public_raster_struct;
  struct2_T extended_public_raster_struct;
  double sample_dens;
  double extended_sample_dens;
  struct3_T ref_sphere;
  emxArray_real_T *slope_matrix;
  emxArray_real_T *aspect_matrix;
  emxArray_real_T *elevation_matrix;
  emxArray_real_T *extended_elevation_matrix;
  emxArray_real_T *h_arr;
  emxArray_real_T *decl_arr;
  double P;
  double const_decl;
  double max_distance;
  double dt;
  double start_julian_date;
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
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_0;

#endif                                 /*typedef_emxArray_cell_wrap_0*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  double dz;
  double dh;
  double dt;
  double P;
  double Q;
  double stefans_constant;
  double Chi_OVER_350_POWER_3;
  double S_OVER_R_AU2;
  double t_wait;
  emxArray_real_T *t_arr;
  double t_limit;
  double depth_update_wait_t_local;
  double depth_update_t_interval;
  double bottom_layer_idx_local;
  double surface_bc_test_difference;
  double surface_bc_break_counter;
  double num_layers;
  emxArray_real_T *p_arr;
  emxArray_real_T *q_arr;
  double c0;
  double c1;
  double c2;
  double c3;
  double c4;
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_c_struct_T
#define typedef_c_struct_T

typedef struct {
  double A0_local;
  double a_OVER_pi_OVER_4_POWER_3_local;
  double b_OVER_pi_OVER_2_POWER_8_local;
  double thermal_emission_local;
  double B_surface_local;
  emxArray_real_T *Kc_3dmat_local;
  emxArray_real_T *rho_matrix_local;
  emxArray_real_T *vis_flux_local;
  emxArray_real_T *ir_flux_local;
} c_struct_T;

#endif                                 /*typedef_c_struct_T*/

#ifndef typedef_d_struct_T
#define typedef_d_struct_T

typedef struct {
  double height_px;
  double aspect;
  double slope;
  emxArray_real_T *h_arr_local;
  emxArray_real_T *decl_arr_local;
} d_struct_T;

#endif                                 /*typedef_d_struct_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T

struct emxArray_real32_T
{
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real32_T*/

#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T

typedef struct emxArray_real32_T emxArray_real32_T;

#endif                                 /*typedef_emxArray_real32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  signed char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef typedef_datetime
#define typedef_datetime

typedef struct {
  creal_T data;
} datetime;

#endif                                 /*typedef_datetime*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  double P;
  double rho_s;
  double rho_d;
  double H;
  double stefans_constant;
  double emissivity;
  double S;
  double R_AU;
  double Q;
  double A0;
  double a;
  double b;
  double Chi;
  double Ks;
  double Kd;
  double c0;
  double c1;
  double c2;
  double c3;
  double c4;
  datetime phase_start_dtm;
  datetime phase_end_dtm;
  datetime diviner_start_dtm;
  datetime diviner_end_dtm;
  double m;
  double n;
  double num_skin_depths;
  double max_depth;
  double initial_num_skin_depths;
  double initial_depth_t_wait;
  double grow_depth_t_wait;
  double decl;
  double T_min;
  double T_max;
  double T_bottom_limit;
  double surface_bc_test_difference;
  double surface_bc_break_counter;
  boolean_T live_graph;
  double live_graph_plot_interval;
  boolean_T show_results_table;
  boolean_T return_z_grid;
  boolean_T return_T_arr;
  double dt;
  double time_series_interval;
  datetime parameter_generation_datetime;
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/*
 * File trailer for shadowing_latlon_loop_types.h
 *
 * [EOF]
 */
