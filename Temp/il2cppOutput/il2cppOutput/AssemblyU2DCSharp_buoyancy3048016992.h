#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Collider
struct Collider_t955670625;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct List_1_t4024530665;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// buoyancy
struct  buoyancy_t3048016992  : public MonoBehaviour_t3012272455
{
public:
	// System.Single buoyancy::density
	float ___density_4;
	// System.Int32 buoyancy::slicesPerAxis
	int32_t ___slicesPerAxis_5;
	// System.Boolean buoyancy::isConcave
	bool ___isConcave_6;
	// System.Int32 buoyancy::voxelsLimit
	int32_t ___voxelsLimit_7;
	// System.Single buoyancy::waterLevel
	float ___waterLevel_8;
	// UnityEngine.AudioSource buoyancy::source
	AudioSource_t3628549054 * ___source_9;
	// UnityEngine.Rigidbody buoyancy::rb
	Rigidbody_t1972007546 * ___rb_10;
	// UnityEngine.Collider buoyancy::coll
	Collider_t955670625 * ___coll_11;
	// System.Single buoyancy::voxelHalfHeight
	float ___voxelHalfHeight_12;
	// UnityEngine.Vector3 buoyancy::localArchimedesForce
	Vector3_t3525329789  ___localArchimedesForce_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> buoyancy::voxels
	List_1_t27321462 * ___voxels_14;
	// System.Boolean buoyancy::isMeshCollider
	bool ___isMeshCollider_15;
	// System.Collections.Generic.List`1<UnityEngine.Vector3[]> buoyancy::forces
	List_1_t4024530665 * ___forces_16;
	// System.Boolean buoyancy::isPlaying
	bool ___isPlaying_17;

public:
	inline static int32_t get_offset_of_density_4() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___density_4)); }
	inline float get_density_4() const { return ___density_4; }
	inline float* get_address_of_density_4() { return &___density_4; }
	inline void set_density_4(float value)
	{
		___density_4 = value;
	}

	inline static int32_t get_offset_of_slicesPerAxis_5() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___slicesPerAxis_5)); }
	inline int32_t get_slicesPerAxis_5() const { return ___slicesPerAxis_5; }
	inline int32_t* get_address_of_slicesPerAxis_5() { return &___slicesPerAxis_5; }
	inline void set_slicesPerAxis_5(int32_t value)
	{
		___slicesPerAxis_5 = value;
	}

	inline static int32_t get_offset_of_isConcave_6() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___isConcave_6)); }
	inline bool get_isConcave_6() const { return ___isConcave_6; }
	inline bool* get_address_of_isConcave_6() { return &___isConcave_6; }
	inline void set_isConcave_6(bool value)
	{
		___isConcave_6 = value;
	}

	inline static int32_t get_offset_of_voxelsLimit_7() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___voxelsLimit_7)); }
	inline int32_t get_voxelsLimit_7() const { return ___voxelsLimit_7; }
	inline int32_t* get_address_of_voxelsLimit_7() { return &___voxelsLimit_7; }
	inline void set_voxelsLimit_7(int32_t value)
	{
		___voxelsLimit_7 = value;
	}

	inline static int32_t get_offset_of_waterLevel_8() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___waterLevel_8)); }
	inline float get_waterLevel_8() const { return ___waterLevel_8; }
	inline float* get_address_of_waterLevel_8() { return &___waterLevel_8; }
	inline void set_waterLevel_8(float value)
	{
		___waterLevel_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___source_9)); }
	inline AudioSource_t3628549054 * get_source_9() const { return ___source_9; }
	inline AudioSource_t3628549054 ** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(AudioSource_t3628549054 * value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier(&___source_9, value);
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___rb_10)); }
	inline Rigidbody_t1972007546 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody_t1972007546 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rb_10, value);
	}

	inline static int32_t get_offset_of_coll_11() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___coll_11)); }
	inline Collider_t955670625 * get_coll_11() const { return ___coll_11; }
	inline Collider_t955670625 ** get_address_of_coll_11() { return &___coll_11; }
	inline void set_coll_11(Collider_t955670625 * value)
	{
		___coll_11 = value;
		Il2CppCodeGenWriteBarrier(&___coll_11, value);
	}

	inline static int32_t get_offset_of_voxelHalfHeight_12() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___voxelHalfHeight_12)); }
	inline float get_voxelHalfHeight_12() const { return ___voxelHalfHeight_12; }
	inline float* get_address_of_voxelHalfHeight_12() { return &___voxelHalfHeight_12; }
	inline void set_voxelHalfHeight_12(float value)
	{
		___voxelHalfHeight_12 = value;
	}

	inline static int32_t get_offset_of_localArchimedesForce_13() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___localArchimedesForce_13)); }
	inline Vector3_t3525329789  get_localArchimedesForce_13() const { return ___localArchimedesForce_13; }
	inline Vector3_t3525329789 * get_address_of_localArchimedesForce_13() { return &___localArchimedesForce_13; }
	inline void set_localArchimedesForce_13(Vector3_t3525329789  value)
	{
		___localArchimedesForce_13 = value;
	}

	inline static int32_t get_offset_of_voxels_14() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___voxels_14)); }
	inline List_1_t27321462 * get_voxels_14() const { return ___voxels_14; }
	inline List_1_t27321462 ** get_address_of_voxels_14() { return &___voxels_14; }
	inline void set_voxels_14(List_1_t27321462 * value)
	{
		___voxels_14 = value;
		Il2CppCodeGenWriteBarrier(&___voxels_14, value);
	}

	inline static int32_t get_offset_of_isMeshCollider_15() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___isMeshCollider_15)); }
	inline bool get_isMeshCollider_15() const { return ___isMeshCollider_15; }
	inline bool* get_address_of_isMeshCollider_15() { return &___isMeshCollider_15; }
	inline void set_isMeshCollider_15(bool value)
	{
		___isMeshCollider_15 = value;
	}

	inline static int32_t get_offset_of_forces_16() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___forces_16)); }
	inline List_1_t4024530665 * get_forces_16() const { return ___forces_16; }
	inline List_1_t4024530665 ** get_address_of_forces_16() { return &___forces_16; }
	inline void set_forces_16(List_1_t4024530665 * value)
	{
		___forces_16 = value;
		Il2CppCodeGenWriteBarrier(&___forces_16, value);
	}

	inline static int32_t get_offset_of_isPlaying_17() { return static_cast<int32_t>(offsetof(buoyancy_t3048016992, ___isPlaying_17)); }
	inline bool get_isPlaying_17() const { return ___isPlaying_17; }
	inline bool* get_address_of_isPlaying_17() { return &___isPlaying_17; }
	inline void set_isPlaying_17(bool value)
	{
		___isPlaying_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
