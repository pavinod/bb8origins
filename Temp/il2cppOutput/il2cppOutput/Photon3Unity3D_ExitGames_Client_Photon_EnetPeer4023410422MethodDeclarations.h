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

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t4023410422;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t714689101;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3301568857;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Eg2435422655.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand3301568857.h"

// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
extern "C"  void EnetPeer__ctor_m780482664 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
extern "C"  void EnetPeer_InitPeerBase_m3171404959 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String)
extern "C"  bool EnetPeer_Connect_m2080697764 (EnetPeer_t4023410422 * __this, String_t* ___ipport, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
extern "C"  void EnetPeer_Disconnect_m1466210616 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
extern "C"  void EnetPeer_StopConnection_m1750456988 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
extern "C"  void EnetPeer_FetchServerTimestamp_m288658069 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
extern "C"  bool EnetPeer_DispatchIncomingCommands_m4184416730 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
extern "C"  bool EnetPeer_SendAcksOnly_m375219184 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
extern "C"  bool EnetPeer_SendOutgoingCommands_m3922657710 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
extern "C"  bool EnetPeer_AreReliableCommandsInTransit_m1468594202 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C"  bool EnetPeer_EnqueueOperation_m4293510434 (EnetPeer_t4023410422 * __this, Dictionary_2_t3871407537 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
extern "C"  bool EnetPeer_CreateAndEnqueueCommand_m489995749 (EnetPeer_t4023410422 * __this, uint8_t ___commandType, ByteU5BU5D_t58506160* ___payload, uint8_t ___channelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C"  ByteU5BU5D_t58506160* EnetPeer_SerializeOperationToMessage_m4111096294 (EnetPeer_t4023410422 * __this, uint8_t ___opc, Dictionary_2_t3871407537 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
extern "C"  int32_t EnetPeer_SerializeToBuffer_m3005635315 (EnetPeer_t4023410422 * __this, Queue_1_t714689101 * ___commandList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
extern "C"  void EnetPeer_SendData_m3452506972 (EnetPeer_t4023410422 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueSentCommand_m4193205799 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingReliableCommand_m1224485033 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingUnreliableCommand_m1109076912 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingAcknowledgement_m1428694210 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C"  void EnetPeer_ReceiveIncomingCommands_m1896006853 (EnetPeer_t4023410422 * __this, ByteU5BU5D_t58506160* ___inBuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
extern "C"  bool EnetPeer_ExecuteCommand_m4052653265 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
extern "C"  bool EnetPeer_QueueIncomingCommand_m3760625007 (EnetPeer_t4023410422 * __this, NCommand_t3301568857 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
extern "C"  NCommand_t3301568857 * EnetPeer_RemoveSentReliableCommand_m1605251683 (EnetPeer_t4023410422 * __this, int32_t ___ackReceivedReliableSequenceNumber, int32_t ___ackReceivedChannel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__13()
extern "C"  void EnetPeer_U3CExecuteCommandU3Eb__13_m997789054 (EnetPeer_t4023410422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
extern "C"  void EnetPeer__cctor_m2238029893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
