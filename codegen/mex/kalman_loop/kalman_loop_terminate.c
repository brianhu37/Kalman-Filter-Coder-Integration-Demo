/*
 * kalman_loop_terminate.c
 *
 * Code generation for function 'kalman_loop_terminate'
 *
 */

/* Include files */
#include "kalman_loop_terminate.h"
#include "_coder_kalman_loop_mex.h"
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void kalman_loop_atexit(void)
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

void kalman_loop_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (kalman_loop_terminate.c) */
