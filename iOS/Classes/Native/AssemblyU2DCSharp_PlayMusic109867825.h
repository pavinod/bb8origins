﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t3013571836;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMusic
struct  PlayMusic_t109867825  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip PlayMusic::titleMusic
	AudioClip_t3714538611 * ___titleMusic_2;
	// UnityEngine.AudioClip PlayMusic::mainMusic
	AudioClip_t3714538611 * ___mainMusic_3;
	// UnityEngine.Audio.AudioMixerSnapshot PlayMusic::volumeDown
	AudioMixerSnapshot_t3013571836 * ___volumeDown_4;
	// UnityEngine.Audio.AudioMixerSnapshot PlayMusic::volumeUp
	AudioMixerSnapshot_t3013571836 * ___volumeUp_5;
	// UnityEngine.AudioSource PlayMusic::musicSource
	AudioSource_t3628549054 * ___musicSource_6;
	// System.Single PlayMusic::resetTime
	float ___resetTime_7;

public:
	inline static int32_t get_offset_of_titleMusic_2() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___titleMusic_2)); }
	inline AudioClip_t3714538611 * get_titleMusic_2() const { return ___titleMusic_2; }
	inline AudioClip_t3714538611 ** get_address_of_titleMusic_2() { return &___titleMusic_2; }
	inline void set_titleMusic_2(AudioClip_t3714538611 * value)
	{
		___titleMusic_2 = value;
		Il2CppCodeGenWriteBarrier(&___titleMusic_2, value);
	}

	inline static int32_t get_offset_of_mainMusic_3() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___mainMusic_3)); }
	inline AudioClip_t3714538611 * get_mainMusic_3() const { return ___mainMusic_3; }
	inline AudioClip_t3714538611 ** get_address_of_mainMusic_3() { return &___mainMusic_3; }
	inline void set_mainMusic_3(AudioClip_t3714538611 * value)
	{
		___mainMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMusic_3, value);
	}

	inline static int32_t get_offset_of_volumeDown_4() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___volumeDown_4)); }
	inline AudioMixerSnapshot_t3013571836 * get_volumeDown_4() const { return ___volumeDown_4; }
	inline AudioMixerSnapshot_t3013571836 ** get_address_of_volumeDown_4() { return &___volumeDown_4; }
	inline void set_volumeDown_4(AudioMixerSnapshot_t3013571836 * value)
	{
		___volumeDown_4 = value;
		Il2CppCodeGenWriteBarrier(&___volumeDown_4, value);
	}

	inline static int32_t get_offset_of_volumeUp_5() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___volumeUp_5)); }
	inline AudioMixerSnapshot_t3013571836 * get_volumeUp_5() const { return ___volumeUp_5; }
	inline AudioMixerSnapshot_t3013571836 ** get_address_of_volumeUp_5() { return &___volumeUp_5; }
	inline void set_volumeUp_5(AudioMixerSnapshot_t3013571836 * value)
	{
		___volumeUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___volumeUp_5, value);
	}

	inline static int32_t get_offset_of_musicSource_6() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___musicSource_6)); }
	inline AudioSource_t3628549054 * get_musicSource_6() const { return ___musicSource_6; }
	inline AudioSource_t3628549054 ** get_address_of_musicSource_6() { return &___musicSource_6; }
	inline void set_musicSource_6(AudioSource_t3628549054 * value)
	{
		___musicSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_6, value);
	}

	inline static int32_t get_offset_of_resetTime_7() { return static_cast<int32_t>(offsetof(PlayMusic_t109867825, ___resetTime_7)); }
	inline float get_resetTime_7() const { return ___resetTime_7; }
	inline float* get_address_of_resetTime_7() { return &___resetTime_7; }
	inline void set_resetTime_7(float value)
	{
		___resetTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
