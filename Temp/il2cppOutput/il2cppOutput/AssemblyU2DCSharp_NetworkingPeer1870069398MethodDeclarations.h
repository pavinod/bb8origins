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

// NetworkingPeer
struct NetworkingPeer_t1870069398;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// System.Collections.Generic.List`1<Region>
struct List_1_t3240997901;
// TypedLobby
struct TypedLobby_t1020404140;
// Room
struct Room_t2553083;
// PhotonPlayer
struct PhotonPlayer_t1400510109;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// ExitGames.Client.Photon.EventData
struct EventData_t4221167488;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t3977425488;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t2644772068;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t1470694169;
// ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t1498792015;
// System.Object
struct Il2CppObject;
// RaiseEventOptions
struct RaiseEventOptions_t2943657104;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "AssemblyU2DCSharp_AuthenticationValues2964448730.h"
#include "AssemblyU2DCSharp_ServerConnection3129530017.h"
#include "AssemblyU2DCSharp_PeerState4150202415.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "AssemblyU2DCSharp_TypedLobby1020404140.h"
#include "AssemblyU2DCSharp_Room2553083.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4221167488.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2644772068.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Loadbala1470694169.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Loadbala1498792015.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_RaiseEventOptions2943657104.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode132272987.h"
#include "AssemblyU2DCSharp_PhotonNetworkingMessage2409876791.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "AssemblyU2DCSharp_PhotonView1498838369.h"
#include "AssemblyU2DCSharp_PhotonTargets3716398278.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void NetworkingPeer::.ctor(System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void NetworkingPeer__ctor_m1317967705 (NetworkingPeer_t1870069398 * __this, String_t* ___playername, uint8_t ___connectionProtocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C"  void NetworkingPeer__cctor_m2067385736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mAppVersionPun()
extern "C"  String_t* NetworkingPeer_get_mAppVersionPun_m2987117328 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_CustomAuthenticationValues()
extern "C"  AuthenticationValues_t2964448730 * NetworkingPeer_get_CustomAuthenticationValues_m226131286 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CustomAuthenticationValues(AuthenticationValues)
extern "C"  void NetworkingPeer_set_CustomAuthenticationValues_m4129322381 (NetworkingPeer_t1870069398 * __this, AuthenticationValues_t2964448730 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C"  String_t* NetworkingPeer_get_NameServerAddress_m2569044701 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C"  String_t* NetworkingPeer_get_MasterServerAddress_m3099387046 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C"  void NetworkingPeer_set_MasterServerAddress_m1876520365 (NetworkingPeer_t1870069398 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mGameserver()
extern "C"  String_t* NetworkingPeer_get_mGameserver_m356331545 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameserver(System.String)
extern "C"  void NetworkingPeer_set_mGameserver_m2218767898 (NetworkingPeer_t1870069398 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_server()
extern "C"  int32_t NetworkingPeer_get_server_m1736361927 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_server(ServerConnection)
extern "C"  void NetworkingPeer_set_server_m2470884990 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState NetworkingPeer::get_State()
extern "C"  int32_t NetworkingPeer_get_State_m1762205895 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(PeerState)
extern "C"  void NetworkingPeer_set_State_m4246378860 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C"  bool NetworkingPeer_get_IsUsingNameServer_m1734324494 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C"  void NetworkingPeer_set_IsUsingNameServer_m1440646725 (NetworkingPeer_t1870069398 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C"  bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m1198838518 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C"  List_1_t3240997901 * NetworkingPeer_get_AvailableRegions_m1464802245 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C"  void NetworkingPeer_set_AvailableRegions_m569024500 (NetworkingPeer_t1870069398 * __this, List_1_t3240997901 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C"  int32_t NetworkingPeer_get_CloudRegion_m1867522374 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C"  void NetworkingPeer_set_CloudRegion_m2501089229 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_requestLobbyStatistics()
extern "C"  bool NetworkingPeer_get_requestLobbyStatistics_m974171462 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C"  TypedLobby_t1020404140 * NetworkingPeer_get_lobby_m4009595775 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C"  void NetworkingPeer_set_lobby_m4211866256 (NetworkingPeer_t1870069398 * __this, TypedLobby_t1020404140 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersOnMasterCount()
extern "C"  int32_t NetworkingPeer_get_mPlayersOnMasterCount_m3391124469 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersOnMasterCount(System.Int32)
extern "C"  void NetworkingPeer_set_mPlayersOnMasterCount_m1534284448 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mGameCount()
extern "C"  int32_t NetworkingPeer_get_mGameCount_m2303474406 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameCount(System.Int32)
extern "C"  void NetworkingPeer_set_mGameCount_m3669252765 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersInRoomsCount()
extern "C"  int32_t NetworkingPeer_get_mPlayersInRoomsCount_m3314587447 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersInRoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_mPlayersInRoomsCount_m1162296814 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendsListAge()
extern "C"  int32_t NetworkingPeer_get_FriendsListAge_m1720782690 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C"  String_t* NetworkingPeer_get_PlayerName_m326041303 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C"  void NetworkingPeer_set_PlayerName_m2017036506 (NetworkingPeer_t1870069398 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_CurrentGame()
extern "C"  Room_t2553083 * NetworkingPeer_get_CurrentGame_m2202773795 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CurrentGame(Room)
extern "C"  void NetworkingPeer_set_CurrentGame_m4166446326 (NetworkingPeer_t1870069398 * __this, Room_t2553083 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_mLocalActor()
extern "C"  PhotonPlayer_t1400510109 * NetworkingPeer_get_mLocalActor_m1427871985 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mLocalActor(PhotonPlayer)
extern "C"  void NetworkingPeer_set_mLocalActor_m1230272320 (NetworkingPeer_t1870069398 * __this, PhotonPlayer_t1400510109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C"  int32_t NetworkingPeer_get_mMasterClientId_m4226150881 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C"  void NetworkingPeer_set_mMasterClientId_m4054022668 (NetworkingPeer_t1870069398 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C"  String_t* NetworkingPeer_GetNameServerAddress_m4284752754 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C"  bool NetworkingPeer_Connect_m671051397 (NetworkingPeer_t1870069398 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C"  bool NetworkingPeer_Connect_m1995754780 (NetworkingPeer_t1870069398 * __this, String_t* ___serverAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C"  bool NetworkingPeer_ConnectToNameServer_m544796162 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C"  bool NetworkingPeer_ConnectToRegionMaster_m3241375218 (NetworkingPeer_t1870069398 * __this, int32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C"  bool NetworkingPeer_GetRegions_m1913293212 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C"  void NetworkingPeer_Disconnect_m3238685947 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C"  void NetworkingPeer_DisconnectToReconnect_m2591317187 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C"  void NetworkingPeer_LeftLobbyCleanup_m3998012212 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C"  void NetworkingPeer_LeftRoomCleanup_m782909349 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C"  void NetworkingPeer_LocalCleanupAnythingInstantiated_m1932669643 (NetworkingPeer_t1870069398 * __this, bool ___destroyInstantiatedGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  void NetworkingPeer_ReadoutProperties_m3088065331 (NetworkingPeer_t1870069398 * __this, Hashtable_t223732124 * ___gameProperties, Hashtable_t223732124 * ___pActorProperties, int32_t ___targetActorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_AddNewPlayer_m3140094041 (NetworkingPeer_t1870069398 * __this, int32_t ___ID, PhotonPlayer_t1400510109 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_RemovePlayer_m2864887220 (NetworkingPeer_t1870069398 * __this, int32_t ___ID, PhotonPlayer_t1400510109 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C"  void NetworkingPeer_RebuildPlayerListCopies_m742653232 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C"  void NetworkingPeer_ResetPhotonViewsOnSerialize_m4086781985 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_HandleEventLeave_m180451735 (NetworkingPeer_t1870069398 * __this, int32_t ___actorID, EventData_t4221167488 * ___evLeave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C"  void NetworkingPeer_CheckMasterClient_m2640021225 (NetworkingPeer_t1870069398 * __this, int32_t ___leavingPlayerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C"  void NetworkingPeer_UpdateMasterClient_m3390846997 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C"  int32_t NetworkingPeer_ReturnLowestPlayerId_m1091844043 (Il2CppObject * __this /* static, unused */, PhotonPlayerU5BU5D_t3977425488* ___players, int32_t ___playerIdToIgnore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C"  bool NetworkingPeer_SetMasterClient_m4206336910 (NetworkingPeer_t1870069398 * __this, int32_t ___playerId, bool ___sync, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C"  bool NetworkingPeer_SetMasterClient_m2817374223 (NetworkingPeer_t1870069398 * __this, int32_t ___nextMasterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetActorPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  Hashtable_t223732124 * NetworkingPeer_GetActorPropertiesForActorNr_m565099673 (NetworkingPeer_t1870069398 * __this, Hashtable_t223732124 * ___actorProperties, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C"  PhotonPlayer_t1400510109 * NetworkingPeer_GetPlayerWithId_m2653271596 (NetworkingPeer_t1870069398 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C"  void NetworkingPeer_SendPlayerName_m1081713171 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_GameEnteredOnGameServer_m2660256456 (NetworkingPeer_t1870069398 * __this, OperationResponse_t2644772068 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C"  Hashtable_t223732124 * NetworkingPeer_GetLocalActorProperties_m695101737 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C"  void NetworkingPeer_ChangeLocalID_m2576860202 (NetworkingPeer_t1870069398 * __this, int32_t ___newID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool NetworkingPeer_OpCreateGame_m1793875467 (NetworkingPeer_t1870069398 * __this, EnterRoomParams_t1470694169 * ___enterRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRoom_m1761241300 (NetworkingPeer_t1870069398 * __this, EnterRoomParams_t1470694169 * ___opParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.LoadbalancingPeer/OpJoinRandomRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRandomRoom_m633139577 (NetworkingPeer_t1870069398 * __this, OpJoinRandomRoomParams_t1498792015 * ___opJoinRandomRoomParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C"  bool NetworkingPeer_OpLeave_m431695621 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool NetworkingPeer_OpRaiseEvent_m3039247714 (NetworkingPeer_t1870069398 * __this, uint8_t ___eventCode, Il2CppObject * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t2943657104 * ___raiseEventOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void NetworkingPeer_DebugReturn_m903692375 (NetworkingPeer_t1870069398 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_OnOperationResponse_m2888615928 (NetworkingPeer_t1870069398 * __this, OperationResponse_t2644772068 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C"  bool NetworkingPeer_OpFindFriends_m421399926 (NetworkingPeer_t1870069398 * __this, StringU5BU5D_t2956870243* ___friendsToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void NetworkingPeer_OnStatusChanged_m2901979501 (NetworkingPeer_t1870069398 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_OnEvent_m507569738 (NetworkingPeer_t1870069398 * __this, EventData_t4221167488 * ___photonEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C"  void NetworkingPeer_UpdatedActorList_m778388614 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t1809983122* ___actorsInRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C"  void NetworkingPeer_SendVacantViewIds_m348920383 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C"  void NetworkingPeer_SendMonoMessage_m3756049992 (Il2CppObject * __this /* static, unused */, int32_t ___methodString, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(System.Object[],PhotonPlayer)
extern "C"  void NetworkingPeer_ExecuteRpc_m170914982 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___rpcData, PhotonPlayer_t1400510109 * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C"  bool NetworkingPeer_CheckTypeMatch_m2846991416 (NetworkingPeer_t1870069398 * __this, ParameterInfoU5BU5D_t1127461800* ___methodParameters, TypeU5BU5D_t3431720054* ___callParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C"  Hashtable_t223732124 * NetworkingPeer_SendInstantiate_m1738477599 (NetworkingPeer_t1870069398 * __this, String_t* ___prefabName, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, int32_t ___group, Int32U5BU5D_t1809983122* ___viewIDs, ObjectU5BU5D_t11523773* ___data, bool ___isGlobalObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * NetworkingPeer_DoInstantiate_m896993236 (NetworkingPeer_t1870069398 * __this, Hashtable_t223732124 * ___evData, PhotonPlayer_t1400510109 * ___photonPlayer, GameObject_t4012695102 * ___resourceGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C"  void NetworkingPeer_StoreInstantiationData_m2080712914 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId, ObjectU5BU5D_t11523773* ___instantiationData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C"  ObjectU5BU5D_t11523773* NetworkingPeer_FetchInstantiationData_m3512038464 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C"  void NetworkingPeer_RemoveInstantiationData_m1036475751 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_DestroyPlayerObjects_m3081972308 (NetworkingPeer_t1870069398 * __this, int32_t ___playerId, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C"  void NetworkingPeer_DestroyAll_m3177834461 (NetworkingPeer_t1870069398 * __this, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkingPeer_RemoveInstantiatedGO_m3645311232 (NetworkingPeer_t1870069398 * __this, GameObject_t4012695102 * ___go, bool ___localOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::GetInstantiatedObjectsId(UnityEngine.GameObject)
extern "C"  int32_t NetworkingPeer_GetInstantiatedObjectsId_m1262388260 (NetworkingPeer_t1870069398 * __this, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_ServerCleanInstantiateAndDestroy_m3824077885 (NetworkingPeer_t1870069398 * __this, int32_t ___instantiateId, int32_t ___creatorId, bool ___isRuntimeInstantiated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_SendDestroyOfPlayer_m3294695614 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C"  void NetworkingPeer_SendDestroyOfAll_m3865537271 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m1649569280 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_RequestOwnership_m152523143 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID, int32_t ___fromOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_TransferOwnership_m167016799 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C"  bool NetworkingPeer_LocalCleanPhotonView_m3566813905 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C"  PhotonView_t1498838369 * NetworkingPeer_GetPhotonView_m1242264559 (NetworkingPeer_t1870069398 * __this, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C"  void NetworkingPeer_RegisterPhotonView_m3350456034 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___netView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m878784365 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1436567920 (NetworkingPeer_t1870069398 * __this, int32_t ___actorNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C"  void NetworkingPeer_OpRemoveCompleteCache_m4095075047 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C"  void NetworkingPeer_RemoveCacheOfLeftPlayers_m3159634421 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C"  void NetworkingPeer_CleanRpcBufferIfMine_m1184676746 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m3795511067 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C"  void NetworkingPeer_RemoveRPCsInGroup_m4266240476 (NetworkingPeer_t1870069398 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C"  void NetworkingPeer_SetLevelPrefix_m393816734 (NetworkingPeer_t1870069398 * __this, int16_t ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m1166251331 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, String_t* ___methodName, PhotonPlayer_t1400510109 * ___player, bool ___encrypt, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m4059826208 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetReceivingEnabled_m140672486 (NetworkingPeer_t1870069398 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetReceivingEnabled_m3265369984 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t1809983122* ___enableGroups, Int32U5BU5D_t1809983122* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetSendingEnabled_m3944413280 (NetworkingPeer_t1870069398 * __this, int32_t ___group, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetSendingEnabled_m3643104122 (NetworkingPeer_t1870069398 * __this, Int32U5BU5D_t1809983122* ___enableGroups, Int32U5BU5D_t1809983122* ___disableGroups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C"  void NetworkingPeer_NewSceneLoaded_m2716600848 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C"  void NetworkingPeer_RunViewUpdate_m203367516 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C"  ObjectU5BU5D_t11523773* NetworkingPeer_OnSerializeWrite_m4280332687 (NetworkingPeer_t1870069398 * __this, PhotonView_t1498838369 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::LogObjectArray(System.Object[])
extern "C"  String_t* NetworkingPeer_LogObjectArray_m370679610 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(System.Object[],PhotonPlayer,System.Int32,System.Int16)
extern "C"  void NetworkingPeer_OnSerializeRead_m1918222411 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___data, PhotonPlayer_t1400510109 * ___sender, int32_t ___networkTime, int16_t ___correctPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C"  bool NetworkingPeer_AlmostEquals_m1193338430 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___lastData, ObjectU5BU5D_t11523773* ___currentContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionWrite(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t11523773* NetworkingPeer_DeltaCompressionWrite_m4241593885 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___previousContent, ObjectU5BU5D_t11523773* ___currentContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionRead(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t11523773* NetworkingPeer_DeltaCompressionRead_m3023101224 (NetworkingPeer_t1870069398 * __this, ObjectU5BU5D_t11523773* ___lastOnSerializeDataReceived, ObjectU5BU5D_t11523773* ___incomingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ObjectIsSameWithInprecision(System.Object,System.Object)
extern "C"  bool NetworkingPeer_ObjectIsSameWithInprecision_m2225432271 (NetworkingPeer_t1870069398 * __this, Il2CppObject * ___one, Il2CppObject * ___two, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C"  bool NetworkingPeer_GetMethod_m2274081598 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t3012272455 * ___monob, String_t* ___methodType, MethodInfo_t ** ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C"  void NetworkingPeer_LoadLevelIfSynced_m444096504 (NetworkingPeer_t1870069398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C"  void NetworkingPeer_SetLevelInPropsIfSynced_m87919441 (NetworkingPeer_t1870069398 * __this, Il2CppObject * ___levelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C"  void NetworkingPeer_SetApp_m3821194240 (NetworkingPeer_t1870069398 * __this, String_t* ___appId, String_t* ___gameVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C"  bool NetworkingPeer_WebRpc_m2720471308 (NetworkingPeer_t1870069398 * __this, String_t* ___uriPath, Il2CppObject * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
