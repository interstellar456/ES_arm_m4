//
//  Student License - for use by students to meet course requirements and
//  perform academic research at degree granting institutions only.  Not
//  for government, commercial, or other organizational use.
//
//  filter_rrr.cpp
//
//  Code generation for function 'filter_rrr'
//


// Include files
#include "filter_rrr.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <cstring>

// Function Definitions
void filter_rrr(const double b[11], double a, const double r[101], double y[101])
{
  double b_b[11];
  int k;
  std::memcpy(&b_b[0], &b[0], 11U * sizeof(double));
  if ((!rtIsInf(a)) && (!rtIsNaN(a)) && (!(a == 0.0)) && (a != 1.0)) {
    for (k = 0; k < 11; k++) {
      b_b[k] /= a;
    }
  }

  std::memset(&y[0], 0, 101U * sizeof(double));
  for (k = 0; k < 11; k++) {
    int b_k;
    b_k = k + 1;
    for (int j = b_k; j < 102; j++) {
      y[j - 1] += b_b[k] * r[(j - k) - 1];
    }
  }
}

// End of code generation (filter_rrr.cpp)
