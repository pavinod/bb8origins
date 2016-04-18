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
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwitchCharacter
struct  SwitchCharacter_t393066037  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SwitchCharacter::C3PO
	GameObject_t4012695102 * ___C3PO_2;
	// UnityEngine.GameObject SwitchCharacter::BB8
	GameObject_t4012695102 * ___BB8_3;
	// UnityEngine.Transform SwitchCharacter::CameraC3P0
	Transform_t284553113 * ___CameraC3P0_4;
	// UnityEngine.Transform SwitchCharacter::CameraBB8
	Transform_t284553113 * ___CameraBB8_5;
	// UnityEngine.UI.Button SwitchCharacter::button
	Button_t990034267 * ___button_6;
	// UnityEngine.GameObject SwitchCharacter::cam
	GameObject_t4012695102 * ___cam_7;
	// System.Int32 SwitchCharacter::tracker
	int32_t ___tracker_8;

public:
	inline static int32_t get_offset_of_C3PO_2() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___C3PO_2)); }
	inline GameObject_t4012695102 * get_C3PO_2() const { return ___C3PO_2; }
	inline GameObject_t4012695102 ** get_address_of_C3PO_2() { return &___C3PO_2; }
	inline void set_C3PO_2(GameObject_t4012695102 * value)
	{
		___C3PO_2 = value;
		Il2CppCodeGenWriteBarrier(&___C3PO_2, value);
	}

	inline static int32_t get_offset_of_BB8_3() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___BB8_3)); }
	inline GameObject_t4012695102 * get_BB8_3() const { return ___BB8_3; }
	inline GameObject_t4012695102 ** get_address_of_BB8_3() { return &___BB8_3; }
	inline void set_BB8_3(GameObject_t4012695102 * value)
	{
		___BB8_3 = value;
		Il2CppCodeGenWriteBarrier(&___BB8_3, value);
	}

	inline static int32_t get_offset_of_CameraC3P0_4() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___CameraC3P0_4)); }
	inline Transform_t284553113 * get_CameraC3P0_4() const { return ___CameraC3P0_4; }
	inline Transform_t284553113 ** get_address_of_CameraC3P0_4() { return &___CameraC3P0_4; }
	inline void set_CameraC3P0_4(Transform_t284553113 * value)
	{
		___CameraC3P0_4 = value;
		Il2CppCodeGenWriteBarrier(&___CameraC3P0_4, value);
	}

	inline static int32_t get_offset_of_CameraBB8_5() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___CameraBB8_5)); }
	inline Transform_t284553113 * get_CameraBB8_5() const { return ___CameraBB8_5; }
	inline Transform_t284553113 ** get_address_of_CameraBB8_5() { return &___CameraBB8_5; }
	inline void set_CameraBB8_5(Transform_t284553113 * value)
	{
		___CameraBB8_5 = value;
		Il2CppCodeGenWriteBarrier(&___CameraBB8_5, value);
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___button_6)); }
	inline Button_t990034267 * get_button_6() const { return ___button_6; }
	inline Button_t990034267 ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_t990034267 * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier(&___button_6, value);
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___cam_7)); }
	inline GameObject_t4012695102 * get_cam_7() const { return ___cam_7; }
	inline GameObject_t4012695102 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(GameObject_t4012695102 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}

	inline static int32_t get_offset_of_tracker_8() { return static_cast<int32_t>(offsetof(SwitchCharacter_t393066037, ___tracker_8)); }
	inline int32_t get_tracker_8() const { return ___tracker_8; }
	inline int32_t* get_address_of_tracker_8() { return &___tracker_8; }
	inline void set_tracker_8(int32_t value)
	{
		___tracker_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
