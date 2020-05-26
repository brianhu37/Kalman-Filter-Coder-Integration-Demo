/*
 * _coder_kalman_loop_mex.c
 *
 * Code generation for function '_coder_kalman_loop_mex'
 *
 */

/* Include files */
#include "_coder_kalman_loop_mex.h"
#include "_coder_kalman_loop_api.h"
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "kalman_loop_initialize.h"
#include "kalman_loop_terminate.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void kalman_loop_mexFunction(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
void kalman_loop_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const
  mxArray *prhs[1])
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
                        11, "kalman_loop");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "kalman_loop");
  }

  /* Call the function. */
  kalman_loop_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&kalman_loop_atexit);

  /* Module initialization. */
  kalman_loop_initialize();

  /* Dispatch the entry-point. */
  kalman_loop_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  kalman_loop_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_kalman_loop_mex.c) */
