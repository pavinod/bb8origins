#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// buoyancy
struct buoyancy_t3048016992;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// UnityEngine.Collider
struct Collider_t955670625;
// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t1396854807;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void buoyancy::.ctor()
extern "C"  void buoyancy__ctor_m1917558331 (buoyancy_t3048016992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::Start()
extern "C"  void buoyancy_Start_m864696123 (buoyancy_t3048016992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> buoyancy::SliceIntoVoxels(System.Boolean)
extern "C"  List_1_t27321462 * buoyancy_SliceIntoVoxels_m2270207861 (buoyancy_t3048016992 * __this, bool ___concave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean buoyancy::PointIsInsideMeshCollider(UnityEngine.Collider,UnityEngine.Vector3)
extern "C"  bool buoyancy_PointIsInsideMeshCollider_m624863684 (Il2CppObject * __this /* static, unused */, Collider_t955670625 * ___c, Vector3_t3525329789  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::FindClosestPoints(System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Int32&,System.Int32&)
extern "C"  void buoyancy_FindClosestPoints_m1453123240 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list, int32_t* ___firstIndex, int32_t* ___secondIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::WeldPoints(System.Collections.Generic.IList`1<UnityEngine.Vector3>,System.Int32)
extern "C"  void buoyancy_WeldPoints_m598258831 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list, int32_t ___targetCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single buoyancy::GetWaterLevel(System.Single,System.Single)
extern "C"  float buoyancy_GetWaterLevel_m3329649504 (buoyancy_t3048016992 * __this, float ___x, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::FixedUpdate()
extern "C"  void buoyancy_FixedUpdate_m1840685942 (buoyancy_t3048016992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::play()
extern "C"  void buoyancy_play_m850755005 (buoyancy_t3048016992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void buoyancy::OnDrawGizmos()
extern "C"  void buoyancy_OnDrawGizmos_m1173752453 (buoyancy_t3048016992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
