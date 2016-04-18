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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2319621551;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t753501495;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t651747241;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t2644772068;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t3022056226;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2644772068.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_My3022056226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode132272987.h"

// System.Int64 ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabledTime()
extern "C"  int64_t PeerBase_get_TrafficStatsEnabledTime_m671856287 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C"  bool PeerBase_get_TrafficStatsEnabled_m1446203245 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PeerBase_set_TrafficStatsEnabled_m2416172934 (PeerBase_t2319621551 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C"  String_t* PeerBase_get_ServerAddress_m2191067762 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C"  void PeerBase_set_ServerAddress_m1606218401 (PeerBase_t2319621551 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C"  Il2CppObject * PeerBase_get_Listener_m2440165892 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PeerBase_set_Listener_m1973126027 (PeerBase_t2319621551 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C"  uint8_t PeerBase_get_QuickResendAttempts_m4022294950 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_QuickResendAttempts(System.Byte)
extern "C"  void PeerBase_set_QuickResendAttempts_m2590001261 (PeerBase_t2319621551 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t651747241 * PeerBase_get_NetworkSimulationSettings_m2442487428 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C"  void PeerBase_CommandLogResize_m3387006562 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C"  void PeerBase_CommandLogInit_m866731774 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C"  void PeerBase_InitOnce_m3044186886 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PeerBase_EnqueueOperation_m3101369536 (PeerBase_t2319621551 * __this, Dictionary_2_t3871407537 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C"  bool PeerBase_SendAcksOnly_m4216656041 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C"  void PeerBase_InitCallback_m3112810954 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C"  bool PeerBase_get_IsSendingOnlyAcks_m90443380 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PeerBase_set_IsSendingOnlyAcks_m2704684749 (PeerBase_t2319621551 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
extern "C"  bool PeerBase_ExchangeKeysForEncryption_m140803084 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PeerBase_DeriveSharedKey_m2466133956 (PeerBase_t2319621551 * __this, OperationResponse_t2644772068 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_EnqueueActionForDispatch_m3802104372 (PeerBase_t2319621551 * __this, MyAction_t3022056226 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void PeerBase_EnqueueDebugReturn_m588616545 (PeerBase_t2319621551 * __this, uint8_t ___level, String_t* ___debugReturn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C"  void PeerBase_EnqueueStatusCallback_m919368243 (PeerBase_t2319621551 * __this, int32_t ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C"  void PeerBase_InitPeerBase_m2717874520 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C"  bool PeerBase_DeserializeMessageAndCallback_m2440894846 (PeerBase_t2319621551 * __this, ByteU5BU5D_t58506160* ___inBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_SendNetworkSimulated_m3835487327 (PeerBase_t2319621551 * __this, MyAction_t3022056226 * ___sendAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_ReceiveNetworkSimulated_m3933505740 (PeerBase_t2319621551 * __this, MyAction_t3022056226 * ___receiveAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C"  void PeerBase_NetworkSimRun_m1000990831 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C"  void PeerBase_UpdateRoundTripTimeAndVariance_m874745751 (PeerBase_t2319621551 * __this, int32_t ___lastRoundtripTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitializeTrafficStats()
extern "C"  void PeerBase_InitializeTrafficStats_m2671682663 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C"  void PeerBase__ctor_m2261481935 (PeerBase_t2319621551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
extern "C"  void PeerBase__cctor_m904367038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
