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

// System.Action`1<UnityEngine.UICharInfo>
struct Action_1_t552273286;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_UICharInfo403820581.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m578452423_gshared (Action_1_t552273286 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m578452423(__this, ___object, ___method, method) ((  void (*) (Action_1_t552273286 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m578452423_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C"  void Action_1_Invoke_m1606651549_gshared (Action_1_t552273286 * __this, UICharInfo_t403820581  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1606651549(__this, ___obj, method) ((  void (*) (Action_1_t552273286 *, UICharInfo_t403820581 , const MethodInfo*))Action_1_Invoke_m1606651549_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1263703538_gshared (Action_1_t552273286 * __this, UICharInfo_t403820581  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1263703538(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t552273286 *, UICharInfo_t403820581 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1263703538_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m343468375_gshared (Action_1_t552273286 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m343468375(__this, ___result, method) ((  void (*) (Action_1_t552273286 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m343468375_gshared)(__this, ___result, method)
