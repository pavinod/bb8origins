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

// System.Action`1<UnityEngine.Vector4>
struct Action_1_t3673782495;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2329244682_gshared (Action_1_t3673782495 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m2329244682(__this, ___object, ___method, method) ((  void (*) (Action_1_t3673782495 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2329244682_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Vector4>::Invoke(T)
extern "C"  void Action_1_Invoke_m513345786_gshared (Action_1_t3673782495 * __this, Vector4_t3525329790  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m513345786(__this, ___obj, method) ((  void (*) (Action_1_t3673782495 *, Vector4_t3525329790 , const MethodInfo*))Action_1_Invoke_m513345786_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2223721159_gshared (Action_1_t3673782495 * __this, Vector4_t3525329790  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m2223721159(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t3673782495 *, Vector4_t3525329790 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2223721159_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m4131945242_gshared (Action_1_t3673782495 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m4131945242(__this, ___result, method) ((  void (*) (Action_1_t3673782495 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m4131945242_gshared)(__this, ___result, method)
