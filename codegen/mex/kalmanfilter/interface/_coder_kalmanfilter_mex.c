/*
 * _coder_kalmanfilter_mex.c
 *
 * Code generation for function '_coder_kalmanfilter_mex'
 *
 */

/* Include files */
#include "_coder_kalmanfilter_mex.h"
#include "kalmanfilter.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void kalmanfilter_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
void kalmanfilter_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        12, "kalmanfilter");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "kalmanfilter");
  }

  /* Call the function. */
  kalmanfilter_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&kalmanfilter_atexit);

  /* Module initialization. */
  kalmanfilter_initialize();

  /* Dispatch the entry-point. */
  kalmanfilter_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  kalmanfilter_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_kalmanfilter_mex.c) */
