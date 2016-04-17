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

// CnControls.CnInputManager
struct CnInputManager_t3458767273;
// System.String
struct String_t;
// CnControls.VirtualAxis
struct VirtualAxis_t3870720551;
// CnControls.VirtualButton
struct VirtualButton_t3983641336;
// System.Collections.Generic.List`1<CnControls.VirtualAxis>
struct List_1_t372712224;
// System.Collections.Generic.List`1<CnControls.VirtualButton>
struct List_1_t485633009;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_CnControls_VirtualAxis3870720551.h"
#include "AssemblyU2DCSharp_CnControls_VirtualButton3983641336.h"

// System.Void CnControls.CnInputManager::.ctor()
extern "C"  void CnInputManager__ctor_m376946160 (CnInputManager_t3458767273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CnControls.CnInputManager CnControls.CnInputManager::get_Instance()
extern "C"  CnInputManager_t3458767273 * CnInputManager_get_Instance_m1427348314 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CnControls.CnInputManager::get_TouchCount()
extern "C"  int32_t CnInputManager_get_TouchCount_m2105276959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch CnControls.CnInputManager::GetTouch(System.Int32)
extern "C"  Touch_t1603883884  CnInputManager_GetTouch_m487395427 (Il2CppObject * __this /* static, unused */, int32_t ___touchIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String)
extern "C"  float CnInputManager_GetAxis_m1562725809 (Il2CppObject * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxisRaw(System.String)
extern "C"  float CnInputManager_GetAxisRaw_m2061135497 (Il2CppObject * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetAxis(System.String,System.Boolean)
extern "C"  float CnInputManager_GetAxis_m4111584684 (Il2CppObject * __this /* static, unused */, String_t* ___axisName, bool ___isRaw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButton(System.String)
extern "C"  bool CnInputManager_GetButton_m4177567448 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButtonDown(System.String)
extern "C"  bool CnInputManager_GetButtonDown_m1881716310 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetButtonUp(System.String)
extern "C"  bool CnInputManager_GetButtonUp_m3244193021 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::AxisExists(System.String)
extern "C"  bool CnInputManager_AxisExists_m2084914213 (Il2CppObject * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::ButtonExists(System.String)
extern "C"  bool CnInputManager_ButtonExists_m2725166324 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_RegisterVirtualAxis_m1125687032 (Il2CppObject * __this /* static, unused */, VirtualAxis_t3870720551 * ___virtualAxis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualAxis(CnControls.VirtualAxis)
extern "C"  void CnInputManager_UnregisterVirtualAxis_m2971540351 (Il2CppObject * __this /* static, unused */, VirtualAxis_t3870720551 * ___virtualAxis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::RegisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_RegisterVirtualButton_m3078682776 (Il2CppObject * __this /* static, unused */, VirtualButton_t3983641336 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CnControls.CnInputManager::UnregisterVirtualButton(CnControls.VirtualButton)
extern "C"  void CnInputManager_UnregisterVirtualButton_m1977014687 (Il2CppObject * __this /* static, unused */, VirtualButton_t3983641336 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CnControls.CnInputManager::GetVirtualAxisValue(System.Collections.Generic.List`1<CnControls.VirtualAxis>,System.String,System.Boolean)
extern "C"  float CnInputManager_GetVirtualAxisValue_m3368408485 (Il2CppObject * __this /* static, unused */, List_1_t372712224 * ___virtualAxisList, String_t* ___axisName, bool ___isRaw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonDown(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonDown_m3242906103 (Il2CppObject * __this /* static, unused */, List_1_t485633009 * ___virtualButtons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButtonUp(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButtonUp_m1757028510 (Il2CppObject * __this /* static, unused */, List_1_t485633009 * ___virtualButtons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CnControls.CnInputManager::GetAnyVirtualButton(System.Collections.Generic.List`1<CnControls.VirtualButton>)
extern "C"  bool CnInputManager_GetAnyVirtualButton_m1610379129 (Il2CppObject * __this /* static, unused */, List_1_t485633009 * ___virtualButtons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
