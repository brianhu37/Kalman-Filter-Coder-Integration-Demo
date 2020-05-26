/*
 * kalmanfilter.c
 *
 * Code generation for function 'kalmanfilter'
 *
 */

/* Include files */
#include "kalmanfilter.h"
#include "kalman_loop.h"
#include "kalman_loop_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void kalmanfilter_init(void)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    x_est[i] = 0.0;
  }

  /*  x_est=[x,y,Vx,Vy,Ax,Ay]' */
  memset(&p_est[0], 0, 36U * sizeof(real_T));
}

/* End of code generation (kalmanfilter.c) */
