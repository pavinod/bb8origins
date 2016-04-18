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

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2443397041;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C"  void ChatChannel__ctor_m659436290 (ChatChannel_t2443397041 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C"  bool ChatChannel_get_IsPrivate_m3310452050 (ChatChannel_t2443397041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C"  void ChatChannel_set_IsPrivate_m2579256945 (ChatChannel_t2443397041 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C"  int32_t ChatChannel_get_MessageCount_m2475634955 (ChatChannel_t2443397041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C"  void ChatChannel_Add_m2217834033 (ChatChannel_t2443397041 * __this, String_t* ___sender, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C"  void ChatChannel_Add_m489366381 (ChatChannel_t2443397041 * __this, StringU5BU5D_t2956870243* ___senders, ObjectU5BU5D_t11523773* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::TruncateMessages()
extern "C"  void ChatChannel_TruncateMessages_m1792210198 (ChatChannel_t2443397041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C"  void ChatChannel_ClearMessages_m478845079 (ChatChannel_t2443397041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatChannel::ToStringMessages()
extern "C"  String_t* ChatChannel_ToStringMessages_m2838270783 (ChatChannel_t2443397041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
