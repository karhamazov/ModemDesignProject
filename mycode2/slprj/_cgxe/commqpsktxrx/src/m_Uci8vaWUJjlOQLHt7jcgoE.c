/* Include files */

#include <stddef.h>
#include "blas.h"
#include "commqpsktxrx_cgxe.h"
#include "m_Uci8vaWUJjlOQLHt7jcgoE.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */
#define SamplesPerSymbol               (2.0)
#define TimingErrorOutputPort          (false)

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 16, 13, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 16, 5, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 152, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo d_emlrtMCI = { 162, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo e_emlrtMCI = { 271, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo f_emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo g_emlrtMCI = { 336, 13, "SymbolSynchronizer",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\comm\\+comm\\SymbolSynchronizer.m"
};

static emlrtMCInfo h_emlrtMCI = { 336, 58, "SymbolSynchronizer",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\comm\\+comm\\SymbolSynchronizer.m"
};

static emlrtMCInfo i_emlrtMCI = { 335, 9, "SymbolSynchronizer",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\comm\\+comm\\SymbolSynchronizer.m"
};

static emlrtECInfo emlrtECI = { 1, 3, 4, "", "" };

static emlrtBCInfo emlrtBCI = { 1, 200, 327, 13, "", "SymbolSynchronizer",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\comm\\comm\\+comm\\SymbolSynchronizer.m",
  0 };

/* Function Declarations */
static void SymbolSynchronizer_set_DampingFactor(comm_SymbolSynchronizer *obj,
  real_T zeta);
static void SymbolSynchronizer_set_NormalizedLoopBandwidth
  (comm_SymbolSynchronizer *obj, real_T BnTs);
static void SymbolSynchronizer_set_DetectorGain(comm_SymbolSynchronizer *obj,
  real_T Kp);
static void SystemCore_setup(comm_SymbolSynchronizer *obj, creal_T varargin_1
  [200]);
static void SymbolSynchronizer_setupLoopFilterGains(comm_SymbolSynchronizer *obj);
static void SymbolSynchronizer_interpControl(comm_SymbolSynchronizer *obj,
  real_T v);
static void cgxe_mdl_start(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance);
static const mxArray *mw__internal__name__resolution__fcn(void);
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static void c_info_helper(const mxArray **info);
static const mxArray *mw__internal__autoInference__fcn(void);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance);
static void emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  comm_SymbolSynchronizer *y);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, comm_SymbolSynchronizer *y);
static int32_T c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static boolean_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[3]);
static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[2]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, boolean_T y[2]);
static void i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[200]);
static boolean_T j_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance, const mxArray *st);
static void error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void b_error(const mxArray *b, emlrtMCInfo *location);
static const mxArray *num2str(const mxArray *b, emlrtMCInfo *location);
static void coder_internal_warning(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static int32_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static boolean_T l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static real_T m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[3]);
static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[2]);
static void p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, boolean_T ret[2]);
static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[200]);

/* Function Definitions */
static void SymbolSynchronizer_set_DampingFactor(comm_SymbolSynchronizer *obj,
  real_T zeta)
{
  boolean_T p;
  int32_T i0;
  static char_T cv0[61] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'D', 'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a',
    'c', 't', 'o', 'r', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P', 'o',
    's', 'i', 't', 'i', 'v', 'e' };

  char_T u[61];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 61 };

  const mxArray *m0;
  static char_T cv1[38] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c', 't', 'o', 'r', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'p', 'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  char_T b_u[38];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 38 };

  static char_T cv2[59] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'D', 'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a',
    'c', 't', 'o', 'r', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
    'n', 'i', 't', 'e' };

  char_T c_u[59];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 59 };

  static char_T cv3[36] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c', 't', 'o', 'r', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  char_T d_u[36];
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 36 };

  p = true;
  if (zeta <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 61; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 61, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 38; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 38, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(y, b_y, &c_emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(zeta)) && (!muDoubleScalarIsNaN(zeta)))) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 59; i0++) {
      c_u[i0] = cv2[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 59, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    for (i0 = 0; i0 < 36; i0++) {
      d_u[i0] = cv3[i0];
    }

    d_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, &d_u[0]);
    emlrtAssign(&d_y, m0);
    error(c_y, d_y, &d_emlrtMCI);
  }

  obj->DampingFactor = zeta;
}

static void SymbolSynchronizer_set_NormalizedLoopBandwidth
  (comm_SymbolSynchronizer *obj, real_T BnTs)
{
  boolean_T p;
  int32_T i1;
  static char_T cv4[71] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'N', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e',
    'd', 'L', 'o', 'o', 'p', 'B', 'a', 'n', 'd', 'w', 'i', 'd', 't', 'h', ':',
    'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v',
    'e' };

  char_T u[71];
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 71 };

  const mxArray *m1;
  static char_T cv5[48] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'p',
    'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  char_T b_u[48];
  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 48 };

  static char_T cv6[62] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'N', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e',
    'd', 'L', 'o', 'o', 'p', 'B', 'a', 'n', 'd', 'w', 'i', 'd', 't', 'h', ':',
    'n', 'o', 't', 'L', 'e', 's', 's' };

  char_T c_u[62];
  const mxArray *c_y;
  static const int32_T iv6[2] = { 1, 62 };

  static char_T cv7[75] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'a',
    'n', ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'w', 'i', 't', 'h', ' ', 'a', 'l',
    'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's',
    ' ', '<', ' ', '1', '.' };

  char_T d_u[75];
  const mxArray *d_y;
  static const int32_T iv7[2] = { 1, 75 };

  p = true;
  if (BnTs <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i1 = 0; i1 < 71; i1++) {
      u[i1] = cv4[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 71, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 48; i1++) {
      b_u[i1] = cv5[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 48, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(y, b_y, &c_emlrtMCI);
  }

  p = true;
  if (!(BnTs < 1.0)) {
    p = false;
  }

  if (!p) {
    for (i1 = 0; i1 < 62; i1++) {
      c_u[i1] = cv6[i1];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 62, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    for (i1 = 0; i1 < 75; i1++) {
      d_u[i1] = cv7[i1];
    }

    d_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 75, m1, &d_u[0]);
    emlrtAssign(&d_y, m1);
    error(c_y, d_y, &e_emlrtMCI);
  }

  obj->NormalizedLoopBandwidth = BnTs;
}

static void SymbolSynchronizer_set_DetectorGain(comm_SymbolSynchronizer *obj,
  real_T Kp)
{
  boolean_T p;
  int32_T i2;
  static char_T cv8[60] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'D', 'e', 't', 'e', 'c', 't', 'o', 'r', 'G',
    'a', 'i', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P', 'o', 's',
    'i', 't', 'i', 'v', 'e' };

  char_T u[60];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 60 };

  const mxArray *m2;
  static char_T cv9[37] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'e', 't', 'e', 'c', 't', 'o', 'r', 'G', 'a', 'i', 'n', ' ', 't', 'o', ' ',
    'b', 'e', ' ', 'p', 'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  char_T b_u[37];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 37 };

  static char_T cv10[58] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'D', 'e', 't', 'e', 'c', 't', 'o', 'r', 'G',
    'a', 'i', 'n', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n',
    'i', 't', 'e' };

  char_T c_u[58];
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 58 };

  static char_T cv11[35] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'e', 't', 'e', 'c', 't', 'o', 'r', 'G', 'a', 'i', 'n', ' ', 't', 'o', ' ',
    'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  char_T d_u[35];
  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 35 };

  p = true;
  if (Kp <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 60; i2++) {
      u[i2] = cv8[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 60, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 37; i2++) {
      b_u[i2] = cv9[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(y, b_y, &c_emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(Kp)) && (!muDoubleScalarIsNaN(Kp)))) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 58; i2++) {
      c_u[i2] = cv10[i2];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 58, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    for (i2 = 0; i2 < 35; i2++) {
      d_u[i2] = cv11[i2];
    }

    d_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 35, m2, &d_u[0]);
    emlrtAssign(&d_y, m2);
    error(c_y, d_y, &d_emlrtMCI);
  }

  obj->DetectorGain = Kp;
}

static void SystemCore_setup(comm_SymbolSynchronizer *obj, creal_T varargin_1
  [200])
{
  int32_T k;
  static char_T cv12[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 51 };

  const mxArray *m3;
  static char_T cv13[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 5 };

  boolean_T p;
  boolean_T exitg1;
  static char_T cv14[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', '.', 'S', 'y', 'm', 'b', 'o', 'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o',
    'n', 'i', 'z', 'e', 'r', '.', 'I', 'n', 'p', 'u', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv14[2] = { 1, 51 };

  static char_T cv15[39] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 't',
    'h', 'e', ' ', 's', 'a', 'm', 'p', 'l', 'e', ' ', 'i', 'n', 'p', 'u', 't',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  char_T d_u[39];
  const mxArray *d_y;
  static const int32_T iv15[2] = { 1, 39 };

  comm_SymbolSynchronizer *b_obj;
  if (obj->isInitialized != 0) {
    for (k = 0; k < 51; k++) {
      u[k] = cv12[k];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (k = 0; k < 5; k++) {
      b_u[k] = cv13[k];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    b_error(message(y, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  obj->isInitialized = 1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 200)) {
    if ((!(muDoubleScalarIsInf(varargin_1[k].re) || muDoubleScalarIsInf
           (varargin_1[k].im))) && (!(muDoubleScalarIsNaN(varargin_1[k].re) ||
          muDoubleScalarIsNaN(varargin_1[k].im)))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 51; k++) {
      c_u[k] = cv14[k];
    }

    c_y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, &c_u[0]);
    emlrtAssign(&c_y, m3);
    for (k = 0; k < 39; k++) {
      d_u[k] = cv15[k];
    }

    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m3, &d_u[0]);
    emlrtAssign(&d_y, m3);
    error(c_y, d_y, &d_emlrtMCI);
  }

  b_obj = obj;
  SymbolSynchronizer_setupLoopFilterGains(b_obj);
  obj->TunablePropsChanged = false;
}

static void SymbolSynchronizer_setupLoopFilterGains(comm_SymbolSynchronizer *obj)
{
  real_T zeta;
  real_T BnTs;
  real_T Kp;
  real_T theta;
  zeta = obj->DampingFactor;
  BnTs = obj->NormalizedLoopBandwidth;
  Kp = obj->DetectorGain;
  theta = BnTs / SamplesPerSymbol / (zeta + 0.25 / zeta);
  BnTs = -((1.0 + 2.0 * zeta * theta) + theta * theta) * Kp;
  obj->pProportionalGain = 4.0 * zeta * theta / BnTs;
  obj->pIntegratorGain = 4.0 * theta * theta / BnTs;
}

static void SymbolSynchronizer_interpControl(comm_SymbolSynchronizer *obj,
  real_T v)
{
  boolean_T b_obj;
  real_T A;
  b_obj = obj->pStrobeHistory[1];
  obj->pStrobeHistory[0] = b_obj;
  obj->pStrobeHistory[1] = obj->pStrobe;
  obj->pStrobe = (obj->pNCOCounter < v + 0.5);
  if (obj->pStrobe) {
    A = obj->pNCOCounter;
    obj->pMu = A / (v + 0.5);
  }

  A = obj->pNCOCounter - (v + 0.5);
  obj->pNCOCounter = A - muDoubleScalarFloor(A);
}

static void cgxe_mdl_start(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance)
{
  creal_T varargin_7[200];
  int32_T i3;
  real_T *NormalizedLoopBandwidth;
  real_T *DetectorGain;
  real_T *DampingFactor;
  creal_T (*u0)[200];
  DetectorGain = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    1U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  u0 = (creal_T (*)[200])ssGetInputPortSignal(moduleInstance->S, 0U);
  for (i3 = 0; i3 < 200; i3++) {
    varargin_7[i3].re = (*u0)[i3].re;
    varargin_7[i3].im = (*u0)[i3].im;
  }

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DampingFactor(&moduleInstance->sysobj, *DampingFactor);
    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DetectorGain(&moduleInstance->sysobj, *DetectorGain);
  }

  SystemCore_setup(&moduleInstance->sysobj, varargin_7);
}

static void cgxe_mdl_initialize(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance)
{
  boolean_T flag;
  comm_SymbolSynchronizer *obj;
  int32_T i4;
  static char_T cv16[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv17[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv17[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv18[2] = { 1, 45 };

  static char_T cv18[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv19[2] = { 1, 5 };

  real_T *NormalizedLoopBandwidth;
  real_T *DetectorGain;
  real_T *DampingFactor;
  DetectorGain = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    1U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DampingFactor(&moduleInstance->sysobj, *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DetectorGain(&moduleInstance->sysobj, *DetectorGain);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i4 = 0; i4 < 45; i4++) {
      u[i4] = cv16[i4];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i4 = 0; i4 < 8; i4++) {
      b_u[i4] = cv17[i4];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    b_error(message(y, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        c_u[i4] = cv16[i4];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv18);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      for (i4 = 0; i4 < 5; i4++) {
        d_u[i4] = cv18[i4];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      b_error(message(c_y, d_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->pLoopFilterState = 0.0;
      obj->pLoopPreviousInput = 0.0;
      obj->pStrobe = false;
      for (i4 = 0; i4 < 2; i4++) {
        obj->pStrobeHistory[i4] = false;
      }

      obj->pMu = 0.0;
      obj->pNCOCounter = 0.0;
      for (i4 = 0; i4 < 3; i4++) {
        obj->pInterpFilterState[i4].re = 0.0;
        obj->pInterpFilterState[i4].im = 0.0;
      }

      for (i4 = 0; i4 < 2; i4++) {
        obj->pTEDBuffer[i4].re = 0.0;
        obj->pTEDBuffer[i4].im = 0.0;
      }

      for (i4 = 0; i4 < 200; i4++) {
        obj->pSymbolHolder[i4].re = 0.0;
        obj->pSymbolHolder[i4].im = 0.0;
      }
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance)
{
  creal_T varargin_7[200];
  int32_T i5;
  boolean_T flag;
  real_T midSample_re;
  boolean_T p;
  comm_SymbolSynchronizer *obj;
  static char_T cv19[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv20[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv20[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv21[2] = { 1, 4 };

  real_T numStrobe;
  creal_T xSeq[4];
  int32_T i;
  creal_T dcv0[12];
  int32_T loop_ub;
  static real_T dv0[12] = { 0.0, -0.5, 0.5, 0.0, 1.5, -0.5, 1.0, -0.5, -0.5, 0.0,
    -0.5, 0.5 };

  creal_T dcv1[3];
  real_T dv1[3];
  creal_T x[3];
  real_T y_re;
  real_T y_im;
  boolean_T guard2 = false;
  real_T midSample_im;
  real_T e;
  real_T b_x;
  real_T dv2[3];
  boolean_T guard1 = false;
  static char_T cv21[38] = { 'c', 'o', 'm', 'm', ':', 'S', 'y', 'm', 'b', 'o',
    'l', 'S', 'y', 'n', 'c', 'h', 'r', 'o', 'n', 'i', 'z', 'e', 'r', ':', 'S',
    'y', 'm', 'b', 'o', 'l', 'D', 'r', 'o', 'p', 'p', 'i', 'n', 'g' };

  char_T c_u[38];
  const mxArray *c_y;
  static const int32_T iv22[2] = { 1, 38 };

  const mxArray *d_y;
  const mxArray *e_y;
  creal_T tmp_data[110];
  real_T *NormalizedLoopBandwidth;
  real_T *DetectorGain;
  real_T *DampingFactor;
  creal_T (*y0_data)[110];
  creal_T (*u0)[200];
  DetectorGain = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    1U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  y0_data = (creal_T (*)[110])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u0 = (creal_T (*)[200])ssGetInputPortSignal(moduleInstance->S, 0U);
  for (i5 = 0; i5 < 200; i5++) {
    varargin_7[i5].re = (*u0)[i5].re;
    varargin_7[i5].im = (*u0)[i5].im;
  }

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DampingFactor(&moduleInstance->sysobj, *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DetectorGain(&moduleInstance->sysobj, *DetectorGain);
  }

  midSample_re = moduleInstance->sysobj.DampingFactor;
  flag = false;
  p = true;
  if (!(midSample_re == *DampingFactor)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DampingFactor(&moduleInstance->sysobj, *DampingFactor);
  }

  midSample_re = moduleInstance->sysobj.NormalizedLoopBandwidth;
  flag = false;
  p = true;
  if (!(midSample_re == *NormalizedLoopBandwidth)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  midSample_re = moduleInstance->sysobj.DetectorGain;
  flag = false;
  p = true;
  if (!(midSample_re == *DetectorGain)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DetectorGain(&moduleInstance->sysobj, *DetectorGain);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i5 = 0; i5 < 45; i5++) {
      u[i5] = cv19[i5];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (i5 = 0; i5 < 4; i5++) {
      b_u[i5] = cv20[i5];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    b_error(message(y, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    SystemCore_setup(obj, varargin_7);
    obj->pLoopFilterState = 0.0;
    obj->pLoopPreviousInput = 0.0;
    obj->pStrobe = false;
    for (i5 = 0; i5 < 2; i5++) {
      obj->pStrobeHistory[i5] = false;
    }

    obj->pMu = 0.0;
    obj->pNCOCounter = 0.0;
    for (i5 = 0; i5 < 3; i5++) {
      obj->pInterpFilterState[i5].re = 0.0;
      obj->pInterpFilterState[i5].im = 0.0;
    }

    for (i5 = 0; i5 < 2; i5++) {
      obj->pTEDBuffer[i5].re = 0.0;
      obj->pTEDBuffer[i5].im = 0.0;
    }

    for (i5 = 0; i5 < 200; i5++) {
      obj->pSymbolHolder[i5].re = 0.0;
      obj->pSymbolHolder[i5].im = 0.0;
    }
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    SymbolSynchronizer_setupLoopFilterGains(obj);
  }

  numStrobe = 0.0;
  for (i = 0; i < 200; i++) {
    numStrobe += (real_T)obj->pStrobe;
    if (obj->pStrobe) {
      xSeq[0].re = varargin_7[i].re;
      xSeq[0].im = varargin_7[i].im;
      for (i5 = 0; i5 < 3; i5++) {
        xSeq[i5 + 1].re = obj->pInterpFilterState[i5].re;
        xSeq[i5 + 1].im = obj->pInterpFilterState[i5].im;
      }

      midSample_re = obj->pMu;
      for (i5 = 0; i5 < 4; i5++) {
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          dcv0[loop_ub + 3 * i5].re = dv0[loop_ub + 3 * i5];
          dcv0[loop_ub + 3 * i5].im = 0.0;
        }
      }

      for (i5 = 0; i5 < 3; i5++) {
        dcv1[i5].re = 0.0;
        dcv1[i5].im = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          dcv1[i5].re += dcv0[i5 + 3 * loop_ub].re * xSeq[loop_ub].re - 0.0 *
            xSeq[loop_ub].im;
          dcv1[i5].im += dcv0[i5 + 3 * loop_ub].re * xSeq[loop_ub].im + 0.0 *
            xSeq[loop_ub].re;
        }
      }

      dv1[0] = 1.0;
      dv1[1] = obj->pMu;
      dv1[2] = midSample_re * midSample_re;
      for (i5 = 0; i5 < 3; i5++) {
        x[i5].re = dv1[i5] * dcv1[i5].re;
        x[i5].im = dv1[i5] * dcv1[i5].im;
      }

      y_re = x[0].re;
      y_im = x[0].im;
      for (loop_ub = 0; loop_ub < 2; loop_ub++) {
        y_re += x[loop_ub + 1].re;
        y_im += x[loop_ub + 1].im;
      }

      for (i5 = 0; i5 < 3; i5++) {
        obj->pInterpFilterState[i5].re = xSeq[i5].re;
        obj->pInterpFilterState[i5].im = xSeq[i5].im;
      }

      guard2 = false;
      if (obj->pStrobe) {
        flag = !obj->pStrobeHistory[1];
        if (flag) {
          midSample_re = obj->pTEDBuffer[1].re;
          midSample_im = obj->pTEDBuffer[1].im;
          e = obj->pTEDBuffer[0].re;
          b_x = obj->pTEDBuffer[0].im;
          e = midSample_re * (muDoubleScalarSign(e) - muDoubleScalarSign(y_re))
            + midSample_im * (muDoubleScalarSign(b_x) - muDoubleScalarSign(y_im));
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2 == true) {
        e = 0.0;
      }

      flag = obj->pStrobeHistory[1];
      p = obj->pStrobe;
      switch ((int32_T)flag + (int32_T)p) {
       case 0:
        break;

       case 1:
        midSample_re = obj->pTEDBuffer[1].re;
        midSample_im = obj->pTEDBuffer[1].im;
        obj->pTEDBuffer[0].re = midSample_re;
        obj->pTEDBuffer[0].im = midSample_im;
        obj->pTEDBuffer[1].re = y_re;
        obj->pTEDBuffer[1].im = y_im;
        break;

       default:
        obj->pTEDBuffer[0].re = 0.0;
        obj->pTEDBuffer[0].im = 0.0;
        obj->pTEDBuffer[1].re = y_re;
        obj->pTEDBuffer[1].im = y_im;
        break;
      }

      midSample_re = obj->pLoopPreviousInput + obj->pLoopFilterState;
      midSample_im = e * obj->pProportionalGain + midSample_re;
      obj->pLoopFilterState = midSample_re;
      obj->pLoopPreviousInput = e * obj->pIntegratorGain;
      SymbolSynchronizer_interpControl(obj, midSample_im);
      obj->pSymbolHolder[emlrtDynamicBoundsCheckR2012b((int32_T)numStrobe, 1,
        200, &emlrtBCI, emlrtRootTLSGlobal) - 1].re = y_re;
      obj->pSymbolHolder[emlrtDynamicBoundsCheckR2012b((int32_T)numStrobe, 1,
        200, &emlrtBCI, emlrtRootTLSGlobal) - 1].im = y_im;
    } else {
      xSeq[0].re = varargin_7[i].re;
      xSeq[0].im = varargin_7[i].im;
      for (i5 = 0; i5 < 3; i5++) {
        xSeq[i5 + 1].re = obj->pInterpFilterState[i5].re;
        xSeq[i5 + 1].im = obj->pInterpFilterState[i5].im;
      }

      midSample_re = obj->pMu;
      for (i5 = 0; i5 < 4; i5++) {
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          dcv0[loop_ub + 3 * i5].re = dv0[loop_ub + 3 * i5];
          dcv0[loop_ub + 3 * i5].im = 0.0;
        }
      }

      for (i5 = 0; i5 < 3; i5++) {
        dcv1[i5].re = 0.0;
        dcv1[i5].im = 0.0;
        for (loop_ub = 0; loop_ub < 4; loop_ub++) {
          dcv1[i5].re += dcv0[i5 + 3 * loop_ub].re * xSeq[loop_ub].re - 0.0 *
            xSeq[loop_ub].im;
          dcv1[i5].im += dcv0[i5 + 3 * loop_ub].re * xSeq[loop_ub].im + 0.0 *
            xSeq[loop_ub].re;
        }
      }

      dv2[0] = 1.0;
      dv2[1] = obj->pMu;
      dv2[2] = midSample_re * midSample_re;
      for (i5 = 0; i5 < 3; i5++) {
        x[i5].re = dv2[i5] * dcv1[i5].re;
        x[i5].im = dv2[i5] * dcv1[i5].im;
      }

      y_re = x[0].re;
      y_im = x[0].im;
      for (loop_ub = 0; loop_ub < 2; loop_ub++) {
        y_re += x[loop_ub + 1].re;
        y_im += x[loop_ub + 1].im;
      }

      for (i5 = 0; i5 < 3; i5++) {
        obj->pInterpFilterState[i5].re = xSeq[i5].re;
        obj->pInterpFilterState[i5].im = xSeq[i5].im;
      }

      guard1 = false;
      if (obj->pStrobe) {
        flag = !obj->pStrobeHistory[1];
        if (flag) {
          midSample_re = obj->pTEDBuffer[1].re;
          midSample_im = obj->pTEDBuffer[1].im;
          e = obj->pTEDBuffer[0].re;
          b_x = obj->pTEDBuffer[0].im;
          e = midSample_re * (muDoubleScalarSign(e) - muDoubleScalarSign(y_re))
            + midSample_im * (muDoubleScalarSign(b_x) - muDoubleScalarSign(y_im));
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1 == true) {
        e = 0.0;
      }

      flag = obj->pStrobeHistory[1];
      p = obj->pStrobe;
      switch ((int32_T)flag + (int32_T)p) {
       case 0:
        break;

       case 1:
        midSample_re = obj->pTEDBuffer[1].re;
        midSample_im = obj->pTEDBuffer[1].im;
        obj->pTEDBuffer[0].re = midSample_re;
        obj->pTEDBuffer[0].im = midSample_im;
        obj->pTEDBuffer[1].re = y_re;
        obj->pTEDBuffer[1].im = y_im;
        break;

       default:
        obj->pTEDBuffer[0].re = 0.0;
        obj->pTEDBuffer[0].im = 0.0;
        obj->pTEDBuffer[1].re = y_re;
        obj->pTEDBuffer[1].im = y_im;
        break;
      }

      midSample_re = obj->pLoopPreviousInput + obj->pLoopFilterState;
      midSample_im = e * obj->pProportionalGain + midSample_re;
      obj->pLoopFilterState = midSample_re;
      obj->pLoopPreviousInput = e * obj->pIntegratorGain;
      SymbolSynchronizer_interpControl(obj, midSample_im);
    }
  }

  if (numStrobe > 110.0) {
    for (i5 = 0; i5 < 38; i5++) {
      c_u[i5] = cv21[i5];
    }

    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 38, m5, &c_u[0]);
    emlrtAssign(&c_y, m5);
    d_y = NULL;
    m5 = emlrtCreateDoubleScalar(numStrobe - 110.0);
    emlrtAssign(&d_y, m5);
    e_y = NULL;
    m5 = emlrtCreateDoubleScalar(110.0);
    emlrtAssign(&e_y, m5);
    coder_internal_warning(c_y, num2str(d_y, &g_emlrtMCI), num2str(e_y,
      &h_emlrtMCI), &i_emlrtMCI);
    numStrobe = 110.0;
  }

  if (1.0 > numStrobe) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)numStrobe;
  }

  for (i5 = 0; i5 < loop_ub; i5++) {
    tmp_data[i5].re = obj->pSymbolHolder[i5].re;
    tmp_data[i5].im = obj->pSymbolHolder[i5].im;
  }

  emlrtDimSizeGeqCheckR2012b(110, loop_ub, &emlrtECI, emlrtRootTLSGlobal);
  _ssSetCurrentOutputPortDimensions(moduleInstance->S, 0, 0, loop_ub);
  _ssSetCurrentOutputPortDimensions(moduleInstance->S, 0, 1, 1);
  for (i5 = 0; i5 < loop_ub; i5++) {
    (*y0_data)[i5].re = tmp_data[i5].re;
    (*y0_data)[i5].im = tmp_data[i5].im;
  }
}

static void cgxe_mdl_update(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance)
{
  boolean_T flag;
  comm_SymbolSynchronizer *obj;
  int32_T i6;
  static char_T cv22[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv23[2] = { 1, 45 };

  const mxArray *m6;
  static char_T cv23[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv24[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv25[2] = { 1, 45 };

  static char_T cv24[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv26[2] = { 1, 7 };

  real_T *NormalizedLoopBandwidth;
  real_T *DetectorGain;
  real_T *DampingFactor;
  DetectorGain = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    1U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DampingFactor(&moduleInstance->sysobj, *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    SymbolSynchronizer_set_DetectorGain(&moduleInstance->sysobj, *DetectorGain);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i6 = 0; i6 < 45; i6++) {
      u[i6] = cv22[i6];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &u[0]);
    emlrtAssign(&y, m6);
    for (i6 = 0; i6 < 8; i6++) {
      b_u[i6] = cv23[i6];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    b_error(message(y, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        c_u[i6] = cv22[i6];
      }

      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv25);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &c_u[0]);
      emlrtAssign(&c_y, m6);
      for (i6 = 0; i6 < 7; i6++) {
        d_u[i6] = cv24[i6];
      }

      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv26);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m6, &d_u[0]);
      emlrtAssign(&d_y, m6);
      b_error(message(c_y, d_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }
}

static const mxArray *mw__internal__name__resolution__fcn(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(133, 1, 0, NULL));
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                39);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                41);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                43);
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
  emlrtAddField(*info, emlrt_marshallOut("comm.SymbolSynchronizer"), "name", 44);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"),
                "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1417460410U), "fileTimeLo", 44);
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
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 47);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(1408802510U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                49);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "name", 49);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/cell.p"),
                "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983830U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                50);
  emlrtAddField(*info, emlrt_marshallOut("validateattributes"), "name", 50);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.cell"), "dominantType",
                50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1412179924U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 51);
  emlrtAddField(*info, emlrt_marshallOut("char"), "name", 51);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/strfun/char.m"), "resolved", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(1319762368U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 52);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 52);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                53);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 55);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("eml_warning"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m"), "resolved",
                59);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851202U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 60);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                60);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all"),
                "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                61);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 63);
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
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 65);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                66);
  emlrtAddField(*info, b_emlrt_marshallOut(1331337258U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("iscolumn"), "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/iscolumn.m"), "resolved",
                67);
  emlrtAddField(*info, b_emlrt_marshallOut(1331337258U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                68);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 68);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983800U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1370042286U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 69);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742680U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 71);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851196U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 72);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(1386456352U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                73);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                74);
  emlrtAddField(*info, emlrt_marshallOut("ceil"), "name", 74);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m"), "resolved", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742652U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m"), "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 75);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/ceil.m"), "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_ceil"), "name", 76);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_ceil.m"),
                "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851120U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                77);
  emlrtAddField(*info, emlrt_marshallOut("mpower"), "name", 77);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(1409890334U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 78);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 78);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 79);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                79);
  emlrtAddField(*info, b_emlrt_marshallOut(1331337258U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("power"), "name", 80);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1395357306U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                82);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 82);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                82);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                83);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 83);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                84);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 84);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                85);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAllocNoCheck"),
                "name", 86);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAllocNoCheck.p"),
                "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                87);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 88);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                88);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                89);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 89);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                90);
  emlrtAddField(*info, emlrt_marshallOut("mod"), "name", 90);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "resolved", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 91);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 91);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 92);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 92);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                92);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m"), "context", 93);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 93);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                94);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 94);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                94);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                95);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 95);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851126U), "fileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                96);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_round"), "name", 96);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m"),
                "resolved", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(1307683638U), "fileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                97);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 97);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851112U), "fileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/mod.m!floatmod"), "context",
                98);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 98);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 99);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 99);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851182U), "fileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 100);
  emlrtAddField(*info, emlrt_marshallOut("eml_eps"), "name", 100);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "resolved", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "context", 101);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 101);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(1326760396U), "fileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 102);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 102);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                102);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851158U), "fileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "context", 103);
  emlrtAddField(*info, emlrt_marshallOut("eml_isequal_core"), "name", 103);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "resolved", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(1408633122U), "fileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "context", 104);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.narginchk"), "name",
                104);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(1363743358U), "fileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar"),
                "context", 105);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 105);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                106);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 106);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(1383909694U), "fileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 107);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 107);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                108);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 108);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959106U), "fileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "context", 109);
  emlrtAddField(*info, emlrt_marshallOut("sumprod"), "name", 109);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "resolved", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959102U), "fileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 110);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 110);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 111);
  emlrtAddField(*info, emlrt_marshallOut("process_sumprod_inputs"), "name", 111);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "resolved", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959102U), "fileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 112);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.narginchk"), "name",
                112);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(1363743358U), "fileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 113);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 113);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 114);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 114);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                114);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 115);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 115);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                115);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851158U), "fileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 116);
  emlrtAddField(*info, emlrt_marshallOut("combine_vector_elements"), "name", 116);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "resolved", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959102U), "fileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"),
                "context", 117);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 117);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(1400553180U), "fileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                118);
  emlrtAddField(*info, emlrt_marshallOut("all"), "name", 118);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "resolved", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(1372614814U), "fileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", 119);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 119);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/all.m"), "context", 120);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.allOrAny"), "name", 120);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                "resolved", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615558U), "fileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                "context", 121);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 121);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved",
                121);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851158U), "fileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/allOrAny.m"),
                "context", 122);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 122);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                123);
  emlrtAddField(*info, emlrt_marshallOut("sign"), "name", 123);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "resolved", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "context", 124);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 124);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "context", 125);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sign"), "name", 125);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sign.m"),
                "resolved", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(1356573894U), "fileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                126);
  emlrtAddField(*info, emlrt_marshallOut("sum"), "name", 126);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/sum.m"), "resolved", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959106U), "fileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 127);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 127);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 127);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 127);
}

static void c_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/sumprod.m"),
                "context", 128);
  emlrtAddField(*info, emlrt_marshallOut("process_sumprod_inputs"), "name", 128);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "resolved", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(1395959102U), "fileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 129);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 129);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(1372615560U), "fileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXPE]$matlabroot$/toolbox/eml/lib/matlab/datafun/private/process_sumprod_inputs.m"),
                "context", 130);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 130);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                130);
  emlrtAddField(*info, b_emlrt_marshallOut(1376013088U), "fileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                131);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 131);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/SymbolSynchronizer.m"), "context",
                132);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.warning"), "name", 132);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/warning.m"),
                "resolved", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(1311288208U), "fileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 132);
}

static const mxArray *mw__internal__autoInference__fcn(void)
{
  const mxArray *infoCache;
  uint32_T RestoreInfo_cgxeChksum[4];
  uint32_T info_VerificationInfo_dlgPrmChksum_chksum[4];
  int32_T i7;
  static uint32_T uv0[4] = { 2040379297U, 2798664239U, 1989066636U, 2151939687U
  };

  static uint32_T t0_dlgPrmChksum_chksum[4] = { 2579380090U, 1058331414U,
    251314878U, 2555122834U };

  s7UBIGHSehQY1gCsIQWwr5C info_VerificationInfo_propChksum[3];
  static s7UBIGHSehQY1gCsIQWwr5C b_t0_propChksum[3] = { { { 1.268003983E+9,
        3.16230451E+9, 3.494234915E+9, 1.34432164E+8 } }, { { 7.25019261E+8,
        9.350207E+6, 1.380543125E+9, 1.962202275E+9 } }, { { 2.329432643E+9,
        1.966713464E+9, 3.591173899E+9, 2.781510642E+9 } } };

  uint32_T b_t0_dlgPrmChksum_chksum[4];
  uint32_T info_VerificationInfo_postPropOnlyChksum_chksum[4];
  static uint32_T t0_CGOnlyParamChksum_chksum[4] = { 907274058U, 3220786148U,
    779473529U, 2769831971U };

  static uint32_T t0_postPropOnlyChksum_chksum[4] = { 2911221907U, 2308967934U,
    2419390157U, 1906300239U };

  char_T info_slVer[3];
  static char_T cv25[3] = { '8', '.', '5' };

  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m9;
  int32_T u_sizes[2];
  const mxArray *f_y;
  real_T *pData;
  int32_T i;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  int32_T iv27[2];
  const mxArray *k_y;
  static const int32_T iv28[2] = { 1, 0 };

  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv29[2] = { 1, 0 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  int32_T b_u_sizes[2];
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv30[2] = { 1, 4 };

  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y_y;
  static const int32_T iv31[2] = { 1, 4 };

  s7UBIGHSehQY1gCsIQWwr5C u[3];
  const mxArray *ab_y;
  const s7UBIGHSehQY1gCsIQWwr5C *r0;
  real_T b_u[4];
  const mxArray *bb_y;
  static const int32_T iv32[2] = { 1, 4 };

  const mxArray *cb_y;
  const mxArray *db_y;
  static const int32_T iv33[2] = { 1, 4 };

  const mxArray *eb_y;
  const mxArray *fb_y;
  static const int32_T iv34[2] = { 1, 4 };

  char_T c_u[3];
  const mxArray *gb_y;
  static const int32_T iv35[2] = { 1, 3 };

  infoCache = NULL;
  for (i7 = 0; i7 < 4; i7++) {
    RestoreInfo_cgxeChksum[i7] = uv0[i7];
    info_VerificationInfo_dlgPrmChksum_chksum[i7] = t0_dlgPrmChksum_chksum[i7];
  }

  for (i7 = 0; i7 < 3; i7++) {
    info_VerificationInfo_propChksum[i7] = b_t0_propChksum[i7];
  }

  for (i7 = 0; i7 < 4; i7++) {
    b_t0_dlgPrmChksum_chksum[i7] = t0_CGOnlyParamChksum_chksum[i7];
    info_VerificationInfo_postPropOnlyChksum_chksum[i7] =
      t0_postPropOnlyChksum_chksum[i7];
  }

  for (i7 = 0; i7 < 3; i7++) {
    info_slVer[i7] = cv25[i7];
  }

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  d_y = NULL;
  emlrtAssign(&d_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  e_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&e_y, m9);
  emlrtAddField(d_y, e_y, "dimModes", 0);
  u_sizes[0] = 1;
  u_sizes[1] = 1;
  f_y = NULL;
  m9 = emlrtCreateNumericArray(2, u_sizes, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  i7 = 0;
  for (i = 0; i < u_sizes[1]; i++) {
    pData[i7] = -1.0;
    i7++;
  }

  emlrtAssign(&f_y, m9);
  emlrtAddField(d_y, f_y, "dims", 0);
  g_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&g_y, m9);
  emlrtAddField(d_y, g_y, "dType", 0);
  h_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&h_y, m9);
  emlrtAddField(d_y, h_y, "complexity", 0);
  i_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&i_y, m9);
  emlrtAddField(d_y, i_y, "outputBuiltInDTEqUsed", 0);
  emlrtAddField(c_y, d_y, "Ports", 0);
  j_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 - i7;
  }

  emlrtAssign(&j_y, emlrtCreateStructArray(2, iv27, 0, NULL));
  emlrtAddField(j_y, NULL, "names", 0);
  emlrtAddField(j_y, NULL, "dims", 0);
  emlrtAddField(j_y, NULL, "dType", 0);
  emlrtAddField(j_y, NULL, "complexity", 0);
  emlrtAddField(c_y, j_y, "dWork", 0);
  k_y = NULL;
  m9 = emlrtCreateCharArray(2, iv28);
  emlrtAssign(&k_y, m9);
  emlrtAddField(c_y, k_y, "objTypeName", 0);
  l_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&l_y, m9);
  emlrtAddField(c_y, l_y, "objTypeSize", 0);
  m_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 - i7;
  }

  emlrtAssign(&m_y, emlrtCreateStructArray(2, iv27, 0, NULL));
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
  m9 = emlrtCreateCharArray(2, iv29);
  emlrtAssign(&n_y, m9);
  emlrtAddField(c_y, n_y, "sysObjChksum", 0);
  o_y = NULL;
  emlrtAssign(&o_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  p_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 - i7;
  }

  emlrtAssign(&p_y, emlrtCreateStructArray(2, iv27, 0, NULL));
  emlrtAddField(p_y, NULL, "Index", 0);
  emlrtAddField(p_y, NULL, "DataType", 0);
  emlrtAddField(p_y, NULL, "IsSigned", 0);
  emlrtAddField(p_y, NULL, "MantBits", 0);
  emlrtAddField(p_y, NULL, "FixExp", 0);
  emlrtAddField(p_y, NULL, "Slope", 0);
  emlrtAddField(p_y, NULL, "Bias", 0);
  emlrtAddField(o_y, p_y, "Out", 0);
  q_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 - i7;
  }

  emlrtAssign(&q_y, emlrtCreateStructArray(2, iv27, 0, NULL));
  emlrtAddField(q_y, NULL, "Index", 0);
  emlrtAddField(q_y, NULL, "DataType", 0);
  emlrtAddField(q_y, NULL, "IsSigned", 0);
  emlrtAddField(q_y, NULL, "MantBits", 0);
  emlrtAddField(q_y, NULL, "FixExp", 0);
  emlrtAddField(q_y, NULL, "Slope", 0);
  emlrtAddField(q_y, NULL, "Bias", 0);
  emlrtAddField(o_y, q_y, "DW", 0);
  r_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 - i7;
  }

  emlrtAssign(&r_y, emlrtCreateStructArray(2, iv27, 0, NULL));
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
  m9 = emlrtCreateNumericArray(2, iv30, mxDOUBLE_CLASS, mxREAL);
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
  m9 = emlrtCreateNumericArray(2, iv31, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_dlgPrmChksum_chksum[i];
  }

  emlrtAssign(&y_y, m9);
  emlrtAddField(x_y, y_y, "chksum", 0);
  emlrtAddField(w_y, x_y, "dlgPrmChksum", 0);
  for (i7 = 0; i7 < 3; i7++) {
    u[i7] = info_VerificationInfo_propChksum[i7];
  }

  ab_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv27[i7] = 1 + (i7 << 1);
  }

  emlrtAssign(&ab_y, emlrtCreateStructArray(2, iv27, 0, NULL));
  for (i7 = 0; i7 < 3; i7++) {
    r0 = &u[i7];
    for (i = 0; i < 4; i++) {
      b_u[i] = r0->chksum[i];
    }

    bb_y = NULL;
    m9 = emlrtCreateNumericArray(2, iv32, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m9);
    for (i = 0; i < 4; i++) {
      pData[i] = b_u[i];
    }

    emlrtAssign(&bb_y, m9);
    emlrtAddField(ab_y, bb_y, "chksum", i7);
  }

  emlrtAddField(w_y, ab_y, "propChksum", 0);
  cb_y = NULL;
  emlrtAssign(&cb_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  db_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv33, mxDOUBLE_CLASS, mxREAL);
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
  m9 = emlrtCreateNumericArray(2, iv34, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_postPropOnlyChksum_chksum[i];
  }

  emlrtAssign(&fb_y, m9);
  emlrtAddField(eb_y, fb_y, "chksum", 0);
  emlrtAddField(w_y, eb_y, "postPropOnlyChksum", 0);
  emlrtAddField(y, w_y, "VerificationInfo", 0);
  for (i7 = 0; i7 < 3; i7++) {
    c_u[i7] = info_slVer[i7];
  }

  gb_y = NULL;
  m9 = emlrtCreateCharArray(2, iv35);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 3, m9, &c_u[0]);
  emlrtAssign(&gb_y, m9);
  emlrtAddField(y, gb_y, "slVer", 0);
  emlrtAssign(&infoCache, y);
  return infoCache;
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m10;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  static const int32_T iv36[1] = { 3 };

  creal_T dcv2[3];
  int32_T i8;
  const mxArray *k_y;
  const mxArray *l_y;
  static const int32_T iv37[2] = { 1, 2 };

  creal_T dcv3[2];
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv38[2] = { 1, 2 };

  const mxArray *o_y;
  const mxArray *p_y;
  static const int32_T iv39[1] = { 200 };

  creal_T dcv4[200];
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m10 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m10) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m10);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  d_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&d_y, m10);
  emlrtAddField(b_y, d_y, "TunablePropsChanged", 0);
  e_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.DampingFactor);
  emlrtAssign(&e_y, m10);
  emlrtAddField(b_y, e_y, "DampingFactor", 0);
  f_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.NormalizedLoopBandwidth);
  emlrtAssign(&f_y, m10);
  emlrtAddField(b_y, f_y, "NormalizedLoopBandwidth", 0);
  g_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.DetectorGain);
  emlrtAssign(&g_y, m10);
  emlrtAddField(b_y, g_y, "DetectorGain", 0);
  h_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pProportionalGain);
  emlrtAssign(&h_y, m10);
  emlrtAddField(b_y, h_y, "pProportionalGain", 0);
  i_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pIntegratorGain);
  emlrtAssign(&i_y, m10);
  emlrtAddField(b_y, i_y, "pIntegratorGain", 0);
  j_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv36, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i8 = 0; i8 < 3; i8++) {
    dcv2[i8].re = moduleInstance->sysobj.pInterpFilterState[i8].re;
    dcv2[i8].im = moduleInstance->sysobj.pInterpFilterState[i8].im;
  }

  emlrtExportNumericArrayR2013b(emlrtRootTLSGlobal, m10, dcv2, 8);
  emlrtAssign(&j_y, m10);
  emlrtAddField(b_y, j_y, "pInterpFilterState", 0);
  k_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pMu);
  emlrtAssign(&k_y, m10);
  emlrtAddField(b_y, k_y, "pMu", 0);
  l_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv37, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i8 = 0; i8 < 2; i8++) {
    dcv3[i8].re = moduleInstance->sysobj.pTEDBuffer[i8].re;
    dcv3[i8].im = moduleInstance->sysobj.pTEDBuffer[i8].im;
  }

  emlrtExportNumericArrayR2013b(emlrtRootTLSGlobal, m10, dcv3, 8);
  emlrtAssign(&l_y, m10);
  emlrtAddField(b_y, l_y, "pTEDBuffer", 0);
  m_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.pStrobe);
  emlrtAssign(&m_y, m10);
  emlrtAddField(b_y, m_y, "pStrobe", 0);
  n_y = NULL;
  m10 = emlrtCreateLogicalArray(2, iv38);
  emlrtInitLogicalArray(2, m10, moduleInstance->sysobj.pStrobeHistory);
  emlrtAssign(&n_y, m10);
  emlrtAddField(b_y, n_y, "pStrobeHistory", 0);
  o_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pNCOCounter);
  emlrtAssign(&o_y, m10);
  emlrtAddField(b_y, o_y, "pNCOCounter", 0);
  p_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv39, mxDOUBLE_CLASS, mxCOMPLEX);
  for (i8 = 0; i8 < 200; i8++) {
    dcv4[i8].re = moduleInstance->sysobj.pSymbolHolder[i8].re;
    dcv4[i8].im = moduleInstance->sysobj.pSymbolHolder[i8].im;
  }

  emlrtExportNumericArrayR2013b(emlrtRootTLSGlobal, m10, dcv4, 8);
  emlrtAssign(&p_y, m10);
  emlrtAddField(b_y, p_y, "pSymbolHolder", 0);
  q_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pLoopFilterState);
  emlrtAssign(&q_y, m10);
  emlrtAddField(b_y, q_y, "pLoopFilterState", 0);
  r_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pLoopPreviousInput);
  emlrtAssign(&r_y, m10);
  emlrtAddField(b_y, r_y, "pLoopPreviousInput", 0);
  emlrtSetCell(y, 0, b_y);
  s_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&s_y, m10);
  emlrtSetCell(y, 1, s_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  comm_SymbolSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, comm_SymbolSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[16] = { "isInitialized", "TunablePropsChanged",
    "DampingFactor", "NormalizedLoopBandwidth", "DetectorGain",
    "pProportionalGain", "pIntegratorGain", "pInterpFilterState", "pMu",
    "pTEDBuffer", "pStrobe", "pStrobeHistory", "pNCOCounter", "pSymbolHolder",
    "pLoopFilterState", "pLoopPreviousInput" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 16, fieldNames, 0U, 0);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = c_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "DampingFactor";
  y->DampingFactor = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "DampingFactor")), &thisId);
  thisId.fIdentifier = "NormalizedLoopBandwidth";
  y->NormalizedLoopBandwidth = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "NormalizedLoopBandwidth")), &thisId);
  thisId.fIdentifier = "DetectorGain";
  y->DetectorGain = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "DetectorGain")), &thisId);
  thisId.fIdentifier = "pProportionalGain";
  y->pProportionalGain = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pProportionalGain")), &thisId);
  thisId.fIdentifier = "pIntegratorGain";
  y->pIntegratorGain = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pIntegratorGain")), &thisId);
  thisId.fIdentifier = "pInterpFilterState";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "pInterpFilterState")), &thisId, y->pInterpFilterState);
  thisId.fIdentifier = "pMu";
  y->pMu = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "pMu")), &thisId);
  thisId.fIdentifier = "pTEDBuffer";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "pTEDBuffer")), &thisId, y->pTEDBuffer);
  thisId.fIdentifier = "pStrobe";
  y->pStrobe = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pStrobe")), &thisId);
  thisId.fIdentifier = "pStrobeHistory";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "pStrobeHistory")), &thisId, y->pStrobeHistory);
  thisId.fIdentifier = "pNCOCounter";
  y->pNCOCounter = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pNCOCounter")), &thisId);
  thisId.fIdentifier = "pSymbolHolder";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "pSymbolHolder")), &thisId, y->pSymbolHolder);
  thisId.fIdentifier = "pLoopFilterState";
  y->pLoopFilterState = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pLoopFilterState")), &thisId);
  thisId.fIdentifier = "pLoopPreviousInput";
  y->pLoopPreviousInput = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pLoopPreviousInput")), &thisId);
  emlrtDestroyArray(&u);
}

static int32_T c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  int32_T y;
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  boolean_T y;
  y = l_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = m_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[3])
{
  n_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[2])
{
  o_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, boolean_T y[2])
{
  p_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, creal_T y[200])
{
  q_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T j_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, "sysobj", u, 0)),
                   "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = j_emlrt_marshallIn(emlrtAlias(emlrtGetCell
    (emlrtRootTLSGlobal, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static void error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", true,
                        location);
}

static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m11, 2, pArrays,
    "message", true, location);
}

static void b_error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", true,
                        location);
}

static const mxArray *num2str(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m12, 1, &pArray,
    "num2str", true, location);
}

static void coder_internal_warning(const mxArray *b, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 3, pArrays,
                        "coder.internal.warning", true, location);
}

static int32_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  int32_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "int32", false, 0U, 0);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 0U,
    0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[3])
{
  int32_T iv40[1];
  iv40[0] = 3;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", true, 1U,
    iv40);
  emlrtImportArrayR2011b(src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[2])
{
  int32_T iv41[2];
  int32_T i9;
  for (i9 = 0; i9 < 2; i9++) {
    iv41[i9] = 1 + i9;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", true, 2U,
    iv41);
  emlrtImportArrayR2011b(src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, boolean_T ret[2])
{
  int32_T iv42[2];
  int32_T i10;
  for (i10 = 0; i10 < 2; i10++) {
    iv42[i10] = 1 + i10;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 2U,
    iv42);
  for (i10 = 0; i10 < 2; i10++) {
    ret[i10] = (*(boolean_T (*)[2])mxGetLogicals(src))[i10];
  }

  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, creal_T ret[200])
{
  int32_T iv43[1];
  iv43[0] = 200;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", true, 1U,
    iv43);
  emlrtImportArrayR2011b(src, ret, 8, true);
  emlrtDestroyArray(&src);
}

/* CGXE Glue Code */
static void mdlOutputs_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S, int_T tid)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_outputs(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlInitialize_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_initialize(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlUpdate_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S, int_T tid)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_update(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static mxArray* getSimState_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  mxArray* mxSS;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  return mxSS;
}

static void setSimState_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
  CGXERT_LEAVE_CHECK();
}

static void mdlTerminate_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_terminate(moduleInstance);
  CGXERT_LEAVE_CHECK();
  free((void *)moduleInstance);
  ssSetUserData(S, NULL);
}

static void mdlStart_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S)
{
  InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *moduleInstance;
  moduleInstance = (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE *)calloc(1, sizeof
    (InstanceStruct_Uci8vaWUJjlOQLHt7jcgoE));
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

  ssSetmdlOutputs(S, mdlOutputs_Uci8vaWUJjlOQLHt7jcgoE);
  ssSetmdlInitializeConditions(S, mdlInitialize_Uci8vaWUJjlOQLHt7jcgoE);
  ssSetmdlUpdate(S, mdlUpdate_Uci8vaWUJjlOQLHt7jcgoE);
  ssSetmdlTerminate(S, mdlTerminate_Uci8vaWUJjlOQLHt7jcgoE);
}

static void mdlProcessParameters_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S)
{
}

void method_dispatcher_Uci8vaWUJjlOQLHt7jcgoE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_Uci8vaWUJjlOQLHt7jcgoE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_Uci8vaWUJjlOQLHt7jcgoE(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_Uci8vaWUJjlOQLHt7jcgoE(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_Uci8vaWUJjlOQLHt7jcgoE(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: Uci8vaWUJjlOQLHt7jcgoE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

int autoInfer_dispatcher_Uci8vaWUJjlOQLHt7jcgoE(mxArray* plhs[], const char
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

mxArray *cgxe_Uci8vaWUJjlOQLHt7jcgoE_BuildInfoUpdate(void)
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
