#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchPad
struct TouchPad_t3540058356;
// UnityEngine.UI.Text
struct Text_t3286458198;
// Joystick
struct Joystick_t3421498716;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Demo
struct  Demo_t2126339  : public MonoBehaviour_t3012272455
{
public:
	// TouchPad Demo::pad
	TouchPad_t3540058356 * ___pad_2;
	// UnityEngine.UI.Text Demo::TouchPadOutput
	Text_t3286458198 * ___TouchPadOutput_3;
	// Joystick Demo::stick
	Joystick_t3421498716 * ___stick_4;
	// UnityEngine.UI.Text Demo::JoystickOutput
	Text_t3286458198 * ___JoystickOutput_5;

public:
	inline static int32_t get_offset_of_pad_2() { return static_cast<int32_t>(offsetof(Demo_t2126339, ___pad_2)); }
	inline TouchPad_t3540058356 * get_pad_2() const { return ___pad_2; }
	inline TouchPad_t3540058356 ** get_address_of_pad_2() { return &___pad_2; }
	inline void set_pad_2(TouchPad_t3540058356 * value)
	{
		___pad_2 = value;
		Il2CppCodeGenWriteBarrier(&___pad_2, value);
	}

	inline static int32_t get_offset_of_TouchPadOutput_3() { return static_cast<int32_t>(offsetof(Demo_t2126339, ___TouchPadOutput_3)); }
	inline Text_t3286458198 * get_TouchPadOutput_3() const { return ___TouchPadOutput_3; }
	inline Text_t3286458198 ** get_address_of_TouchPadOutput_3() { return &___TouchPadOutput_3; }
	inline void set_TouchPadOutput_3(Text_t3286458198 * value)
	{
		___TouchPadOutput_3 = value;
		Il2CppCodeGenWriteBarrier(&___TouchPadOutput_3, value);
	}

	inline static int32_t get_offset_of_stick_4() { return static_cast<int32_t>(offsetof(Demo_t2126339, ___stick_4)); }
	inline Joystick_t3421498716 * get_stick_4() const { return ___stick_4; }
	inline Joystick_t3421498716 ** get_address_of_stick_4() { return &___stick_4; }
	inline void set_stick_4(Joystick_t3421498716 * value)
	{
		___stick_4 = value;
		Il2CppCodeGenWriteBarrier(&___stick_4, value);
	}

	inline static int32_t get_offset_of_JoystickOutput_5() { return static_cast<int32_t>(offsetof(Demo_t2126339, ___JoystickOutput_5)); }
	inline Text_t3286458198 * get_JoystickOutput_5() const { return ___JoystickOutput_5; }
	inline Text_t3286458198 ** get_address_of_JoystickOutput_5() { return &___JoystickOutput_5; }
	inline void set_JoystickOutput_5(Text_t3286458198 * value)
	{
		___JoystickOutput_5 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickOutput_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
