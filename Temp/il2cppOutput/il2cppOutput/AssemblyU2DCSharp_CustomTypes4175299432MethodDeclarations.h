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

// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream2881531048.h"
#include "mscorlib_System_Object837106420.h"

// System.Void CustomTypes::.cctor()
extern "C"  void CustomTypes__cctor_m468098826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
extern "C"  void CustomTypes_Register_m2688832964 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector3_m1537789901 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector3_m463538238 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector2_m2460473484 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeVector2_m3125701535 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeQuaternion_m2828337771 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializeQuaternion_m1193381832 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializePhotonPlayer_m537366666 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___outStream, Il2CppObject * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(System.IO.MemoryStream,System.Int16)
extern "C"  Il2CppObject * CustomTypes_DeserializePhotonPlayer_m1749271753 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
