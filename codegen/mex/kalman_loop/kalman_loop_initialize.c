/*
 * kalman_loop_initialize.c
 *
 * Code generation for function 'kalman_loop_initialize'
 *
 */

/* Include files */
#include "kalman_loop_initialize.h"
#include "_coder_kalman_loop_mex.h"
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "kalmanfilter.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void kalman_loop_once(void);

/* Function Definitions */
static void kalman_loop_once(void)
{
  mex_InitInfAndNan();
  kalmanfilter_init();
}

void kalman_loop_initialize(void)
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
    kalman_loop_once();
  }
}

/* End of code generation (kalman_loop_initialize.c) */
