/* Include files */

#include <stddef.h>
#include "blas.h"
#include "commqpsktxrx_cgxe.h"
#include "m_51kbyQVPDkrPJnyVpDcu4F.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */
#define EstimatedPhaseErrorOutputPort  (false)

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 152, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo b_emlrtMCI = { 162, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo c_emlrtMCI = { 171, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo d_emlrtMCI = { 138, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo e_emlrtMCI = { 305, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo f_emlrtMCI = { 288, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtMCInfo g_emlrtMCI = { 16, 13, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo h_emlrtMCI = { 16, 5, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo i_emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

/* Function Declarations */
static void CarrierSynchronizer_set_SamplesPerSymbol(comm_CarrierSynchronizer
  *obj, real_T value);
static void CarrierSynchronizer_set_DampingFactor(comm_CarrierSynchronizer *obj,
  real_T value);
static void CarrierSynchronizer_set_NormalizedLoopBandwidth
  (comm_CarrierSynchronizer *obj, real_T value);
static void CarrierSynchronizer_CalculateLoopGains(comm_CarrierSynchronizer *obj);
static void cgxe_mdl_start(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance);
static const mxArray *mw__internal__name__resolution__fcn(void);
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static const mxArray *mw__internal__autoInference__fcn(void);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance);
static void emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  comm_CarrierSynchronizer *y);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, comm_CarrierSynchronizer *y);
static int32_T c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static boolean_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, uint32_T y[8]);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[4]);
static real_T g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static creal_T h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static boolean_T i_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance, const mxArray *st);
static void error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void b_error(const mxArray *b, emlrtMCInfo *location);
static int32_T j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static boolean_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint32_T ret[8]);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[4]);
static real_T n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static creal_T o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);

/* Function Definitions */
static void CarrierSynchronizer_set_SamplesPerSymbol(comm_CarrierSynchronizer
  *obj, real_T value)
{
  boolean_T p;
  int32_T i0;
  static char_T cv0[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  char_T u[23];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 23 };

  const mxArray *m0;
  static char_T cv1[41] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'S',
    'a', 'm', 'p', 'l', 'e', 's', 'P', 'e', 'r', 'S', 'y', 'm', 'b', 'o', 'l',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'p', 'o', 's', 'i', 't', 'i', 'v', 'e',
    '.' };

  char_T b_u[41];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 41 };

  static char_T cv2[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  char_T c_u[21];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 21 };

  static char_T cv3[39] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'S',
    'a', 'm', 'p', 'l', 'e', 's', 'P', 'e', 'r', 'S', 'y', 'm', 'b', 'o', 'l',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  char_T d_u[39];
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 39 };

  static char_T cv4[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  char_T e_u[21];
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 21 };

  static char_T cv5[40] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'S',
    'a', 'm', 'p', 'l', 'e', 's', 'P', 'e', 'r', 'S', 'y', 'm', 'b', 'o', 'l',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N', '.' };

  char_T f_u[40];
  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 40 };

  boolean_T b_p;
  static char_T cv6[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  char_T g_u[22];
  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 22 };

  static char_T cv7[47] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'S',
    'a', 'm', 'p', 'l', 'e', 's', 'P', 'e', 'r', 'S', 'y', 'm', 'b', 'o', 'l',
    ' ', 't', 'o', ' ', 'b', 'e', ' ', 'i', 'n', 't', 'e', 'g', 'e', 'r', '-',
    'v', 'a', 'l', 'u', 'e', 'd', '.' };

  char_T h_u[47];
  const mxArray *h_y;
  static const int32_T iv7[2] = { 1, 47 };

  p = true;
  if (value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 23; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 41; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(y, b_y, &emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(value)) && (!muDoubleScalarIsNaN(value)))) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 21; i0++) {
      c_u[i0] = cv2[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    for (i0 = 0; i0 < 39; i0++) {
      d_u[i0] = cv3[i0];
    }

    d_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, &d_u[0]);
    emlrtAssign(&d_y, m0);
    error(c_y, d_y, &b_emlrtMCI);
  }

  p = true;
  if (muDoubleScalarIsNaN(value)) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 21; i0++) {
      e_u[i0] = cv4[i0];
    }

    e_y = NULL;
    m0 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m0, &e_u[0]);
    emlrtAssign(&e_y, m0);
    for (i0 = 0; i0 < 40; i0++) {
      f_u[i0] = cv5[i0];
    }

    f_y = NULL;
    m0 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 40, m0, &f_u[0]);
    emlrtAssign(&f_y, m0);
    error(e_y, f_y, &c_emlrtMCI);
  }

  p = true;
  if ((!muDoubleScalarIsInf(value)) && (!muDoubleScalarIsNaN(value)) &&
      (muDoubleScalarFloor(value) == value)) {
    b_p = true;
  } else {
    b_p = false;
  }

  if (!b_p) {
    p = false;
  }

  if (!p) {
    for (i0 = 0; i0 < 22; i0++) {
      g_u[i0] = cv6[i0];
    }

    g_y = NULL;
    m0 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 22, m0, &g_u[0]);
    emlrtAssign(&g_y, m0);
    for (i0 = 0; i0 < 47; i0++) {
      h_u[i0] = cv7[i0];
    }

    h_y = NULL;
    m0 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 47, m0, &h_u[0]);
    emlrtAssign(&h_y, m0);
    error(g_y, h_y, &d_emlrtMCI);
  }

  obj->SamplesPerSymbol = value;
}

static void CarrierSynchronizer_set_DampingFactor(comm_CarrierSynchronizer *obj,
  real_T value)
{
  boolean_T p;
  int32_T i1;
  static char_T cv8[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  char_T u[23];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 23 };

  const mxArray *m1;
  static char_T cv9[38] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c', 't', 'o', 'r', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'p', 'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  char_T b_u[38];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 38 };

  static char_T cv10[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  char_T c_u[21];
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 21 };

  static char_T cv11[36] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c', 't', 'o', 'r', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  char_T d_u[36];
  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 36 };

  static char_T cv12[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  char_T e_u[21];
  const mxArray *e_y;
  static const int32_T iv12[2] = { 1, 21 };

  static char_T cv13[37] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'D',
    'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c', 't', 'o', 'r', ' ', 't', 'o',
    ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N', '.' };

  char_T f_u[37];
  const mxArray *f_y;
  static const int32_T iv13[2] = { 1, 37 };

  p = true;
  if (value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i1 = 0; i1 < 23; i1++) {
      u[i1] = cv8[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 38; i1++) {
      b_u[i1] = cv9[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 38, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(y, b_y, &emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(value)) && (!muDoubleScalarIsNaN(value)))) {
    p = false;
  }

  if (!p) {
    for (i1 = 0; i1 < 21; i1++) {
      c_u[i1] = cv10[i1];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m1, &c_u[0]);
    emlrtAssign(&c_y, m1);
    for (i1 = 0; i1 < 36; i1++) {
      d_u[i1] = cv11[i1];
    }

    d_y = NULL;
    m1 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m1, &d_u[0]);
    emlrtAssign(&d_y, m1);
    error(c_y, d_y, &b_emlrtMCI);
  }

  p = true;
  if (muDoubleScalarIsNaN(value)) {
    p = false;
  }

  if (!p) {
    for (i1 = 0; i1 < 21; i1++) {
      e_u[i1] = cv12[i1];
    }

    e_y = NULL;
    m1 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m1, &e_u[0]);
    emlrtAssign(&e_y, m1);
    for (i1 = 0; i1 < 37; i1++) {
      f_u[i1] = cv13[i1];
    }

    f_y = NULL;
    m1 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m1, &f_u[0]);
    emlrtAssign(&f_y, m1);
    error(e_y, f_y, &c_emlrtMCI);
  }

  obj->DampingFactor = value;
}

static void CarrierSynchronizer_set_NormalizedLoopBandwidth
  (comm_CarrierSynchronizer *obj, real_T value)
{
  boolean_T p;
  int32_T i2;
  static char_T cv14[17] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 't',
    'G', 'r', 'e', 'a', 't', 'e', 'r' };

  char_T u[17];
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 17 };

  const mxArray *m2;
  static char_T cv15[75] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'a',
    'n', ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'w', 'i', 't', 'h', ' ', 'a', 'l',
    'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's',
    ' ', '>', ' ', '0', '.' };

  char_T b_u[75];
  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 75 };

  static char_T cv16[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 't',
    'L', 'e', 's', 's', 'E', 'q', 'u', 'a', 'l' };

  char_T c_u[19];
  const mxArray *c_y;
  static const int32_T iv16[2] = { 1, 19 };

  static char_T cv17[76] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'a',
    'n', ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'w', 'i', 't', 'h', ' ', 'a', 'l',
    'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's',
    ' ', '<', '=', ' ', '1', '.' };

  char_T d_u[76];
  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 76 };

  static char_T cv18[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  char_T e_u[23];
  const mxArray *e_y;
  static const int32_T iv18[2] = { 1, 23 };

  static char_T cv19[48] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'p',
    'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  char_T f_u[48];
  const mxArray *f_y;
  static const int32_T iv19[2] = { 1, 48 };

  static char_T cv20[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  char_T g_u[21];
  const mxArray *g_y;
  static const int32_T iv20[2] = { 1, 21 };

  static char_T cv21[46] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f',
    'i', 'n', 'i', 't', 'e', '.' };

  char_T h_u[46];
  const mxArray *h_y;
  static const int32_T iv21[2] = { 1, 46 };

  static char_T cv22[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  char_T i_u[21];
  const mxArray *i_y;
  static const int32_T iv22[2] = { 1, 21 };

  static char_T cv23[47] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ', 'N',
    'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd', 'L', 'o', 'o', 'p', 'B', 'a',
    'n', 'd', 'w', 'i', 'd', 't', 'h', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n',
    'o', 'n', '-', 'N', 'a', 'N', '.' };

  char_T j_u[47];
  const mxArray *j_y;
  static const int32_T iv23[2] = { 1, 47 };

  p = true;
  if (!(value > 0.0)) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 17; i2++) {
      u[i2] = cv14[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 75; i2++) {
      b_u[i2] = cv15[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 75, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(y, b_y, &e_emlrtMCI);
  }

  p = true;
  if (!(value <= 1.0)) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 19; i2++) {
      c_u[i2] = cv16[i2];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 19, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    for (i2 = 0; i2 < 76; i2++) {
      d_u[i2] = cv17[i2];
    }

    d_y = NULL;
    m2 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 76, m2, &d_u[0]);
    emlrtAssign(&d_y, m2);
    error(c_y, d_y, &f_emlrtMCI);
  }

  p = true;
  if (value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 23; i2++) {
      e_u[i2] = cv18[i2];
    }

    e_y = NULL;
    m2 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m2, &e_u[0]);
    emlrtAssign(&e_y, m2);
    for (i2 = 0; i2 < 48; i2++) {
      f_u[i2] = cv19[i2];
    }

    f_y = NULL;
    m2 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 48, m2, &f_u[0]);
    emlrtAssign(&f_y, m2);
    error(e_y, f_y, &emlrtMCI);
  }

  p = true;
  if (!((!muDoubleScalarIsInf(value)) && (!muDoubleScalarIsNaN(value)))) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 21; i2++) {
      g_u[i2] = cv20[i2];
    }

    g_y = NULL;
    m2 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m2, &g_u[0]);
    emlrtAssign(&g_y, m2);
    for (i2 = 0; i2 < 46; i2++) {
      h_u[i2] = cv21[i2];
    }

    h_y = NULL;
    m2 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 46, m2, &h_u[0]);
    emlrtAssign(&h_y, m2);
    error(g_y, h_y, &b_emlrtMCI);
  }

  p = true;
  if (muDoubleScalarIsNaN(value)) {
    p = false;
  }

  if (!p) {
    for (i2 = 0; i2 < 21; i2++) {
      i_u[i2] = cv22[i2];
    }

    i_y = NULL;
    m2 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m2, &i_u[0]);
    emlrtAssign(&i_y, m2);
    for (i2 = 0; i2 < 47; i2++) {
      j_u[i2] = cv23[i2];
    }

    j_y = NULL;
    m2 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 47, m2, &j_u[0]);
    emlrtAssign(&j_y, m2);
    error(i_y, j_y, &c_emlrtMCI);
  }

  obj->NormalizedLoopBandwidth = value;
}

static void CarrierSynchronizer_CalculateLoopGains(comm_CarrierSynchronizer *obj)
{
  real_T PhaseRecoveryLoopBandwidth;
  real_T PhaseRecoveryGain;
  real_T B;
  real_T theta;
  real_T d;
  char_T a[4];
  int32_T k;
  boolean_T b_bool;
  int32_T exitg1;
  static char_T cv24[4] = { 'A', 'u', 't', 'o' };

  PhaseRecoveryLoopBandwidth = obj->NormalizedLoopBandwidth *
    obj->SamplesPerSymbol;
  PhaseRecoveryGain = obj->SamplesPerSymbol;
  B = obj->DampingFactor;
  B = (obj->DampingFactor + 0.25 / B) * obj->SamplesPerSymbol;
  theta = PhaseRecoveryLoopBandwidth / B;
  d = (1.0 + 2.0 * obj->DampingFactor * theta) + theta * theta;
  PhaseRecoveryLoopBandwidth = 4.0 * obj->DampingFactor * theta;
  obj->pProportionalGain = PhaseRecoveryLoopBandwidth / d / (2.0 *
    PhaseRecoveryGain);
  B = obj->SamplesPerSymbol;
  obj->pIntegratorGain = 4.0 / B * theta * theta / d / (2.0 * PhaseRecoveryGain);
  for (k = 0; k < 4; k++) {
    a[k] = obj->ModulationPhaseOffset[k];
  }

  b_bool = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 4) {
      if (a[k] != cv24[k]) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (b_bool) {
    obj->pActualPhaseOffset = 0.0;
  } else {
    obj->pActualPhaseOffset = obj->CustomPhaseOffset - 0.78539816339744828;
  }
}

static void cgxe_mdl_start(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance)
{
  boolean_T flag;
  int32_T i3;
  static char_T cv25[4] = { 'A', 'u', 't', 'o' };

  comm_CarrierSynchronizer *obj;
  static char_T cv26[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 51 };

  const mxArray *m3;
  static char_T cv27[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 5 };

  static uint8_T uv0[8] = { 200U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    2U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  SamplesPerSymbol = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))
    ->data;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.CustomPhaseOffset = 0.0;
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

    for (i3 = 0; i3 < 4; i3++) {
      moduleInstance->sysobj.ModulationPhaseOffset[i3] = cv25[i3];
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_SamplesPerSymbol(&moduleInstance->sysobj,
      *SamplesPerSymbol);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_DampingFactor(&moduleInstance->sysobj,
      *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i3 = 0; i3 < 51; i3++) {
      u[i3] = cv26[i3];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i3 = 0; i3 < 5; i3++) {
      b_u[i3] = cv27[i3];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    b_error(message(y, b_y, &i_emlrtMCI), &i_emlrtMCI);
  }

  obj->isInitialized = 1;
  for (i3 = 0; i3 < 8; i3++) {
    obj->inputVarSize1[i3] = uv0[i3];
  }

  obj->pPhase = 0.0;
  obj->pPreviousSample.re = 0.0;
  obj->pPreviousSample.im = 0.0;
  CarrierSynchronizer_CalculateLoopGains(obj);
  obj->pDigitalSynthesizerGain = -1.0;
  obj->TunablePropsChanged = false;
}

static void cgxe_mdl_initialize(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance)
{
  boolean_T flag;
  int32_T i4;
  static char_T cv28[4] = { 'A', 'u', 't', 'o' };

  comm_CarrierSynchronizer *obj;
  static char_T cv29[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *m4;
  static char_T cv30[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 45 };

  static char_T cv31[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv29[2] = { 1, 5 };

  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    2U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  SamplesPerSymbol = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))
    ->data;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.CustomPhaseOffset = 0.0;
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

    for (i4 = 0; i4 < 4; i4++) {
      moduleInstance->sysobj.ModulationPhaseOffset[i4] = cv28[i4];
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_SamplesPerSymbol(&moduleInstance->sysobj,
      *SamplesPerSymbol);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_DampingFactor(&moduleInstance->sysobj,
      *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i4 = 0; i4 < 45; i4++) {
      u[i4] = cv29[i4];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv26);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i4 = 0; i4 < 8; i4++) {
      b_u[i4] = cv30[i4];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    b_error(message(y, b_y, &i_emlrtMCI), &i_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i4 = 0; i4 < 45; i4++) {
        c_u[i4] = cv29[i4];
      }

      c_y = NULL;
      m4 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m4, &c_u[0]);
      emlrtAssign(&c_y, m4);
      for (i4 = 0; i4 < 5; i4++) {
        d_u[i4] = cv31[i4];
      }

      d_y = NULL;
      m4 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, &d_u[0]);
      emlrtAssign(&d_y, m4);
      b_error(message(c_y, d_y, &i_emlrtMCI), &i_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->pLoopFilterState = 0.0;
      obj->pIntegFilterState = 0.0;
      obj->pDDSPreviousInput = 0.0;
      obj->pPhase = 0.0;
      obj->pPreviousSample.re = 0.0;
      obj->pPreviousSample.im = 0.0;
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance)
{
  creal_T varargin_7[200];
  int32_T k;
  boolean_T flag;
  static char_T cv32[4] = { 'A', 'u', 't', 'o' };

  real_T phErr;
  boolean_T p;
  comm_CarrierSynchronizer *obj;
  static char_T cv33[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv34[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 4 };

  static char_T cv35[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv32[2] = { 1, 51 };

  static char_T cv36[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 5 };

  static uint8_T inputSize[8] = { 200U, 1U, 1U, 1U, 1U, 1U, 1U, 1U };

  boolean_T exitg1;
  real_T loopFiltOut;
  real_T DDSOut;
  real_T DDSPreviousInp;
  real_T previousSample_re;
  real_T previousSample_im;
  creal_T varargout_1[200];
  real_T b;
  real_T y_re;
  real_T r;
  creal_T (*b_y0)[200];
  real_T *NormalizedLoopBandwidth;
  real_T *DampingFactor;
  real_T *SamplesPerSymbol;
  creal_T (*u0)[200];
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    2U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  SamplesPerSymbol = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))
    ->data;
  b_y0 = (creal_T (*)[200])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u0 = (creal_T (*)[200])ssGetInputPortSignal(moduleInstance->S, 0U);
  for (k = 0; k < 200; k++) {
    varargin_7[k].re = (*u0)[k].re;
    varargin_7[k].im = (*u0)[k].im;
  }

  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.CustomPhaseOffset = 0.0;
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

    for (k = 0; k < 4; k++) {
      moduleInstance->sysobj.ModulationPhaseOffset[k] = cv32[k];
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_SamplesPerSymbol(&moduleInstance->sysobj,
      *SamplesPerSymbol);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_DampingFactor(&moduleInstance->sysobj,
      *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  phErr = moduleInstance->sysobj.SamplesPerSymbol;
  flag = false;
  p = true;
  if (!(phErr == *SamplesPerSymbol)) {
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

    CarrierSynchronizer_set_SamplesPerSymbol(&moduleInstance->sysobj,
      *SamplesPerSymbol);
  }

  phErr = moduleInstance->sysobj.DampingFactor;
  flag = false;
  p = true;
  if (!(phErr == *DampingFactor)) {
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

    CarrierSynchronizer_set_DampingFactor(&moduleInstance->sysobj,
      *DampingFactor);
  }

  phErr = moduleInstance->sysobj.NormalizedLoopBandwidth;
  flag = false;
  p = true;
  if (!(phErr == *NormalizedLoopBandwidth)) {
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

    CarrierSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv33[k];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv30);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (k = 0; k < 4; k++) {
      b_u[k] = cv34[k];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv31);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    b_error(message(y, b_y, &i_emlrtMCI), &i_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = cv35[k];
      }

      c_y = NULL;
      m5 = emlrtCreateCharArray(2, iv32);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m5, &c_u[0]);
      emlrtAssign(&c_y, m5);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv36[k];
      }

      d_y = NULL;
      m5 = emlrtCreateCharArray(2, iv33);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, &d_u[0]);
      emlrtAssign(&d_y, m5);
      b_error(message(c_y, d_y, &i_emlrtMCI), &i_emlrtMCI);
    }

    obj->isInitialized = 1;
    for (k = 0; k < 8; k++) {
      obj->inputVarSize1[k] = inputSize[k];
    }

    obj->pPhase = 0.0;
    obj->pPreviousSample.re = 0.0;
    obj->pPreviousSample.im = 0.0;
    CarrierSynchronizer_CalculateLoopGains(obj);
    obj->pDigitalSynthesizerGain = -1.0;
    obj->TunablePropsChanged = false;
    obj->pLoopFilterState = 0.0;
    obj->pIntegFilterState = 0.0;
    obj->pDDSPreviousInput = 0.0;
    obj->pPhase = 0.0;
    obj->pPreviousSample.re = 0.0;
    obj->pPreviousSample.im = 0.0;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    CarrierSynchronizer_CalculateLoopGains(obj);
  }

  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 8)) {
    if (obj->inputVarSize1[k] != inputSize[k]) {
      for (k = 0; k < 8; k++) {
        obj->inputVarSize1[k] = inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  loopFiltOut = obj->pLoopFilterState;
  DDSOut = obj->pIntegFilterState;
  DDSPreviousInp = obj->pDDSPreviousInput;
  previousSample_re = obj->pPreviousSample.re;
  previousSample_im = obj->pPreviousSample.im;
  for (k = 0; k < 200; k++) {
    phErr = muDoubleScalarSign(previousSample_re) * previousSample_im -
      muDoubleScalarSign(previousSample_im) * previousSample_re;
    b = obj->pPhase;
    y_re = b * 0.0;
    r = muDoubleScalarExp(y_re / 2.0);
    y_re = r * (r * muDoubleScalarCos(b));
    b = r * (r * muDoubleScalarSin(b));
    varargout_1[k].re = varargin_7[k].re * y_re - varargin_7[k].im * b;
    varargout_1[k].im = varargin_7[k].re * b + varargin_7[k].im * y_re;
    loopFiltOut += phErr * obj->pIntegratorGain;
    DDSOut += DDSPreviousInp;
    DDSPreviousInp = phErr * obj->pProportionalGain + loopFiltOut;
    obj->pPhase = obj->pDigitalSynthesizerGain * DDSOut;
    previousSample_re = varargout_1[k].re;
    previousSample_im = varargout_1[k].im;
  }

  b = obj->pActualPhaseOffset;
  y_re = b * 0.0;
  r = muDoubleScalarExp(y_re / 2.0);
  y_re = r * (r * muDoubleScalarCos(b));
  b = r * (r * muDoubleScalarSin(b));
  for (k = 0; k < 200; k++) {
    phErr = varargout_1[k].re;
    r = varargout_1[k].im;
    varargout_1[k].re = varargout_1[k].re * y_re - varargout_1[k].im * b;
    varargout_1[k].im = phErr * b + r * y_re;
  }

  obj->pLoopFilterState = loopFiltOut;
  obj->pIntegFilterState = DDSOut;
  obj->pPreviousSample.re = previousSample_re;
  obj->pPreviousSample.im = previousSample_im;
  obj->pDDSPreviousInput = DDSPreviousInp;
  for (k = 0; k < 200; k++) {
    (*b_y0)[k].re = varargout_1[k].re;
    (*b_y0)[k].im = varargout_1[k].im;
  }
}

static void cgxe_mdl_update(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance)
{
  boolean_T flag;
  int32_T i5;
  static char_T cv37[4] = { 'A', 'u', 't', 'o' };

  comm_CarrierSynchronizer *obj;
  static char_T cv38[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv34[2] = { 1, 45 };

  const mxArray *m6;
  static char_T cv39[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv36[2] = { 1, 45 };

  static char_T cv40[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv37[2] = { 1, 7 };

  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  NormalizedLoopBandwidth = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S,
    2U))->data;
  DampingFactor = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  SamplesPerSymbol = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))
    ->data;
  if (!moduleInstance->sysobj_not_empty) {
    moduleInstance->sysobj.CustomPhaseOffset = 0.0;
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

    for (i5 = 0; i5 < 4; i5++) {
      moduleInstance->sysobj.ModulationPhaseOffset[i5] = cv37[i5];
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_SamplesPerSymbol(&moduleInstance->sysobj,
      *SamplesPerSymbol);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_DampingFactor(&moduleInstance->sysobj,
      *DampingFactor);
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    CarrierSynchronizer_set_NormalizedLoopBandwidth(&moduleInstance->sysobj,
      *NormalizedLoopBandwidth);
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i5 = 0; i5 < 45; i5++) {
      u[i5] = cv38[i5];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv34);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &u[0]);
    emlrtAssign(&y, m6);
    for (i5 = 0; i5 < 8; i5++) {
      b_u[i5] = cv39[i5];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv35);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    b_error(message(y, b_y, &i_emlrtMCI), &i_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i5 = 0; i5 < 45; i5++) {
        c_u[i5] = cv38[i5];
      }

      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv36);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, &c_u[0]);
      emlrtAssign(&c_y, m6);
      for (i5 = 0; i5 < 7; i5++) {
        d_u[i5] = cv40[i5];
      }

      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv37);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m6, &d_u[0]);
      emlrtAssign(&d_y, m6);
      b_error(message(c_y, d_y, &i_emlrtMCI), &i_emlrtMCI);
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
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(90, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 39);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 41);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 43);
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
  emlrtAddField(*info, emlrt_marshallOut("comm.CarrierSynchronizer"), "name", 44);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1417460382U), "fileTimeLo", 44);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 49);
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 50);
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
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                53);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!all"),
                "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                54);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 55);
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
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!notisnan"),
                "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 60);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                60);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m!isintegral"),
                "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742654U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/lang/validateattributes.m"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("eml_warning"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m"), "resolved",
                62);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851202U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 63);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 63);
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
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 65);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("logical"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
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
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 68);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1393363258U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 69);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983800U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1370042286U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742680U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 71);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 72);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851196U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(1386456352U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context", 74);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 74);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                74);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983828U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("eml_strcmp"), "name", 75);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_strcmp.m"), "resolved",
                75);
  emlrtAddField(*info, b_emlrt_marshallOut(1386456354U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 76);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1286851158U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "context", 77);
  emlrtAddField(*info, emlrt_marshallOut("eml_isequal_core"), "name", 77);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "resolved", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(1408633122U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "context", 78);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.narginchk"), "name", 78);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/narginchk.m"),
                "resolved", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1363743358U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar"),
                "context", 79);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742658U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 80);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1412202804U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("sign"), "name", 81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "context", 82);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 82);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m"), "context", 83);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sign"), "name", 83);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sign.m"),
                "resolved", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(1356573894U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 84);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 84);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1383909694U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 85);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1395960656U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/comm/comm/+comm/CarrierSynchronizer.m"),
                "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("exp"), "name", 86);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m"), "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1343862780U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/exp.m"), "context", 87);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_exp"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"),
                "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1395357300U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"),
                "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 88);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(1363742656U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_exp.m"),
                "context", 89);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 89);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1419983800U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1370042286U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
}

static const mxArray *mw__internal__autoInference__fcn(void)
{
  const mxArray *infoCache;
  uint32_T RestoreInfo_cgxeChksum[4];
  uint32_T info_VerificationInfo_dlgPrmChksum_chksum[4];
  int32_T i6;
  static uint32_T uv1[4] = { 2357652797U, 3624488560U, 874232320U, 2247315856U };

  static uint32_T t0_dlgPrmChksum_chksum[4] = { 1480630825U, 812154826U,
    1702750426U, 3853813250U };

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
  static char_T cv41[3] = { '8', '.', '5' };

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
  int32_T iv38[2];
  const mxArray *k_y;
  static const int32_T iv39[2] = { 1, 0 };

  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv40[2] = { 1, 0 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  int32_T b_u_sizes[2];
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  static const int32_T iv41[2] = { 1, 4 };

  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y_y;
  static const int32_T iv42[2] = { 1, 4 };

  s7UBIGHSehQY1gCsIQWwr5C u[3];
  const mxArray *ab_y;
  const s7UBIGHSehQY1gCsIQWwr5C *r0;
  real_T b_u[4];
  const mxArray *bb_y;
  static const int32_T iv43[2] = { 1, 4 };

  const mxArray *cb_y;
  const mxArray *db_y;
  static const int32_T iv44[2] = { 1, 4 };

  const mxArray *eb_y;
  const mxArray *fb_y;
  static const int32_T iv45[2] = { 1, 4 };

  char_T c_u[3];
  const mxArray *gb_y;
  static const int32_T iv46[2] = { 1, 3 };

  infoCache = NULL;
  for (i6 = 0; i6 < 4; i6++) {
    RestoreInfo_cgxeChksum[i6] = uv1[i6];
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
    info_slVer[i6] = cv41[i6];
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
  i6 = 0;
  for (i = 0; i < u_sizes[1]; i++) {
    pData[i6] = -1.0;
    i6++;
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
  for (i6 = 0; i6 < 2; i6++) {
    iv38[i6] = 1 - i6;
  }

  emlrtAssign(&j_y, emlrtCreateStructArray(2, iv38, 0, NULL));
  emlrtAddField(j_y, NULL, "names", 0);
  emlrtAddField(j_y, NULL, "dims", 0);
  emlrtAddField(j_y, NULL, "dType", 0);
  emlrtAddField(j_y, NULL, "complexity", 0);
  emlrtAddField(c_y, j_y, "dWork", 0);
  k_y = NULL;
  m9 = emlrtCreateCharArray(2, iv39);
  emlrtAssign(&k_y, m9);
  emlrtAddField(c_y, k_y, "objTypeName", 0);
  l_y = NULL;
  m9 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&l_y, m9);
  emlrtAddField(c_y, l_y, "objTypeSize", 0);
  m_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv38[i6] = 1 - i6;
  }

  emlrtAssign(&m_y, emlrtCreateStructArray(2, iv38, 0, NULL));
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
  m9 = emlrtCreateCharArray(2, iv40);
  emlrtAssign(&n_y, m9);
  emlrtAddField(c_y, n_y, "sysObjChksum", 0);
  o_y = NULL;
  emlrtAssign(&o_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  p_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv38[i6] = 1 - i6;
  }

  emlrtAssign(&p_y, emlrtCreateStructArray(2, iv38, 0, NULL));
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
    iv38[i6] = 1 - i6;
  }

  emlrtAssign(&q_y, emlrtCreateStructArray(2, iv38, 0, NULL));
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
    iv38[i6] = 1 - i6;
  }

  emlrtAssign(&r_y, emlrtCreateStructArray(2, iv38, 0, NULL));
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
  m9 = emlrtCreateNumericArray(2, iv41, mxDOUBLE_CLASS, mxREAL);
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
  m9 = emlrtCreateNumericArray(2, iv42, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_dlgPrmChksum_chksum[i];
  }

  emlrtAssign(&y_y, m9);
  emlrtAddField(x_y, y_y, "chksum", 0);
  emlrtAddField(w_y, x_y, "dlgPrmChksum", 0);
  for (i6 = 0; i6 < 3; i6++) {
    u[i6] = info_VerificationInfo_propChksum[i6];
  }

  ab_y = NULL;
  for (i6 = 0; i6 < 2; i6++) {
    iv38[i6] = 1 + (i6 << 1);
  }

  emlrtAssign(&ab_y, emlrtCreateStructArray(2, iv38, 0, NULL));
  for (i6 = 0; i6 < 3; i6++) {
    r0 = &u[i6];
    for (i = 0; i < 4; i++) {
      b_u[i] = r0->chksum[i];
    }

    bb_y = NULL;
    m9 = emlrtCreateNumericArray(2, iv43, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m9);
    for (i = 0; i < 4; i++) {
      pData[i] = b_u[i];
    }

    emlrtAssign(&bb_y, m9);
    emlrtAddField(ab_y, bb_y, "chksum", i6);
  }

  emlrtAddField(w_y, ab_y, "propChksum", 0);
  cb_y = NULL;
  emlrtAssign(&cb_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  db_y = NULL;
  m9 = emlrtCreateNumericArray(2, iv44, mxDOUBLE_CLASS, mxREAL);
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
  m9 = emlrtCreateNumericArray(2, iv45, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m9);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)info_VerificationInfo_postPropOnlyChksum_chksum[i];
  }

  emlrtAssign(&fb_y, m9);
  emlrtAddField(eb_y, fb_y, "chksum", 0);
  emlrtAddField(w_y, eb_y, "postPropOnlyChksum", 0);
  emlrtAddField(y, w_y, "VerificationInfo", 0);
  for (i6 = 0; i6 < 3; i6++) {
    c_u[i6] = info_slVer[i6];
  }

  gb_y = NULL;
  m9 = emlrtCreateCharArray(2, iv46);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 3, m9, &c_u[0]);
  emlrtAssign(&gb_y, m9);
  emlrtAddField(y, gb_y, "slVer", 0);
  emlrtAssign(&infoCache, y);
  return infoCache;
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m10;
  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv47[2] = { 1, 8 };

  uint32_T *pData;
  int32_T i;
  char_T u[4];
  const mxArray *f_y;
  static const int32_T iv48[2] = { 1, 4 };

  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
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
  m10 = emlrtCreateNumericArray(2, iv47, mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)mxGetData(m10);
  for (i = 0; i < 8; i++) {
    pData[i] = moduleInstance->sysobj.inputVarSize1[i];
  }

  emlrtAssign(&e_y, m10);
  emlrtAddField(b_y, e_y, "inputVarSize1", 0);
  for (i = 0; i < 4; i++) {
    u[i] = moduleInstance->sysobj.ModulationPhaseOffset[i];
  }

  f_y = NULL;
  m10 = emlrtCreateCharArray(2, iv48);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m10, &u[0]);
  emlrtAssign(&f_y, m10);
  emlrtAddField(b_y, f_y, "ModulationPhaseOffset", 0);
  g_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.CustomPhaseOffset);
  emlrtAssign(&g_y, m10);
  emlrtAddField(b_y, g_y, "CustomPhaseOffset", 0);
  h_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.SamplesPerSymbol);
  emlrtAssign(&h_y, m10);
  emlrtAddField(b_y, h_y, "SamplesPerSymbol", 0);
  i_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.DampingFactor);
  emlrtAssign(&i_y, m10);
  emlrtAddField(b_y, i_y, "DampingFactor", 0);
  j_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.NormalizedLoopBandwidth);
  emlrtAssign(&j_y, m10);
  emlrtAddField(b_y, j_y, "NormalizedLoopBandwidth", 0);
  k_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pProportionalGain);
  emlrtAssign(&k_y, m10);
  emlrtAddField(b_y, k_y, "pProportionalGain", 0);
  l_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pIntegratorGain);
  emlrtAssign(&l_y, m10);
  emlrtAddField(b_y, l_y, "pIntegratorGain", 0);
  m_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pDigitalSynthesizerGain);
  emlrtAssign(&m_y, m10);
  emlrtAddField(b_y, m_y, "pDigitalSynthesizerGain", 0);
  n_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pPhase);
  emlrtAssign(&n_y, m10);
  emlrtAddField(b_y, n_y, "pPhase", 0);
  o_y = NULL;
  m10 = emlrtCreateNumericMatrix(1, 1, mxDOUBLE_CLASS, mxCOMPLEX);
  *mxGetPr(m10) = moduleInstance->sysobj.pPreviousSample.re;
  *mxGetPi(m10) = moduleInstance->sysobj.pPreviousSample.im;
  emlrtFreeImagIfZero(m10);
  emlrtAssign(&o_y, m10);
  emlrtAddField(b_y, o_y, "pPreviousSample", 0);
  p_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pActualPhaseOffset);
  emlrtAssign(&p_y, m10);
  emlrtAddField(b_y, p_y, "pActualPhaseOffset", 0);
  q_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pLoopFilterState);
  emlrtAssign(&q_y, m10);
  emlrtAddField(b_y, q_y, "pLoopFilterState", 0);
  r_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pIntegFilterState);
  emlrtAssign(&r_y, m10);
  emlrtAddField(b_y, r_y, "pIntegFilterState", 0);
  s_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pDDSPreviousInput);
  emlrtAssign(&s_y, m10);
  emlrtAddField(b_y, s_y, "pDDSPreviousInput", 0);
  emlrtSetCell(y, 0, b_y);
  t_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&t_y, m10);
  emlrtSetCell(y, 1, t_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  comm_CarrierSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, comm_CarrierSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[17] = { "isInitialized", "TunablePropsChanged",
    "inputVarSize1", "ModulationPhaseOffset", "CustomPhaseOffset",
    "SamplesPerSymbol", "DampingFactor", "NormalizedLoopBandwidth",
    "pProportionalGain", "pIntegratorGain", "pDigitalSynthesizerGain", "pPhase",
    "pPreviousSample", "pActualPhaseOffset", "pLoopFilterState",
    "pIntegFilterState", "pDDSPreviousInput" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 17, fieldNames, 0U, 0);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = c_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "inputVarSize1";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "inputVarSize1")), &thisId, y->inputVarSize1);
  thisId.fIdentifier = "ModulationPhaseOffset";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "ModulationPhaseOffset")), &thisId, y->ModulationPhaseOffset);
  thisId.fIdentifier = "CustomPhaseOffset";
  y->CustomPhaseOffset = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "CustomPhaseOffset")), &thisId);
  thisId.fIdentifier = "SamplesPerSymbol";
  y->SamplesPerSymbol = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "SamplesPerSymbol")), &thisId);
  thisId.fIdentifier = "DampingFactor";
  y->DampingFactor = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "DampingFactor")), &thisId);
  thisId.fIdentifier = "NormalizedLoopBandwidth";
  y->NormalizedLoopBandwidth = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "NormalizedLoopBandwidth")), &thisId);
  thisId.fIdentifier = "pProportionalGain";
  y->pProportionalGain = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pProportionalGain")), &thisId);
  thisId.fIdentifier = "pIntegratorGain";
  y->pIntegratorGain = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pIntegratorGain")), &thisId);
  thisId.fIdentifier = "pDigitalSynthesizerGain";
  y->pDigitalSynthesizerGain = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pDigitalSynthesizerGain")), &thisId);
  thisId.fIdentifier = "pPhase";
  y->pPhase = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pPhase")), &thisId);
  thisId.fIdentifier = "pPreviousSample";
  y->pPreviousSample = h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pPreviousSample")), &thisId);
  thisId.fIdentifier = "pActualPhaseOffset";
  y->pActualPhaseOffset = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pActualPhaseOffset")), &thisId);
  thisId.fIdentifier = "pLoopFilterState";
  y->pLoopFilterState = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pLoopFilterState")), &thisId);
  thisId.fIdentifier = "pIntegFilterState";
  y->pIntegFilterState = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pIntegFilterState")), &thisId);
  thisId.fIdentifier = "pDDSPreviousInput";
  y->pDDSPreviousInput = g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "pDDSPreviousInput")), &thisId);
  emlrtDestroyArray(&u);
}

static int32_T c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  int32_T y;
  y = j_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  boolean_T y;
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, uint32_T y[8])
{
  l_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[4])
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static creal_T h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  creal_T y;
  y = o_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T i_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
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

static void mw__internal__setSimState__fcn(InstanceStruct_51kbyQVPDkrPJnyVpDcu4F
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, "sysobj", u, 0)),
                   "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = i_emlrt_marshallIn(emlrtAlias(emlrtGetCell
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

static int32_T j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  int32_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "int32", false, 0U, 0);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 0U,
    0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, uint32_T ret[8])
{
  int32_T iv49[2];
  int32_T i7;
  for (i7 = 0; i7 < 2; i7++) {
    iv49[i7] = 1 + 7 * i7;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "uint32", false, 2U,
    iv49);
  for (i7 = 0; i7 < 8; i7++) {
    ret[i7] = (*(uint32_T (*)[8])mxGetData(src))[i7];
  }

  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[4])
{
  int32_T iv50[2];
  int32_T i8;
  for (i8 = 0; i8 < 2; i8++) {
    iv50[i8] = 1 + 3 * i8;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "char", false, 2U,
    iv50);
  emlrtImportCharArrayR2014b(emlrtRootTLSGlobal, src, ret, 4);
  emlrtDestroyArray(&src);
}

static real_T n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static creal_T o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  creal_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", true, 0U, 0);
  emlrtImportArrayR2011b(src, &ret, 8, true);
  emlrtDestroyArray(&src);
  return ret;
}

/* CGXE Glue Code */
static void mdlOutputs_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S, int_T tid)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_outputs(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlInitialize_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_initialize(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlUpdate_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S, int_T tid)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_update(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static mxArray* getSimState_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  mxArray* mxSS;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  return mxSS;
}

static void setSimState_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
  CGXERT_LEAVE_CHECK();
}

static void mdlTerminate_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  cgxe_mdl_terminate(moduleInstance);
  CGXERT_LEAVE_CHECK();
  free((void *)moduleInstance);
  ssSetUserData(S, NULL);
}

static void mdlStart_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S)
{
  InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *moduleInstance;
  moduleInstance = (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F *)calloc(1, sizeof
    (InstanceStruct_51kbyQVPDkrPJnyVpDcu4F));
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

  ssSetmdlOutputs(S, mdlOutputs_51kbyQVPDkrPJnyVpDcu4F);
  ssSetmdlInitializeConditions(S, mdlInitialize_51kbyQVPDkrPJnyVpDcu4F);
  ssSetmdlUpdate(S, mdlUpdate_51kbyQVPDkrPJnyVpDcu4F);
  ssSetmdlTerminate(S, mdlTerminate_51kbyQVPDkrPJnyVpDcu4F);
}

static void mdlProcessParameters_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S)
{
}

void method_dispatcher_51kbyQVPDkrPJnyVpDcu4F(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_51kbyQVPDkrPJnyVpDcu4F(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_51kbyQVPDkrPJnyVpDcu4F(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_51kbyQVPDkrPJnyVpDcu4F(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_51kbyQVPDkrPJnyVpDcu4F(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: 51kbyQVPDkrPJnyVpDcu4F.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

int autoInfer_dispatcher_51kbyQVPDkrPJnyVpDcu4F(mxArray* plhs[], const char
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

mxArray *cgxe_51kbyQVPDkrPJnyVpDcu4F_BuildInfoUpdate(void)
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
