#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t1596303683;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LastPlayerSighting
struct  LastPlayerSighting_t4096976764  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Vector3 LastPlayerSighting::position
	Vector3_t3525329789  ___position_3;
	// UnityEngine.Vector3 LastPlayerSighting::resetPosition
	Vector3_t3525329789  ___resetPosition_4;
	// System.Single LastPlayerSighting::lightHighIntensity
	float ___lightHighIntensity_5;
	// System.Single LastPlayerSighting::lightLowIntensity
	float ___lightLowIntensity_6;
	// UnityEngine.Light LastPlayerSighting::mainLight
	Light_t1596303683 * ___mainLight_7;
	// UnityEngine.AudioSource LastPlayerSighting::sirenAudio
	AudioSource_t3628549054 * ___sirenAudio_8;

public:
	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___position_3)); }
	inline Vector3_t3525329789  get_position_3() const { return ___position_3; }
	inline Vector3_t3525329789 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t3525329789  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_resetPosition_4() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___resetPosition_4)); }
	inline Vector3_t3525329789  get_resetPosition_4() const { return ___resetPosition_4; }
	inline Vector3_t3525329789 * get_address_of_resetPosition_4() { return &___resetPosition_4; }
	inline void set_resetPosition_4(Vector3_t3525329789  value)
	{
		___resetPosition_4 = value;
	}

	inline static int32_t get_offset_of_lightHighIntensity_5() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___lightHighIntensity_5)); }
	inline float get_lightHighIntensity_5() const { return ___lightHighIntensity_5; }
	inline float* get_address_of_lightHighIntensity_5() { return &___lightHighIntensity_5; }
	inline void set_lightHighIntensity_5(float value)
	{
		___lightHighIntensity_5 = value;
	}

	inline static int32_t get_offset_of_lightLowIntensity_6() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___lightLowIntensity_6)); }
	inline float get_lightLowIntensity_6() const { return ___lightLowIntensity_6; }
	inline float* get_address_of_lightLowIntensity_6() { return &___lightLowIntensity_6; }
	inline void set_lightLowIntensity_6(float value)
	{
		___lightLowIntensity_6 = value;
	}

	inline static int32_t get_offset_of_mainLight_7() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___mainLight_7)); }
	inline Light_t1596303683 * get_mainLight_7() const { return ___mainLight_7; }
	inline Light_t1596303683 ** get_address_of_mainLight_7() { return &___mainLight_7; }
	inline void set_mainLight_7(Light_t1596303683 * value)
	{
		___mainLight_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainLight_7, value);
	}

	inline static int32_t get_offset_of_sirenAudio_8() { return static_cast<int32_t>(offsetof(LastPlayerSighting_t4096976764, ___sirenAudio_8)); }
	inline AudioSource_t3628549054 * get_sirenAudio_8() const { return ___sirenAudio_8; }
	inline AudioSource_t3628549054 ** get_address_of_sirenAudio_8() { return &___sirenAudio_8; }
	inline void set_sirenAudio_8(AudioSource_t3628549054 * value)
	{
		___sirenAudio_8 = value;
		Il2CppCodeGenWriteBarrier(&___sirenAudio_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
