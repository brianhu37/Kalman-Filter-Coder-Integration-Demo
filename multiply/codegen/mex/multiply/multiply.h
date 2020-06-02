/*
 * multiply.h
 *
 * Code generation for function 'multiply'
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
#include "multiply_types.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
real32_T multiply(real_T a, real_T b);
void multiply_api(const mxArray * const prhs[2], int32_T nlhs, const mxArray
                  *plhs[1]);
void multiply_atexit(void);
void multiply_initialize(void);
void multiply_terminate(void);

/* End of code generation (multiply.h) */
