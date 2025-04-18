/*
* Copyright (c) 2019-2023, NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION and its licensors retain all intellectual property
* and proprietary rights in and to this software, related documentation
* and any modifications thereto.  Any use, reproduction, disclosure or
* distribution of this software and related documentation without an express
* license agreement from NVIDIA CORPORATION is strictly prohibited.
*/

#include "include/Descriptors.hlsl"
#include "include/RayTracing.hlsl"

// ---[ Miss Shader ]---

[shader("miss")]
void Miss(inout PackedPayload packedPayload)
{
    packedPayload.hitT = -1.f;
}
