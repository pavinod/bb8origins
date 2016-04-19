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
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// CnControls.VirtualAxis
struct VirtualAxis_t3870720551;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_CnControls_ControlMovementDirect3138788558.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleJoystick
struct  SimpleJoystick_t2444490281  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CnControls.SimpleJoystick::MovementRange
	float ___MovementRange_2;
	// System.String CnControls.SimpleJoystick::HorizontalAxisName
	String_t* ___HorizontalAxisName_3;
	// System.String CnControls.SimpleJoystick::VerticalAxisName
	String_t* ___VerticalAxisName_4;
	// System.Boolean CnControls.SimpleJoystick::HideOnRelease
	bool ___HideOnRelease_5;
	// System.Boolean CnControls.SimpleJoystick::MoveBase
	bool ___MoveBase_6;
	// System.Boolean CnControls.SimpleJoystick::SnapsToFinger
	bool ___SnapsToFinger_7;
	// CnControls.ControlMovementDirection CnControls.SimpleJoystick::JoystickMoveAxis
	int32_t ___JoystickMoveAxis_8;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::JoystickBase
	Image_t3354615620 * ___JoystickBase_9;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::Stick
	Image_t3354615620 * ___Stick_10;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::TouchZone
	RectTransform_t3317474837 * ___TouchZone_11;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialStickPosition
	Vector2_t3525329788  ____initialStickPosition_12;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_intermediateStickPosition
	Vector2_t3525329788  ____intermediateStickPosition_13;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialBasePosition
	Vector2_t3525329788  ____initialBasePosition_14;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_baseTransform
	RectTransform_t3317474837 * ____baseTransform_15;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_stickTransform
	RectTransform_t3317474837 * ____stickTransform_16;
	// System.Single CnControls.SimpleJoystick::_oneOverMovementRange
	float ____oneOverMovementRange_17;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::HorizintalAxis
	VirtualAxis_t3870720551 * ___HorizintalAxis_18;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::VerticalAxis
	VirtualAxis_t3870720551 * ___VerticalAxis_19;
	// UnityEngine.Camera CnControls.SimpleJoystick::<CurrentEventCamera>k__BackingField
	Camera_t3533968274 * ___U3CCurrentEventCameraU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_MovementRange_2() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___MovementRange_2)); }
	inline float get_MovementRange_2() const { return ___MovementRange_2; }
	inline float* get_address_of_MovementRange_2() { return &___MovementRange_2; }
	inline void set_MovementRange_2(float value)
	{
		___MovementRange_2 = value;
	}

	inline static int32_t get_offset_of_HorizontalAxisName_3() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___HorizontalAxisName_3)); }
	inline String_t* get_HorizontalAxisName_3() const { return ___HorizontalAxisName_3; }
	inline String_t** get_address_of_HorizontalAxisName_3() { return &___HorizontalAxisName_3; }
	inline void set_HorizontalAxisName_3(String_t* value)
	{
		___HorizontalAxisName_3 = value;
		Il2CppCodeGenWriteBarrier(&___HorizontalAxisName_3, value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_4() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___VerticalAxisName_4)); }
	inline String_t* get_VerticalAxisName_4() const { return ___VerticalAxisName_4; }
	inline String_t** get_address_of_VerticalAxisName_4() { return &___VerticalAxisName_4; }
	inline void set_VerticalAxisName_4(String_t* value)
	{
		___VerticalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxisName_4, value);
	}

	inline static int32_t get_offset_of_HideOnRelease_5() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___HideOnRelease_5)); }
	inline bool get_HideOnRelease_5() const { return ___HideOnRelease_5; }
	inline bool* get_address_of_HideOnRelease_5() { return &___HideOnRelease_5; }
	inline void set_HideOnRelease_5(bool value)
	{
		___HideOnRelease_5 = value;
	}

	inline static int32_t get_offset_of_MoveBase_6() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___MoveBase_6)); }
	inline bool get_MoveBase_6() const { return ___MoveBase_6; }
	inline bool* get_address_of_MoveBase_6() { return &___MoveBase_6; }
	inline void set_MoveBase_6(bool value)
	{
		___MoveBase_6 = value;
	}

	inline static int32_t get_offset_of_SnapsToFinger_7() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___SnapsToFinger_7)); }
	inline bool get_SnapsToFinger_7() const { return ___SnapsToFinger_7; }
	inline bool* get_address_of_SnapsToFinger_7() { return &___SnapsToFinger_7; }
	inline void set_SnapsToFinger_7(bool value)
	{
		___SnapsToFinger_7 = value;
	}

	inline static int32_t get_offset_of_JoystickMoveAxis_8() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___JoystickMoveAxis_8)); }
	inline int32_t get_JoystickMoveAxis_8() const { return ___JoystickMoveAxis_8; }
	inline int32_t* get_address_of_JoystickMoveAxis_8() { return &___JoystickMoveAxis_8; }
	inline void set_JoystickMoveAxis_8(int32_t value)
	{
		___JoystickMoveAxis_8 = value;
	}

	inline static int32_t get_offset_of_JoystickBase_9() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___JoystickBase_9)); }
	inline Image_t3354615620 * get_JoystickBase_9() const { return ___JoystickBase_9; }
	inline Image_t3354615620 ** get_address_of_JoystickBase_9() { return &___JoystickBase_9; }
	inline void set_JoystickBase_9(Image_t3354615620 * value)
	{
		___JoystickBase_9 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickBase_9, value);
	}

	inline static int32_t get_offset_of_Stick_10() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___Stick_10)); }
	inline Image_t3354615620 * get_Stick_10() const { return ___Stick_10; }
	inline Image_t3354615620 ** get_address_of_Stick_10() { return &___Stick_10; }
	inline void set_Stick_10(Image_t3354615620 * value)
	{
		___Stick_10 = value;
		Il2CppCodeGenWriteBarrier(&___Stick_10, value);
	}

	inline static int32_t get_offset_of_TouchZone_11() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___TouchZone_11)); }
	inline RectTransform_t3317474837 * get_TouchZone_11() const { return ___TouchZone_11; }
	inline RectTransform_t3317474837 ** get_address_of_TouchZone_11() { return &___TouchZone_11; }
	inline void set_TouchZone_11(RectTransform_t3317474837 * value)
	{
		___TouchZone_11 = value;
		Il2CppCodeGenWriteBarrier(&___TouchZone_11, value);
	}

	inline static int32_t get_offset_of__initialStickPosition_12() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____initialStickPosition_12)); }
	inline Vector2_t3525329788  get__initialStickPosition_12() const { return ____initialStickPosition_12; }
	inline Vector2_t3525329788 * get_address_of__initialStickPosition_12() { return &____initialStickPosition_12; }
	inline void set__initialStickPosition_12(Vector2_t3525329788  value)
	{
		____initialStickPosition_12 = value;
	}

	inline static int32_t get_offset_of__intermediateStickPosition_13() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____intermediateStickPosition_13)); }
	inline Vector2_t3525329788  get__intermediateStickPosition_13() const { return ____intermediateStickPosition_13; }
	inline Vector2_t3525329788 * get_address_of__intermediateStickPosition_13() { return &____intermediateStickPosition_13; }
	inline void set__intermediateStickPosition_13(Vector2_t3525329788  value)
	{
		____intermediateStickPosition_13 = value;
	}

	inline static int32_t get_offset_of__initialBasePosition_14() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____initialBasePosition_14)); }
	inline Vector2_t3525329788  get__initialBasePosition_14() const { return ____initialBasePosition_14; }
	inline Vector2_t3525329788 * get_address_of__initialBasePosition_14() { return &____initialBasePosition_14; }
	inline void set__initialBasePosition_14(Vector2_t3525329788  value)
	{
		____initialBasePosition_14 = value;
	}

	inline static int32_t get_offset_of__baseTransform_15() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____baseTransform_15)); }
	inline RectTransform_t3317474837 * get__baseTransform_15() const { return ____baseTransform_15; }
	inline RectTransform_t3317474837 ** get_address_of__baseTransform_15() { return &____baseTransform_15; }
	inline void set__baseTransform_15(RectTransform_t3317474837 * value)
	{
		____baseTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&____baseTransform_15, value);
	}

	inline static int32_t get_offset_of__stickTransform_16() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____stickTransform_16)); }
	inline RectTransform_t3317474837 * get__stickTransform_16() const { return ____stickTransform_16; }
	inline RectTransform_t3317474837 ** get_address_of__stickTransform_16() { return &____stickTransform_16; }
	inline void set__stickTransform_16(RectTransform_t3317474837 * value)
	{
		____stickTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&____stickTransform_16, value);
	}

	inline static int32_t get_offset_of__oneOverMovementRange_17() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ____oneOverMovementRange_17)); }
	inline float get__oneOverMovementRange_17() const { return ____oneOverMovementRange_17; }
	inline float* get_address_of__oneOverMovementRange_17() { return &____oneOverMovementRange_17; }
	inline void set__oneOverMovementRange_17(float value)
	{
		____oneOverMovementRange_17 = value;
	}

	inline static int32_t get_offset_of_HorizintalAxis_18() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___HorizintalAxis_18)); }
	inline VirtualAxis_t3870720551 * get_HorizintalAxis_18() const { return ___HorizintalAxis_18; }
	inline VirtualAxis_t3870720551 ** get_address_of_HorizintalAxis_18() { return &___HorizintalAxis_18; }
	inline void set_HorizintalAxis_18(VirtualAxis_t3870720551 * value)
	{
		___HorizintalAxis_18 = value;
		Il2CppCodeGenWriteBarrier(&___HorizintalAxis_18, value);
	}

	inline static int32_t get_offset_of_VerticalAxis_19() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___VerticalAxis_19)); }
	inline VirtualAxis_t3870720551 * get_VerticalAxis_19() const { return ___VerticalAxis_19; }
	inline VirtualAxis_t3870720551 ** get_address_of_VerticalAxis_19() { return &___VerticalAxis_19; }
	inline void set_VerticalAxis_19(VirtualAxis_t3870720551 * value)
	{
		___VerticalAxis_19 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxis_19, value);
	}

	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SimpleJoystick_t2444490281, ___U3CCurrentEventCameraU3Ek__BackingField_20)); }
	inline Camera_t3533968274 * get_U3CCurrentEventCameraU3Ek__BackingField_20() const { return ___U3CCurrentEventCameraU3Ek__BackingField_20; }
	inline Camera_t3533968274 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_20() { return &___U3CCurrentEventCameraU3Ek__BackingField_20; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_20(Camera_t3533968274 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventCameraU3Ek__BackingField_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
