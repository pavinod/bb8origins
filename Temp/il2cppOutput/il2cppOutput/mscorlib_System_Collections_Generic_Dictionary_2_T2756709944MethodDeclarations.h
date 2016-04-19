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

// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,PunTeams/Team>
struct Transform_1_t2756709944;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_PunTeams_Team2602621.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,PunTeams/Team>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2583485761_gshared (Transform_1_t2756709944 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2583485761(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2756709944 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2583485761_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,PunTeams/Team>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m911287323_gshared (Transform_1_t2756709944 * __this, uint8_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m911287323(__this, ___key, ___value, method) ((  uint8_t (*) (Transform_1_t2756709944 *, uint8_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m911287323_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,PunTeams/Team>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m502708602_gshared (Transform_1_t2756709944 * __this, uint8_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m502708602(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2756709944 *, uint8_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m502708602_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,PunTeams/Team>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m850881935_gshared (Transform_1_t2756709944 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m850881935(__this, ___result, method) ((  uint8_t (*) (Transform_1_t2756709944 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m850881935_gshared)(__this, ___result, method)
