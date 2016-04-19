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

// CnControls.SimpleJoystick
struct SimpleJoystick_t2444490281;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void CnControls.SimpleJoystick::.ctor()
extern "C"  void SimpleJoystick__ctor_m2829873520 (SimpleJoystick_t2444490281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.SimpleJoystick::get_CurrentEventCamera()
extern "C"  Camera_t3533968274 * SimpleJoystick_get_CurrentEventCamera_m1243258242 (SimpleJoystick_t2444490281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void SimpleJoystick_set_CurrentEventCamera_m3430493531 (SimpleJoystick_t2444490281 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::Awake()
extern "C"  void SimpleJoystick_Awake_m3067478739 (SimpleJoystick_t2444490281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnEnable()
extern "C"  void SimpleJoystick_OnEnable_m920559638 (SimpleJoystick_t2444490281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnDisable()
extern "C"  void SimpleJoystick_OnDisable_m3208482263 (SimpleJoystick_t2444490281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnDrag_m3692420439 (SimpleJoystick_t2444490281 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerUp_m3166415927 (SimpleJoystick_t2444490281 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void SimpleJoystick_OnPointerDown_m1498416784 (SimpleJoystick_t2444490281 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.SimpleJoystick::Hide(System.Boolean)
extern "C"  void SimpleJoystick_Hide_m1780177293 (SimpleJoystick_t2444490281 * __this, bool ___isHidden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
