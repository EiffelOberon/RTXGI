/*
* Copyright (c) 2019-2023, NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION and its licensors retain all intellectual property
* and proprietary rights in and to this software, related documentation
* and any modifications thereto.  Any use, reproduction, disclosure or
* distribution of this software and related documentation without an express
* license agreement from NVIDIA CORPORATION is strictly prohibited.
*/

#pragma once

#include "Scenes.h"

namespace Caches
{
    bool Serialize(const std::string& filepath, Scenes::Scene& scene, std::ofstream& log);
    bool Deserialize(const std::string& filepath, Scenes::Scene& scene, std::ofstream& log);
}
