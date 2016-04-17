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

// CnControls.Touchpad
struct Touchpad_t2440189455;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void CnControls.Touchpad::.ctor()
extern "C"  void Touchpad__ctor_m2480485514 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.Touchpad::get_CurrentEventCamera()
extern "C"  Camera_t3533968274 * Touchpad_get_CurrentEventCamera_m24935656 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Touchpad_set_CurrentEventCamera_m2821276673 (Touchpad_t2440189455 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::Awake()
extern "C"  void Touchpad_Awake_m2718090733 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnEnable()
extern "C"  void Touchpad_OnEnable_m3303198396 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnDisable()
extern "C"  void Touchpad_OnDisable_m4055839729 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnDrag_m809770993 (Touchpad_t2440189455 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerUp_m2079390173 (Touchpad_t2440189455 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Touchpad_OnPointerDown_m543720118 (Touchpad_t2440189455 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Touchpad::Update()
extern "C"  void Touchpad_Update_m1312501699 (Touchpad_t2440189455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
