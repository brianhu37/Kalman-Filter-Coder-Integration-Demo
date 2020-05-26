/*
 * _coder_kalman_loop_api.c
 *
 * Code generation for function '_coder_kalman_loop_api'
 *
 */

/* Include files */
#include "_coder_kalman_loop_api.h"
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[620];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[620];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *z, const
  char_T *identifier))[620];
static const mxArray *emlrt_marshallOut(const real_T u[620]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[620]
{
  real_T (*y)[620];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[620]
{
  real_T (*ret)[620];
  static const int32_T dims[2] = { 2, 310 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[620])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *z, const
  char_T *identifier))[620]
{
  real_T (*y)[620];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(z), &thisId);
  emlrtDestroyArray(&z);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[620])
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 0, 0 };

  static const int32_T iv1[2] = { 2, 310 };

  y = NULL;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, iv1, 2);
  emlrtAssign(&y, m);
  return y;
}

void kalman_loop_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray *
                     plhs[1])
{
  real_T (*y)[620];
  real_T (*z)[620];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  y = (real_T (*)[620])mxMalloc(sizeof(real_T [620]));

  /* Marshall function inputs */
  z = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "z");

  /* Invoke the target function */
  kalman_loop(&st, *z, *y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*y);
}

/* End of code generation (_coder_kalman_loop_api.c) */
