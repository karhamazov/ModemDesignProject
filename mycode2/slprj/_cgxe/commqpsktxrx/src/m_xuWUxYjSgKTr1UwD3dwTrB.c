/* Include files */

#include <stddef.h>
#include "blas.h"
#include "commqpsktxrx_cgxe.h"
#include "m_xuWUxYjSgKTr1UwD3dwTrB.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */
#define OutputFrameLength              (100.0)
#define PerformSynchronization         (true)

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo b_emlrtMCI = { 162, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo c_emlrtMCI = { 152, 13, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m"
};

static emlrtMCInfo d_emlrtMCI = { 151, 9, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m"
};

static emlrtMCInfo e_emlrtMCI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo f_emlrtMCI = { 87, 21, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo g_emlrtMCI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 305, 75, "x", "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo emlrtDCI = { 305, 75, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtDCInfo b_emlrtDCI = { 328, 79, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 328, 79, "x", "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 286, 5, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m"
};

static emlrtBCInfo c_emlrtBCI = { 1, 500, 286, 23, "obj.pOutputBuffer",
  "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 286, 23, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtBCInfo d_emlrtBCI = { 1, 500, 290, 13, "obj.pOutputBuffer",
  "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 290, 13, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { 1, 500, 338, 9, "obj.pOutputBuffer",
  "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 338, 9, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtBCInfo f_emlrtBCI = { 1, 500, 290, 5, "obj.pOutputBuffer",
  "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 290, 5, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 500, 322, 9, "obj.pOutputBuffer",
  "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 322, 9, "FrameFormation",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
  1 };

/* Function Declarations */
static void validateattributes(creal_T a_data[], int32_T a_sizes);
static void FrameFormation_stepSyncMode(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance, FrameFormation_2 *obj, creal_T x_data[], int32_T x_sizes,
  creal_T y[100], boolean_T *validFrm);
static void b_mod(real_T x_data[], int32_T x_sizes[2], real_T r_data[], int32_T
                  r_sizes[2]);
static boolean_T dimagree(real_T z_data[], int32_T z_sizes[2], real_T
  varargin_1_data[], int32_T varargin_1_sizes[2]);
static void c_mod(real_T b_x[100], real_T y, real_T r[100]);
static void cgxe_mdl_start(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance);
static const mxArray *mw__internal__name__resolution__fcn(void);
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static void c_info_helper(const mxArray **info);
static const mxArray *mw__internal__autoInference__fcn(void);
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void error(const mxArray *b, emlrtMCInfo *location);
static void b_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static const mxArray *num2str(const mxArray *b, emlrtMCInfo *location);
static void coder_internal_warning(const mxArray *b, const mxArray *c,
  emlrtMCInfo *location);
static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static void validateattributes(creal_T a_data[], int32_T a_sizes)
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  static char_T cv0[42] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'F', 'r', 'a',
    'm', 'e', 'F', 'o', 'r', 'm', 'a', 't', 'i', 'o', 'n', '.', 'I', 'n', 'p',
    'u', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i',
    't', 'e' };

  char_T u[42];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 42 };

  const mxArray *m0;
  static char_T cv1[28] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'I',
    'n', 'p', 'u', 't', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i',
    't', 'e', '.' };

  char_T b_u[28];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 28 };

  p = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k <= a_sizes - 1)) {
    if ((!(muDoubleScalarIsInf(a_data[k].re) || muDoubleScalarIsInf(a_data[k].im)))
        && (!(muDoubleScalarIsNaN(a_data[k].re) || muDoubleScalarIsNaN(a_data[k]
           .im)))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 42; k++) {
      u[k] = cv0[k];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (k = 0; k < 28; k++) {
      b_u[k] = cv1[k];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 28, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    b_error(y, b_y, &b_emlrtMCI);
  }
}

static void FrameFormation_stepSyncMode(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance, FrameFormation_2 *obj, creal_T x_data[], int32_T x_sizes,
  creal_T y[100], boolean_T *validFrm)
{
  real_T frmIdx;
  real_T numValidOut;
  real_T inLen;
  real_T partialXToFill;
  int32_T b_x_sizes;
  int32_T i0;
  int32_T ndbl;
  real_T cdiff;
  int32_T apnd;
  real_T y_data[110];
  int32_T nm1d2;
  int32_T k;
  FrameFormation_2 *b_obj;
  real_T frmIdx_data[110];
  int32_T frmIdx_sizes[2];
  int32_T y_sizes[2];
  int32_T i1;
  int32_T tmp_data[110];
  int32_T iv2[1];
  int32_T b_x[1];
  real_T r[112];
  real_T d;
  creal_T value[112];
  creal_T varargout_1[124];
  dspcodegen_Crosscorrelator *c_obj;
  static char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 45 };

  const mxArray *m1;
  static char_T cv3[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 4 };

  static char_T cv4[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 51 };

  static char_T cv5[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *e_y;
  static const int32_T iv6[2] = { 1, 5 };

  int32_T b_k;
  static creal_T varargin_2[13] = { { -0.70710678118654757, -0.70710678118654757
    }, { -0.70710678118654757, -0.70710678118654757 }, { -0.70710678118654757,
      -0.70710678118654757 }, { -0.70710678118654757, -0.70710678118654757 }, {
      -0.70710678118654757, -0.70710678118654757 }, { 0.70710678118654757,
      0.70710678118654757 }, { 0.70710678118654757, 0.70710678118654757 }, { -
      0.70710678118654757, -0.70710678118654757 }, { -0.70710678118654757,
      -0.70710678118654757 }, { 0.70710678118654757, 0.70710678118654757 }, { -
      0.70710678118654757, -0.70710678118654757 }, { 0.70710678118654757,
      0.70710678118654757 }, { -0.70710678118654757, -0.70710678118654757 } };

  real_T z[124];
  boolean_T exitg1;
  static int8_T iv7[100] = { 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
    44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
    63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
    82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
    101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111 };

  real_T linearIdx[100];
  real_T b_frmIdx[100];
  int32_T b_frmIdx_sizes[2];
  int32_T iv8[1];
  int32_T c_x[1];
  covrtLogFcn(&moduleInstance->covInst, 0, 7);
  covrtLogBasicBlock(&moduleInstance->covInst, 0, 9);
  frmIdx = obj->pFrameIdxInBuf;
  numValidOut = obj->pNumValidOutInBuf;
  inLen = muDoubleScalarMin((real_T)x_sizes, 600.0 - numValidOut);
  partialXToFill = muDoubleScalarMax(muDoubleScalarMin(inLen, 500.0 -
    numValidOut), 0.0);
  if (1.0 > partialXToFill) {
    b_x_sizes = -1;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, x_sizes, &emlrtBCI, emlrtRootTLSGlobal);
    i0 = (int32_T)emlrtIntegerCheckR2012b(partialXToFill, &emlrtDCI,
      emlrtRootTLSGlobal);
    b_x_sizes = emlrtDynamicBoundsCheckR2012b(i0, 1, x_sizes, &emlrtBCI,
      emlrtRootTLSGlobal) - 1;
  }

  if (partialXToFill < 1.0) {
    ndbl = 0;
    cdiff = partialXToFill;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor((partialXToFill - 1.0) + 0.5);
    apnd = ndbl;
    cdiff = (1.0 + (real_T)ndbl) - partialXToFill;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * partialXToFill) {
      ndbl++;
      cdiff = partialXToFill;
    } else if (cdiff > 0.0) {
      cdiff = 1.0 + ((real_T)ndbl - 1.0);
    } else {
      ndbl++;
      cdiff = (real_T)(apnd + 1);
    }
  }

  if (ndbl > 0) {
    y_data[0] = 1.0;
    if (ndbl > 1) {
      y_data[ndbl - 1] = cdiff;
      i0 = ndbl - 1;
      nm1d2 = i0 >> 1;
      for (k = 1; k < nm1d2; k++) {
        y_data[k] = 1.0 + (real_T)k;
        y_data[(ndbl - k) - 1] = cdiff - (real_T)k;
      }

      if (nm1d2 << 1 == ndbl - 1) {
        y_data[nm1d2] = (1.0 + cdiff) / 2.0;
      } else {
        y_data[nm1d2] = 1.0 + (real_T)nm1d2;
        y_data[nm1d2 + 1] = cdiff - (real_T)nm1d2;
      }
    }
  }

  b_obj = obj;
  covrtLogFcn(&moduleInstance->covInst, 0, 5);
  covrtLogBasicBlock(&moduleInstance->covInst, 0, 7);
  frmIdx_sizes[0] = 1;
  frmIdx_sizes[1] = ndbl;
  cdiff = frmIdx * OutputFrameLength + numValidOut;
  for (i0 = 0; i0 < ndbl; i0++) {
    frmIdx_data[i0] = (cdiff + y_data[i0]) - 1.0;
  }

  b_mod(frmIdx_data, frmIdx_sizes, y_data, y_sizes);
  ndbl = y_sizes[1];
  for (i0 = 0; i0 < ndbl; i0++) {
    i1 = (int32_T)emlrtIntegerCheckR2012b(y_data[y_sizes[0] * i0] + 1.0,
      &c_emlrtDCI, emlrtRootTLSGlobal);
    tmp_data[i0] = emlrtDynamicBoundsCheckR2012b(i1, 1, 500, &c_emlrtBCI,
      emlrtRootTLSGlobal) - 1;
  }

  iv2[0] = y_sizes[1];
  b_x[0] = b_x_sizes + 1;
  emlrtSubAssignSizeCheckR2012b(iv2, 1, b_x, 1, &emlrtECI, emlrtRootTLSGlobal);
  for (i0 = 0; i0 <= b_x_sizes; i0++) {
    b_obj->pOutputBuffer[tmp_data[i0]].re = x_data[i0].re;
    b_obj->pOutputBuffer[tmp_data[i0]].im = x_data[i0].im;
  }

  /*  [EOF] */
  numValidOut += partialXToFill;
  if (covrtLogIf(&moduleInstance->covInst, 0, 0, 1, numValidOut >= 112.0)) {
    if (covrtLogIf(&moduleInstance->covInst, 0, 0, 2, covrtLogMcdc
                   (&moduleInstance->covInst, 0, 0, 0, !covrtLogCond
                    (&moduleInstance->covInst, 0, 0, 0, obj->pSyncDelayFound))))
    {
      covrtLogBasicBlock(&moduleInstance->covInst, 0, 10);
      b_obj = obj;
      covrtLogFcn(&moduleInstance->covInst, 0, 6);
      covrtLogBasicBlock(&moduleInstance->covInst, 0, 8);
      cdiff = frmIdx * OutputFrameLength;
      for (i0 = 0; i0 < 112; i0++) {
        d = (cdiff + (1.0 + (real_T)i0)) - 1.0;
        r[i0] = d - muDoubleScalarFloor(d / 500.0) * 500.0;
      }

      for (i0 = 0; i0 < 112; i0++) {
        i1 = (int32_T)emlrtIntegerCheckR2012b(r[i0] + 1.0, &f_emlrtDCI,
          emlrtRootTLSGlobal);
        value[i0].re = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1,
          500, &f_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
        i1 = (int32_T)emlrtIntegerCheckR2012b(r[i0] + 1.0, &d_emlrtDCI,
          emlrtRootTLSGlobal);
        value[i0].im = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1,
          500, &d_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
      }

      c_obj = &obj->pCorrelator;
      if (c_obj->isInitialized == 2) {
        for (i0 = 0; i0 < 45; i0++) {
          u[i0] = cv2[i0];
        }

        b_y = NULL;
        m1 = emlrtCreateCharArray(2, iv3);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, &u[0]);
        emlrtAssign(&b_y, m1);
        for (i0 = 0; i0 < 4; i0++) {
          b_u[i0] = cv3[i0];
        }

        c_y = NULL;
        m1 = emlrtCreateCharArray(2, iv4);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m1, &b_u[0]);
        emlrtAssign(&c_y, m1);
        error(message(b_y, c_y, &emlrtMCI), &emlrtMCI);
      }

      if (c_obj->isInitialized != 1) {
        if (c_obj->isInitialized != 0) {
          for (i0 = 0; i0 < 51; i0++) {
            c_u[i0] = cv4[i0];
          }

          d_y = NULL;
          m1 = emlrtCreateCharArray(2, iv5);
          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m1, &c_u[0]);
          emlrtAssign(&d_y, m1);
          for (i0 = 0; i0 < 5; i0++) {
            d_u[i0] = cv5[i0];
          }

          e_y = NULL;
          m1 = emlrtCreateCharArray(2, iv6);
          emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m1, &d_u[0]);
          emlrtAssign(&e_y, m1);
          error(message(d_y, e_y, &emlrtMCI), &emlrtMCI);
        }

        c_obj->isInitialized = 1;
      }

      /* System object Outputs function: dsp.Crosscorrelator */
      apnd = 0;
      for (k = 0; k < 124; k++) {
        if (k - 12 > 0) {
          b_k = k - 12;
        } else {
          b_k = 0;
        }

        nm1d2 = b_k + 12;
        if (k < 111) {
          ndbl = k;
        } else {
          ndbl = 111;
        }

        cdiff = value[nm1d2 - 12].re * varargin_2[nm1d2 - k].re - value[nm1d2 -
          12].im * -varargin_2[nm1d2 - k].im;
        d = value[nm1d2 - 12].re * -varargin_2[nm1d2 - k].im + value[nm1d2 - 12]
          .im * varargin_2[nm1d2 - k].re;
        for (nm1d2++; nm1d2 - 12 <= ndbl; nm1d2++) {
          cdiff += value[nm1d2 - 12].re * varargin_2[nm1d2 - k].re - value[nm1d2
            - 12].im * -varargin_2[nm1d2 - k].im;
          d += value[nm1d2 - 12].re * -varargin_2[nm1d2 - k].im + value[nm1d2 -
            12].im * varargin_2[nm1d2 - k].re;
        }

        varargout_1[apnd].re = cdiff;
        varargout_1[apnd].im = d;
        apnd++;
      }

      for (k = 0; k < 124; k++) {
        z[k] = muDoubleScalarHypot(varargout_1[k].re, varargout_1[k].im);
      }

      apnd = 1;
      cdiff = z[12];
      k = 1;
      if (muDoubleScalarIsNaN(z[12])) {
        nm1d2 = 2;
        exitg1 = false;
        while ((exitg1 == false) && (nm1d2 < 101)) {
          apnd = nm1d2;
          if (!muDoubleScalarIsNaN(z[nm1d2 + 11])) {
            cdiff = z[nm1d2 + 11];
            k = nm1d2;
            exitg1 = true;
          } else {
            nm1d2++;
          }
        }
      }

      if (apnd < 100) {
        while (apnd + 1 < 101) {
          if (z[iv7[apnd]] > cdiff) {
            cdiff = z[(int8_T)(12 + (int8_T)apnd)];
            k = apnd + 1;
          }

          apnd++;
        }
      }

      obj->pSyncDelay = (real_T)k - 1.0;
      b_obj = obj;
      b_obj->pSyncDelayFound = true;
    }

    covrtLogBasicBlock(&moduleInstance->covInst, 0, 11);
    b_obj = obj;
    cdiff = frmIdx * OutputFrameLength + obj->pSyncDelay;
    for (i0 = 0; i0 < 100; i0++) {
      linearIdx[i0] = cdiff + (1.0 + (real_T)i0);
    }

    covrtLogFcn(&moduleInstance->covInst, 0, 6);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 8);
    for (i0 = 0; i0 < 100; i0++) {
      b_frmIdx[i0] = linearIdx[i0] - 1.0;
    }

    c_mod(b_frmIdx, 500.0, linearIdx);
    for (i0 = 0; i0 < 100; i0++) {
      i1 = (int32_T)emlrtIntegerCheckR2012b(linearIdx[i0] + 1.0, &g_emlrtDCI,
        emlrtRootTLSGlobal);
      y[i0].re = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1, 500,
        &g_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
      i1 = (int32_T)emlrtIntegerCheckR2012b(linearIdx[i0] + 1.0, &d_emlrtDCI,
        emlrtRootTLSGlobal);
      y[i0].im = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1, 500,
        &d_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
    }

    *validFrm = (numValidOut >= obj->pSyncDelay + 100.0);
    if (covrtLogIf(&moduleInstance->covInst, 0, 0, 3, *validFrm)) {
      if (covrtLogIf(&moduleInstance->covInst, 0, 0, 4, partialXToFill < inLen))
      {
        covrtLogBasicBlock(&moduleInstance->covInst, 0, 12);
        if (partialXToFill + 1.0 > inLen) {
          i0 = 0;
          i1 = 0;
        } else {
          i0 = (int32_T)emlrtIntegerCheckR2012b(partialXToFill + 1.0,
            &b_emlrtDCI, emlrtRootTLSGlobal);
          i0 = emlrtDynamicBoundsCheckR2012b(i0, 1, x_sizes, &b_emlrtBCI,
            emlrtRootTLSGlobal) - 1;
          i1 = (int32_T)emlrtIntegerCheckR2012b(inLen, &b_emlrtDCI,
            emlrtRootTLSGlobal);
          i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, x_sizes, &b_emlrtBCI,
            emlrtRootTLSGlobal);
        }

        d = inLen - partialXToFill;
        if (d < 1.0) {
          ndbl = 0;
        } else {
          ndbl = (int32_T)muDoubleScalarFloor((d - 1.0) + 0.5);
          apnd = ndbl;
          cdiff = (1.0 + (real_T)ndbl) - d;
          if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * d) {
            ndbl++;
          } else if (cdiff > 0.0) {
            d = 1.0 + ((real_T)ndbl - 1.0);
          } else {
            ndbl++;
            d = (real_T)apnd + 1.0;
          }
        }

        if (ndbl > 0) {
          y_data[0] = 1.0;
          if (ndbl > 1) {
            y_data[ndbl - 1] = d;
            apnd = ndbl - 1;
            nm1d2 = apnd >> 1;
            for (k = 1; k < nm1d2; k++) {
              y_data[k] = 1.0 + (real_T)k;
              y_data[(ndbl - k) - 1] = d - (real_T)k;
            }

            if (nm1d2 << 1 == ndbl - 1) {
              y_data[nm1d2] = (1.0 + d) / 2.0;
            } else {
              y_data[nm1d2] = 1.0 + (real_T)nm1d2;
              y_data[nm1d2 + 1] = d - (real_T)nm1d2;
            }
          }
        }

        b_obj = obj;
        covrtLogFcn(&moduleInstance->covInst, 0, 5);
        covrtLogBasicBlock(&moduleInstance->covInst, 0, 7);
        b_frmIdx_sizes[0] = 1;
        b_frmIdx_sizes[1] = ndbl;
        cdiff = frmIdx * OutputFrameLength;
        for (apnd = 0; apnd < ndbl; apnd++) {
          frmIdx_data[apnd] = (cdiff + y_data[apnd]) - 1.0;
        }

        b_mod(frmIdx_data, b_frmIdx_sizes, y_data, y_sizes);
        ndbl = y_sizes[1];
        for (apnd = 0; apnd < ndbl; apnd++) {
          nm1d2 = (int32_T)emlrtIntegerCheckR2012b(y_data[y_sizes[0] * apnd] +
            1.0, &c_emlrtDCI, emlrtRootTLSGlobal);
          tmp_data[apnd] = emlrtDynamicBoundsCheckR2012b(nm1d2, 1, 500,
            &c_emlrtBCI, emlrtRootTLSGlobal) - 1;
        }

        iv8[0] = y_sizes[1];
        c_x[0] = i1 - i0;
        emlrtSubAssignSizeCheckR2012b(iv8, 1, c_x, 1, &emlrtECI,
          emlrtRootTLSGlobal);
        ndbl = i1 - i0;
        for (i1 = 0; i1 < ndbl; i1++) {
          b_obj->pOutputBuffer[tmp_data[i1]].re = x_data[i0 + i1].re;
          b_obj->pOutputBuffer[tmp_data[i1]].im = x_data[i0 + i1].im;
        }

        /*  [EOF] */
        numValidOut = (numValidOut + inLen) - partialXToFill;
      }

      covrtLogBasicBlock(&moduleInstance->covInst, 0, 13);
      b_obj = obj;
      b_obj->pSyncDelayFound = false;
      obj->pSyncDelay = 0.0;
      numValidOut -= 100.0;
      obj->pFrameIdxInBuf = (frmIdx + 1.0) - muDoubleScalarFloor((frmIdx + 1.0) /
        5.0) * 5.0;
    }
  } else {
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 14);
    b_obj = obj;
    covrtLogFcn(&moduleInstance->covInst, 0, 6);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 8);
    frmIdx *= OutputFrameLength;
    for (i0 = 0; i0 < 100; i0++) {
      b_frmIdx[i0] = (frmIdx + (1.0 + (real_T)i0)) - 1.0;
    }

    c_mod(b_frmIdx, 500.0, linearIdx);
    for (i0 = 0; i0 < 100; i0++) {
      i1 = (int32_T)emlrtIntegerCheckR2012b(linearIdx[i0] + 1.0, &e_emlrtDCI,
        emlrtRootTLSGlobal);
      y[i0].re = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1, 500,
        &e_emlrtBCI, emlrtRootTLSGlobal) - 1].re;
      i1 = (int32_T)emlrtIntegerCheckR2012b(linearIdx[i0] + 1.0, &d_emlrtDCI,
        emlrtRootTLSGlobal);
      y[i0].im = b_obj->pOutputBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1, 500,
        &d_emlrtBCI, emlrtRootTLSGlobal) - 1].im;
    }

    *validFrm = false;
  }

  covrtLogBasicBlock(&moduleInstance->covInst, 0, 15);
  obj->pNumValidOutInBuf = numValidOut;
}

static void b_mod(real_T x_data[], int32_T x_sizes[2], real_T r_data[], int32_T
                  r_sizes[2])
{
  int8_T iv9[2];
  int32_T k;
  static char_T cv6[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  char_T u[15];
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 15 };

  const mxArray *m2;
  for (k = 0; k < 2; k++) {
    iv9[k] = (int8_T)x_sizes[k];
  }

  r_sizes[0] = 1;
  r_sizes[1] = iv9[1];
  if (!dimagree(r_data, r_sizes, x_data, x_sizes)) {
    for (k = 0; k < 15; k++) {
      u[k] = cv6[k];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 15, m2, &u[0]);
    emlrtAssign(&y, m2);
    error(b_message(y, &g_emlrtMCI), &g_emlrtMCI);
  }

  for (k = 0; k < iv9[1]; k++) {
    r_data[k] = x_data[k] - muDoubleScalarFloor(x_data[k] / 500.0) * 500.0;
  }
}

static boolean_T dimagree(real_T z_data[], int32_T z_sizes[2], real_T
  varargin_1_data[], int32_T varargin_1_sizes[2])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  (void)z_data;
  (void)varargin_1_data;
  p = true;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k + 1 < 3)) {
    if (z_sizes[k] != varargin_1_sizes[k]) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
    p = false;
  }

  return p;
}

static void c_mod(real_T b_x[100], real_T y, real_T r[100])
{
  int32_T k;
  (void)y;
  for (k = 0; k < 100; k++) {
    r[k] = b_x[k] - muDoubleScalarFloor(b_x[k] / 500.0) * 500.0;
  }
}

static void cgxe_mdl_start(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance)
{
  int32_T postfix_exprs_0_0[2] = { 0, -1 };

  int32_T cond_ends_0_0[1] = { 11044 };

  int32_T cond_starts_0_0[1] = { 11025 };

  int32_T varargin_4_sizes;
  FrameFormation_2 *obj;
  int32_T i2;
  static char_T cv7[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 51 };

  const mxArray *m3;
  static char_T cv8[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 5 };

  uint32_T varargin_4[2];
  dspcodegen_Crosscorrelator *b_obj;
  int32_T (*u0_sizes)[2];
  u0_sizes = (int32_T (*)[2])ssGetCurrentInputPortDimensions_wrapper
    (moduleInstance->S, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(&moduleInstance->covInst,
                  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\commdemos\\FrameFormation.m",
                  0, 9, 21, 7, 0, 0, 0, 0, 0, 1, 1);

  /* Initialize Function Information */
  covrtFcnInit(&moduleInstance->covInst, 0, 3, "FrameFormation_set.FrameHeader",
               3503, -1, 3839);
  covrtFcnInit(&moduleInstance->covInst, 0, 2,
               "FrameFormation_set.InternalBufferLength", 3202, -1, 3497);
  covrtFcnInit(&moduleInstance->covInst, 0, 1,
               "FrameFormation_set.OutputFrameLength", 2910, -1, 3196);
  covrtFcnInit(&moduleInstance->covInst, 0, 0, "FrameFormation_FrameFormation",
               2811, -1, 2902);
  covrtFcnInit(&moduleInstance->covInst, 0, 4, "FrameFormation_stepImpl", 5435,
               -1, 5831);
  covrtFcnInit(&moduleInstance->covInst, 0, 8,
               "FrameFormation_stepStreamingMode", 12715, -1, 14230);
  covrtFcnInit(&moduleInstance->covInst, 0, 7, "FrameFormation_stepSyncMode",
               10175, -1, 12709);
  covrtFcnInit(&moduleInstance->covInst, 0, 6, "FrameFormation_getBuffer", 10044,
               -1, 10169);
  covrtFcnInit(&moduleInstance->covInst, 0, 5, "FrameFormation_setBuffer", 9918,
               -1, 10038);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 3, 3548, -1, 3832);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 2, 3256, -1, 3490);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 1, 2961, -1, 3189);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 0, 2856, -1, 2895);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 6, 5781, -1, 5824);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 5, 5600, -1, 5760);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 4, 5481, -1, 5507);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 20, 14084, -1, 14223);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 19, 13915, -1, 13994);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 18, 13429, -1, 13827);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 17, 13193, -1, 13339);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 16, 12770, -1, 13027);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 15, 12667, -1, 12702);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 14, 12570, -1, 12648);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 13, 12311, -1, 12494);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 12, 12045, -1, 12202);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 11, 11703, -1, 11927);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 10, 11312, -1, 11608);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 9, 10226, -1, 10866);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 8, 10091, -1, 10158);
  covrtBasicBlockInit(&moduleInstance->covInst, 0, 7, 9964, -1, 10031);

  /* Initialize If Information */
  covrtIfInit(&moduleInstance->covInst, 0, 0, 5513, 5591, -1, 5769);
  covrtIfInit(&moduleInstance->covInst, 0, 5, 13038, 13065, 13345, 14015);
  covrtIfInit(&moduleInstance->covInst, 0, 6, 13846, 13871, -1, 14007);
  covrtIfInit(&moduleInstance->covInst, 0, 1, 10911, 10956, 12512, 12657);
  covrtIfInit(&moduleInstance->covInst, 0, 2, 11021, 11044, -1, 11621);
  covrtIfInit(&moduleInstance->covInst, 0, 3, 11946, 11957, -1, 12507);
  covrtIfInit(&moduleInstance->covInst, 0, 4, 11970, 11997, -1, 12253);

  /* Initialize MCDC Information */
  covrtMcdcInit(&moduleInstance->covInst, 0, 0, 11024, 11044, 1, 0,
                cond_starts_0_0, cond_ends_0_0, 2, postfix_exprs_0_0);

  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&moduleInstance->covInst, 0U);
  varargin_4_sizes = (*u0_sizes)[0];
  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(&moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.CacheInputSizes = false;
    moduleInstance->sysobj_not_empty = true;
    covrtLogFcn(&moduleInstance->covInst, 0, 1);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 1);
    covrtLogFcn(&moduleInstance->covInst, 0, 3);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 3);

    /* FrameFormation Frame Formation */
    /*    This System object converts fixed-size or variable-size inputs into */
    /*    fixed-size output frames with a specified length, which is the first */
    /*    output of the step function call. The second output of the step */
    /*    function call is a boolean signal indicating if the first output is a */
    /*    valid frame.  */
    /*   */
    /*    When a frame header is specified in the object, it performs frame */
    /*    synchronization based on the header. Otherwise, it operates in a */
    /*    streaming mode without synchronization. */
    /*  Copyright 2014 The MathWorks, Inc. */
    /* OutputFrameLength Output frame length */
    /*    Specify the output frame length as a numeric, real, positive */
    /*    integer scalar. The default value of this property is 100. */
    /* InternalBufferLength Internal buffer length */
    /*    Specify the internal buffer length as a numeric, real, positive */
    /*    integer scalar. This property applies when you set the */
    /*    PerformSynchronization property to false. The default value of this */
    /*    property is 300. */
    /* FrameHeader Frame header */
    /*    Specify the frame header as a numeric, real or complex column */
    /*    vector. This property applies when you set the */
    /*    PerformSynchronization property to true. The default value of this */
    /*    property is [-1; -1; 1; -1]. */
    /* PerformSynchronization Perform synchronization */
    /*    Set this property to true to perform synchronization based on the */
    /*    FrameHeader property before outputting the frames. The default */
    /*    value of this property is true. */
    /*  Buffer length in number of frames, for sync mode only  */
    /*  Buffer length */
    /*  Correlator, for sync mode only */
    /*  Frame header, for sync mode only */
    /*  Function pointer to perform frame sync or not (streaming) */
    /*  Internal buffer */
    /*  Sync delay, for sync mode only */
    /*  Frame index for valid outputs in buffer, for sync mode only */
    /*  Starting index for valid outputs in buffer, for streaming mode only */
    /*  Number of valid outputs (elements) in buffer */
    /*  Flag to indicate if a sync delay has been found, for sync mode only */
    /* , ... */
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i2 = 0; i2 < 51; i2++) {
      u[i2] = cv7[i2];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i2 = 0; i2 < 5; i2++) {
      b_u[i2] = cv8[i2];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  varargin_4[0] = (uint32_T)varargin_4_sizes;
  varargin_4[1] = 1U;
  for (i2 = 0; i2 < 2; i2++) {
    obj->inputVarSize1[i2] = varargin_4[i2];
  }

  for (i2 = 0; i2 < 6; i2++) {
    obj->inputVarSize1[i2 + 2] = 1U;
  }

  b_obj = &obj->pCorrelator;
  obj->pCorrelator.isInitialized = 0;

  /* System object Constructor function: dsp.Crosscorrelator */
  b_obj->cSFunObject.S0_isInitialized = 0;
  for (i2 = 0; i2 < 500; i2++) {
    obj->pOutputBuffer[i2].re = 0.0;
    obj->pOutputBuffer[i2].im = 0.0;
  }
}

static void cgxe_mdl_initialize(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance)
{
  FrameFormation_2 *obj;
  int32_T i3;
  static char_T cv9[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv10[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 45 };

  static char_T cv11[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 5 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 45 };

  char_T f_u[5];
  const mxArray *f_y;
  static const int32_T iv18[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(&moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.CacheInputSizes = false;
    moduleInstance->sysobj_not_empty = true;
    covrtLogFcn(&moduleInstance->covInst, 0, 1);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 1);
    covrtLogFcn(&moduleInstance->covInst, 0, 3);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 3);

    /* FrameFormation Frame Formation */
    /*    This System object converts fixed-size or variable-size inputs into */
    /*    fixed-size output frames with a specified length, which is the first */
    /*    output of the step function call. The second output of the step */
    /*    function call is a boolean signal indicating if the first output is a */
    /*    valid frame.  */
    /*   */
    /*    When a frame header is specified in the object, it performs frame */
    /*    synchronization based on the header. Otherwise, it operates in a */
    /*    streaming mode without synchronization. */
    /*  Copyright 2014 The MathWorks, Inc. */
    /* OutputFrameLength Output frame length */
    /*    Specify the output frame length as a numeric, real, positive */
    /*    integer scalar. The default value of this property is 100. */
    /* InternalBufferLength Internal buffer length */
    /*    Specify the internal buffer length as a numeric, real, positive */
    /*    integer scalar. This property applies when you set the */
    /*    PerformSynchronization property to false. The default value of this */
    /*    property is 300. */
    /* FrameHeader Frame header */
    /*    Specify the frame header as a numeric, real or complex column */
    /*    vector. This property applies when you set the */
    /*    PerformSynchronization property to true. The default value of this */
    /*    property is [-1; -1; 1; -1]. */
    /* PerformSynchronization Perform synchronization */
    /*    Set this property to true to perform synchronization based on the */
    /*    FrameHeader property before outputting the frames. The default */
    /*    value of this property is true. */
    /*  Buffer length in number of frames, for sync mode only  */
    /*  Buffer length */
    /*  Correlator, for sync mode only */
    /*  Frame header, for sync mode only */
    /*  Function pointer to perform frame sync or not (streaming) */
    /*  Internal buffer */
    /*  Sync delay, for sync mode only */
    /*  Frame index for valid outputs in buffer, for sync mode only */
    /*  Starting index for valid outputs in buffer, for streaming mode only */
    /*  Number of valid outputs (elements) in buffer */
    /*  Flag to indicate if a sync delay has been found, for sync mode only */
    /* , ... */
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      u[i3] = cv9[i3];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i3 = 0; i3 < 8; i3++) {
      b_u[i3] = cv10[i3];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        c_u[i3] = cv9[i3];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      for (i3 = 0; i3 < 5; i3++) {
        d_u[i3] = cv11[i3];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      for (i3 = 0; i3 < 500; i3++) {
        obj->pOutputBuffer[i3].re = 0.0;
        obj->pOutputBuffer[i3].im = 0.0;
      }

      obj->pNumValidOutInBuf = 0.0;
      if (obj->pCorrelator.isInitialized == 2) {
        for (i3 = 0; i3 < 45; i3++) {
          e_u[i3] = cv9[i3];
        }

        e_y = NULL;
        m4 = emlrtCreateCharArray(2, iv17);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &e_u[0]);
        emlrtAssign(&e_y, m4);
        for (i3 = 0; i3 < 5; i3++) {
          f_u[i3] = cv11[i3];
        }

        f_y = NULL;
        m4 = emlrtCreateCharArray(2, iv18);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, &f_u[0]);
        emlrtAssign(&f_y, m4);
        error(message(e_y, f_y, &emlrtMCI), &emlrtMCI);
      }

      obj->pFrameIdxInBuf = 0.0;
      obj->pSyncDelayFound = false;
      obj->pSyncDelay = 0.0;
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance)
{
  int32_T varargin_4_sizes;
  int32_T loop_ub;
  int32_T i4;
  creal_T varargin_4_data[110];
  FrameFormation_2 *obj;
  static char_T cv12[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv13[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv20[2] = { 1, 4 };

  static char_T cv14[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv21[2] = { 1, 51 };

  static char_T cv15[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv22[2] = { 1, 5 };

  uint32_T varargin_4[2];
  dspcodegen_Crosscorrelator *b_obj;
  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv23[2] = { 1, 45 };

  static char_T cv16[5] = { 'r', 'e', 's', 'e', 't' };

  char_T f_u[5];
  const mxArray *f_y;
  static const int32_T iv24[2] = { 1, 5 };

  uint32_T b_varargin_4[2];
  boolean_T anyInputSizeChanged;
  int8_T c_varargin_4[2];
  int8_T inputSize[8];
  boolean_T exitg1;
  static char_T cv17[34] = { 'c', 'o', 'm', 'm', ':', 'F', 'r', 'a', 'm', 'e',
    'F', 'o', 'r', 'm', 'a', 't', 'i', 'o', 'n', ':', 'B', 'u', 'f', 'f', 'e',
    'r', 'O', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  char_T g_u[34];
  const mxArray *g_y;
  static const int32_T iv25[2] = { 1, 34 };

  real_T h_u;
  const mxArray *h_y;
  creal_T i_y[100];
  creal_T (*b_y0)[100];
  boolean_T *b_y1;
  int32_T (*u0_sizes)[2];
  creal_T (*u0_data)[110];
  b_y1 = (boolean_T *)ssGetOutputPortSignal(moduleInstance->S, 1U);
  b_y0 = (creal_T (*)[100])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u0_sizes = (int32_T (*)[2])ssGetCurrentInputPortDimensions_wrapper
    (moduleInstance->S, 0U);
  u0_data = (creal_T (*)[110])ssGetInputPortSignal(moduleInstance->S, 0U);
  varargin_4_sizes = (*u0_sizes)[0];
  loop_ub = (*u0_sizes)[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    varargin_4_data[i4].re = (*u0_data)[i4].re;
    varargin_4_data[i4].im = (*u0_data)[i4].im;
  }

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(&moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.CacheInputSizes = false;
    moduleInstance->sysobj_not_empty = true;
    covrtLogFcn(&moduleInstance->covInst, 0, 1);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 1);
    covrtLogFcn(&moduleInstance->covInst, 0, 3);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 3);

    /* FrameFormation Frame Formation */
    /*    This System object converts fixed-size or variable-size inputs into */
    /*    fixed-size output frames with a specified length, which is the first */
    /*    output of the step function call. The second output of the step */
    /*    function call is a boolean signal indicating if the first output is a */
    /*    valid frame.  */
    /*   */
    /*    When a frame header is specified in the object, it performs frame */
    /*    synchronization based on the header. Otherwise, it operates in a */
    /*    streaming mode without synchronization. */
    /*  Copyright 2014 The MathWorks, Inc. */
    /* OutputFrameLength Output frame length */
    /*    Specify the output frame length as a numeric, real, positive */
    /*    integer scalar. The default value of this property is 100. */
    /* InternalBufferLength Internal buffer length */
    /*    Specify the internal buffer length as a numeric, real, positive */
    /*    integer scalar. This property applies when you set the */
    /*    PerformSynchronization property to false. The default value of this */
    /*    property is 300. */
    /* FrameHeader Frame header */
    /*    Specify the frame header as a numeric, real or complex column */
    /*    vector. This property applies when you set the */
    /*    PerformSynchronization property to true. The default value of this */
    /*    property is [-1; -1; 1; -1]. */
    /* PerformSynchronization Perform synchronization */
    /*    Set this property to true to perform synchronization based on the */
    /*    FrameHeader property before outputting the frames. The default */
    /*    value of this property is true. */
    /*  Buffer length in number of frames, for sync mode only  */
    /*  Buffer length */
    /*  Correlator, for sync mode only */
    /*  Frame header, for sync mode only */
    /*  Function pointer to perform frame sync or not (streaming) */
    /*  Internal buffer */
    /*  Sync delay, for sync mode only */
    /*  Frame index for valid outputs in buffer, for sync mode only */
    /*  Starting index for valid outputs in buffer, for streaming mode only */
    /*  Number of valid outputs (elements) in buffer */
    /*  Flag to indicate if a sync delay has been found, for sync mode only */
    /* , ... */
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i4 = 0; i4 < 45; i4++) {
      u[i4] = cv12[i4];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (i4 = 0; i4 < 4; i4++) {
      b_u[i4] = cv13[i4];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (i4 = 0; i4 < 51; i4++) {
        c_u[i4] = cv14[i4];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv21);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m5, &c_u[0]);
      emlrtAssign(&c_y, m5);
      for (i4 = 0; i4 < 5; i4++) {
        d_u[i4] = cv15[i4];
      }

      d_y = NULL;
      m5 = emlrtCreateCharArray(2, iv22);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, &d_u[0]);
      emlrtAssign(&d_y, m5);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    varargin_4[0] = (uint32_T)varargin_4_sizes;
    varargin_4[1] = 1U;
    for (i4 = 0; i4 < 2; i4++) {
      obj->inputVarSize1[i4] = varargin_4[i4];
    }

    for (i4 = 0; i4 < 6; i4++) {
      obj->inputVarSize1[i4 + 2] = 1U;
    }

    b_obj = &obj->pCorrelator;
    obj->pCorrelator.isInitialized = 0;

    /* System object Constructor function: dsp.Crosscorrelator */
    b_obj->cSFunObject.S0_isInitialized = 0;
    for (i4 = 0; i4 < 500; i4++) {
      obj->pOutputBuffer[i4].re = 0.0;
      obj->pOutputBuffer[i4].im = 0.0;
    }

    for (i4 = 0; i4 < 500; i4++) {
      obj->pOutputBuffer[i4].re = 0.0;
      obj->pOutputBuffer[i4].im = 0.0;
    }

    obj->pNumValidOutInBuf = 0.0;
    if (obj->pCorrelator.isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        e_u[i4] = cv12[i4];
      }

      e_y = NULL;
      m5 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, &e_u[0]);
      emlrtAssign(&e_y, m5);
      for (i4 = 0; i4 < 5; i4++) {
        f_u[i4] = cv16[i4];
      }

      f_y = NULL;
      m5 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, &f_u[0]);
      emlrtAssign(&f_y, m5);
      error(message(e_y, f_y, &emlrtMCI), &emlrtMCI);
    }

    obj->pFrameIdxInBuf = 0.0;
    obj->pSyncDelayFound = false;
    obj->pSyncDelay = 0.0;
  }

  if (!obj->CacheInputSizes) {
    obj->CacheInputSizes = true;
    b_varargin_4[0] = (uint32_T)varargin_4_sizes;
    b_varargin_4[1] = 1U;
    for (i4 = 0; i4 < 2; i4++) {
      obj->inputVarSize1[i4] = b_varargin_4[i4];
    }

    for (i4 = 0; i4 < 6; i4++) {
      obj->inputVarSize1[i4 + 2] = 1U;
    }

    validateattributes(varargin_4_data, varargin_4_sizes);
  }

  anyInputSizeChanged = false;
  c_varargin_4[0] = (int8_T)varargin_4_sizes;
  c_varargin_4[1] = 1;
  for (i4 = 0; i4 < 2; i4++) {
    inputSize[i4] = c_varargin_4[i4];
  }

  for (i4 = 0; i4 < 6; i4++) {
    inputSize[i4 + 2] = 1;
  }

  loop_ub = 0;
  exitg1 = false;
  while ((exitg1 == false) && (loop_ub < 8)) {
    if (obj->inputVarSize1[loop_ub] != (uint32_T)inputSize[loop_ub]) {
      anyInputSizeChanged = true;
      for (i4 = 0; i4 < 8; i4++) {
        obj->inputVarSize1[i4] = (uint32_T)inputSize[i4];
      }

      exitg1 = true;
    } else {
      loop_ub++;
    }
  }

  if (anyInputSizeChanged) {
    validateattributes(varargin_4_data, varargin_4_sizes);
  }

  covrtLogFcn(&moduleInstance->covInst, 0, 4);
  covrtLogBasicBlock(&moduleInstance->covInst, 0, 4);
  if (covrtLogIf(&moduleInstance->covInst, 0, 0, 0, (real_T)varargin_4_sizes >
                 600.0 - obj->pNumValidOutInBuf)) {
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 5);
    for (i4 = 0; i4 < 34; i4++) {
      g_u[i4] = cv17[i4];
    }

    g_y = NULL;
    m5 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m5, &g_u[0]);
    emlrtAssign(&g_y, m5);
    h_u = (real_T)varargin_4_sizes - (600.0 - obj->pNumValidOutInBuf);
    h_y = NULL;
    m5 = emlrtCreateDoubleScalar(h_u);
    emlrtAssign(&h_y, m5);
    coder_internal_warning(g_y, num2str(h_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  covrtLogBasicBlock(&moduleInstance->covInst, 0, 6);
  FrameFormation_stepSyncMode(moduleInstance, obj, varargin_4_data,
    varargin_4_sizes, i_y, b_y1);
  for (i4 = 0; i4 < 100; i4++) {
    (*b_y0)[i4].re = i_y[i4].re;
    (*b_y0)[i4].im = i_y[i4].im;
  }
}

static void cgxe_mdl_update(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB
  *moduleInstance)
{
  FrameFormation_2 *obj;
  int32_T i5;
  static char_T cv18[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *m6;
  static char_T cv19[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 45 };

  static char_T cv20[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv29[2] = { 1, 7 };

  char_T e_u[45];
  const mxArray *e_y;
  static const int32_T iv30[2] = { 1, 45 };

  char_T f_u[7];
  const mxArray *f_y;
  static const int32_T iv31[2] = { 1, 7 };

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(&moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.CacheInputSizes = false;
    moduleInstance->sysobj_not_empty = true;
    covrtLogFcn(&moduleInstance->covInst, 0, 1);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 1);
    covrtLogFcn(&moduleInstance->covInst, 0, 3);
    covrtLogBasicBlock(&moduleInstance->covInst, 0, 3);

    /* FrameFormation Frame Formation */
    /*    This System object converts fixed-size or variable-size inputs into */
    /*    fixed-size output frames with a specified length, which is the first */
    /*    output of the step function call. The second output of the step */
    /*    function call is a boolean signal indicating if the first output is a */
    /*    valid frame.  */
    /*   */
    /*    When a frame header is specified in the object, it performs frame */
    /*    synchronization based on the header. Otherwise, it operates in a */
    /*    streaming mode without synchronization. */
    /*  Copyright 2014 The MathWorks, Inc. */
    /* OutputFrameLength Output frame length */
    /*    Specify the output frame length as a numeric, real, positive */
    /*    integer scalar. The default value of this property is 100. */
    /* InternalBufferLength Internal buffer length */
    /*    Specify the internal buffer length as a numeric, real, positive */
    /*    integer scalar. This property applies when you set the */
    /*    PerformSynchronization property to false. The default value of this */
    /*    property is 300. */
    /* FrameHeader Frame header */
    /*    Specify the frame header as a numeric, real or complex column */
    /*    vector. This property applies when you set the */
    /*    PerformSynchronization property to true. The default value of this */
    /*    property is [-1; -1; 1; -1]. */
    /* PerformSynchronization Perform synchronization */
    /*    Set this property to true to perform synchronization based on the */
    /*    FrameHeader property before outputting the frames. The default */
    /*    value of this property is true. */
    /*  Buffer length in number of frames, for sync mode only  */
    /*  Buffer length */
    /*  Correlator, for sync mode only */
    /*  Frame header, for sync mode only */
    /*  Function pointer to perform frame sync or not (streaming) */
    /*  Internal buffer */
    /*  Sync delay, for sync mode only */
    /*  Frame index for valid outputs in buffer, for sync mode only */
    /*  Starting index for valid outputs in buffer, for streaming mode only */
    /*  Number of valid outputs (elements) in buffer */
    /*  Flag to indicate if a sync delay has been found, for sync mode only */
    /* , ... */
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i5 = 0; i5 < 45; i5++) {
      u[i5] = cv18[i5];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv26);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &u[0]);
    emlrtAssign(&y, m6);
    for (i5 = 0; i5 < 8; i5++) {
      b_u[i5] = cv19[i5];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        c_u[i5] = cv18[i5];
      }

      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &c_u[0]);
      emlrtAssign(&c_y, m6);
      for (i5 = 0; i5 < 7; i5++) {
        d_u[i5] = cv20[i5];
      }

      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m6, &d_u[0]);
      emlrtAssign(&d_y, m6);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      if (obj->pCorrelator.isInitialized == 2) {
        for (i5 = 0; i5 < 45; i5++) {
          e_u[i5] = cv18[i5];
        }

        e_y = NULL;
        m6 = emlrtCreateCharArray(2, iv30);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &e_u[0]);
        emlrtAssign(&e_y, m6);
        for (i5 = 0; i5 < 7; i5++) {
          f_u[i5] = cv20[i5];
        }

        f_y = NULL;
        m6 = emlrtCreateCharArray(2, iv31);
        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m6, &f_u[0]);
        emlrtAssign(&f_y, m6);
        error(message(e_y, f_y, &emlrtMCI), &emlrtMCI);
      }

      if (obj->pCorrelator.isInitialized == 1) {
        obj->pCorrelator.isInitialized = 2;

        /* System object Destructor function: dsp.Crosscorrelator */
      }
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(&moduleInstance->covInst);
}

static const mxArray *mw__internal__name__resolution__fcn(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(170, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  c_info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

static void info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 0);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 0);
  emlrtAddField(*info, emlrt_marshallOut("struct"), "dominantType", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(1408802510U), "fileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 1);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.narginchk"), "name", 1);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1363743358U), "fileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "context", 2);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 2);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 3);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 3);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 4);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 4);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851126U), "fileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 5);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name", 5);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(1368215430U), "fileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 6);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 6);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral"),
                "context", 7);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 7);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 8);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 8);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 9);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_integer_class"), "name", 9);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_integer_class.m"),
                "resolved", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851182U), "fileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 10);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 10);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "context", 11);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 11);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 12);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 12);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "context", 13);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 13);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 14);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                14);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760722U), "fileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!apply_float_relop"),
                "context", 15);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 15);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass"),
                "context", 16);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 16);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                "context", 17);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 17);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 18);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 18);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 19);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 19);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 20);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 20);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(1311287716U), "fileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context", 21);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 21);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(1378328384U), "fileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 22);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 22);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                22);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                23);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 23);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 24);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 24);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 25);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                25);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "context", 26);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 26);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAllocNoCheck.p"),
                "resolved", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 27);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 27);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 28);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 28);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                28);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 29);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 29);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 30);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 30);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553180U), "fileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 31);
  emlrtAddField(*info, emlrt_marshallOut("isfi"), "name", 31);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "resolved", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(1346542758U), "fileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isfi.m"), "context", 32);
  emlrtAddField(*info, emlrt_marshallOut("isnumerictype"), "name", 32);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/isnumerictype.m"), "resolved",
                32);
  emlrtAddField(*info, b_emlrt_marshallOut(1398907998U), "fileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 33);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 33);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 34);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 34);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 35);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 35);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 36);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 36);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "context", 37);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 37);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 38);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 38);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 39);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                39);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"),
                "context", 40);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 40);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 41);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Propagates"),
                "name", 41);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"),
                "resolved", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"),
                "context", 42);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 42);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 43);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.CustomIcon"),
                "name", 43);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"),
                "resolved", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(1419919378U), "fileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 44);
  emlrtAddField(*info, emlrt_marshallOut("FrameFormation"), "name", 44);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1413921154U), "fileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 45);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 45);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "context", 46);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 46);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "name", 47);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p"),
                "resolved", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("validateattributes"), "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "dominantType",
                48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "resolved", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(1412179924U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 49);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 49);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1319762368U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 50);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 50);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 51);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 51);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                51);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 52);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 52);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 55);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 57);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                57);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all"),
                "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                58);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 60);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 63);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 63);
}

static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m7;
  y = NULL;
  m7 = emlrtCreateString(u);
  emlrtAssign(&y, m7);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m8;
  y = NULL;
  m8 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m8) = u;
  emlrtAssign(&y, m8);
  return y;
}

static void b_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("iscolumn"), "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/iscolumn.m"), "resolved",
                64);
  emlrtAddField(*info, b_emlrt_marshallOut(1331337258U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                65);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"),
                "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.mixin.coder.Nondirect"),
                "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"),
                "resolved", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1419982710U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("dspcodegen.Crosscorrelator"), "name",
                68);
  emlrtAddField(*info, emlrt_marshallOut("int32"), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1421712480U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("createsystemobjectv2"), "name", 69);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1375136134U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/createsystemobjectv2.m"),
                "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("cell"), "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1412202804U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("dspcodegen.Crosscorrelator"), "name",
                71);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1421712480U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("get_impl"), "name", 72);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/fixedpoint/get_impl.m"), "resolved", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553178U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                73);
  emlrtAddField(*info, b_emlrt_marshallOut(1331337258U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 74);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 74);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(1412202804U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.warning"), "name", 75);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(1311288208U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 76);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1311287718U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context", 77);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 77);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(1378328384U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 78);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 78);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                78);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                79);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 80);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "context", 82);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 82);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAllocNoCheck.p"),
                "resolved", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 83);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 83);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                83);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 84);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 84);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 85);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1311287716U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 86);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1378328388U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "context", 87);
  emlrtAddField(*info, emlrt_marshallOut("colon"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1378328388U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m"), "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 88);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 89);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 89);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                89);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!is_flint_colon"),
                "context", 90);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 90);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 91);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 91);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                91);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 92);
  emlrtAddField(*info, emlrt_marshallOut("flintmax"), "name", 92);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/flintmax.m"), "resolved",
                92);
  emlrtAddField(*info, b_emlrt_marshallOut(1348224316U), "fileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/flintmax.m"), "context", 93);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 93);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkFlintRange"),
                "context", 94);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 94);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742652U), "fileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 95);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 95);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 96);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 96);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851112U), "fileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!checkrange"),
                "context", 97);
  emlrtAddField(*info, emlrt_marshallOut("realmax"), "name", 97);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m"), "resolved", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(1307683642U), "fileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmax.m"), "context", 98);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmax"), "name", 98);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m"), "resolved",
                98);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmax.m"), "context",
                99);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 99);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 100);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 100);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 101);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 101);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 102);
  emlrtAddField(*info, emlrt_marshallOut("eml_guarded_nan"), "name", 102);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m"),
                "resolved", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851176U), "fileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_guarded_nan.m"),
                "context", 103);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 103);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851182U), "fileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 104);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 104);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 105);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 105);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 106);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 106);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742652U), "fileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 107);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 107);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 108);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 108);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851182U), "fileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 109);
  emlrtAddField(*info, emlrt_marshallOut("eml_eps"), "name", 109);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "resolved", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "context", 110);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 110);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!maxabs"), "context",
                111);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 111);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742652U), "fileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 112);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 112);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!float_colon_length"),
                "context", 113);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                113);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760722U), "fileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 114);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 114);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "context", 115);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                115);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 116);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_rdivide"), "name", 116);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "resolved", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"),
                "context", 117);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexDivide"), "name",
                117);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexDivide.m"),
                "resolved", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 118);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 118);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553180U), "fileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 119);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 119);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "context", 120);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexTimes"), "name",
                120);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexTimes.m"),
                "resolved", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 121);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 121);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"), "context",
                122);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                122);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_float_colon"),
                "context", 123);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 123);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "context", 124);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                124);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 125);
  emlrtAddField(*info, emlrt_marshallOut("mod"), "name", 125);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "resolved", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 126);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 126);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 127);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 127);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 127);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                127);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 127);
}

static void c_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 128);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 128);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p!equalsize"),
                "context", 129);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 129);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553180U), "fileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                130);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 130);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                130);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                131);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 131);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851126U), "fileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                132);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_round"), "name", 132);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m"),
                "resolved", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(1307683638U), "fileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                133);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 133);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851112U), "fileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                134);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 134);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 135);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 135);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983800U), "fileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(1370042286U), "mFileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 136);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 136);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742680U), "fileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 137);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 137);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 138);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 138);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851196U), "fileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 139);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 139);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(1386456352U), "fileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context", 140);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 140);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                140);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 141);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 141);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 142);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 142);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/colon.m!eml_flint_colon"),
                "context", 143);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 143);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(1362294282U), "fileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 144);
  emlrtAddField(*info, emlrt_marshallOut("getNumInputs"), "name", 144);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "resolved", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564330U), "fileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumInputs.m"), "context", 145);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 145);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 146);
  emlrtAddField(*info, emlrt_marshallOut("setup"), "name", 146);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "resolved", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564332U), "fileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/setup.m"), "context", 147);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 147);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 148);
  emlrtAddField(*info, emlrt_marshallOut("reset"), "name", 148);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "resolved", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564332U), "fileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/reset.m"), "context", 149);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 149);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 150);
  emlrtAddField(*info, emlrt_marshallOut("getNumOutputs"), "name", 150);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "resolved", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564330U), "fileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/getNumOutputs.m"), "context", 151);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 151);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 152);
  emlrtAddField(*info, emlrt_marshallOut("output"), "name", 152);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "resolved", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564330U), "fileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/output.m"), "context", 153);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 153);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 154);
  emlrtAddField(*info, emlrt_marshallOut("update"), "name", 154);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "resolved", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564332U), "fileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/update.m"), "context", 155);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 155);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[XC]$matlabroot$/toolbox/comm/commdemos/FrameFormation.m"), "context", 156);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 156);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742652U), "fileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "context", 157);
  emlrtAddField(*info, emlrt_marshallOut("eml_dlapy2"), "name", 157);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m"), "resolved",
                157);
  emlrtAddField(*info, b_emlrt_marshallOut(1350443054U), "fileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 158);
  emlrtAddField(*info, emlrt_marshallOut("eml_const_nonsingleton_dim"), "name",
                158);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "resolved", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "context", 159);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 159);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 160);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 160);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                160);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 161);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 161);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 162);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 162);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(1323202978U), "fileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 163);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 163);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 164);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 164);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614816U), "fileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"), "context",
                165);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                165);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 166);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 166);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553180U), "fileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 167);
  emlrtAddField(*info, emlrt_marshallOut("eml_relop"), "name", 167);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                167);
  emlrtAddField(*info, b_emlrt_marshallOut(1342483582U), "fileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/dsp/dsp/compiled/+dspcodegen/Crosscorrelator.p"),
                "context", 168);
  emlrtAddField(*info, emlrt_marshallOut("release"), "name", 168);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/release.m"), "resolved", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(1391564330U), "fileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/release.m"), "context", 169);
  emlrtAddField(*info, emlrt_marshallOut("checkSystemObjectInput"), "name", 169);
  emlrtAddField(*info, emlrt_marshallOut("dsp.Crosscorrelator"), "dominantType",
                169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/scomp/checkSystemObjectInput.m"),
                "resolved", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(1349911146U), "fileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 169);
}

static const mxArray *mw__internal__autoInference__fcn(void)
{
  const mxArray *infoCache;
  sfOd2wElE6un66xmZCZog7F Ports_data[2];
  sfOd2wElE6un66xmZCZog7F_size Ports_elems_sizes[2];
  uint32_T RestoreInfo_cgxeChksum[4];
  uint32_T info_VerificationInfo_dlgPrmChksum_chksum[4];
  int32_T i6;
  static uint32_T uv0[4] = { 1387913735U, 1221901417U, 1231118403U, 3982328420U
  };

  static uint32_T t0_dlgPrmChksum_chksum[4] = { 1769809043U, 437164001U,
    4085232651U, 2817116936U };

  s7UBIGHSehQY1gCsIQWwr5C info_VerificationInfo_propChksum[3];
  static s7UBIGHSehQY1gCsIQWwr5C b_t0_propChksum[3] = { { { 1.05695238E+9,
        3.551196034E+9, 3.811058459E+9, 4.071291124E+9 } }, { { 7.25019261E+8,
        9.350207E+6, 1.380543125E+9, 1.962202275E+9 } }, { { 2.329432643E+9,
        1.966713464E+9, 3.591173899E+9, 2.781510642E+9 } } };

  uint32_T b_t0_dlgPrmChksum_chksum[4];
  uint32_T info_VerificationInfo_postPropOnlyChksum_chksum[4];
  static uint32_T t0_CGOnlyParamChksum_chksum[4] = { 907274058U, 3220786148U,
    779473529U, 2769831971U };

  static uint32_T t0_postPropOnlyChksum_chksum[4] = { 2911221907U, 2308967934U,
    2419390157U, 1906300239U };

  char_T info_slVer[3];
  static char_T cv21[3] = { '8', '.', '5' };

  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  sfOd2wElE6un66xmZCZog7F_size u_elems_sizes[2];
  sfOd2wElE6un66xmZCZog7F u_data[2];
  const mxArray *d_y;
  int32_T iv32[2];
  const sfOd2wElE6un66xmZCZog7F_size *tmp_elems_sizes;
  const sfOd2wElE6un66xmZCZog7F *tmp_data;
  real_T u;
  const mxArray *e_y;
  const mxArray *m9;
  int32_T u_sizes[2];
  int32_T i;
  int32_T i7;
  real_T b_u_data[3];
  const mxArray *f_y;
  real_T *pData;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  static const int32_T iv33[2] = { 1, 0 };

  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv34[2] = { 1, 0 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  int32_T b_u_sizes[2];
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv35[2] = { 1, 4 };

  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y_y;
  static const int32_T iv36[2] = { 1, 4 };

  s7UBIGHSehQY1gCsIQWwr5C b_u[3];
  const mxArray *ab_y;
  const s7UBIGHSehQY1gCsIQWwr5C *r0;
  real_T c_u[4];
  const mxArray *bb_y;
  static const int32_T iv37[2] = { 1, 4 };

  const mxArray *cb_y;
  const mxArray *db_y;
  static const int32_T iv38[2] = { 1, 4 };

  const mxArray *eb_y;
  const mxArray *fb_y;
  static const int32_T iv39[2] = { 1, 4 };

  char_T d_u[3];
  const mxArray *gb_y;
  static const int32_T iv40[2] = { 1, 3 };

  infoCache = NULL;
  Ports_data[0].dimModes = 0.0;
  Ports_elems_sizes[0].dims[0] = 1;
  Ports_elems_sizes[0].dims[1] = 1;
  Ports_data[0].dims[0] = -1.0;
  Ports_data[0].dType = 0.0;
  Ports_data[0].complexity = 0.0;
  Ports_data[0].outputBuiltInDTEqUsed = 0.0;
  Ports_data[1].dimModes = 0.0;
  Ports_elems_sizes[1].dims[0] = 1;
  Ports_elems_sizes[1].dims[1] = 1;
  Ports_data[1].dims[0] = -1.0;
  Ports_data[1].dType = 0.0;
  Ports_data[1].complexity = 0.0;
  Ports_data[1].outputBuiltInDTEqUsed = 0.0;
  for (i6 = 0; i6 < 4; i6++) {
    RestoreInfo_cgxeChksum[i6] = uv0[i6];
    info_VerificationInfo_dlgPrmChksum_chksum[i6] = t0_dlgPrmChksum_chksum[i6];
  }

  for (i6 = 0; i6 < 3; i6++) {
    info_VerificationInfo_propChksum[i6] = b_t0_propChksum[i6];
  }

  for (i6 = 0; i6 < 4; i6++) {
    b_t0_dlgPrmChksum_chksum[i6] = t0_CGOnlyParamChksum_chksum[i6];
    info_VerificationInfo_postPropOnlyChksum_chksum[i6] =
      t0_postPropOnlyChksum_chksum[i6];
  }

  for (i6 = 0; i6 < 3; i6++) {
    info_slVer[i6] = cv21[i6];
  }

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  for (i6 = 0; i6 < 2; i6++) {
    u_elems_sizes[i6] = Ports_elems_sizes[i6];
    u_data[i6] = Ports_data[i6];
  }

  d_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 + i6;
  }

  emlrtAssign(&d_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  for (i6 = 0; i6 < 2; i6++) {
    tmp_elems_sizes = &u_elems_sizes[i6];
    tmp_data = &u_data[i6];
    u = tmp_data->dimModes;
    e_y = NULL;
    m9 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&e_y, m9);
    emlrtAddField(d_y, e_y, "dimModes", i6);
    u_sizes[0] = 1;
    u_sizes[1] = tmp_elems_sizes->dims[1];
    i = tmp_elems_sizes->dims[0] * tmp_elems_sizes->dims[1];
    for (i7 = 0; i7 < i; i7++) {
      b_u_data[i7] = tmp_data->dims[i7];
    }

    f_y = NULL;
    m9 = emlrtCreateNumericArray(2, u_sizes, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m9);
    i7 = 0;
    for (i = 0; i < u_sizes[1]; i++) {
      pData[i7] = b_u_data[u_sizes[0] * i];
      i7++;
    }

    emlrtAssign(&f_y, m9);
    emlrtAddField(d_y, f_y, "dims", i6);
    u = tmp_data->dType;
    g_y = NULL;
    m9 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&g_y, m9);
    emlrtAddField(d_y, g_y, "dType", i6);
    u = tmp_data->complexity;
    h_y = NULL;
    m9 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&h_y, m9);
    emlrtAddField(d_y, h_y, "complexity", i6);
    u = tmp_data->outputBuiltInDTEqUsed;
    i_y = NULL;
    m9 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&i_y, m9);
    emlrtAddField(d_y, i_y, "outputBuiltInDTEqUsed", i6);
  }

  emlrtAddField(c_y, d_y, "Ports", 0);
  j_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 - i6;
  }

  emlrtAssign(&j_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  emlrtAddField(j_y, NULL, "names", 0);
  emlrtAddField(j_y, NULL, "dims", 0);
  emlrtAddField(j_y, NULL, "dType", 0);
  emlrtAddField(j_y, NULL, "complexity", 0);
  emlrtAddField(c_y, j_y, "dWork", 0);
  k_y = NULL;
  m9 = emlrtCreateCharArray(2, iv33);
  emlrtAssign(&k_y, m9);
  emlrtAddField(c_y, k_y, "objTypeName", 0);
  l_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&l_y, m9);
  emlrtAddField(c_y, l_y, "objTypeSize", 0);
  m_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 - i6;
  }

  emlrtAssign(&m_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  emlrtAddField(m_y, NULL, "names", 0);
  emlrtAddField(m_y, NULL, "dims", 0);
  emlrtAddField(m_y, NULL, "dType", 0);
  emlrtAddField(m_y, NULL, "dTypeSize", 0);
  emlrtAddField(m_y, NULL, "dTypeName", 0);
  emlrtAddField(m_y, NULL, "dTypeIndex", 0);
  emlrtAddField(m_y, NULL, "dTypeChksum", 0);
  emlrtAddField(m_y, NULL, "complexity", 0);
  emlrtAddField(c_y, m_y, "persisVarDWork", 0);
  n_y = NULL;
  m9 = emlrtCreateCharArray(2, iv34);
  emlrtAssign(&n_y, m9);
  emlrtAddField(c_y, n_y, "sysObjChksum", 0);
  o_y = NULL;
  emlrtAssign(&o_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  p_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 - i6;
  }

  emlrtAssign(&p_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  emlrtAddField(p_y, NULL, "Index", 0);
  emlrtAddField(p_y, NULL, "DataType", 0);
  emlrtAddField(p_y, NULL, "IsSigned", 0);
  emlrtAddField(p_y, NULL, "MantBits", 0);
  emlrtAddField(p_y, NULL, "FixExp", 0);
  emlrtAddField(p_y, NULL, "Slope", 0);
  emlrtAddField(p_y, NULL, "Bias", 0);
  emlrtAddField(o_y, p_y, "Out", 0);
  q_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 - i6;
  }

  emlrtAssign(&q_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  emlrtAddField(q_y, NULL, "Index", 0);
  emlrtAddField(q_y, NULL, "DataType", 0);
  emlrtAddField(q_y, NULL, "IsSigned", 0);
  emlrtAddField(q_y, NULL, "MantBits", 0);
  emlrtAddField(q_y, NULL, "FixExp", 0);
  emlrtAddField(q_y, NULL, "Slope", 0);
  emlrtAddField(q_y, NULL, "Bias", 0);
  emlrtAddField(o_y, q_y, "DW", 0);
  r_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 - i6;
  }

  emlrtAssign(&r_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  emlrtAddField(r_y, NULL, "Index", 0);
  emlrtAddField(r_y, NULL, "DataType", 0);
  emlrtAddField(r_y, NULL, "IsSigned", 0);
  emlrtAddField(r_y, NULL, "MantBits", 0);
  emlrtAddField(r_y, NULL, "FixExp", 0);
  emlrtAddField(r_y, NULL, "Slope", 0);
  emlrtAddField(r_y, NULL, "Bias", 0);
  emlrtAddField(o_y, r_y, "PersisDW", 0);
  emlrtAddField(c_y, o_y, "mapsInfo", 0);
  s_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&s_y, m9);
  emlrtAddField(c_y, s_y, "objDWorkTypeNameIndex", 0);
  b_u_sizes[0] = 1;
  b_u_sizes[1] = 1;
  t_y = NULL;
  m9 = emlrtCreateNumericArray(2, b_u_sizes, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  pData[0] = 0.0;
  emlrtAssign(&t_y, m9);
  emlrtAddField(c_y, t_y, "inputDFFlagsIndexField", 0);
  u_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&u_y, m9);
  emlrtAddField(c_y, u_y, "postPropRun", 0);
  emlrtAddField(b_y, c_y, "DispatcherInfo", 0);
  v_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv35, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)RestoreInfo_cgxeChksum[i];
  }

  emlrtAssign(&v_y, m9);
  emlrtAddField(b_y, v_y, "cgxeChksum", 0);
  emlrtAddField(y, b_y, "RestoreInfo", 0);
  w_y = NULL;
  emlrtAssign(&w_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  x_y = NULL;
  emlrtAssign(&x_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  y_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv36, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_dlgPrmChksum_chksum[i];
  }

  emlrtAssign(&y_y, m9);
  emlrtAddField(x_y, y_y, "chksum", 0);
  emlrtAddField(w_y, x_y, "dlgPrmChksum", 0);
  for (i6 = 0; i6 < 3; i6++) {
    b_u[i6] = info_VerificationInfo_propChksum[i6];
  }

  ab_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv32[i6] = 1 + (i6 << 1);
  }

  emlrtAssign(&ab_y, emlrtCreateStructArray(2, iv32, 0, NULL));
  for (i6 = 0; i6 < 3; i6++) {
    r0 = &b_u[i6];
    for (i7 = 0; i7 < 4; i7++) {
      c_u[i7] = r0->chksum[i7];
    }

    bb_y = NULL;
    m9 = emlrtCreateNumericArray(2, iv37, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m9);
    for (i = 0; i < 4; i++) {
      pData[i] = c_u[i];
    }

    emlrtAssign(&bb_y, m9);
    emlrtAddField(ab_y, bb_y, "chksum", i6);
  }

  emlrtAddField(w_y, ab_y, "propChksum", 0);
  cb_y = NULL;
  emlrtAssign(&cb_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  db_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv38, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)b_t0_dlgPrmChksum_chksum[i];
  }

  emlrtAssign(&db_y, m9);
  emlrtAddField(cb_y, db_y, "chksum", 0);
  emlrtAddField(w_y, cb_y, "CGOnlyParamChksum", 0);
  eb_y = NULL;
  emlrtAssign(&eb_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  fb_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv39, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_postPropOnlyChksum_chksum[i];
  }

  emlrtAssign(&fb_y, m9);
  emlrtAddField(eb_y, fb_y, "chksum", 0);
  emlrtAddField(w_y, eb_y, "postPropOnlyChksum", 0);
  emlrtAddField(y, w_y, "VerificationInfo", 0);
  for (i6 = 0; i6 < 3; i6++) {
    d_u[i6] = info_slVer[i6];
  }

  gb_y = NULL;
  m9 = emlrtCreateCharArray(2, iv40);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 3, m9, &d_u[0]);
  emlrtAssign(&gb_y, m9);
  emlrtAddField(y, gb_y, "slVer", 0);
  emlrtAssign(&infoCache, y);
  return infoCache;
}

static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m10, 2, pArrays,
    "message", true, location);
}

static void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", true,
                        location);
}

static void b_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", true,
                        location);
}

static const mxArray *num2str(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m11;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m11, 1, &pArray,
    "num2str", true, location);
}

static void coder_internal_warning(const mxArray *b, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays,
                        "coder.internal.warning", true, location);
}

static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m12, 1, &pArray,
    "message", true, location);
}

/* CGXE Glue Code */
static void mdlOutputs_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S, int_T tid)
{
  InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance;
  moduleInstance = (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_outputs(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlInitialize_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S)
{
  InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance;
  moduleInstance = (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_initialize(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlUpdate_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S, int_T tid)
{
  InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance;
  moduleInstance = (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_update(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlTerminate_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S)
{
  InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance;
  moduleInstance = (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_terminate(moduleInstance);
  CGXERT_LEAVE_CHECK();
  free((void *)moduleInstance);
  ssSetUserData(S, NULL);
}

static void mdlStart_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S)
{
  InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *moduleInstance;
  moduleInstance = (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB *)calloc(1, sizeof
    (InstanceStruct_xuWUxYjSgKTr1UwD3dwTrB));
  ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);
  moduleInstance->S = S;
  ssSetUserData(S, (void *)moduleInstance);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_start(moduleInstance);
  CGXERT_LEAVE_CHECK();

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }

  ssSetmdlOutputs(S, mdlOutputs_xuWUxYjSgKTr1UwD3dwTrB);
  ssSetmdlInitializeConditions(S, mdlInitialize_xuWUxYjSgKTr1UwD3dwTrB);
  ssSetmdlUpdate(S, mdlUpdate_xuWUxYjSgKTr1UwD3dwTrB);
  ssSetmdlTerminate(S, mdlTerminate_xuWUxYjSgKTr1UwD3dwTrB);
}

static void mdlProcessParameters_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S)
{
}

void method_dispatcher_xuWUxYjSgKTr1UwD3dwTrB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_xuWUxYjSgKTr1UwD3dwTrB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_xuWUxYjSgKTr1UwD3dwTrB(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: xuWUxYjSgKTr1UwD3dwTrB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

int autoInfer_dispatcher_xuWUxYjSgKTr1UwD3dwTrB(mxArray* plhs[], const char
  * commandName)
{
  if (strcmp(commandName, "NameResolution") == 0) {
    plhs[0] = (mxArray*) mw__internal__name__resolution__fcn();
    return 1;
  }

  if (strcmp(commandName, "AutoInfer") == 0) {
    plhs[0] = (mxArray*) mw__internal__autoInference__fcn();
    return 1;
  }

  return 0;
}

mxArray *cgxe_xuWUxYjSgKTr1UwD3dwTrB_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_9 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_9);
  return mxBIArgs;
}
