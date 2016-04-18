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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>
struct Transform_1_t3475826872;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4219231025_gshared (Transform_1_t3475826872 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4219231025(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3475826872 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4219231025_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m1116362027_gshared (Transform_1_t3475826872 * __this, uint8_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1116362027(__this, ___key, ___value, method) ((  uint8_t (*) (Transform_1_t3475826872 *, uint8_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1116362027_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1424402314_gshared (Transform_1_t3475826872 * __this, uint8_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1424402314(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3475826872 *, uint8_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1424402314_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m4104123007_gshared (Transform_1_t3475826872 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m4104123007(__this, ___result, method) ((  uint8_t (*) (Transform_1_t3475826872 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4104123007_gshared)(__this, ___result, method)
