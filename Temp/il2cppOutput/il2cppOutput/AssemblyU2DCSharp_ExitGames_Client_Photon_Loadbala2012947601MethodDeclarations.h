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

// ExitGames.Client.Photon.LoadbalancingPeer
struct LoadbalancingPeer_t2012947601;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t1020404140;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// RoomOptions
struct RoomOptions_t979675427;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t1470694169;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t1498792015;
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.Object
struct Il2CppObject;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// RaiseEventOptions
struct RaiseEventOptions_t2943657104;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_TypedLobby1020404140.h"
#include "AssemblyU2DCSharp_RoomOptions979675427.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Loadbala1470694169.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Loadbala1498792015.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_AuthenticationValues2964448730.h"
#include "AssemblyU2DCSharp_RaiseEventOptions2943657104.h"

// System.Void ExitGames.Client.Photon.LoadbalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadbalancingPeer__ctor_m1770580544 (LoadbalancingPeer_t2012947601 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::get_IsProtocolSecure()
extern "C"  bool LoadbalancingPeer_get_IsProtocolSecure_m3986468578 (LoadbalancingPeer_t2012947601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpGetRegions(System.String)
extern "C"  bool LoadbalancingPeer_OpGetRegions_m4261684376 (LoadbalancingPeer_t2012947601 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinLobby(TypedLobby)
extern "C"  bool LoadbalancingPeer_OpJoinLobby_m2159968641 (LoadbalancingPeer_t2012947601 * __this, TypedLobby_t1020404140 * ___lobby, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveLobby()
extern "C"  bool LoadbalancingPeer_OpLeaveLobby_m14865600 (LoadbalancingPeer_t2012947601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,RoomOptions)
extern "C"  void LoadbalancingPeer_RoomOptionsToOpParameters_m1124532854 (LoadbalancingPeer_t2012947601 * __this, Dictionary_2_t3871407537 * ___op, RoomOptions_t979675427 * ___roomOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpCreateRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool LoadbalancingPeer_OpCreateRoom_m4218722069 (LoadbalancingPeer_t2012947601 * __this, EnterRoomParams_t1470694169 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool LoadbalancingPeer_OpJoinRoom_m3680109863 (LoadbalancingPeer_t2012947601 * __this, EnterRoomParams_t1470694169 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C"  bool LoadbalancingPeer_OpJoinRandomRoom_m662909958 (LoadbalancingPeer_t2012947601 * __this, OpJoinRandomRoomParams_t1498792015 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadbalancingPeer_OpLeaveRoom_m3233976522 (LoadbalancingPeer_t2012947601 * __this, bool ___becomeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpFindFriends(System.String[])
extern "C"  bool LoadbalancingPeer_OpFindFriends_m3665480835 (LoadbalancingPeer_t2012947601 * __this, StringU5BU5D_t2956870243* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadbalancingPeer_OpSetCustomPropertiesOfActor_m1174113456 (LoadbalancingPeer_t2012947601 * __this, int32_t ___actorNr, Hashtable_t223732124 * ___actorProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadbalancingPeer_OpSetPropertiesOfActor_m2889898870 (LoadbalancingPeer_t2012947601 * __this, int32_t ___actorNr, Hashtable_t223732124 * ___actorProperties, Hashtable_t223732124 * ___expectedProperties, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C"  void LoadbalancingPeer_OpSetPropertyOfRoom_m3530899779 (LoadbalancingPeer_t2012947601 * __this, uint8_t ___propCode, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C"  bool LoadbalancingPeer_OpSetCustomPropertiesOfRoom_m1105706351 (LoadbalancingPeer_t2012947601 * __this, Hashtable_t223732124 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadbalancingPeer_OpSetPropertiesOfRoom_m1511259891 (LoadbalancingPeer_t2012947601 * __this, Hashtable_t223732124 * ___gameProperties, Hashtable_t223732124 * ___expectedProperties, bool ___webForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String,System.Boolean)
extern "C"  bool LoadbalancingPeer_OpAuthenticate_m3625840413 (LoadbalancingPeer_t2012947601 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t2964448730 * ___authValues, String_t* ___regionCode, bool ___getLobbyStatistics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadbalancingPeer_OpChangeGroups_m1060066343 (LoadbalancingPeer_t2012947601 * __this, ByteU5BU5D_t58506160* ___groupsToRemove, ByteU5BU5D_t58506160* ___groupsToAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool LoadbalancingPeer_OpRaiseEvent_m2037898287 (LoadbalancingPeer_t2012947601 * __this, uint8_t ___eventCode, Il2CppObject * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t2943657104 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
