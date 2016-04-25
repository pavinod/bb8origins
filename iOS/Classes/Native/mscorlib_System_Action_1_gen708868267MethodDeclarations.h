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

// System.Action`1<System.Reflection.CustomAttributeTypedArgument>
struct Action_1_t708868267;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgu560415562.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3098383478_gshared (Action_1_t708868267 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m3098383478(__this, ___object, ___method, method) ((  void (*) (Action_1_t708868267 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3098383478_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C"  void Action_1_Invoke_m2306418446_gshared (Action_1_t708868267 * __this, CustomAttributeTypedArgument_t560415562  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2306418446(__this, ___obj, method) ((  void (*) (Action_1_t708868267 *, CustomAttributeTypedArgument_t560415562 , const MethodInfo*))Action_1_Invoke_m2306418446_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2018499939_gshared (Action_1_t708868267 * __this, CustomAttributeTypedArgument_t560415562  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m2018499939(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t708868267 *, CustomAttributeTypedArgument_t560415562 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2018499939_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1169797510_gshared (Action_1_t708868267 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1169797510(__this, ___result, method) ((  void (*) (Action_1_t708868267 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1169797510_gshared)(__this, ___result, method)
