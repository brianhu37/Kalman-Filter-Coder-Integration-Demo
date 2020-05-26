/*
 * kalmanfilter.h
 *
 * Code generation for function 'kalmanfilter'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "kalmanfilter_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
void kalmanfilter(const emlrtStack *sp, real_T z, real_T y[2]);
void kalmanfilter_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray
                      *plhs[1]);
void kalmanfilter_atexit(void);
void kalmanfilter_initialize(void);
void kalmanfilter_terminate(void);

/* End of code generation (kalmanfilter.h) */
