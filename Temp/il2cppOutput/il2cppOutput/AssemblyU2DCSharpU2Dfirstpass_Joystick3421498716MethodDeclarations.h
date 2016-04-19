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

// Joystick
struct Joystick_t3421498716;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void Joystick::.ctor()
extern "C"  void Joystick__ctor_m4251284339 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnEnable()
extern "C"  void Joystick_OnEnable_m2087697203 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::LateUpdate()
extern "C"  void Joystick_LateUpdate_m337446592 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
extern "C"  void Joystick_UpdateVirtualAxes_m890608065 (Joystick_t3421498716 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::FollowFinger(UnityEngine.Touch)
extern "C"  void Joystick_FollowFinger_m932904383 (Joystick_t3421498716 * __this, Touch_t1603883884  ____Touch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnDrag_m1815128986 (Joystick_t3421498716 * __this, PointerEventData_t3205101634 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Joystick_OnPointerUp_m629559252 (Joystick_t3421498716 * __this, PointerEventData_t3205101634 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Joystick::OnDrawGizmos()
extern "C"  void Joystick_OnDrawGizmos_m3495192141 (Joystick_t3421498716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
