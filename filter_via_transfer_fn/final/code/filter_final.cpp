//
//  Student License - for use by students to meet course requirements and
//  perform academic research at degree granting institutions only.  Not
//  for government, commercial, or other organizational use.
//
//  filter_final.cpp
//
//  Code generation for function 'filter_final'
//


// Include files
#include "filter_final.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <cstring>

// Function Definitions
void filter_final(const double b[11], const double a[11], const double r[101],
                  double y[101])
{
  double b_a[11];
  double b_b[11];
  double a1;
  int k;
  std::memcpy(&b_b[0], &b[0], 11U * sizeof(double));
  std::memcpy(&b_a[0], &a[0], 11U * sizeof(double));
  a1 = a[0];
  if ((!rtIsInf(a[0])) && (!rtIsNaN(a[0])) && (!(a[0] == 0.0)) && (a[0] != 1.0))
  {
    for (k = 0; k < 11; k++) {
      b_b[k] /= a1;
    }

    for (k = 0; k < 10; k++) {
      b_a[k + 1] /= a1;
    }

    b_a[0] = 1.0;
  }

  std::memset(&y[0], 0, 101U * sizeof(double));
  for (k = 0; k < 101; k++) {
    int j;
    int naxpy;
    int y_tmp;
    if (101 - k < 11) {
      naxpy = 100 - k;
    } else {
      naxpy = 10;
    }

    for (j = 0; j <= naxpy; j++) {
      y_tmp = k + j;
      y[y_tmp] += r[k] * b_b[j];
    }

    if (100 - k < 10) {
      naxpy = 99 - k;
    } else {
      naxpy = 9;
    }

    a1 = -y[k];
    for (j = 0; j <= naxpy; j++) {
      y_tmp = (k + j) + 1;
      y[y_tmp] += a1 * b_a[j + 1];
    }
  }
}

// End of code generation (filter_final.cpp)
