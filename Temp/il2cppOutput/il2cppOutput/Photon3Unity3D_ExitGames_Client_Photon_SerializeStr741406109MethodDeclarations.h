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

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t741406109;
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

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeStreamMethod__ctor_m1029384447 (SerializeStreamMethod_t741406109 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(System.IO.MemoryStream,System.Object)
extern "C"  int16_t SerializeStreamMethod_Invoke_m2691836883 (SerializeStreamMethod_t741406109 * __this, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int16_t pinvoke_delegate_wrapper_SerializeStreamMethod_t741406109(Il2CppObject* delegate, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customObject);
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(System.IO.MemoryStream,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeStreamMethod_BeginInvoke_m2292229672 (SerializeStreamMethod_t741406109 * __this, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customObject, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  int16_t SerializeStreamMethod_EndInvoke_m3161046821 (SerializeStreamMethod_t741406109 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
