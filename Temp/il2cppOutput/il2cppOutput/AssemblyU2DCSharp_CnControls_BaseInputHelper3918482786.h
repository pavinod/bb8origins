#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.BaseInputHelper
struct  BaseInputHelper_t3918482786  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.EventSystems.PointerEventData CnControls.BaseInputHelper::PointerEventDataCache
	PointerEventData_t3205101634 * ___PointerEventDataCache_2;
	// System.Int32 CnControls.BaseInputHelper::LastFingerId
	int32_t ___LastFingerId_3;
	// UnityEngine.Camera CnControls.BaseInputHelper::UiRootCamera
	Camera_t3533968274 * ___UiRootCamera_4;

public:
	inline static int32_t get_offset_of_PointerEventDataCache_2() { return static_cast<int32_t>(offsetof(BaseInputHelper_t3918482786, ___PointerEventDataCache_2)); }
	inline PointerEventData_t3205101634 * get_PointerEventDataCache_2() const { return ___PointerEventDataCache_2; }
	inline PointerEventData_t3205101634 ** get_address_of_PointerEventDataCache_2() { return &___PointerEventDataCache_2; }
	inline void set_PointerEventDataCache_2(PointerEventData_t3205101634 * value)
	{
		___PointerEventDataCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___PointerEventDataCache_2, value);
	}

	inline static int32_t get_offset_of_LastFingerId_3() { return static_cast<int32_t>(offsetof(BaseInputHelper_t3918482786, ___LastFingerId_3)); }
	inline int32_t get_LastFingerId_3() const { return ___LastFingerId_3; }
	inline int32_t* get_address_of_LastFingerId_3() { return &___LastFingerId_3; }
	inline void set_LastFingerId_3(int32_t value)
	{
		___LastFingerId_3 = value;
	}

	inline static int32_t get_offset_of_UiRootCamera_4() { return static_cast<int32_t>(offsetof(BaseInputHelper_t3918482786, ___UiRootCamera_4)); }
	inline Camera_t3533968274 * get_UiRootCamera_4() const { return ___UiRootCamera_4; }
	inline Camera_t3533968274 ** get_address_of_UiRootCamera_4() { return &___UiRootCamera_4; }
	inline void set_UiRootCamera_4(Camera_t3533968274 * value)
	{
		___UiRootCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___UiRootCamera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
