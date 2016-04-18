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

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2269051836;
// System.Object
struct Il2CppObject;
// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_MemoryStream2881531048.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeStreamMethod__ctor_m2638295006 (DeserializeStreamMethod_t2269051836 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::Invoke(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * DeserializeStreamMethod_Invoke_m2833769592 (DeserializeStreamMethod_t2269051836 * __this, MemoryStream_t2881531048 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Il2CppObject * pinvoke_delegate_wrapper_DeserializeStreamMethod_t2269051836(Il2CppObject* delegate, MemoryStream_t2881531048 * ___inStream, int16_t ___length);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Int16,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeserializeStreamMethod_BeginInvoke_m183451582 (DeserializeStreamMethod_t2269051836 * __this, MemoryStream_t2881531048 * ___inStream, int16_t ___length, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * DeserializeStreamMethod_EndInvoke_m2372751193 (DeserializeStreamMethod_t2269051836 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
