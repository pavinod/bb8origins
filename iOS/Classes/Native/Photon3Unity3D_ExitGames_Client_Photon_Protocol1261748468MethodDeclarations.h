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

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t741406109;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2269051836;
// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t3861919108;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t2644772068;
// ExitGames.Client.Photon.EventData
struct EventData_t4221167488;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeStr741406109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Deserialize2269051836.h"
#include "mscorlib_System_IO_MemoryStream2881531048.h"
#include "mscorlib_System_Object837106420.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_GpType30027295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3861919108.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2644772068.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4221167488.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Array2840145358.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool Protocol_TryRegisterType_m4026185887 (Il2CppObject * __this /* static, unused */, Type_t * ___type, uint8_t ___typeCode, SerializeStreamMethod_t741406109 * ___serializeFunction, DeserializeStreamMethod_t2269051836 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::SerializeCustom(System.IO.MemoryStream,System.Object)
extern "C"  bool Protocol_SerializeCustom_m1294977671 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeCustom(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol_DeserializeCustom_m2977686014 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, uint8_t ___customTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol_GetTypeOfCode_m2544710793 (Il2CppObject * __this /* static, unused */, uint8_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.GpType ExitGames.Client.Photon.Protocol::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol_GetCodeOfType_m2550357791 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Il2CppArray * Protocol_CreateArrayByType_m1713528503 (Il2CppObject * __this /* static, unused */, uint8_t ___arrayType, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m4050376063 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memStream, OperationRequest_t3861919108 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m2194966540 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memStream, uint8_t ___operationCode, Dictionary_2_t3871407537 * ___parameters, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol::DeserializeOperationRequest(System.IO.MemoryStream)
extern "C"  OperationRequest_t3861919108 * Protocol_DeserializeOperationRequest_m156168744 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol_SerializeOperationResponse_m2565453319 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memStream, OperationResponse_t2644772068 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol::DeserializeOperationResponse(System.IO.MemoryStream)
extern "C"  OperationResponse_t2644772068 * Protocol_DeserializeOperationResponse_m4175918238 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol_SerializeEventData_m2227896199 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memStream, EventData_t4221167488 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol::DeserializeEventData(System.IO.MemoryStream)
extern "C"  EventData_t4221167488 * Protocol_DeserializeEventData_m2971203614 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol_SerializeParameterTable_m3758948665 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memStream, Dictionary_2_t3871407537 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol::DeserializeParameterTable(System.IO.MemoryStream)
extern "C"  Dictionary_2_t3871407537 * Protocol_DeserializeParameterTable_m3858973773 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
extern "C"  void Protocol_Serialize_m2813077809 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
extern "C"  void Protocol_SerializeByte_m3686003154 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, uint8_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeBoolean_m996870200 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, bool ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
extern "C"  void Protocol_SerializeShort_m4206129656 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, int16_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1344711179 (Il2CppObject * __this /* static, unused */, int16_t ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
extern "C"  void Protocol_SerializeInteger_m935627700 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, int32_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m2001046545 (Il2CppObject * __this /* static, unused */, int32_t ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
extern "C"  void Protocol_SerializeLong_m452977343 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, int64_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
extern "C"  void Protocol_SerializeFloat_m793816364 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, float ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m729069851 (Il2CppObject * __this /* static, unused */, float ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
extern "C"  void Protocol_SerializeDouble_m713190322 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, double ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
extern "C"  void Protocol_SerializeString_m947393458 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, String_t* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
extern "C"  void Protocol_SerializeArray_m2062845274 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, Il2CppArray * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
extern "C"  void Protocol_SerializeByteArray_m55249689 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, ByteU5BU5D_t58506160* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
extern "C"  void Protocol_SerializeIntArrayOptimized_m3096705525 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___inWriter, Int32U5BU5D_t1809983122* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
extern "C"  void Protocol_SerializeObjectArray_m270144199 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, ObjectU5BU5D_t11523773* ___objects, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol_SerializeHashTable_m2516947751 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, Hashtable_t223732124 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol_SerializeDictionary_m3347799698 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
extern "C"  void Protocol_SerializeDictionaryHeader_m1980349460 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___writer, Type_t * ___dictType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol_SerializeDictionaryHeader_m231457101 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___writer, Il2CppObject * ___dict, bool* ___setKeyType, bool* ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeDictionaryElements_m3885513657 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___writer, Il2CppObject * ___dict, bool ___setKeyType, bool ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol_Deserialize_m2083608493 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol::DeserializeByte(System.IO.MemoryStream)
extern "C"  uint8_t Protocol_DeserializeByte_m3407207673 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeBoolean(System.IO.MemoryStream)
extern "C"  bool Protocol_DeserializeBoolean_m2265005871 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol::DeserializeShort(System.IO.MemoryStream)
extern "C"  int16_t Protocol_DeserializeShort_m3600877335 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m3746144530 (Il2CppObject * __this /* static, unused */, int16_t* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol::DeserializeInteger(System.IO.MemoryStream)
extern "C"  int32_t Protocol_DeserializeInteger_m3561016031 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m2617704396 (Il2CppObject * __this /* static, unused */, int32_t* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol::DeserializeLong(System.IO.MemoryStream)
extern "C"  int64_t Protocol_DeserializeLong_m220499176 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol::DeserializeFloat(System.IO.MemoryStream)
extern "C"  float Protocol_DeserializeFloat_m3874425817 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m3616978080 (Il2CppObject * __this /* static, unused */, float* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol::DeserializeDouble(System.IO.MemoryStream)
extern "C"  double Protocol_DeserializeDouble_m3697112651 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol::DeserializeString(System.IO.MemoryStream)
extern "C"  String_t* Protocol_DeserializeString_m1787436747 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::DeserializeArray(System.IO.MemoryStream)
extern "C"  Il2CppArray * Protocol_DeserializeArray_m3866213583 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeByteArray(System.IO.MemoryStream)
extern "C"  ByteU5BU5D_t58506160* Protocol_DeserializeByteArray_m4223754060 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol::DeserializeIntArray(System.IO.MemoryStream)
extern "C"  Int32U5BU5D_t1809983122* Protocol_DeserializeIntArray_m3055842585 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol::DeserializeStringArray(System.IO.MemoryStream)
extern "C"  StringU5BU5D_t2956870243* Protocol_DeserializeStringArray_m1587283834 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol::DeserializeObjectArray(System.IO.MemoryStream)
extern "C"  ObjectU5BU5D_t11523773* Protocol_DeserializeObjectArray_m835538206 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol::DeserializeHashTable(System.IO.MemoryStream)
extern "C"  Hashtable_t223732124 * Protocol_DeserializeHashTable_m2840770686 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol::DeserializeDictionary(System.IO.MemoryStream)
extern "C"  Il2CppObject * Protocol_DeserializeDictionary_m1787403899 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
extern "C"  bool Protocol_DeserializeDictionaryArray_m3374885703 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___din, int16_t ___size, Il2CppArray ** ___arrayResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol_DeserializeDictionaryType_m3210047283 (Il2CppObject * __this /* static, unused */, MemoryStream_t2881531048 * ___reader, uint8_t* ___keyTypeCode, uint8_t* ___valTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C"  void Protocol__cctor_m1450056899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
