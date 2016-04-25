#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// CnControls.VirtualButton
struct VirtualButton_t3983641336;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleButton
struct  SimpleButton_t1495787679  : public MonoBehaviour_t3012272455
{
public:
	// System.String CnControls.SimpleButton::ButtonName
	String_t* ___ButtonName_2;
	// CnControls.VirtualButton CnControls.SimpleButton::_virtualButton
	VirtualButton_t3983641336 * ____virtualButton_3;

public:
	inline static int32_t get_offset_of_ButtonName_2() { return static_cast<int32_t>(offsetof(SimpleButton_t1495787679, ___ButtonName_2)); }
	inline String_t* get_ButtonName_2() const { return ___ButtonName_2; }
	inline String_t** get_address_of_ButtonName_2() { return &___ButtonName_2; }
	inline void set_ButtonName_2(String_t* value)
	{
		___ButtonName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonName_2, value);
	}

	inline static int32_t get_offset_of__virtualButton_3() { return static_cast<int32_t>(offsetof(SimpleButton_t1495787679, ____virtualButton_3)); }
	inline VirtualButton_t3983641336 * get__virtualButton_3() const { return ____virtualButton_3; }
	inline VirtualButton_t3983641336 ** get_address_of__virtualButton_3() { return &____virtualButton_3; }
	inline void set__virtualButton_3(VirtualButton_t3983641336 * value)
	{
		____virtualButton_3 = value;
		Il2CppCodeGenWriteBarrier(&____virtualButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
