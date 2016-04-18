#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwitchScene2
struct  SwitchScene2_t1391114650  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Button SwitchScene2::button
	Button_t990034267 * ___button_2;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(SwitchScene2_t1391114650, ___button_2)); }
	inline Button_t990034267 * get_button_2() const { return ___button_2; }
	inline Button_t990034267 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t990034267 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
