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
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BB8Head
struct  BB8Head_t389187064  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject BB8Head::player
	GameObject_t4012695102 * ___player_2;
	// UnityEngine.Vector3 BB8Head::offset
	Vector3_t3525329789  ___offset_3;
	// UnityEngine.Rigidbody BB8Head::rb
	Rigidbody_t1972007546 * ___rb_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(BB8Head_t389187064, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(BB8Head_t389187064, ___offset_3)); }
	inline Vector3_t3525329789  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3525329789 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3525329789  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(BB8Head_t389187064, ___rb_4)); }
	inline Rigidbody_t1972007546 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t1972007546 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
