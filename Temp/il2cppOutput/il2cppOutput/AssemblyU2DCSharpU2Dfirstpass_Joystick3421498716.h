#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t3421498716  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 Joystick::TouchAria
	Vector2_t3525329788  ___TouchAria_2;
	// UnityEngine.Vector3 Joystick::startPos
	Vector3_t3525329789  ___startPos_3;
	// UnityEngine.Vector2 Joystick::JoystickInput
	Vector2_t3525329788  ___JoystickInput_4;
	// UnityEngine.Vector3 Joystick::last
	Vector3_t3525329789  ___last_5;
	// System.Boolean Joystick::hideJoystick
	bool ___hideJoystick_6;
	// UnityEngine.UI.Image Joystick::JoystickImage
	Image_t3354615620 * ___JoystickImage_7;
	// System.Boolean Joystick::startAction
	bool ___startAction_8;
	// System.Boolean Joystick::startActionAtDrag
	bool ___startActionAtDrag_9;
	// System.Boolean Joystick::UsingUnityRemote
	bool ___UsingUnityRemote_10;
	// UnityEngine.Touch Joystick::TouchOnJoystick
	Touch_t1603883884  ___TouchOnJoystick_11;
	// System.Int32 Joystick::ID
	int32_t ___ID_12;
	// UnityEngine.Touch Joystick::FakeTouch
	Touch_t1603883884  ___FakeTouch_13;
	// System.Boolean Joystick::FakeID
	bool ___FakeID_14;

public:
	inline static int32_t get_offset_of_TouchAria_2() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___TouchAria_2)); }
	inline Vector2_t3525329788  get_TouchAria_2() const { return ___TouchAria_2; }
	inline Vector2_t3525329788 * get_address_of_TouchAria_2() { return &___TouchAria_2; }
	inline void set_TouchAria_2(Vector2_t3525329788  value)
	{
		___TouchAria_2 = value;
	}

	inline static int32_t get_offset_of_startPos_3() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___startPos_3)); }
	inline Vector3_t3525329789  get_startPos_3() const { return ___startPos_3; }
	inline Vector3_t3525329789 * get_address_of_startPos_3() { return &___startPos_3; }
	inline void set_startPos_3(Vector3_t3525329789  value)
	{
		___startPos_3 = value;
	}

	inline static int32_t get_offset_of_JoystickInput_4() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___JoystickInput_4)); }
	inline Vector2_t3525329788  get_JoystickInput_4() const { return ___JoystickInput_4; }
	inline Vector2_t3525329788 * get_address_of_JoystickInput_4() { return &___JoystickInput_4; }
	inline void set_JoystickInput_4(Vector2_t3525329788  value)
	{
		___JoystickInput_4 = value;
	}

	inline static int32_t get_offset_of_last_5() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___last_5)); }
	inline Vector3_t3525329789  get_last_5() const { return ___last_5; }
	inline Vector3_t3525329789 * get_address_of_last_5() { return &___last_5; }
	inline void set_last_5(Vector3_t3525329789  value)
	{
		___last_5 = value;
	}

	inline static int32_t get_offset_of_hideJoystick_6() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___hideJoystick_6)); }
	inline bool get_hideJoystick_6() const { return ___hideJoystick_6; }
	inline bool* get_address_of_hideJoystick_6() { return &___hideJoystick_6; }
	inline void set_hideJoystick_6(bool value)
	{
		___hideJoystick_6 = value;
	}

	inline static int32_t get_offset_of_JoystickImage_7() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___JoystickImage_7)); }
	inline Image_t3354615620 * get_JoystickImage_7() const { return ___JoystickImage_7; }
	inline Image_t3354615620 ** get_address_of_JoystickImage_7() { return &___JoystickImage_7; }
	inline void set_JoystickImage_7(Image_t3354615620 * value)
	{
		___JoystickImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickImage_7, value);
	}

	inline static int32_t get_offset_of_startAction_8() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___startAction_8)); }
	inline bool get_startAction_8() const { return ___startAction_8; }
	inline bool* get_address_of_startAction_8() { return &___startAction_8; }
	inline void set_startAction_8(bool value)
	{
		___startAction_8 = value;
	}

	inline static int32_t get_offset_of_startActionAtDrag_9() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___startActionAtDrag_9)); }
	inline bool get_startActionAtDrag_9() const { return ___startActionAtDrag_9; }
	inline bool* get_address_of_startActionAtDrag_9() { return &___startActionAtDrag_9; }
	inline void set_startActionAtDrag_9(bool value)
	{
		___startActionAtDrag_9 = value;
	}

	inline static int32_t get_offset_of_UsingUnityRemote_10() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___UsingUnityRemote_10)); }
	inline bool get_UsingUnityRemote_10() const { return ___UsingUnityRemote_10; }
	inline bool* get_address_of_UsingUnityRemote_10() { return &___UsingUnityRemote_10; }
	inline void set_UsingUnityRemote_10(bool value)
	{
		___UsingUnityRemote_10 = value;
	}

	inline static int32_t get_offset_of_TouchOnJoystick_11() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___TouchOnJoystick_11)); }
	inline Touch_t1603883884  get_TouchOnJoystick_11() const { return ___TouchOnJoystick_11; }
	inline Touch_t1603883884 * get_address_of_TouchOnJoystick_11() { return &___TouchOnJoystick_11; }
	inline void set_TouchOnJoystick_11(Touch_t1603883884  value)
	{
		___TouchOnJoystick_11 = value;
	}

	inline static int32_t get_offset_of_ID_12() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___ID_12)); }
	inline int32_t get_ID_12() const { return ___ID_12; }
	inline int32_t* get_address_of_ID_12() { return &___ID_12; }
	inline void set_ID_12(int32_t value)
	{
		___ID_12 = value;
	}

	inline static int32_t get_offset_of_FakeTouch_13() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___FakeTouch_13)); }
	inline Touch_t1603883884  get_FakeTouch_13() const { return ___FakeTouch_13; }
	inline Touch_t1603883884 * get_address_of_FakeTouch_13() { return &___FakeTouch_13; }
	inline void set_FakeTouch_13(Touch_t1603883884  value)
	{
		___FakeTouch_13 = value;
	}

	inline static int32_t get_offset_of_FakeID_14() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___FakeID_14)); }
	inline bool get_FakeID_14() const { return ___FakeID_14; }
	inline bool* get_address_of_FakeID_14() { return &___FakeID_14; }
	inline void set_FakeID_14(bool value)
	{
		___FakeID_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
