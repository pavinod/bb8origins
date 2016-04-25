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

// TouchPad
struct TouchPad_t3540058356;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void TouchPad::.ctor()
extern "C"  void TouchPad__ctor_m3631540955 (TouchPad_t3540058356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::OnEnable()
extern "C"  void TouchPad_OnEnable_m3376949963 (TouchPad_t3540058356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::LateUpdate()
extern "C"  void TouchPad_LateUpdate_m2358767704 (TouchPad_t3540058356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void TouchPad_UpdateVirtualAxes_m2037462361 (TouchPad_t3540058356 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::FollowFinger(UnityEngine.Touch)
extern "C"  void TouchPad_FollowFinger_m3172252967 (TouchPad_t3540058356 * __this, Touch_t1603883884  ____Touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchPad_OnPointerUp_m304593772 (TouchPad_t3540058356 * __this, PointerEventData_t3205101634 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchPad::OnDrawGizmos()
extern "C"  void TouchPad_OnDrawGizmos_m364595685 (TouchPad_t3540058356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
