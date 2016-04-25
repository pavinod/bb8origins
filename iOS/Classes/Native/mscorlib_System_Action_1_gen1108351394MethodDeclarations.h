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

// System.Action`1<UnityEngine.EventSystems.RaycastResult>
struct Action_1_t1108351394;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResu959898689.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m525831357_gshared (Action_1_t1108351394 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m525831357(__this, ___object, ___method, method) ((  void (*) (Action_1_t1108351394 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m525831357_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C"  void Action_1_Invoke_m3111208167_gshared (Action_1_t1108351394 * __this, RaycastResult_t959898689  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3111208167(__this, ___obj, method) ((  void (*) (Action_1_t1108351394 *, RaycastResult_t959898689 , const MethodInfo*))Action_1_Invoke_m3111208167_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2799907388_gshared (Action_1_t1108351394 * __this, RaycastResult_t959898689  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m2799907388(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t1108351394 *, RaycastResult_t959898689 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2799907388_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1849746765_gshared (Action_1_t1108351394 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1849746765(__this, ___result, method) ((  void (*) (Action_1_t1108351394 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1849746765_gshared)(__this, ___result, method)
