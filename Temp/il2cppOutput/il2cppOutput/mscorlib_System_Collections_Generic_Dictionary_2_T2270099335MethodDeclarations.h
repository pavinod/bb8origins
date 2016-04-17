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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Object>
struct Transform_1_t2270099335;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3485899030_gshared (Transform_1_t2270099335 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3485899030(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2270099335 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3485899030_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m1624018790_gshared (Transform_1_t2270099335 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1624018790(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t2270099335 *, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Transform_1_Invoke_m1624018790_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4015086149_gshared (Transform_1_t2270099335 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4015086149(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2270099335 *, Il2CppObject *, Color32_t4137084207 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4015086149_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3196491108_gshared (Transform_1_t2270099335 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3196491108(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t2270099335 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3196491108_gshared)(__this, ___result, method)
