#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// LastPlayerSighting
struct LastPlayerSighting_t4096976764;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CCTVPlayerDetection
struct  CCTVPlayerDetection_t1955256674  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject CCTVPlayerDetection::player
	GameObject_t4012695102 * ___player_2;
	// LastPlayerSighting CCTVPlayerDetection::lastPlayerSighting
	LastPlayerSighting_t4096976764 * ___lastPlayerSighting_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CCTVPlayerDetection_t1955256674, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_lastPlayerSighting_3() { return static_cast<int32_t>(offsetof(CCTVPlayerDetection_t1955256674, ___lastPlayerSighting_3)); }
	inline LastPlayerSighting_t4096976764 * get_lastPlayerSighting_3() const { return ___lastPlayerSighting_3; }
	inline LastPlayerSighting_t4096976764 ** get_address_of_lastPlayerSighting_3() { return &___lastPlayerSighting_3; }
	inline void set_lastPlayerSighting_3(LastPlayerSighting_t4096976764 * value)
	{
		___lastPlayerSighting_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastPlayerSighting_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
