#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;
// UnityEngine.Animator
struct Animator_t792326996;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StormTrooperControl
struct  StormTrooperControl_t3842439687  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Transform StormTrooperControl::player
	Transform_t284553113 * ___player_3;
	// UnityEngine.GameObject StormTrooperControl::playerGameObject
	GameObject_t4012695102 * ___playerGameObject_4;
	// UnityEngine.NavMeshAgent StormTrooperControl::nav
	NavMeshAgent_t3296505762 * ___nav_5;
	// UnityEngine.Animator StormTrooperControl::anim
	Animator_t792326996 * ___anim_6;
	// System.Boolean StormTrooperControl::activate
	bool ___activate_7;
	// System.String StormTrooperControl::BB8tag
	String_t* ___BB8tag_8;
	// System.Boolean StormTrooperControl::isWalking
	bool ___isWalking_9;
	// System.Boolean StormTrooperControl::isWalkingRest
	bool ___isWalkingRest_10;
	// UnityEngine.Vector3 StormTrooperControl::destination
	Vector3_t3525329789  ___destination_11;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___player_3)); }
	inline Transform_t284553113 * get_player_3() const { return ___player_3; }
	inline Transform_t284553113 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t284553113 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_playerGameObject_4() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___playerGameObject_4)); }
	inline GameObject_t4012695102 * get_playerGameObject_4() const { return ___playerGameObject_4; }
	inline GameObject_t4012695102 ** get_address_of_playerGameObject_4() { return &___playerGameObject_4; }
	inline void set_playerGameObject_4(GameObject_t4012695102 * value)
	{
		___playerGameObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerGameObject_4, value);
	}

	inline static int32_t get_offset_of_nav_5() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___nav_5)); }
	inline NavMeshAgent_t3296505762 * get_nav_5() const { return ___nav_5; }
	inline NavMeshAgent_t3296505762 ** get_address_of_nav_5() { return &___nav_5; }
	inline void set_nav_5(NavMeshAgent_t3296505762 * value)
	{
		___nav_5 = value;
		Il2CppCodeGenWriteBarrier(&___nav_5, value);
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___anim_6)); }
	inline Animator_t792326996 * get_anim_6() const { return ___anim_6; }
	inline Animator_t792326996 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t792326996 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier(&___anim_6, value);
	}

	inline static int32_t get_offset_of_activate_7() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___activate_7)); }
	inline bool get_activate_7() const { return ___activate_7; }
	inline bool* get_address_of_activate_7() { return &___activate_7; }
	inline void set_activate_7(bool value)
	{
		___activate_7 = value;
	}

	inline static int32_t get_offset_of_BB8tag_8() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___BB8tag_8)); }
	inline String_t* get_BB8tag_8() const { return ___BB8tag_8; }
	inline String_t** get_address_of_BB8tag_8() { return &___BB8tag_8; }
	inline void set_BB8tag_8(String_t* value)
	{
		___BB8tag_8 = value;
		Il2CppCodeGenWriteBarrier(&___BB8tag_8, value);
	}

	inline static int32_t get_offset_of_isWalking_9() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___isWalking_9)); }
	inline bool get_isWalking_9() const { return ___isWalking_9; }
	inline bool* get_address_of_isWalking_9() { return &___isWalking_9; }
	inline void set_isWalking_9(bool value)
	{
		___isWalking_9 = value;
	}

	inline static int32_t get_offset_of_isWalkingRest_10() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___isWalkingRest_10)); }
	inline bool get_isWalkingRest_10() const { return ___isWalkingRest_10; }
	inline bool* get_address_of_isWalkingRest_10() { return &___isWalkingRest_10; }
	inline void set_isWalkingRest_10(bool value)
	{
		___isWalkingRest_10 = value;
	}

	inline static int32_t get_offset_of_destination_11() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___destination_11)); }
	inline Vector3_t3525329789  get_destination_11() const { return ___destination_11; }
	inline Vector3_t3525329789 * get_address_of_destination_11() { return &___destination_11; }
	inline void set_destination_11(Vector3_t3525329789  value)
	{
		___destination_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
