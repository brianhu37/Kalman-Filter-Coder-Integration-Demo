/*
 * kalman_loop_data.c
 *
 * Code generation for function 'kalman_loop_data'
 *
 */

/* Include files */
#include "kalman_loop_data.h"
#include "kalman_loop.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
real_T x_est[6];
real_T p_est[36];
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131594U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "kalman_loop",                       /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* End of code generation (kalman_loop_data.c) */
