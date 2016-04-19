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

// CnControls.DpadAxis
struct DpadAxis_t639718155;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void CnControls.DpadAxis::.ctor()
extern "C"  void DpadAxis__ctor_m647041806 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform CnControls.DpadAxis::get_RectTransform()
extern "C"  RectTransform_t3317474837 * DpadAxis_get_RectTransform_m1476833037 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::set_RectTransform(UnityEngine.RectTransform)
extern "C"  void DpadAxis_set_RectTransform_m696303210 (DpadAxis_t639718155 * __this, RectTransform_t3317474837 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CnControls.DpadAxis::get_LastFingerId()
extern "C"  int32_t DpadAxis_get_LastFingerId_m3618231243 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::set_LastFingerId(System.Int32)
extern "C"  void DpadAxis_set_LastFingerId_m731589854 (DpadAxis_t639718155 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::Awake()
extern "C"  void DpadAxis_Awake_m884647025 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::OnEnable()
extern "C"  void DpadAxis_OnEnable_m2280796600 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::OnDisable()
extern "C"  void DpadAxis_OnDisable_m2426155125 (DpadAxis_t639718155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::Press(UnityEngine.Vector2,UnityEngine.Camera,System.Int32)
extern "C"  void DpadAxis_Press_m2771097880 (DpadAxis_t639718155 * __this, Vector2_t3525329788  ___screenPoint, Camera_t3533968274 * ___eventCamera, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.DpadAxis::TryRelease(System.Int32)
extern "C"  void DpadAxis_TryRelease_m312392147 (DpadAxis_t639718155 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
