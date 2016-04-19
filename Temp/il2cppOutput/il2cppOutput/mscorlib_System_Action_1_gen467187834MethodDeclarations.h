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

// System.Action`1<System.Reflection.CustomAttributeNamedArgument>
struct Action_1_t467187834;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgu318735129.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m1819105799_gshared (Action_1_t467187834 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1819105799(__this, ___object, ___method, method) ((  void (*) (Action_1_t467187834 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1819105799_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C"  void Action_1_Invoke_m4053608541_gshared (Action_1_t467187834 * __this, CustomAttributeNamedArgument_t318735129  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m4053608541(__this, ___obj, method) ((  void (*) (Action_1_t467187834 *, CustomAttributeNamedArgument_t318735129 , const MethodInfo*))Action_1_Invoke_m4053608541_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m4060881842_gshared (Action_1_t467187834 * __this, CustomAttributeNamedArgument_t318735129  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m4060881842(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t467187834 *, CustomAttributeNamedArgument_t318735129 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m4060881842_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m622126999_gshared (Action_1_t467187834 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m622126999(__this, ___result, method) ((  void (*) (Action_1_t467187834 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m622126999_gshared)(__this, ___result, method)
