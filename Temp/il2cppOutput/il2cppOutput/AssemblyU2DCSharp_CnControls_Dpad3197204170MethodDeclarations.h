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

// CnControls.Dpad
struct Dpad_t3197204170;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void CnControls.Dpad::.ctor()
extern "C"  void Dpad__ctor_m996228015 (Dpad_t3197204170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CnControls.Dpad::get_CurrentEventCamera()
extern "C"  Camera_t3533968274 * Dpad_get_CurrentEventCamera_m1511406563 (Dpad_t3197204170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::set_CurrentEventCamera(UnityEngine.Camera)
extern "C"  void Dpad_set_CurrentEventCamera_m458162876 (Dpad_t3197204170 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::Awake()
extern "C"  void Dpad_Awake_m1233833234 (Dpad_t3197204170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerDown_m720395825 (Dpad_t3197204170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.Dpad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Dpad_OnPointerUp_m3625941016 (Dpad_t3197204170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
