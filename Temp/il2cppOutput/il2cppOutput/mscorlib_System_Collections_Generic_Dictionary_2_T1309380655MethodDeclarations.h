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

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>
struct Transform_1_t1309380655;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m639885156_gshared (Transform_1_t1309380655 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m639885156(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1309380655 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m639885156_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m1105241236_gshared (Transform_1_t1309380655 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1105241236(__this, ___key, ___value, method) ((  uint8_t (*) (Transform_1_t1309380655 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1105241236_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1004907071_gshared (Transform_1_t1309380655 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1004907071(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1309380655 *, uint8_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1004907071_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m493819766_gshared (Transform_1_t1309380655 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m493819766(__this, ___result, method) ((  uint8_t (*) (Transform_1_t1309380655 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m493819766_gshared)(__this, ___result, method)
