#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick
struct Joystick_t3421498716;
// TouchPad
struct TouchPad_t3540058356;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sample
struct  Sample_t2469159370  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Sample::speed
	float ___speed_2;
	// Joystick Sample::_Joystick
	Joystick_t3421498716 * ____Joystick_3;
	// TouchPad Sample::_TouchPad
	TouchPad_t3540058356 * ____TouchPad_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Sample_t2469159370, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of__Joystick_3() { return static_cast<int32_t>(offsetof(Sample_t2469159370, ____Joystick_3)); }
	inline Joystick_t3421498716 * get__Joystick_3() const { return ____Joystick_3; }
	inline Joystick_t3421498716 ** get_address_of__Joystick_3() { return &____Joystick_3; }
	inline void set__Joystick_3(Joystick_t3421498716 * value)
	{
		____Joystick_3 = value;
		Il2CppCodeGenWriteBarrier(&____Joystick_3, value);
	}

	inline static int32_t get_offset_of__TouchPad_4() { return static_cast<int32_t>(offsetof(Sample_t2469159370, ____TouchPad_4)); }
	inline TouchPad_t3540058356 * get__TouchPad_4() const { return ____TouchPad_4; }
	inline TouchPad_t3540058356 ** get_address_of__TouchPad_4() { return &____TouchPad_4; }
	inline void set__TouchPad_4(TouchPad_t3540058356 * value)
	{
		____TouchPad_4 = value;
		Il2CppCodeGenWriteBarrier(&____TouchPad_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
