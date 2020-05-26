/*
 * kalman_loop.h
 *
 * Code generation for function 'kalman_loop'
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
#include "kalman_loop_types.h"

/* Function Declarations */
void kalman_loop(const emlrtStack *sp, const real_T z[620], real_T y[620]);

/* End of code generation (kalman_loop.h) */
