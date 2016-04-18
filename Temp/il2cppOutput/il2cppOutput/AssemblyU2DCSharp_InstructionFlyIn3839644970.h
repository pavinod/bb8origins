#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionFlyIn
struct  InstructionFlyIn_t3839644970  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator InstructionFlyIn::animator
	Animator_t792326996 * ___animator_2;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(InstructionFlyIn_t3839644970, ___animator_2)); }
	inline Animator_t792326996 * get_animator_2() const { return ___animator_2; }
	inline Animator_t792326996 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t792326996 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
