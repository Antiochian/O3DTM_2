/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * interp2.c
 *
 * Code generation for function 'interp2'
 *
 */

/* Include files */
#include "interp2.h"
#include "eml_int_forloop_overflow_check.h"
#include "multiscattering_core_loop_wrapper_data.h"
#include "multiscattering_core_loop_wrapper_emxutil.h"
#include "multiscattering_core_loop_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qe_emlrtRSI = { 274,/* lineNo */
  "interp2_local",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pathName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 268,/* lineNo */
  21,                                  /* colNo */
  "interp2",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp2.m"/* pName */
};

/* Function Definitions */
void interp2_local(const emlrtStack *sp, const emxArray_real_T *V, const
                   emxArray_real_T *Xq, const emxArray_real_T *Yq,
                   emxArray_real_T *Vq)
{
  jmp_buf * volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack st;
  real_T qx1;
  real_T qx2;
  real_T rx;
  real_T ry;
  real_T zx1y2;
  int32_T ix;
  int32_T ixmax;
  int32_T iy;
  int32_T iymax;
  int32_T k;
  int32_T ub_loop;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ixmax = Vq->size[0];
  Vq->size[0] = Xq->size[0];
  emxEnsureCapacity_real_T(sp, Vq, ixmax, &tf_emlrtRTEI);
  ixmax = V->size[1] - 1;
  iymax = V->size[0] - 1;
  st.site = &qe_emlrtRSI;
  if ((1 <= Xq->size[0]) && (Xq->size[0] > 2147483646)) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  ub_loop = Xq->size[0] - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel for \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(ix,iy,ry,qx1,zx1y2,qx2,rx)

  for (k = 0; k <= ub_loop; k++) {
    if ((Xq->data[k] >= 1.0) && (Xq->data[k] <= V->size[1]) && (Yq->data[k] >=
         1.0) && (Yq->data[k] <= V->size[0])) {
      if (Xq->data[k] <= 1.0) {
        ix = 1;
      } else if (Xq->data[k] <= ixmax) {
        ix = (int32_T)muDoubleScalarFloor(Xq->data[k]);
      } else {
        ix = ixmax;
      }

      if (Yq->data[k] <= 1.0) {
        iy = 1;
      } else if (Yq->data[k] <= iymax) {
        iy = (int32_T)muDoubleScalarFloor(Yq->data[k]);
      } else {
        iy = iymax;
      }

      ry = V->data[(iy + V->size[0] * (ix - 1)) - 1];
      qx1 = V->data[(iy + V->size[0] * ix) - 1];
      zx1y2 = V->data[iy + V->size[0] * (ix - 1)];
      qx2 = V->data[iy + V->size[0] * ix];
      if (Xq->data[k] == ix) {
        qx1 = ry;
        qx2 = zx1y2;
      } else {
        if (!(Xq->data[k] == (real_T)ix + 1.0)) {
          rx = (Xq->data[k] - (real_T)ix) / (((real_T)ix + 1.0) - (real_T)ix);
          if (ry == qx1) {
            qx1 = ry;
          } else {
            qx1 = (1.0 - rx) * ry + rx * qx1;
          }

          if (zx1y2 == qx2) {
            qx2 = zx1y2;
          } else {
            qx2 = (1.0 - rx) * zx1y2 + rx * qx2;
          }
        }
      }

      if ((Yq->data[k] == iy) || (qx1 == qx2)) {
        Vq->data[k] = qx1;
      } else if (Yq->data[k] == (real_T)iy + 1.0) {
        Vq->data[k] = qx2;
      } else {
        ry = (Yq->data[k] - (real_T)iy) / (((real_T)iy + 1.0) - (real_T)iy);
        Vq->data[k] = (1.0 - ry) * qx1 + ry * qx2;
      }
    } else {
      Vq->data[k] = rtNaN;
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
}

/* End of code generation (interp2.c) */
