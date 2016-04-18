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
// CnControls.VirtualAxis
struct VirtualAxis_t3870720551;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.DpadAxis
struct  DpadAxis_t639718155  : public MonoBehaviour_t3012272455
{
public:
	// System.String CnControls.DpadAxis::AxisName
	String_t* ___AxisName_2;
	// System.Single CnControls.DpadAxis::AxisMultiplier
	float ___AxisMultiplier_3;
	// CnControls.VirtualAxis CnControls.DpadAxis::_virtualAxis
	VirtualAxis_t3870720551 * ____virtualAxis_4;
	// UnityEngine.RectTransform CnControls.DpadAxis::<RectTransform>k__BackingField
	RectTransform_t3317474837 * ___U3CRectTransformU3Ek__BackingField_5;
	// System.Int32 CnControls.DpadAxis::<LastFingerId>k__BackingField
	int32_t ___U3CLastFingerIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_AxisName_2() { return static_cast<int32_t>(offsetof(DpadAxis_t639718155, ___AxisName_2)); }
	inline String_t* get_AxisName_2() const { return ___AxisName_2; }
	inline String_t** get_address_of_AxisName_2() { return &___AxisName_2; }
	inline void set_AxisName_2(String_t* value)
	{
		___AxisName_2 = value;
		Il2CppCodeGenWriteBarrier(&___AxisName_2, value);
	}

	inline static int32_t get_offset_of_AxisMultiplier_3() { return static_cast<int32_t>(offsetof(DpadAxis_t639718155, ___AxisMultiplier_3)); }
	inline float get_AxisMultiplier_3() const { return ___AxisMultiplier_3; }
	inline float* get_address_of_AxisMultiplier_3() { return &___AxisMultiplier_3; }
	inline void set_AxisMultiplier_3(float value)
	{
		___AxisMultiplier_3 = value;
	}

	inline static int32_t get_offset_of__virtualAxis_4() { return static_cast<int32_t>(offsetof(DpadAxis_t639718155, ____virtualAxis_4)); }
	inline VirtualAxis_t3870720551 * get__virtualAxis_4() const { return ____virtualAxis_4; }
	inline VirtualAxis_t3870720551 ** get_address_of__virtualAxis_4() { return &____virtualAxis_4; }
	inline void set__virtualAxis_4(VirtualAxis_t3870720551 * value)
	{
		____virtualAxis_4 = value;
		Il2CppCodeGenWriteBarrier(&____virtualAxis_4, value);
	}

	inline static int32_t get_offset_of_U3CRectTransformU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DpadAxis_t639718155, ___U3CRectTransformU3Ek__BackingField_5)); }
	inline RectTransform_t3317474837 * get_U3CRectTransformU3Ek__BackingField_5() const { return ___U3CRectTransformU3Ek__BackingField_5; }
	inline RectTransform_t3317474837 ** get_address_of_U3CRectTransformU3Ek__BackingField_5() { return &___U3CRectTransformU3Ek__BackingField_5; }
	inline void set_U3CRectTransformU3Ek__BackingField_5(RectTransform_t3317474837 * value)
	{
		___U3CRectTransformU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRectTransformU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CLastFingerIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DpadAxis_t639718155, ___U3CLastFingerIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CLastFingerIdU3Ek__BackingField_6() const { return ___U3CLastFingerIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CLastFingerIdU3Ek__BackingField_6() { return &___U3CLastFingerIdU3Ek__BackingField_6; }
	inline void set_U3CLastFingerIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CLastFingerIdU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
