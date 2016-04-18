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

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1030354720;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1632816265.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m2221358945 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m453125441 (AuthenticationValues_t1030354720 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m224804506 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.Chat.CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m3928967057 (AuthenticationValues_t1030354720 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m363369617 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m430725384 (AuthenticationValues_t1030354720 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m639671273 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m504028386 (AuthenticationValues_t1030354720 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m1745178930 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m1869374599 (AuthenticationValues_t1030354720 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m3397983311 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m998691964 (AuthenticationValues_t1030354720 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m238986287 (AuthenticationValues_t1030354720 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m2476147958 (AuthenticationValues_t1030354720 * __this, ByteU5BU5D_t58506160* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m631508827 (AuthenticationValues_t1030354720 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m1173037036 (AuthenticationValues_t1030354720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
