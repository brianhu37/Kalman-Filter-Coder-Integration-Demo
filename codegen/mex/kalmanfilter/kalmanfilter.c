/*
 * kalmanfilter.c
 *
 * Code generation for function 'kalmanfilter'
 *
 */

/* Include files */
#include "kalmanfilter.h"
#include "_coder_kalmanfilter_mex.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
static real_T x_est[6];
static real_T p_est[36];
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131594U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "kalmanfilter",                      /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

static emlrtRSInfo emlrtRSI = { 26,    /* lineNo */
  "kalmanfilter",                      /* fcnName */
  "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\kalmanfiltercopy\\kalmanfilter.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 20,  /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 42,  /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 55,  /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 210, /* lineNo */
  "lusolve2x2",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 90,  /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 14,    /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtRSInfo g_emlrtRSI = { 14,  /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *z, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u[2]);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void kalmanfilter_init(void);
static void kalmanfilter_once(void);
static void warning(const emlrtStack *sp);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *z, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(z), &thisId);
  emlrtDestroyArray(&z);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[2])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[1] = { 0 };

  static const int32_T iv1[1] = { 2 };

  y = NULL;
  m = emlrtCreateNumericArray(1, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, iv1, 1);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "feval", true, location);
}

static void kalmanfilter_init(void)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    x_est[i] = 0.0;
  }

  /*  x_est=[x,y,Vx,Vy,Ax,Ay]' */
  memset(&p_est[0], 0, 36U * sizeof(real_T));
}

static void kalmanfilter_once(void)
{
  mex_InitInfAndNan();
  kalmanfilter_init();
}

static void warning(const emlrtStack *sp)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 7 };

  static const char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 21 };

  static const char_T msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 21, m2, &msgID[0]);
  emlrtAssign(&c_y, m2);
  st.site = &g_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
}

void kalmanfilter(const emlrtStack *sp, real_T z, real_T y[2])
{
  int32_T i;
  int8_T Q[36];
  int32_T k;
  real_T x_prd[6];
  int32_T i1;
  real_T d;
  int32_T r1;
  static const int8_T a[36] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 };

  real_T b_a[36];
  static const int8_T iv[36] = { 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1 };

  real_T p_prd[36];
  real_T S[4];
  real_T B[12];
  static const int8_T c_a[12] = { 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 };

  int32_T r2;
  static const int8_T iv1[12] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 };

  real_T a21;
  static const int16_T R[4] = { 1000, 0, 0, 1000 };

  real_T a22_tmp;
  real_T a22;
  real_T Y[12];
  real_T b_z[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;

  /*    Copyright 2010 The MathWorks, Inc. */
  /*  Initialize state transition matrix */
  /*      % [x  ] */
  /*      % [y  ] */
  /*      % [Vx] */
  /*      % [Vy] */
  /*      % [Ax] */
  /*  [Ay] */
  /*  Initialize measurement matrix */
  for (i = 0; i < 36; i++) {
    Q[i] = 0;
  }

  /*  Initial state conditions */
  /*  Predicted state and covariance */
  for (k = 0; k < 6; k++) {
    Q[k + 6 * k] = 1;
    x_prd[k] = 0.0;
    for (i = 0; i < 6; i++) {
      r1 = k + 6 * i;
      x_prd[k] += (real_T)a[r1] * x_est[i];
      d = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        d += (real_T)a[k + 6 * i1] * p_est[i1 + 6 * i];
      }

      b_a[r1] = d;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (r1 = 0; r1 < 6; r1++) {
        d += b_a[i + 6 * r1] * (real_T)iv[r1 + 6 * i1];
      }

      r1 = i + 6 * i1;
      p_prd[r1] = d + (real_T)Q[r1];
    }
  }

  /*  Estimation */
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (r1 = 0; r1 < 6; r1++) {
        d += (real_T)c_a[i + (r1 << 1)] * p_prd[i1 + 6 * r1];
      }

      B[i + (i1 << 1)] = d;
    }

    for (i1 = 0; i1 < 2; i1++) {
      d = 0.0;
      for (r1 = 0; r1 < 6; r1++) {
        d += B[i + (r1 << 1)] * (real_T)iv1[r1 + 6 * i1];
      }

      r1 = i + (i1 << 1);
      S[r1] = d + (real_T)R[r1];
    }
  }

  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  if (muDoubleScalarAbs(S[1]) > muDoubleScalarAbs(S[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  a21 = S[r2] / S[r1];
  a22_tmp = S[r1 + 2];
  a22 = S[r2 + 2] - a21 * a22_tmp;
  if ((a22 == 0.0) || (S[r1] == 0.0)) {
    e_st.site = &e_emlrtRSI;
    f_st.site = &f_emlrtRSI;
    warning(&f_st);
  }

  for (k = 0; k < 6; k++) {
    i = k << 1;
    i1 = r1 + i;
    d = (B[r2 + i] - B[i1] * a21) / a22;
    Y[i + 1] = d;
    Y[i] = (B[i1] - d * a22_tmp) / S[r1];
  }

  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      B[i1 + 6 * i] = Y[i + (i1 << 1)];
    }
  }

  /*  Estimated state and covariance */
  for (i = 0; i < 2; i++) {
    d = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      d += (real_T)c_a[i + (i1 << 1)] * x_prd[i1];
    }

    b_z[i] = z - d;
  }

  for (i = 0; i < 6; i++) {
    d = B[i + 6];
    x_est[i] = x_prd[i] + (B[i] * b_z[0] + d * b_z[1]);
    for (i1 = 0; i1 < 6; i1++) {
      r1 = i1 << 1;
      b_a[i + 6 * i1] = B[i] * (real_T)c_a[r1] + d * (real_T)c_a[r1 + 1];
    }

    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      for (r1 = 0; r1 < 6; r1++) {
        d += b_a[i + 6 * r1] * p_prd[r1 + 6 * i1];
      }

      r1 = i + 6 * i1;
      p_est[r1] = p_prd[r1] - d;
    }
  }

  /*  Compute the estimated measurements */
  for (i = 0; i < 2; i++) {
    d = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      d += (real_T)c_a[i + (i1 << 1)] * x_est[i1];
    }

    y[i] = d;
  }

  /*  of the function */
}

void kalmanfilter_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray
                      *plhs[1])
{
  real_T (*y)[2];
  real_T z;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  y = (real_T (*)[2])mxMalloc(sizeof(real_T [2]));

  /* Marshall function inputs */
  z = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "z");

  /* Invoke the target function */
  kalmanfilter(&st, z, *y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*y);
}

void kalmanfilter_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void kalmanfilter_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    kalmanfilter_once();
  }
}

void kalmanfilter_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (kalmanfilter.c) */
