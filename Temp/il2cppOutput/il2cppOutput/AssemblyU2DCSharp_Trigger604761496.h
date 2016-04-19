#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Trigger
struct  Trigger_t604761496  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource Trigger::sirenAudio
	AudioSource_t3628549054 * ___sirenAudio_2;

public:
	inline static int32_t get_offset_of_sirenAudio_2() { return static_cast<int32_t>(offsetof(Trigger_t604761496, ___sirenAudio_2)); }
	inline AudioSource_t3628549054 * get_sirenAudio_2() const { return ___sirenAudio_2; }
	inline AudioSource_t3628549054 ** get_address_of_sirenAudio_2() { return &___sirenAudio_2; }
	inline void set_sirenAudio_2(AudioSource_t3628549054 * value)
	{
		___sirenAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___sirenAudio_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
