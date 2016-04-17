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
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CnControls_ControlMovementDirect3138788558.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.Touchpad
struct  Touchpad_t2440189455  : public MonoBehaviour_t3012272455
{
public:
	// System.String CnControls.Touchpad::HorizontalAxisName
	String_t* ___HorizontalAxisName_2;
	// System.String CnControls.Touchpad::VerticalAxisName
	String_t* ___VerticalAxisName_3;
	// System.Boolean CnControls.Touchpad::PreserveInertia
	bool ___PreserveInertia_4;
	// System.Single CnControls.Touchpad::Friction
	float ___Friction_5;
	// CnControls.VirtualAxis CnControls.Touchpad::_horizintalAxis
	VirtualAxis_t3870720551 * ____horizintalAxis_6;
	// CnControls.VirtualAxis CnControls.Touchpad::_verticalAxis
	VirtualAxis_t3870720551 * ____verticalAxis_7;
	// System.Int32 CnControls.Touchpad::_lastDragFrameNumber
	int32_t ____lastDragFrameNumber_8;
	// System.Boolean CnControls.Touchpad::_isCurrentlyTweaking
	bool ____isCurrentlyTweaking_9;
	// CnControls.ControlMovementDirection CnControls.Touchpad::ControlMoveAxis
	int32_t ___ControlMoveAxis_10;
	// UnityEngine.Camera CnControls.Touchpad::<CurrentEventCamera>k__BackingField
	Camera_t3533968274 * ___U3CCurrentEventCameraU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_HorizontalAxisName_2() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___HorizontalAxisName_2)); }
	inline String_t* get_HorizontalAxisName_2() const { return ___HorizontalAxisName_2; }
	inline String_t** get_address_of_HorizontalAxisName_2() { return &___HorizontalAxisName_2; }
	inline void set_HorizontalAxisName_2(String_t* value)
	{
		___HorizontalAxisName_2 = value;
		Il2CppCodeGenWriteBarrier(&___HorizontalAxisName_2, value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_3() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___VerticalAxisName_3)); }
	inline String_t* get_VerticalAxisName_3() const { return ___VerticalAxisName_3; }
	inline String_t** get_address_of_VerticalAxisName_3() { return &___VerticalAxisName_3; }
	inline void set_VerticalAxisName_3(String_t* value)
	{
		___VerticalAxisName_3 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxisName_3, value);
	}

	inline static int32_t get_offset_of_PreserveInertia_4() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___PreserveInertia_4)); }
	inline bool get_PreserveInertia_4() const { return ___PreserveInertia_4; }
	inline bool* get_address_of_PreserveInertia_4() { return &___PreserveInertia_4; }
	inline void set_PreserveInertia_4(bool value)
	{
		___PreserveInertia_4 = value;
	}

	inline static int32_t get_offset_of_Friction_5() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___Friction_5)); }
	inline float get_Friction_5() const { return ___Friction_5; }
	inline float* get_address_of_Friction_5() { return &___Friction_5; }
	inline void set_Friction_5(float value)
	{
		___Friction_5 = value;
	}

	inline static int32_t get_offset_of__horizintalAxis_6() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ____horizintalAxis_6)); }
	inline VirtualAxis_t3870720551 * get__horizintalAxis_6() const { return ____horizintalAxis_6; }
	inline VirtualAxis_t3870720551 ** get_address_of__horizintalAxis_6() { return &____horizintalAxis_6; }
	inline void set__horizintalAxis_6(VirtualAxis_t3870720551 * value)
	{
		____horizintalAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&____horizintalAxis_6, value);
	}

	inline static int32_t get_offset_of__verticalAxis_7() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ____verticalAxis_7)); }
	inline VirtualAxis_t3870720551 * get__verticalAxis_7() const { return ____verticalAxis_7; }
	inline VirtualAxis_t3870720551 ** get_address_of__verticalAxis_7() { return &____verticalAxis_7; }
	inline void set__verticalAxis_7(VirtualAxis_t3870720551 * value)
	{
		____verticalAxis_7 = value;
		Il2CppCodeGenWriteBarrier(&____verticalAxis_7, value);
	}

	inline static int32_t get_offset_of__lastDragFrameNumber_8() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ____lastDragFrameNumber_8)); }
	inline int32_t get__lastDragFrameNumber_8() const { return ____lastDragFrameNumber_8; }
	inline int32_t* get_address_of__lastDragFrameNumber_8() { return &____lastDragFrameNumber_8; }
	inline void set__lastDragFrameNumber_8(int32_t value)
	{
		____lastDragFrameNumber_8 = value;
	}

	inline static int32_t get_offset_of__isCurrentlyTweaking_9() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ____isCurrentlyTweaking_9)); }
	inline bool get__isCurrentlyTweaking_9() const { return ____isCurrentlyTweaking_9; }
	inline bool* get_address_of__isCurrentlyTweaking_9() { return &____isCurrentlyTweaking_9; }
	inline void set__isCurrentlyTweaking_9(bool value)
	{
		____isCurrentlyTweaking_9 = value;
	}

	inline static int32_t get_offset_of_ControlMoveAxis_10() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___ControlMoveAxis_10)); }
	inline int32_t get_ControlMoveAxis_10() const { return ___ControlMoveAxis_10; }
	inline int32_t* get_address_of_ControlMoveAxis_10() { return &___ControlMoveAxis_10; }
	inline void set_ControlMoveAxis_10(int32_t value)
	{
		___ControlMoveAxis_10 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Touchpad_t2440189455, ___U3CCurrentEventCameraU3Ek__BackingField_11)); }
	inline Camera_t3533968274 * get_U3CCurrentEventCameraU3Ek__BackingField_11() const { return ___U3CCurrentEventCameraU3Ek__BackingField_11; }
	inline Camera_t3533968274 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_11() { return &___U3CCurrentEventCameraU3Ek__BackingField_11; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_11(Camera_t3533968274 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventCameraU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
