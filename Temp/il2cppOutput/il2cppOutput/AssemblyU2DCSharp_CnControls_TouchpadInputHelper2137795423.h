#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CnControls.Touchpad
struct Touchpad_t2440189455;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "AssemblyU2DCSharp_CnControls_BaseInputHelper3918482786.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.TouchpadInputHelper
struct  TouchpadInputHelper_t2137795423  : public BaseInputHelper_t3918482786
{
public:
	// CnControls.Touchpad CnControls.TouchpadInputHelper::_linkedTouchpad
	Touchpad_t2440189455 * ____linkedTouchpad_5;
	// UnityEngine.RectTransform CnControls.TouchpadInputHelper::_touchpadTouchRect
	RectTransform_t3317474837 * ____touchpadTouchRect_6;

public:
	inline static int32_t get_offset_of__linkedTouchpad_5() { return static_cast<int32_t>(offsetof(TouchpadInputHelper_t2137795423, ____linkedTouchpad_5)); }
	inline Touchpad_t2440189455 * get__linkedTouchpad_5() const { return ____linkedTouchpad_5; }
	inline Touchpad_t2440189455 ** get_address_of__linkedTouchpad_5() { return &____linkedTouchpad_5; }
	inline void set__linkedTouchpad_5(Touchpad_t2440189455 * value)
	{
		____linkedTouchpad_5 = value;
		Il2CppCodeGenWriteBarrier(&____linkedTouchpad_5, value);
	}

	inline static int32_t get_offset_of__touchpadTouchRect_6() { return static_cast<int32_t>(offsetof(TouchpadInputHelper_t2137795423, ____touchpadTouchRect_6)); }
	inline RectTransform_t3317474837 * get__touchpadTouchRect_6() const { return ____touchpadTouchRect_6; }
	inline RectTransform_t3317474837 ** get_address_of__touchpadTouchRect_6() { return &____touchpadTouchRect_6; }
	inline void set__touchpadTouchRect_6(RectTransform_t3317474837 * value)
	{
		____touchpadTouchRect_6 = value;
		Il2CppCodeGenWriteBarrier(&____touchpadTouchRect_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
