// ================================================================
// NVDLA Open Source Project
// 
// Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
// NVDLA Open Hardware License; Check "LICENSE" which comes with 
// this distribution for more information.
// ================================================================

// File Name: fp32_to_fp17.cpp

#include "vlibs.h"
#ifdef SYNTHESIS
#pragma hls_design top
#endif
void HLS_fp32_to_fp17 (
     ac_channel<vFp32Type>  & chn_a
    ,ac_channel<vFp17Type>  & chn_o
    )
{
    vFp32Type  a = chn_a.read();
   
    vFp17Type o = Fp32ToFp17(a);
    chn_o.write(o);
}
