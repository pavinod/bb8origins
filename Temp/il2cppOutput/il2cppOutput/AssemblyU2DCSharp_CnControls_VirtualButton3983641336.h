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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.VirtualButton
struct  VirtualButton_t3983641336  : public Il2CppObject
{
public:
	// System.Int32 CnControls.VirtualButton::_lastPressedFrame
	int32_t ____lastPressedFrame_0;
	// System.Int32 CnControls.VirtualButton::_lastReleasedFrame
	int32_t ____lastReleasedFrame_1;
	// System.String CnControls.VirtualButton::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean CnControls.VirtualButton::<IsPressed>k__BackingField
	bool ___U3CIsPressedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__lastPressedFrame_0() { return static_cast<int32_t>(offsetof(VirtualButton_t3983641336, ____lastPressedFrame_0)); }
	inline int32_t get__lastPressedFrame_0() const { return ____lastPressedFrame_0; }
	inline int32_t* get_address_of__lastPressedFrame_0() { return &____lastPressedFrame_0; }
	inline void set__lastPressedFrame_0(int32_t value)
	{
		____lastPressedFrame_0 = value;
	}

	inline static int32_t get_offset_of__lastReleasedFrame_1() { return static_cast<int32_t>(offsetof(VirtualButton_t3983641336, ____lastReleasedFrame_1)); }
	inline int32_t get__lastReleasedFrame_1() const { return ____lastReleasedFrame_1; }
	inline int32_t* get_address_of__lastReleasedFrame_1() { return &____lastReleasedFrame_1; }
	inline void set__lastReleasedFrame_1(int32_t value)
	{
		____lastReleasedFrame_1 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VirtualButton_t3983641336, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CIsPressedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VirtualButton_t3983641336, ___U3CIsPressedU3Ek__BackingField_3)); }
	inline bool get_U3CIsPressedU3Ek__BackingField_3() const { return ___U3CIsPressedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsPressedU3Ek__BackingField_3() { return &___U3CIsPressedU3Ek__BackingField_3; }
	inline void set_U3CIsPressedU3Ek__BackingField_3(bool value)
	{
		___U3CIsPressedU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
