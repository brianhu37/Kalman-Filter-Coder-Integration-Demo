/*
 * kalman_loop.c
 *
 * Code generation for function 'kalman_loop'
 *
 */

/* Include files */
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "kalman_loop",                       /* fcnName */
  "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\Kalman Filter Integration Demo\\kalman_loop.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 26,  /* lineNo */
  "kalmanfilter",                      /* fcnName */
  "C:\\Users\\brianhu\\Desktop\\Marketing Projects\\CAL Project\\Kalman Filter Integration Demo\\kalmanfilter.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 20,  /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 42,  /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 55,  /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 210, /* lineNo */
  "lusolve2x2",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 90,  /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

/* Function Definitions */
void kalman_loop(const emlrtStack *sp, const real_T z[620], real_T y[620])
{
  int32_T n;
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
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;

  /*    Copyright 2010 The MathWorks, Inc. */
  /*  Call Kalman estimator in the loop for large data set testing */
  /*  Initialize output */
  for (n = 0; n < 310; n++) {
    /*  Output in the loop */
    st.site = &emlrtRSI;

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

    b_st.site = &b_emlrtRSI;
    c_st.site = &c_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    e_st.site = &e_emlrtRSI;
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
      f_st.site = &f_emlrtRSI;
      g_st.site = &g_emlrtRSI;
      warning(&g_st);
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

      b_z[i] = z[i + (n << 1)] - d;
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
    /*  Single precision output */
    /* out = single(a) * b; */
    /*  Double precision output */
    for (i = 0; i < 2; i++) {
      d = 0.0;
      for (i1 = 0; i1 < 6; i1++) {
        d += (real_T)c_a[i + (i1 << 1)] * x_est[i1];
      }

      y[i + (n << 1)] = d;
    }

    /* y = H * x_est; */
    /*  of the function */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (kalman_loop.c) */
