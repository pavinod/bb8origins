﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t3148844886  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_t284553113 * ___target_2;
	// System.Single CameraFollow::smoothing
	float ___smoothing_3;
	// System.Single CameraFollow::rotateSpeed
	float ___rotateSpeed_4;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t3525329789  ___offset_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_smoothing_3() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___smoothing_3)); }
	inline float get_smoothing_3() const { return ___smoothing_3; }
	inline float* get_address_of_smoothing_3() { return &___smoothing_3; }
	inline void set_smoothing_3(float value)
	{
		___smoothing_3 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_4() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___rotateSpeed_4)); }
	inline float get_rotateSpeed_4() const { return ___rotateSpeed_4; }
	inline float* get_address_of_rotateSpeed_4() { return &___rotateSpeed_4; }
	inline void set_rotateSpeed_4(float value)
	{
		___rotateSpeed_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CameraFollow_t3148844886, ___offset_5)); }
	inline Vector3_t3525329789  get_offset_5() const { return ___offset_5; }
	inline Vector3_t3525329789 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector3_t3525329789  value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
