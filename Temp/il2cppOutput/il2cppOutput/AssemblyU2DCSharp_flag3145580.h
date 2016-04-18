#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t102534413;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// flag
struct  flag_t3145580  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 flag::blendShapeCount
	int32_t ___blendShapeCount_2;
	// UnityEngine.SkinnedMeshRenderer flag::skinnedMeshRenderer
	SkinnedMeshRenderer_t102534413 * ___skinnedMeshRenderer_3;
	// UnityEngine.Mesh flag::skinnedMesh
	Mesh_t1525280346 * ___skinnedMesh_4;
	// System.Single flag::blendOne
	float ___blendOne_5;
	// System.Single flag::blendTwo
	float ___blendTwo_6;
	// System.Single flag::blendSpeed
	float ___blendSpeed_7;
	// System.Boolean flag::blendOneFinished
	bool ___blendOneFinished_8;
	// System.Int32 flag::index
	int32_t ___index_9;

public:
	inline static int32_t get_offset_of_blendShapeCount_2() { return static_cast<int32_t>(offsetof(flag_t3145580, ___blendShapeCount_2)); }
	inline int32_t get_blendShapeCount_2() const { return ___blendShapeCount_2; }
	inline int32_t* get_address_of_blendShapeCount_2() { return &___blendShapeCount_2; }
	inline void set_blendShapeCount_2(int32_t value)
	{
		___blendShapeCount_2 = value;
	}

	inline static int32_t get_offset_of_skinnedMeshRenderer_3() { return static_cast<int32_t>(offsetof(flag_t3145580, ___skinnedMeshRenderer_3)); }
	inline SkinnedMeshRenderer_t102534413 * get_skinnedMeshRenderer_3() const { return ___skinnedMeshRenderer_3; }
	inline SkinnedMeshRenderer_t102534413 ** get_address_of_skinnedMeshRenderer_3() { return &___skinnedMeshRenderer_3; }
	inline void set_skinnedMeshRenderer_3(SkinnedMeshRenderer_t102534413 * value)
	{
		___skinnedMeshRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___skinnedMeshRenderer_3, value);
	}

	inline static int32_t get_offset_of_skinnedMesh_4() { return static_cast<int32_t>(offsetof(flag_t3145580, ___skinnedMesh_4)); }
	inline Mesh_t1525280346 * get_skinnedMesh_4() const { return ___skinnedMesh_4; }
	inline Mesh_t1525280346 ** get_address_of_skinnedMesh_4() { return &___skinnedMesh_4; }
	inline void set_skinnedMesh_4(Mesh_t1525280346 * value)
	{
		___skinnedMesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___skinnedMesh_4, value);
	}

	inline static int32_t get_offset_of_blendOne_5() { return static_cast<int32_t>(offsetof(flag_t3145580, ___blendOne_5)); }
	inline float get_blendOne_5() const { return ___blendOne_5; }
	inline float* get_address_of_blendOne_5() { return &___blendOne_5; }
	inline void set_blendOne_5(float value)
	{
		___blendOne_5 = value;
	}

	inline static int32_t get_offset_of_blendTwo_6() { return static_cast<int32_t>(offsetof(flag_t3145580, ___blendTwo_6)); }
	inline float get_blendTwo_6() const { return ___blendTwo_6; }
	inline float* get_address_of_blendTwo_6() { return &___blendTwo_6; }
	inline void set_blendTwo_6(float value)
	{
		___blendTwo_6 = value;
	}

	inline static int32_t get_offset_of_blendSpeed_7() { return static_cast<int32_t>(offsetof(flag_t3145580, ___blendSpeed_7)); }
	inline float get_blendSpeed_7() const { return ___blendSpeed_7; }
	inline float* get_address_of_blendSpeed_7() { return &___blendSpeed_7; }
	inline void set_blendSpeed_7(float value)
	{
		___blendSpeed_7 = value;
	}

	inline static int32_t get_offset_of_blendOneFinished_8() { return static_cast<int32_t>(offsetof(flag_t3145580, ___blendOneFinished_8)); }
	inline bool get_blendOneFinished_8() const { return ___blendOneFinished_8; }
	inline bool* get_address_of_blendOneFinished_8() { return &___blendOneFinished_8; }
	inline void set_blendOneFinished_8(bool value)
	{
		___blendOneFinished_8 = value;
	}

	inline static int32_t get_offset_of_index_9() { return static_cast<int32_t>(offsetof(flag_t3145580, ___index_9)); }
	inline int32_t get_index_9() const { return ___index_9; }
	inline int32_t* get_address_of_index_9() { return &___index_9; }
	inline void set_index_9(int32_t value)
	{
		___index_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
