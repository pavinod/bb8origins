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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StormTrooperControl
struct  StormTrooperControl_t3842439687  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform StormTrooperControl::player
	Transform_t284553113 * ___player_2;
	// UnityEngine.GameObject StormTrooperControl::playerGameObject
	GameObject_t4012695102 * ___playerGameObject_3;
	// UnityEngine.NavMeshAgent StormTrooperControl::nav
	NavMeshAgent_t3296505762 * ___nav_4;
	// UnityEngine.Animator StormTrooperControl::anim
	Animator_t792326996 * ___anim_5;
	// System.Boolean StormTrooperControl::activate
	bool ___activate_6;
	// System.String StormTrooperControl::BB8tag
	String_t* ___BB8tag_7;
	// System.Boolean StormTrooperControl::isWalking
	bool ___isWalking_8;
	// System.Boolean StormTrooperControl::isWalkingRest
	bool ___isWalkingRest_9;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___player_2)); }
	inline Transform_t284553113 * get_player_2() const { return ___player_2; }
	inline Transform_t284553113 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t284553113 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerGameObject_3() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___playerGameObject_3)); }
	inline GameObject_t4012695102 * get_playerGameObject_3() const { return ___playerGameObject_3; }
	inline GameObject_t4012695102 ** get_address_of_playerGameObject_3() { return &___playerGameObject_3; }
	inline void set_playerGameObject_3(GameObject_t4012695102 * value)
	{
		___playerGameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerGameObject_3, value);
	}

	inline static int32_t get_offset_of_nav_4() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___nav_4)); }
	inline NavMeshAgent_t3296505762 * get_nav_4() const { return ___nav_4; }
	inline NavMeshAgent_t3296505762 ** get_address_of_nav_4() { return &___nav_4; }
	inline void set_nav_4(NavMeshAgent_t3296505762 * value)
	{
		___nav_4 = value;
		Il2CppCodeGenWriteBarrier(&___nav_4, value);
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___anim_5)); }
	inline Animator_t792326996 * get_anim_5() const { return ___anim_5; }
	inline Animator_t792326996 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t792326996 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}

	inline static int32_t get_offset_of_activate_6() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___activate_6)); }
	inline bool get_activate_6() const { return ___activate_6; }
	inline bool* get_address_of_activate_6() { return &___activate_6; }
	inline void set_activate_6(bool value)
	{
		___activate_6 = value;
	}

	inline static int32_t get_offset_of_BB8tag_7() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___BB8tag_7)); }
	inline String_t* get_BB8tag_7() const { return ___BB8tag_7; }
	inline String_t** get_address_of_BB8tag_7() { return &___BB8tag_7; }
	inline void set_BB8tag_7(String_t* value)
	{
		___BB8tag_7 = value;
		Il2CppCodeGenWriteBarrier(&___BB8tag_7, value);
	}

	inline static int32_t get_offset_of_isWalking_8() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___isWalking_8)); }
	inline bool get_isWalking_8() const { return ___isWalking_8; }
	inline bool* get_address_of_isWalking_8() { return &___isWalking_8; }
	inline void set_isWalking_8(bool value)
	{
		___isWalking_8 = value;
	}

	inline static int32_t get_offset_of_isWalkingRest_9() { return static_cast<int32_t>(offsetof(StormTrooperControl_t3842439687, ___isWalkingRest_9)); }
	inline bool get_isWalkingRest_9() const { return ___isWalkingRest_9; }
	inline bool* get_address_of_isWalkingRest_9() { return &___isWalkingRest_9; }
	inline void set_isWalkingRest_9(bool value)
	{
		___isWalkingRest_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
