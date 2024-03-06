//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: CLI2Realtime.h
//
// MATLAB Coder version            : 23.2
// C/C++ source code generated on  : 18-Feb-2024 18:29:23
//

#ifndef CLI2REALTIME_H
#define CLI2REALTIME_H

// Include Files
#include "rtwtypes.h"
#include "coder_array.h"
//#include "omp.h"
#include <cstddef>
#include <cstdlib>

// Variable Declarations
namespace CLI2 {
//extern omp_nest_lock_t ClI2Baseline_nestLockGlobal;
}

// Function Declarations
namespace CLI2 {
extern void CLI2Realtime(const double Data[10000], const double z1_data[],
                         int z1_size[2], const double z2_data[], int z2_size[2],
                         ::coder::array<double, 3U> &Spec, double isFirstTime,
                         const double alpha_feature[8],
                         const double estimated_params[8], double Out[2],
                         double z12[64], double z22[64],
                         ::coder::array<double, 3U> &Spec1);

extern void CLI2Realtime_initialize();

extern void CLI2Realtime_terminate();

extern void ClI2Baseline(const double EOdata[120000],
                         const double ECdata[120000], double alpha_feature[8],
                         double estimated_params[8]);



} // namespace CLI2


#endif
//
// File trailer for CLI2Realtime.h
//
// [EOF]
//
