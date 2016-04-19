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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>
struct Transform_1_t3750959854;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22317966939.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2305414390_gshared (Transform_1_t3750959854 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2305414390(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3750959854 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2305414390_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2317966939  Transform_1_Invoke_m3374485570_gshared (Transform_1_t3750959854 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3374485570(__this, ___key, ___value, method) ((  KeyValuePair_2_t2317966939  (*) (Transform_1_t3750959854 *, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Transform_1_Invoke_m3374485570_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m453777133_gshared (Transform_1_t3750959854 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m453777133(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3750959854 *, Il2CppObject *, Color32_t4137084207 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m453777133_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color32,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2317966939  Transform_1_EndInvoke_m2166010632_gshared (Transform_1_t3750959854 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2166010632(__this, ___result, method) ((  KeyValuePair_2_t2317966939  (*) (Transform_1_t3750959854 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2166010632_gshared)(__this, ___result, method)
