#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// HighScoreLogic
struct HighScoreLogic_t3282857806;
// StormTrooperControl
struct StormTrooperControl_t3842439687;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BB8MovementScript
struct  BB8MovementScript_t4037785714  : public MonoBehaviour_t4025988718
{
public:
	// PhotonView BB8MovementScript::myPhotonView
	PhotonView_t1498838369 * ___myPhotonView_3;
	// System.Single BB8MovementScript::speed
	float ___speed_4;
	// System.Single BB8MovementScript::jumpPower
	float ___jumpPower_5;
	// System.Boolean BB8MovementScript::isControllable
	bool ___isControllable_6;
	// UnityEngine.GameObject BB8MovementScript::player
	GameObject_t4012695102 * ___player_7;
	// UnityEngine.GameObject BB8MovementScript::cube_a
	GameObject_t4012695102 * ___cube_a_8;
	// UnityEngine.GameObject BB8MovementScript::cube_b
	GameObject_t4012695102 * ___cube_b_9;
	// UnityEngine.GameObject BB8MovementScript::cube_c
	GameObject_t4012695102 * ___cube_c_10;
	// UnityEngine.GameObject BB8MovementScript::cube_d
	GameObject_t4012695102 * ___cube_d_11;
	// UnityEngine.GameObject BB8MovementScript::cube1
	GameObject_t4012695102 * ___cube1_12;
	// UnityEngine.GameObject BB8MovementScript::cube2
	GameObject_t4012695102 * ___cube2_13;
	// UnityEngine.GameObject BB8MovementScript::cube3
	GameObject_t4012695102 * ___cube3_14;
	// UnityEngine.GameObject BB8MovementScript::cube4
	GameObject_t4012695102 * ___cube4_15;
	// UnityEngine.Rigidbody BB8MovementScript::rb
	Rigidbody_t1972007546 * ___rb_16;
	// UnityEngine.Transform BB8MovementScript::m_Cam
	Transform_t284553113 * ___m_Cam_17;
	// UnityEngine.Vector3 BB8MovementScript::m_CamForward
	Vector3_t3525329789  ___m_CamForward_18;
	// UnityEngine.Vector3 BB8MovementScript::m_Move
	Vector3_t3525329789  ___m_Move_19;
	// System.Boolean BB8MovementScript::jumpEnb
	bool ___jumpEnb_20;
	// HighScoreLogic BB8MovementScript::hsl
	HighScoreLogic_t3282857806 * ___hsl_21;
	// StormTrooperControl BB8MovementScript::stc
	StormTrooperControl_t3842439687 * ___stc_22;
	// UnityEngine.AudioSource BB8MovementScript::source
	AudioSource_t3628549054 * ___source_23;
	// System.Int32[] BB8MovementScript::score
	Int32U5BU5D_t1809983122* ___score_24;

public:
	inline static int32_t get_offset_of_myPhotonView_3() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___myPhotonView_3)); }
	inline PhotonView_t1498838369 * get_myPhotonView_3() const { return ___myPhotonView_3; }
	inline PhotonView_t1498838369 ** get_address_of_myPhotonView_3() { return &___myPhotonView_3; }
	inline void set_myPhotonView_3(PhotonView_t1498838369 * value)
	{
		___myPhotonView_3 = value;
		Il2CppCodeGenWriteBarrier(&___myPhotonView_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_jumpPower_5() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___jumpPower_5)); }
	inline float get_jumpPower_5() const { return ___jumpPower_5; }
	inline float* get_address_of_jumpPower_5() { return &___jumpPower_5; }
	inline void set_jumpPower_5(float value)
	{
		___jumpPower_5 = value;
	}

	inline static int32_t get_offset_of_isControllable_6() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___isControllable_6)); }
	inline bool get_isControllable_6() const { return ___isControllable_6; }
	inline bool* get_address_of_isControllable_6() { return &___isControllable_6; }
	inline void set_isControllable_6(bool value)
	{
		___isControllable_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___player_7)); }
	inline GameObject_t4012695102 * get_player_7() const { return ___player_7; }
	inline GameObject_t4012695102 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t4012695102 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_cube_a_8() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube_a_8)); }
	inline GameObject_t4012695102 * get_cube_a_8() const { return ___cube_a_8; }
	inline GameObject_t4012695102 ** get_address_of_cube_a_8() { return &___cube_a_8; }
	inline void set_cube_a_8(GameObject_t4012695102 * value)
	{
		___cube_a_8 = value;
		Il2CppCodeGenWriteBarrier(&___cube_a_8, value);
	}

	inline static int32_t get_offset_of_cube_b_9() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube_b_9)); }
	inline GameObject_t4012695102 * get_cube_b_9() const { return ___cube_b_9; }
	inline GameObject_t4012695102 ** get_address_of_cube_b_9() { return &___cube_b_9; }
	inline void set_cube_b_9(GameObject_t4012695102 * value)
	{
		___cube_b_9 = value;
		Il2CppCodeGenWriteBarrier(&___cube_b_9, value);
	}

	inline static int32_t get_offset_of_cube_c_10() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube_c_10)); }
	inline GameObject_t4012695102 * get_cube_c_10() const { return ___cube_c_10; }
	inline GameObject_t4012695102 ** get_address_of_cube_c_10() { return &___cube_c_10; }
	inline void set_cube_c_10(GameObject_t4012695102 * value)
	{
		___cube_c_10 = value;
		Il2CppCodeGenWriteBarrier(&___cube_c_10, value);
	}

	inline static int32_t get_offset_of_cube_d_11() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube_d_11)); }
	inline GameObject_t4012695102 * get_cube_d_11() const { return ___cube_d_11; }
	inline GameObject_t4012695102 ** get_address_of_cube_d_11() { return &___cube_d_11; }
	inline void set_cube_d_11(GameObject_t4012695102 * value)
	{
		___cube_d_11 = value;
		Il2CppCodeGenWriteBarrier(&___cube_d_11, value);
	}

	inline static int32_t get_offset_of_cube1_12() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube1_12)); }
	inline GameObject_t4012695102 * get_cube1_12() const { return ___cube1_12; }
	inline GameObject_t4012695102 ** get_address_of_cube1_12() { return &___cube1_12; }
	inline void set_cube1_12(GameObject_t4012695102 * value)
	{
		___cube1_12 = value;
		Il2CppCodeGenWriteBarrier(&___cube1_12, value);
	}

	inline static int32_t get_offset_of_cube2_13() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube2_13)); }
	inline GameObject_t4012695102 * get_cube2_13() const { return ___cube2_13; }
	inline GameObject_t4012695102 ** get_address_of_cube2_13() { return &___cube2_13; }
	inline void set_cube2_13(GameObject_t4012695102 * value)
	{
		___cube2_13 = value;
		Il2CppCodeGenWriteBarrier(&___cube2_13, value);
	}

	inline static int32_t get_offset_of_cube3_14() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube3_14)); }
	inline GameObject_t4012695102 * get_cube3_14() const { return ___cube3_14; }
	inline GameObject_t4012695102 ** get_address_of_cube3_14() { return &___cube3_14; }
	inline void set_cube3_14(GameObject_t4012695102 * value)
	{
		___cube3_14 = value;
		Il2CppCodeGenWriteBarrier(&___cube3_14, value);
	}

	inline static int32_t get_offset_of_cube4_15() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___cube4_15)); }
	inline GameObject_t4012695102 * get_cube4_15() const { return ___cube4_15; }
	inline GameObject_t4012695102 ** get_address_of_cube4_15() { return &___cube4_15; }
	inline void set_cube4_15(GameObject_t4012695102 * value)
	{
		___cube4_15 = value;
		Il2CppCodeGenWriteBarrier(&___cube4_15, value);
	}

	inline static int32_t get_offset_of_rb_16() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___rb_16)); }
	inline Rigidbody_t1972007546 * get_rb_16() const { return ___rb_16; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_16() { return &___rb_16; }
	inline void set_rb_16(Rigidbody_t1972007546 * value)
	{
		___rb_16 = value;
		Il2CppCodeGenWriteBarrier(&___rb_16, value);
	}

	inline static int32_t get_offset_of_m_Cam_17() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___m_Cam_17)); }
	inline Transform_t284553113 * get_m_Cam_17() const { return ___m_Cam_17; }
	inline Transform_t284553113 ** get_address_of_m_Cam_17() { return &___m_Cam_17; }
	inline void set_m_Cam_17(Transform_t284553113 * value)
	{
		___m_Cam_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_17, value);
	}

	inline static int32_t get_offset_of_m_CamForward_18() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___m_CamForward_18)); }
	inline Vector3_t3525329789  get_m_CamForward_18() const { return ___m_CamForward_18; }
	inline Vector3_t3525329789 * get_address_of_m_CamForward_18() { return &___m_CamForward_18; }
	inline void set_m_CamForward_18(Vector3_t3525329789  value)
	{
		___m_CamForward_18 = value;
	}

	inline static int32_t get_offset_of_m_Move_19() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___m_Move_19)); }
	inline Vector3_t3525329789  get_m_Move_19() const { return ___m_Move_19; }
	inline Vector3_t3525329789 * get_address_of_m_Move_19() { return &___m_Move_19; }
	inline void set_m_Move_19(Vector3_t3525329789  value)
	{
		___m_Move_19 = value;
	}

	inline static int32_t get_offset_of_jumpEnb_20() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___jumpEnb_20)); }
	inline bool get_jumpEnb_20() const { return ___jumpEnb_20; }
	inline bool* get_address_of_jumpEnb_20() { return &___jumpEnb_20; }
	inline void set_jumpEnb_20(bool value)
	{
		___jumpEnb_20 = value;
	}

	inline static int32_t get_offset_of_hsl_21() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___hsl_21)); }
	inline HighScoreLogic_t3282857806 * get_hsl_21() const { return ___hsl_21; }
	inline HighScoreLogic_t3282857806 ** get_address_of_hsl_21() { return &___hsl_21; }
	inline void set_hsl_21(HighScoreLogic_t3282857806 * value)
	{
		___hsl_21 = value;
		Il2CppCodeGenWriteBarrier(&___hsl_21, value);
	}

	inline static int32_t get_offset_of_stc_22() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___stc_22)); }
	inline StormTrooperControl_t3842439687 * get_stc_22() const { return ___stc_22; }
	inline StormTrooperControl_t3842439687 ** get_address_of_stc_22() { return &___stc_22; }
	inline void set_stc_22(StormTrooperControl_t3842439687 * value)
	{
		___stc_22 = value;
		Il2CppCodeGenWriteBarrier(&___stc_22, value);
	}

	inline static int32_t get_offset_of_source_23() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___source_23)); }
	inline AudioSource_t3628549054 * get_source_23() const { return ___source_23; }
	inline AudioSource_t3628549054 ** get_address_of_source_23() { return &___source_23; }
	inline void set_source_23(AudioSource_t3628549054 * value)
	{
		___source_23 = value;
		Il2CppCodeGenWriteBarrier(&___source_23, value);
	}

	inline static int32_t get_offset_of_score_24() { return static_cast<int32_t>(offsetof(BB8MovementScript_t4037785714, ___score_24)); }
	inline Int32U5BU5D_t1809983122* get_score_24() const { return ___score_24; }
	inline Int32U5BU5D_t1809983122** get_address_of_score_24() { return &___score_24; }
	inline void set_score_24(Int32U5BU5D_t1809983122* value)
	{
		___score_24 = value;
		Il2CppCodeGenWriteBarrier(&___score_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
