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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t3684923994;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t753501495;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t3177679614;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2447340108;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t3264453621;
// System.String
struct String_t;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t651747241;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t741406109;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t2269051836;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateVa4042794174.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SupportClas3264453621.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeStr741406109.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Deserialize2269051836.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C"  void PhotonPeer_set_SocketImplementation_m298937207 (PhotonPeer_t3684923994 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void PhotonPeer_set_DebugOut_m2223470861 (PhotonPeer_t3684923994 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
extern "C"  uint8_t PhotonPeer_get_DebugOut_m3167705784 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C"  Il2CppObject * PhotonPeer_get_Listener_m1447751663 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PhotonPeer_set_Listener_m236590144 (PhotonPeer_t3684923994 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C"  bool PhotonPeer_get_TrafficStatsEnabled_m755224994 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_TrafficStatsEnabled_m3359482747 (PhotonPeer_t3684923994 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C"  int64_t PhotonPeer_get_TrafficStatsElapsedMs_m2830814184 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C"  void PhotonPeer_TrafficStatsReset_m3433990127 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t3177679614 * PhotonPeer_get_TrafficStatsIncoming_m1572764564 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t3177679614 * PhotonPeer_get_TrafficStatsOutgoing_m1736572250 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t2447340108 * PhotonPeer_get_TrafficStatsGameLevel_m3470277196 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C"  uint8_t PhotonPeer_get_QuickResendAttempts_m1419342171 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C"  void PhotonPeer_set_QuickResendAttempts_m648351896 (PhotonPeer_t3684923994 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C"  uint8_t PhotonPeer_get_PeerState_m1651403141 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C"  int32_t PhotonPeer_get_LimitOfUnreliableCommands_m245920422 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C"  void PhotonPeer_set_LimitOfUnreliableCommands_m1454183603 (PhotonPeer_t3684923994 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C"  bool PhotonPeer_get_CrcEnabled_m281174572 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_CrcEnabled_m3537663105 (PhotonPeer_t3684923994 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C"  int32_t PhotonPeer_get_PacketLossByCrc_m2535258171 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C"  int32_t PhotonPeer_get_ResentReliableCommands_m2794331478 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_SentCountAllowance()
extern "C"  int32_t PhotonPeer_get_SentCountAllowance_m1421492858 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
extern "C"  void PhotonPeer_set_SentCountAllowance_m3199276687 (PhotonPeer_t3684923994 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
extern "C"  void PhotonPeer_set_TimePingInterval_m4005768850 (PhotonPeer_t3684923994 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_DisconnectTimeout()
extern "C"  int32_t PhotonPeer_get_DisconnectTimeout_m2270580142 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DisconnectTimeout(System.Int32)
extern "C"  void PhotonPeer_set_DisconnectTimeout_m235020219 (PhotonPeer_t3684923994 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C"  int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m1548078592 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LocalMsTimestampDelegate(ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate)
extern "C"  void PhotonPeer_set_LocalMsTimestampDelegate_m4200296382 (PhotonPeer_t3684923994 * __this, IntegerMillisecondsDelegate_t3264453621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C"  int32_t PhotonPeer_get_RoundTripTime_m1741552137 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C"  int32_t PhotonPeer_get_RoundTripTimeVariance_m1245541466 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C"  int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m354906854 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C"  String_t* PhotonPeer_get_ServerAddress_m1612591015 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C"  uint8_t PhotonPeer_get_UsedProtocol_m89528173 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C"  bool PhotonPeer_get_IsSimulationEnabled_m1920015443 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_IsSimulationEnabled_m408282220 (PhotonPeer_t3684923994 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t651747241 * PhotonPeer_get_NetworkSimulationSettings_m1180521849 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C"  bool PhotonPeer_get_IsEncryptionAvailable_m2303138463 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PhotonPeer_set_IsSendingOnlyAcks_m2643096578 (PhotonPeer_t3684923994 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m255648660 (PhotonPeer_t3684923994 * __this, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m1687247209 (PhotonPeer_t3684923994 * __this, Il2CppObject * ___listener, uint8_t ___protocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C"  bool PhotonPeer_Connect_m3279737928 (PhotonPeer_t3684923994 * __this, String_t* ___serverAddress, String_t* ___applicationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C"  void PhotonPeer_Disconnect_m1116010844 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C"  void PhotonPeer_StopThread_m2797753708 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C"  void PhotonPeer_FetchServerTimestamp_m1199969721 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C"  bool PhotonPeer_EstablishEncryption_m3147807080 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C"  void PhotonPeer_Service_m1992667159 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C"  bool PhotonPeer_SendOutgoingCommands_m3353319250 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C"  bool PhotonPeer_SendAcksOnly_m2183126420 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C"  bool PhotonPeer_DispatchIncomingCommands_m2351842686 (PhotonPeer_t3684923994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C"  String_t* PhotonPeer_VitalStatsToString_m3897397209 (PhotonPeer_t3684923994 * __this, bool ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3989654084 (PhotonPeer_t3684923994 * __this, uint8_t ___customOpCode, Dictionary_2_t3871407537 * ___customOpParameters, bool ___sendReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C"  bool PhotonPeer_OpCustom_m1198390121 (PhotonPeer_t3684923994 * __this, uint8_t ___customOpCode, Dictionary_2_t3871407537 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3851483380 (PhotonPeer_t3684923994 * __this, uint8_t ___customOpCode, Dictionary_2_t3871407537 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool PhotonPeer_RegisterType_m2302387958 (Il2CppObject * __this /* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeStreamMethod_t741406109 * ___serializeMethod, DeserializeStreamMethod_t2269051836 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
