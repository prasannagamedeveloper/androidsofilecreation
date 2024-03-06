//
//  CLI2Hook.cpp
//  CLI2New
//
//  Created by Sarav Kanna on 19/02/24.
//

#include "CLI2Hook.hpp"
#include "cpp/CLI2Realtime.h"
using namespace CLI2;

extern "C" void GetCLI2Baseline(double* EOData,double* ECData,double* alpha_feature,double* estimatedParams){
    ClI2Baseline(EOData, ECData, alpha_feature, estimatedParams);
}
extern "C" int getTestNumber() {
    return 42;
}


extern "C" void GetCLI2Realtime(double* data, double* z1Data,int* z1Size,double* z2Data,int* z2Size,double* spec,int* specSize,double isFirsttime,double* alpha_feature,double* estimatedParams,double* out,double* z12Data,double* z22Data, double* spec1,int* spec1Size){
    ::coder::array<double, 3U> tempSpec;
    ::coder::array<double, 3U> temp_Spec;
    tempSpec.set_size(specSize[0],specSize[1],specSize[2]);
    int index = 0;
    for(int i=0;i<specSize[0];i++)
    {
        for(int j=0;j<specSize[1];j++)
        {
            for(int k=0;k<specSize[2];k++)
            {
                tempSpec[index] = spec[index];
                index++;
            }
        }
    }
    CLI2Realtime(data, z1Data, z1Size, z2Data, z2Size, tempSpec, isFirsttime, alpha_feature, estimatedParams, out, z12Data, z22Data, temp_Spec);
    index = 0;
    for(int i=0;i<temp_Spec.size(0);i++)
    {
        for(int j=0;j<temp_Spec.size(1);j++)
        {
            for(int k=0;k<temp_Spec.size(2);k++)
            {
                spec1[index] = temp_Spec[index];
                index++;
            }
        }
    }
    spec1Size[0] =index/840;
    spec1Size[1] =8;
    spec1Size[2] =105;
    
}

