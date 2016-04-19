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

// System.Action`1<System.Single>
struct Action_1_t1106661726;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m993889981_gshared (Action_1_t1106661726 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m993889981(__this, ___object, ___method, method) ((  void (*) (Action_1_t1106661726 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m993889981_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Single>::Invoke(T)
extern "C"  void Action_1_Invoke_m2677867239_gshared (Action_1_t1106661726 * __this, float ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2677867239(__this, ___obj, method) ((  void (*) (Action_1_t1106661726 *, float, const MethodInfo*))Action_1_Invoke_m2677867239_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1836875956_gshared (Action_1_t1106661726 * __this, float ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1836875956(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t1106661726 *, float, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1836875956_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m3782731597_gshared (Action_1_t1106661726 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m3782731597(__this, ___result, method) ((  void (*) (Action_1_t1106661726 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m3782731597_gshared)(__this, ___result, method)
