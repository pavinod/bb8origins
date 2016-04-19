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

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2228911785;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t3057742982;
// System.String
struct String_t;
// ExitGames.Client.Photon.EventData
struct EventData_t4221167488;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t2644772068;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1030354720;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2443397041;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4221167488.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2644772068.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode132272987.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1678887231.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot430411739.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho1030354720.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2443397041.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatClient__ctor_m2715061218 (ChatClient_t2228911785 * __this, Il2CppObject * ___listener, uint8_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m3696920605 (ChatClient_t2228911785 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m4172240964 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3579345138 (ChatClient_t2228911785 * __this, OperationResponse_t2644772068 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m2834421939 (ChatClient_t2228911785 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C"  String_t* ChatClient_get_NameServerAddress_m2953128118 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C"  void ChatClient_set_NameServerAddress_m215294147 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C"  String_t* ChatClient_get_FrontendAddress_m3195794578 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C"  void ChatClient_set_FrontendAddress_m3232545831 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C"  String_t* ChatClient_get_ChatRegion_m3807741566 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C"  void ChatClient_set_ChatRegion_m2952155757 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C"  int32_t ChatClient_get_State_m3399141062 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatClient_set_State_m165126701 (ChatClient_t2228911785 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C"  int32_t ChatClient_get_DisconnectedCause_m2758197895 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C"  void ChatClient_set_DisconnectedCause_m2398533614 (ChatClient_t2228911785 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C"  bool ChatClient_get_CanChat_m4205444497 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C"  bool ChatClient_get_HasPeer_m4270183525 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C"  String_t* ChatClient_get_AppVersion_m3840011977 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C"  void ChatClient_set_AppVersion_m1936522242 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C"  String_t* ChatClient_get_AppId_m3950149228 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C"  void ChatClient_set_AppId_m1622957389 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C"  AuthenticationValues_t1030354720 * ChatClient_get_AuthValues_m2749053282 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  void ChatClient_set_AuthValues_m1018196489 (ChatClient_t2228911785 * __this, AuthenticationValues_t1030354720 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C"  String_t* ChatClient_get_UserId_m781750872 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern "C"  void ChatClient_set_UserId_m506582355 (ChatClient_t2228911785 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatClient_Connect_m751377016 (ChatClient_t2228911785 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t1030354720 * ___authValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C"  void ChatClient_Service_m735787339 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C"  void ChatClient_Disconnect_m934179752 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C"  void ChatClient_StopThread_m2615922616 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C"  bool ChatClient_Subscribe_m3982725412 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C"  bool ChatClient_Subscribe_m2097382963 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___channels, int32_t ___messagesFromHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C"  bool ChatClient_Unsubscribe_m3536401085 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern "C"  bool ChatClient_PublishMessage_m3019297000 (ChatClient_t2228911785 * __this, String_t* ___channelName, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C"  bool ChatClient_SendPrivateMessage_m3176538676 (ChatClient_t2228911785 * __this, String_t* ___target, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_SendPrivateMessage_m1749222089 (ChatClient_t2228911785 * __this, String_t* ___target, Il2CppObject * ___message, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C"  bool ChatClient_SetOnlineStatus_m1758122501 (ChatClient_t2228911785 * __this, int32_t ___status, Il2CppObject * ___message, bool ___skipMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C"  bool ChatClient_SetOnlineStatus_m2384939306 (ChatClient_t2228911785 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C"  bool ChatClient_SetOnlineStatus_m2867413624 (ChatClient_t2228911785 * __this, int32_t ___status, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C"  bool ChatClient_AddFriends_m776679036 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C"  bool ChatClient_RemoveFriends_m2134951261 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C"  String_t* ChatClient_GetPrivateChannelNameByUser_m803475014 (ChatClient_t2228911785 * __this, String_t* ___userName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m104386314 (ChatClient_t2228911785 * __this, String_t* ___channelName, bool ___isPrivate, ChatChannel_t2443397041 ** ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m4135107101 (ChatClient_t2228911785 * __this, String_t* ___channelName, ChatChannel_t2443397041 ** ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C"  void ChatClient_SendAcksOnly_m1018861386 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void ChatClient_set_DebugOut_m2848898393 (ChatClient_t2228911785 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C"  uint8_t ChatClient_get_DebugOut_m276583126 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C"  bool ChatClient_SendChannelOperation_m1677815726 (ChatClient_t2228911785 * __this, StringU5BU5D_t2956870243* ___channels, uint8_t ___operation, int32_t ___historyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandlePrivateMessageEvent_m3383681508 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleChatMessagesEvent_m3117953636 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleSubscribeEvent_m4292837796 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleUnsubscribeEvent_m2264169707 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_HandleAuthResponse_m1032380615 (ChatClient_t2228911785 * __this, OperationResponse_t2644772068 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleStatusUpdate_m4234665241 (ChatClient_t2228911785 * __this, EventData_t4221167488 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C"  void ChatClient_ConnectToFrontEnd_m1646260717 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C"  bool ChatClient_AuthenticateOnFrontEnd_m1105073046 (ChatClient_t2228911785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
