/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: interp2.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 19-Apr-2021 21:23:36
 */

/* Include Files */
#include "interp2.h"
#include "rt_nonfinite.h"
#include "shadowing_latlon_loop_emxutil.h"
#include "shadowing_latlon_loop_types.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *V
 *                const emxArray_real_T *Xq
 *                const emxArray_real_T *Yq
 *                emxArray_real_T *Vq
 * Return Type  : void
 */
void interp2_local(const emxArray_real_T *V, const emxArray_real_T *Xq, const
                   emxArray_real_T *Yq, emxArray_real_T *Vq)
{
  double qx1;
  double qx2;
  double rx;
  double ry;
  double zx1y2;
  int ix;
  int ixmax;
  int iy;
  int iymax;
  int k;
  int ub_loop;
  ixmax = Vq->size[0];
  Vq->size[0] = Xq->size[0];
  emxEnsureCapacity_real_T(Vq, ixmax);
  ixmax = V->size[1] - 1;
  iymax = V->size[0] - 1;
  ub_loop = Xq->size[0] - 1;

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(ix,iy,ry,qx1,zx1y2,qx2,rx)

  for (k = 0; k <= ub_loop; k++) {
    if ((Xq->data[k] >= 1.0) && (Xq->data[k] <= V->size[1]) && (Yq->data[k] >=
         1.0) && (Yq->data[k] <= V->size[0])) {
      if (Xq->data[k] <= 1.0) {
        ix = 1;
      } else if (Xq->data[k] <= ixmax) {
        ix = (int)floor(Xq->data[k]);
      } else {
        ix = ixmax;
      }

      if (Yq->data[k] <= 1.0) {
        iy = 1;
      } else if (Yq->data[k] <= iymax) {
        iy = (int)floor(Yq->data[k]);
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
        if (!(Xq->data[k] == (double)ix + 1.0)) {
          rx = (Xq->data[k] - (double)ix) / (((double)ix + 1.0) - (double)ix);
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
      } else if (Yq->data[k] == (double)iy + 1.0) {
        Vq->data[k] = qx2;
      } else {
        ry = (Yq->data[k] - (double)iy) / (((double)iy + 1.0) - (double)iy);
        Vq->data[k] = (1.0 - ry) * qx1 + ry * qx2;
      }
    } else {
      Vq->data[k] = rtNaN;
    }
  }
}

/*
 * File trailer for interp2.c
 *
 * [EOF]
 */
