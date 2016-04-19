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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,UnityEngine.Color32>
struct Transform_1_t1275109826;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3795260393_gshared (Transform_1_t1275109826 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3795260393(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1275109826 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3795260393_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,UnityEngine.Color32>::Invoke(TKey,TValue)
extern "C"  Color32_t4137084207  Transform_1_Invoke_m1950613363_gshared (Transform_1_t1275109826 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1950613363(__this, ___key, ___value, method) ((  Color32_t4137084207  (*) (Transform_1_t1275109826 *, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Transform_1_Invoke_m1950613363_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,UnityEngine.Color32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1882011090_gshared (Transform_1_t1275109826 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1882011090(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1275109826 *, Il2CppObject *, Color32_t4137084207 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1882011090_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  Color32_t4137084207  Transform_1_EndInvoke_m3339619127_gshared (Transform_1_t1275109826 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3339619127(__this, ___result, method) ((  Color32_t4137084207  (*) (Transform_1_t1275109826 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3339619127_gshared)(__this, ___result, method)
