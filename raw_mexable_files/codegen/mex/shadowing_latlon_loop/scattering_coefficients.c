/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scattering_coefficients.c
 *
 * Code generation for function 'scattering_coefficients'
 *
 */

/* Include files */
#include "scattering_coefficients.h"
#include "cosd.h"
#include "mpower.h"
#include "my_geodetic2aer.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_data.h"
#include "shadowing_latlon_loop_types.h"
#include "sind.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bf_emlrtRSI = { 13, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 14, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 24, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 25, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 56, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 57, /* lineNo */
  "scattering_coefficients",           /* fcnName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m"                                  /* pathName */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  11,                                  /* colNo */
  "A0_matrix",                         /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  44,                                  /* colNo */
  "a_OVER_pi_OVER_4_POWER_3_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  120,                                 /* colNo */
  "b_OVER_pi_OVER_2_POWER_8_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  11,                                  /* colNo */
  "A0_matrix",                         /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  44,                                  /* colNo */
  "a_OVER_pi_OVER_4_POWER_3_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  120,                                 /* colNo */
  "b_OVER_pi_OVER_2_POWER_8_matrix",   /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  15,                                  /* colNo */
  "emissivity_matrix",                 /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  15,                                  /* colNo */
  "emissivity_matrix",                 /* aName */
  "scattering_coefficients",           /* fName */
  "\\\\rivendell.physics.ox.ac.uk\\user\\students\\2017\\trin3161\\Documents\\O3DTM_stripped_down\\helper functions\\scattering_coefficients."
  "m",                                 /* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void scattering_coefficients(const emlrtStack *sp, real_T lat1, real_T long1,
  real_T lat2, real_T long2, real_T lat1_idx, real_T long1_idx, real_T lat2_idx,
  real_T long2_idx, real_T h1, real_T h2, real_T slope1, real_T slope2, real_T
  aspect1, real_T aspect2, real_T emission_area, const struct3_T ref_sphere,
  const emxArray_real_T *A0_matrix, const emxArray_real_T
  *a_OVER_pi_OVER_4_POWER_3_matrix, const emxArray_real_T
  *b_OVER_pi_OVER_2_POWER_8_matrix, real_T curr_vis_normalisation, real_T
  ir_normalisation, const emxArray_real_T *emissivity_matrix, real_T
  scattering_power, real_T *absorbed_vis_coeff, real_T *scattered_vis_coeff,
  real_T *emitted_absorbed_ir_coeff, real_T *emitted_scattered_ir_coeff, real_T *
  scattered_absorbed_ir_coeff, real_T *scattered_scattered_ir_coeff)
{
  emlrtStack st;
  real_T a;
  real_T az21;
  real_T cos_theta1;
  real_T cos_theta2;
  real_T d;
  real_T emissivity1;
  real_T geometric_flux_coeff;
  real_T theta1;
  real_T theta2;
  st.prev = sp;
  st.tls = sp->tls;

  /*  THINGS TO REPLACE */
  /*    A0_matrix(lat1_idx, long1_idx)  */
  /*        -> polled for lat1, lon1 AND lat2, lon2, so cant change this one */
  /*    a_OVER_pi_OVER_4_POWER_3_matrix(lat1_idx, long1_idx) */
  /*    b_OVER_pi_OVER_2_POWER_8_matrix(lat1_idx, long1_idx) */
  /*    vis_normalisation_matrix(lat1_idx, long1_idx) */
  /*    emissivity_matrix(lat1_idx, long1_idx) */
  st.site = &bf_emlrtRSI;
  my_geodetic2aer(&st, lat1, long1, h1, lat2, long2, h2, ref_sphere.Radius,
                  ref_sphere.Flattening, &cos_theta1, &theta2, &a);
  st.site = &cf_emlrtRSI;
  my_geodetic2aer(&st, lat2, long2, h2, lat1, long1, h1, ref_sphere.Radius,
                  ref_sphere.Flattening, &az21, &emissivity1, &theta1);

  /*  calculate flux coefficients           */
  theta2 = muDoubleScalarAbs(theta2);
  cos_theta2 = muDoubleScalarAbs(emissivity1);
  geometric_flux_coeff = 90.0 - theta2;
  b_cosd(&geometric_flux_coeff);
  d = slope1;
  b_cosd(&d);
  theta1 = 90.0 - theta2;
  b_sind(&theta1);
  emissivity1 = slope1;
  b_sind(&emissivity1);
  theta2 = cos_theta1 - aspect1;
  b_cosd(&theta2);
  cos_theta1 = geometric_flux_coeff * d + theta1 * emissivity1 * theta2;
  geometric_flux_coeff = 90.0 - cos_theta2;
  b_cosd(&geometric_flux_coeff);
  d = slope2;
  b_cosd(&d);
  theta1 = 90.0 - cos_theta2;
  b_sind(&theta1);
  emissivity1 = slope2;
  b_sind(&emissivity1);
  theta2 = az21 - aspect2;
  b_cosd(&theta2);
  cos_theta2 = geometric_flux_coeff * d + theta1 * emissivity1 * theta2;
  st.site = &df_emlrtRSI;
  if ((cos_theta1 < -1.0) || (cos_theta1 > 1.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "acos");
  }

  theta1 = muDoubleScalarAcos(cos_theta1);
  st.site = &ef_emlrtRSI;
  if ((cos_theta2 < -1.0) || (cos_theta2 > 1.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "acos");
  }

  theta2 = muDoubleScalarAcos(cos_theta2);

  /*  SCATTERING FUNCTION ############################################################################################# */
  /*  geometric_flux_coeff is fraction of radiation emitted */
  /*  from px1 which can be absorbed by px2 (assuming */
  /*  perfect zero albedo) */
  /*  absorbed_flux_coeff is fraction of radiation emitted */
  /*  from px1 which is absorbed by px2 (accounting for */
  /*  albedo) */
  /*  scattered_flux_coeff is fraction of radiation from */
  /*  px1 which is incident on px2 but is re-scattered due */
  /*  to albedo */
  /*  Geometric */
  geometric_flux_coeff = cos_theta1 * cos_theta2 * emission_area /
    (12.566370614359172 * (a * a));
  if ((geometric_flux_coeff < 0.0) || (geometric_flux_coeff > 1.0) ||
      (cos_theta1 < 0.0) || (cos_theta2 < 0.0)) {
    /*  run check to ensure physical coefficient */
    geometric_flux_coeff = 0.0;
  }

  /*  Visible */
  if (((int32_T)lat1_idx < 1) || ((int32_T)lat1_idx > A0_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat1_idx, 1, A0_matrix->size[0],
      &qe_emlrtBCI, sp);
  }

  if (((int32_T)long1_idx < 1) || ((int32_T)long1_idx > A0_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long1_idx, 1, A0_matrix->size[1],
      &qe_emlrtBCI, sp);
  }

  if (((int32_T)lat1_idx < 1) || ((int32_T)lat1_idx >
       a_OVER_pi_OVER_4_POWER_3_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat1_idx, 1,
      a_OVER_pi_OVER_4_POWER_3_matrix->size[0], &re_emlrtBCI, sp);
  }

  if (((int32_T)long1_idx < 1) || ((int32_T)long1_idx >
       a_OVER_pi_OVER_4_POWER_3_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long1_idx, 1,
      a_OVER_pi_OVER_4_POWER_3_matrix->size[1], &re_emlrtBCI, sp);
  }

  if (((int32_T)lat1_idx < 1) || ((int32_T)lat1_idx >
       b_OVER_pi_OVER_2_POWER_8_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat1_idx, 1,
      b_OVER_pi_OVER_2_POWER_8_matrix->size[0], &se_emlrtBCI, sp);
  }

  if (((int32_T)long1_idx < 1) || ((int32_T)long1_idx >
       b_OVER_pi_OVER_2_POWER_8_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long1_idx, 1,
      b_OVER_pi_OVER_2_POWER_8_matrix->size[1], &se_emlrtBCI, sp);
  }

  if (((int32_T)lat2_idx < 1) || ((int32_T)lat2_idx > A0_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat2_idx, 1, A0_matrix->size[0],
      &te_emlrtBCI, sp);
  }

  if (((int32_T)long2_idx < 1) || ((int32_T)long2_idx > A0_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long2_idx, 1, A0_matrix->size[1],
      &te_emlrtBCI, sp);
  }

  if (((int32_T)lat2_idx < 1) || ((int32_T)lat2_idx >
       a_OVER_pi_OVER_4_POWER_3_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat2_idx, 1,
      a_OVER_pi_OVER_4_POWER_3_matrix->size[0], &ue_emlrtBCI, sp);
  }

  if (((int32_T)long2_idx < 1) || ((int32_T)long2_idx >
       a_OVER_pi_OVER_4_POWER_3_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long2_idx, 1,
      a_OVER_pi_OVER_4_POWER_3_matrix->size[1], &ue_emlrtBCI, sp);
  }

  if (((int32_T)lat2_idx < 1) || ((int32_T)lat2_idx >
       b_OVER_pi_OVER_2_POWER_8_matrix->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat2_idx, 1,
      b_OVER_pi_OVER_2_POWER_8_matrix->size[0], &ve_emlrtBCI, sp);
  }

  if (((int32_T)long2_idx < 1) || ((int32_T)long2_idx >
       b_OVER_pi_OVER_2_POWER_8_matrix->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long2_idx, 1,
      b_OVER_pi_OVER_2_POWER_8_matrix->size[1], &ve_emlrtBCI, sp);
  }

  theta2 = (A0_matrix->data[((int32_T)lat2_idx + A0_matrix->size[0] * ((int32_T)
              long2_idx - 1)) - 1] + a_OVER_pi_OVER_4_POWER_3_matrix->data
            [((int32_T)lat2_idx + a_OVER_pi_OVER_4_POWER_3_matrix->size[0] *
              ((int32_T)long2_idx - 1)) - 1] * theta2 * theta2 * theta2) +
    b_OVER_pi_OVER_2_POWER_8_matrix->data[((int32_T)lat2_idx +
    b_OVER_pi_OVER_2_POWER_8_matrix->size[0] * ((int32_T)long2_idx - 1)) - 1] *
    theta2 * theta2 * theta2 * theta2 * theta2 * theta2 * theta2 * theta2;
  theta1 = curr_vis_normalisation * ((A0_matrix->data[((int32_T)lat1_idx +
    A0_matrix->size[0] * ((int32_T)long1_idx - 1)) - 1] +
    a_OVER_pi_OVER_4_POWER_3_matrix->data[((int32_T)lat1_idx +
    a_OVER_pi_OVER_4_POWER_3_matrix->size[0] * ((int32_T)long1_idx - 1)) - 1] *
    theta1 * theta1 * theta1) + b_OVER_pi_OVER_2_POWER_8_matrix->data[((int32_T)
    lat1_idx + b_OVER_pi_OVER_2_POWER_8_matrix->size[0] * ((int32_T)long1_idx -
    1)) - 1] * theta1 * theta1 * theta1 * theta1 * theta1 * theta1 * theta1 *
    theta1) * geometric_flux_coeff;
  *absorbed_vis_coeff = theta1 * (1.0 - theta2);

  /*  scattered from 1, absorbed by 2 */
  *scattered_vis_coeff = theta1 * theta2;

  /*  scattered from 1, scattered by 2 */
  /*  IR */
  if (((int32_T)lat1_idx < 1) || ((int32_T)lat1_idx > emissivity_matrix->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat1_idx, 1, emissivity_matrix->size
      [0], &we_emlrtBCI, sp);
  }

  if (((int32_T)long1_idx < 1) || ((int32_T)long1_idx > emissivity_matrix->size
       [1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long1_idx, 1, emissivity_matrix->
      size[1], &we_emlrtBCI, sp);
  }

  st.site = &gf_emlrtRSI;
  emissivity1 = emissivity_matrix->data[((int32_T)lat1_idx +
    emissivity_matrix->size[0] * ((int32_T)long1_idx - 1)) - 1] * mpower(&st,
    cos_theta1, scattering_power);
  if (((int32_T)lat2_idx < 1) || ((int32_T)lat2_idx > emissivity_matrix->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)lat2_idx, 1, emissivity_matrix->size
      [0], &xe_emlrtBCI, sp);
  }

  if (((int32_T)long2_idx < 1) || ((int32_T)long2_idx > emissivity_matrix->size
       [1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)long2_idx, 1, emissivity_matrix->
      size[1], &xe_emlrtBCI, sp);
  }

  st.site = &hf_emlrtRSI;
  theta1 = emissivity_matrix->data[((int32_T)lat2_idx + emissivity_matrix->size
    [0] * ((int32_T)long2_idx - 1)) - 1] * mpower(&st, cos_theta2,
    scattering_power);
  theta2 = ir_normalisation * emissivity1 * geometric_flux_coeff;
  *emitted_absorbed_ir_coeff = theta2 * theta1;

  /*  emitted from 1, absorbed by 2 */
  *emitted_scattered_ir_coeff = theta2 * (1.0 - theta1);

  /*  emitted from 1, scattered by 2 */
  theta2 = (1.0 - emissivity1) * geometric_flux_coeff;
  *scattered_absorbed_ir_coeff = theta2 * theta1;

  /*  scattered from 1, absorbed by 2 */
  *scattered_scattered_ir_coeff = theta2 * (1.0 - theta1);

  /*  scattered from 1, scattered by 2 */
}

/* End of code generation (scattering_coefficients.c) */
