/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mexable_los2.c
 *
 * Code generation for function 'mexable_los2'
 *
 */

/* Include files */
#include "mexable_los2.h"
#include "assertValidSizeArg.h"
#include "eml_int_forloop_overflow_check.h"
#include "mexable_calculateLOS.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"

/* Variable Definitions */
static emlrtRSInfo vg_emlrtRSI = { 139,/* lineNo */
  "mexable_los2",                      /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 145,/* lineNo */
  "mexable_los2",                      /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 170,/* lineNo */
  "mexable_los2",                      /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 202,/* lineNo */
  "mexable_los2",                      /* fcnName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 69, /* lineNo */
  "repmat",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 66, /* lineNo */
  "repmat",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 64, /* lineNo */
  "repmat",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  56,                                  /* colNo */
  "lon1",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  65,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  74,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  22,                                  /* colNo */
  "oalt",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  31,                                  /* colNo */
  "talt",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  22,                                  /* colNo */
  "oalt",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  175,                                 /* lineNo */
  5,                                   /* colNo */
  "visprofile_row",                    /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  42,                                  /* colNo */
  "lat1",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  51,                                  /* colNo */
  "lon1",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  60,                                  /* colNo */
  "lat2",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  69,                                  /* colNo */
  "lon2",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  26,                                  /* colNo */
  "talt",                              /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  18,                                  /* colNo */
  "visprofile_row",                    /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  9,                                   /* colNo */
  "vis",                               /* aName */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wj_emlrtRTEI = { 147,/* lineNo */
  5,                                   /* colNo */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 59,/* lineNo */
  28,                                  /* colNo */
  "repmat",                            /* fName */
  "D:\\Program Files\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 182,/* lineNo */
  11,                                  /* colNo */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 175,/* lineNo */
  5,                                   /* colNo */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 137,/* lineNo */
  1,                                   /* colNo */
  "mexable_los2",                      /* fName */
  "D:\\Home\\Documents\\MATLAB\\O3DTM2\\raw_mexable_files\\mexable_los2.m"/* pName */
};

/* Function Definitions */
void mexable_los2(const emlrtStack *sp, const emxArray_real_T *Z, const
                  emxArray_real_T *lat1, const emxArray_real_T *lon1, const
                  emxArray_real_T *lat2, const emxArray_real_T *lon2, const
                  emxArray_real_T *inp_talt, real_T actualradius, real_T
                  sample_dens, const struct2_T *public_raster_struct,
                  emxArray_boolean_T *vis)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *visprofile_row;
  emxArray_real_T *talt;
  emxArray_real_T *unusedU8;
  emxArray_real_T *unusedU9;
  emxArray_real_T *unusedUa;
  emxArray_real_T *unusedUb;
  emxArray_real_T *unusedUc;
  emxArray_real_T *unusedUd;
  emxArray_real_T *unusedUe;
  emxArray_real_T *unusedUf;
  real_T varargin_1[2];
  int32_T i;
  int32_T jtilecol;
  int32_T ntilecols;
  int32_T outsize_idx_1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* Z, R, lat1, lon1, lat2, lon2, oalt, talt, oaltopt, talopt, r_moon) */
  /* LOS2 Line of sight visibility between two points in terrain */
  /*  */
  /*    LOS2 computes the mutual visibility between two points on a displayed */
  /*    digital elevation map.  LOS2 uses the current object if it is a regular */
  /*    data grid, or the first regular data grid found on the current axes. */
  /*    The grid's zdata is used for the profile.  The color data is used in */
  /*    the absence of data in z.  The two points are selected by clicking on */
  /*    the map. The result is displayed in a new figure.  Markers indicate */
  /*    visible and obscured points along the profile.  The profile is shown in */
  /*    a Cartesian coordinate system with the origin at the observer's */
  /*    location.  The displayed z coordinate accounts for the elevation of the */
  /*    terrain and the curvature of the body. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2) computes the mutual visibility */
  /*    between pairs of points on a digital elevation map.  The elevations are */
  /*    provided as a regular data grid Z containing elevations in units of */
  /*    meters.  The two points are provided as vectors of latitudes and */
  /*    longitudes in units of degrees.  The resulting logical variable VIS is */
  /*    equal to one when the two points are visible to each other, and zero */
  /*    when the line of sight is obscured by terrain.  If any of the  input */
  /*    arguments are empty, LOS2 attempts to gather the data from the current */
  /*    axes.  With one or more output arguments, no figures are created and */
  /*    only the data is returned.  R can be a geographic raster reference */
  /*    object, a referencing vector, or a referencing matrix. */
  /*  */
  /*    If R is a geographic raster reference object, its RasterSize property */
  /*    must be consistent with size(Z). */
  /*  */
  /*    If R is a referencing vector, it must be a 1-by-3 with elements: */
  /*  */
  /*      [cells/degree northern_latitude_limit western_longitude_limit] */
  /*  */
  /*    If R is a referencing matrix, it must be 3-by-2 and transform raster */
  /*    row and column indices to/from geographic coordinates according to: */
  /*   */
  /*                      [lon lat] = [row col 1] * R. */
  /*  */
  /*    If R is a referencing matrix, it must define a (non-rotational, */
  /*    non-skewed) relationship in which each column of the data grid falls */
  /*    along a meridian and each row falls along a parallel. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1) places the first */
  /*    point at the specified altitude in meters above the surface (on a */
  /*    tower, for instance).  This is equivalent to putting the point on a */
  /*    tower.  If omitted, point 1 is assumed to be on the surface.  ALT1 may */
  /*    be either a scalar or a vector with the same length as LAT1, LON1, */
  /*    LAT2, and LON2. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2) places both */
  /*    points at a specified altitudes in meters above the surface.  ALT2 may */
  /*    be either a scalar or a vector with the same length as LAT1, LON1, */
  /*    LAT2, and LON2.  If ALT2 is omitted, point 2 is assumed to be on the */
  /*    surface. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT) */
  /*    controls the interpretation of ALT1 as either a relative altitude */
  /*    (ALT1OPT equals 'AGL', the default) or an absolute altitude (ALT1OPT */
  /*    equals 'MSL').  If the altitude option is 'AGL', ALT1 is interpreted as */
  /*    the altitude of point 1 in meters above the terrain ("above ground */
  /*    level").  If ALT1OPT is 'MSL', ALT1 is interpreted as altitude above */
  /*    zero ("mean sea level"). */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT, ALT2OPT) */
  /*    controls the interpretation ALT2.  */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,... */
  /*    ALT2OPT, ACTUALRADIUS) does the visibility calculation on a sphere with */
  /*    the specified radius.  If omitted, the radius of the earth in meters is */
  /*    assumed.  The altitudes, elevations and the radius should be in the */
  /*    same units.  This calling form is most useful for computations on */
  /*    bodies other than the earth. */
  /*  */
  /*    VIS = LOS2(Z, R, LAT1, LON1, LAT2, LON2, ALT1, ALT2, ALT1OPT,... */
  /*    ALT2OPT, ACTUALRADIUS, EFFECTIVERADIUS) assumes a larger radius for */
  /*    propagation of the line of sight.  This can account for the curvature */
  /*    of the signal path due to refraction in the atmosphere.  For example, */
  /*    radio propagation in the atmosphere is commonly treated as straight */
  /*    line propagation on a sphere with 4/3rds the radius of the earth.  In */
  /*    that case the last two arguments would be R_e and 4/3*R_e, where R_e is */
  /*    the radius of the earth.  Use Inf as the effective radius for flat   */
  /*    earth visibility calculations.  The altitudes, elevations and the radii */
  /*    should be in the same units.  */
  /*  */
  /*    [VIS, VISPROFILE, DIST, H, LATTRK, LONTRK] = LOS2(...), for scalar */
  /*    inputs (LAT1, LON1, etc.), returns vectors of points along the path */
  /*    between the two points.  VISPROFILE is a logical vector containing true */
  /*    (logical(1) where the intermediate points are visible and false */
  /*    (logical(0)) otherwise.  DIST is the distance along the path (in meters */
  /*    or the units of the radius).  H contains the terrain profile relative */
  /*    to the vertical datum along the path.  LATTRK and LONTRK are the */
  /*    latitudes and longitudes of the points along the path.  For vector */
  /*    inputs LOS2 returns VISPROFILE, DIST, H, LATTRK, and LONTRK as cell */
  /*    arrays, with one cell per element of LAT1, LON1, etc. */
  /*  */
  /*    LOS2(...), with no output arguments, displays the visibility profile */
  /*    between the two points in a new figure.  */
  /*  */
  /*    Example */
  /*    ------- */
  /*    Z = 500*peaks(100); */
  /*    latlim = [-0.1 0.0]; */
  /*    lonlim = [ 0.0 0.1]; */
  /*    R = georefcells(latlim,lonlim,size(Z)); */
  /*    lat1 = -0.027; */
  /*    lon1 =  0.050; */
  /*    lat2 = -0.093; */
  /*    lon2 =  0.042; */
  /*  */
  /*    los2(Z,R,lat1,lon1,lat2,lon2,100); */
  /*   */
  /*    figure; */
  /*    axesm('globe','geoid',earthRadius('meters')) */
  /*    meshm(Z,R,size(Z),Z) */
  /*    axis tight */
  /*    camposm(-10,-10,1e6) */
  /*    camupm(0,0) */
  /*    demcmap('inc',Z,1000) */
  /*    shading interp */
  /*    camlight */
  /*   */
  /*    [vis,visprofile,dist,h,lattrk,lontrk] = los2(Z,R,lat1,lon1,lat2,lon2,100); */
  /*    plot3m(lattrk([1;end]),lontrk([1; end]),h([1; end])+[100; 0],'r','linewidth',2) */
  /*    plotm(lattrk(~visprofile),lontrk(~visprofile),h(~visprofile),'r.','markersize',10) */
  /*    plotm(lattrk(visprofile),lontrk(visprofile),h(visprofile),'g.','markersize',10) */
  /*   */
  /*    See also VIEWSHED */
  /*  Copyright 1996-2020 The MathWorks, Inc. */
  /*  Original version written by Walter Stumpf */
  st.site = &vg_emlrtRSI;
  varargin_1[0] = lat1->size[0];
  varargin_1[1] = lat1->size[1];
  b_st.site = &r_emlrtRSI;
  assertValidSizeArg(&b_st, varargin_1);
  outsize_idx_1 = lat1->size[1];
  emxInit_real_T(sp, &talt, 2, &ck_emlrtRTEI, true);
  if (inp_talt->size[1] == 1) {
    st.site = &wg_emlrtRSI;
    varargin_1[0] = lat1->size[0];
    varargin_1[1] = lat1->size[1];
    b_st.site = &r_emlrtRSI;
    assertValidSizeArg(&b_st, varargin_1);
    i = talt->size[0] * talt->size[1];
    talt->size[0] = 1;
    talt->size[1] = lat1->size[1];
    emxEnsureCapacity_real_T(&st, talt, i, &xj_emlrtRTEI);
    ntilecols = lat1->size[1];
    b_st.site = &ch_emlrtRSI;
    if ((1 <= lat1->size[1]) && (lat1->size[1] > 2147483646)) {
      c_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
      b_st.site = &bh_emlrtRSI;
      talt->data[jtilecol] = inp_talt->data[0];
      b_st.site = &ah_emlrtRSI;
    }
  } else {
    i = talt->size[0] * talt->size[1];
    talt->size[0] = 1;
    talt->size[1] = inp_talt->size[1];
    emxEnsureCapacity_real_T(sp, talt, i, &wj_emlrtRTEI);
    ntilecols = inp_talt->size[0] * inp_talt->size[1];
    for (i = 0; i < ntilecols; i++) {
      talt->data[i] = inp_talt->data[i];
    }
  }

  /*  If R is already spatial referencing object, validate it. Otherwise */
  /*  convert the input referencing vector or matrix. And construct a */
  /*  non-extrapolating default-grid griddedInterpolant for Z. */
  /*  R = internal.map.convertToGeoRasterRef( ... */
  /*      R, size(Z), 'degrees', mfilename, 'R', 2); */
  /*  F = griddedInterpolant(Z); */
  /*  F.ExtrapolationMethod = 'none'; */
  /*  loop over pairs of observer and target locations */
  emxInit_real_T(sp, &unusedU8, 1, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedU9, 1, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUa, 1, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUb, 1, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUc, 2, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUd, 2, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUe, 2, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &unusedUf, 2, &bk_emlrtRTEI, true);
  emxInit_boolean_T(sp, &visprofile_row, 1, &bk_emlrtRTEI, true);
  if (lat1->size[1] == 1) {
    /*  Single pair of points: */
    /*     Output 1 is a logical scalar */
    /*     Output 2 is a logical array */
    /*     Outputs 3-6 are numerical arrays */
    if (1 > lon1->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lon1->size[1], &xf_emlrtBCI, sp);
    }

    if (1 > lat2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lat2->size[1], &yf_emlrtBCI, sp);
    }

    if (1 > lon2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lon2->size[1], &ag_emlrtBCI, sp);
    }

    if (1 > lat1->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lat1->size[1], &bg_emlrtBCI, sp);
    }

    if (1 > talt->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, talt->size[1], &cg_emlrtBCI, sp);
    }

    st.site = &xg_emlrtRSI;
    mexable_calculateLOS(&st, Z, lat1->data[0], lon1->data[0], lat2->data[0],
                         lon2->data[0], talt->data[0], actualradius,
                         actualradius, sample_dens, public_raster_struct,
                         visprofile_row, unusedU8, unusedU9, unusedUa, unusedUb,
                         unusedUc, unusedUd, unusedUe, unusedUf);
    i = vis->size[0] * vis->size[1];
    vis->size[0] = 1;
    vis->size[1] = 1;
    emxEnsureCapacity_boolean_T(sp, vis, i, &ak_emlrtRTEI);
    if (visprofile_row->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(visprofile_row->size[0], 1,
        visprofile_row->size[0], &eg_emlrtBCI, sp);
    }

    vis->data[0] = visprofile_row->data[visprofile_row->size[0] - 1];
  } else {
    /*  Multiple pairs of points: */
    /*    Output 1 is a logical array */
    /*    Outputs 2-6 are cell arrays that contain */
    /*       logical or numerical arrays */
    i = vis->size[0] * vis->size[1];
    vis->size[0] = 1;
    vis->size[1] = lat1->size[1];
    emxEnsureCapacity_boolean_T(sp, vis, i, &yj_emlrtRTEI);

    /*      h      = cell(1, cell_N); */
    /*      dist   = cell(1, cell_N); */
    /*      lattrk = cell(1, cell_N); */
    /*      lontrk = cell(1, cell_N); */
    /*      F = griddedInterpolant(Z); */
    /*      F.ExtrapolationMethod = 'none'; */
    i = lat1->size[1];
    for (jtilecol = 0; jtilecol < i; jtilecol++) {
      /*          [A1, B1, C1, D1, E1, F1, G1, H1, I1] = mexable_calculateLOS(Z, R, lat1(i), lon1(i), lat2(i), lon2(i), oalt(i), talt(i), observerAltitudeIsAGL, targetAltitudeIsAGL, actualradius, apparentradius, sample_dens, public_raster_struct); */
      /*   */
      /*           */
      /*          [A2, B2, C2, D2, E2, F2, G2, H2, I2] = my_calculateLOS(F, R, lat1(i), lon1(i), lat2(i), lon2(i), oalt(i), talt(i), observerAltitudeIsAGL, targetAltitudeIsAGL, actualradius, apparentradius); */
      /*           */
      /*          if A1 ~= A2 */
      /*              error_i = i */
      /*              error("Failed test!") */
      /*          end */
      /*          [visprofile_row, dist{i}, h{i}, lattrk{i}, lontrk{i}, x1, z1, x2, z2] ... */
      ntilecols = jtilecol + 1;
      if ((ntilecols < 1) || (ntilecols > outsize_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(ntilecols, 1, outsize_idx_1, &dg_emlrtBCI,
          sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > lat1->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, lat1->size[1],
          &fg_emlrtBCI, sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > lon1->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, lon1->size[1],
          &gg_emlrtBCI, sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > lat2->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, lat2->size[1],
          &hg_emlrtBCI, sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > lon2->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, lon2->size[1],
          &ig_emlrtBCI, sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > talt->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, talt->size[1],
          &jg_emlrtBCI, sp);
      }

      st.site = &yg_emlrtRSI;
      mexable_calculateLOS(&st, Z, lat1->data[jtilecol], lon1->data[jtilecol],
                           lat2->data[jtilecol], lon2->data[jtilecol],
                           talt->data[jtilecol], actualradius, actualradius,
                           sample_dens, public_raster_struct, visprofile_row,
                           unusedU8, unusedU9, unusedUa, unusedUb, unusedUc,
                           unusedUd, unusedUe, unusedUf);
      if (visprofile_row->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(visprofile_row->size[0], 1,
          visprofile_row->size[0], &kg_emlrtBCI, sp);
      }

      if ((jtilecol + 1 < 1) || (jtilecol + 1 > vis->size[1])) {
        emlrtDynamicBoundsCheckR2012b(jtilecol + 1, 1, vis->size[1],
          &lg_emlrtBCI, sp);
      }

      vis->data[jtilecol] = visprofile_row->data[visprofile_row->size[0] - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  emxFree_real_T(&talt);
  emxFree_boolean_T(&visprofile_row);
  emxFree_real_T(&unusedUf);
  emxFree_real_T(&unusedUe);
  emxFree_real_T(&unusedUd);
  emxFree_real_T(&unusedUc);
  emxFree_real_T(&unusedUb);
  emxFree_real_T(&unusedUa);
  emxFree_real_T(&unusedU9);
  emxFree_real_T(&unusedU8);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mexable_los2.c) */
