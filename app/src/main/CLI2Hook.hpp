//
//  CLI2Hook.hpp
//  CLI2New
//
//  Created by Sarav Kanna on 19/02/24.
//

#ifndef CLI2Hook_hpp
#define CLI2Hook_hpp

#include <stdio.h>

#endif /* CLI2Hook_hpp */


extern "C" void GetCLI2Baseline(double* EOData,double* ECData,double* alpha_feature,double* estimatedParams);
extern "C" void GetCLI2Realtime(double* data, double* z1Data,int* z1Size,double* z2Data,int* z2Size,double* spec,int* specSize,double isFirsttime,double* alpha_feature,double* estimatedParams,double* out,double* z12Data,double* z22Data, double* spec1,int* spec1Size);
extern "C" int getTestNumber();
//GetCLI2Baseline

//EOData 120000(8*15000)8 channel one minute Eyesopen data clubbed as 120000
//ECData 120000(8*15000)8 channel one minute Eyesclosed data clubbed as 120000
//alpha_feature 8
//estimatedParams 8


//GetCLI2Realtime

//data 10000 (8*1250)8 channel 5 second data clubbed as 10000
//z1Data 64(8*8) for the first time call it should be empty then we need to copy data from z12Data
//z1Size 1
//z2Data 64(8*8) for the first time call it should be empty then we need to copy data from z22Data
//z2Size 1
//spec () for the first time call it should be empty then we need to copy data from spec1
//specSize 3for the first time call it should be empty then we need to copy data from spec1Size
//isFirsttime shoukld be 1 for the first time and it should be 0
//alpha_feature 8 output of baseline
//estimatedParams 8 output of baseline
//out 2 this will be empty for the first four time, it will return array of 2 from 5 time
//z12Data 64 (8*8)
//z22Data 64 (8*8)
//spec1 size will be defined in the spec1Size variable
//spec1Size
