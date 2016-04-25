#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalScoreManager
struct  FinalScoreManager_t4195489073  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text FinalScoreManager::finalScore
	Text_t3286458198 * ___finalScore_2;

public:
	inline static int32_t get_offset_of_finalScore_2() { return static_cast<int32_t>(offsetof(FinalScoreManager_t4195489073, ___finalScore_2)); }
	inline Text_t3286458198 * get_finalScore_2() const { return ___finalScore_2; }
	inline Text_t3286458198 ** get_address_of_finalScore_2() { return &___finalScore_2; }
	inline void set_finalScore_2(Text_t3286458198 * value)
	{
		___finalScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___finalScore_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
