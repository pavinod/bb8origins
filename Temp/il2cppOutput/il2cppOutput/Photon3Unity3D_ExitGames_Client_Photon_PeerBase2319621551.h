#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t3731899444;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3301568857;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t3177679614;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2447340108;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t435176470;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t3764219664;
// System.Random
struct Random_t922188920;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t282237216;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t651747241;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t67269933;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t753501495;

#include "mscorlib_System_Object837106420.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel2321529677.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Co2408653054.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t2319621551  : public Il2CppObject
{
public:
	// System.Type ExitGames.Client.Photon.PeerBase::SocketImplementation
	Type_t * ___SocketImplementation_4;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t3731899444 * ___rt_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t3301568857 * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_9;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsIncoming
	TrafficStats_t3177679614 * ___TrafficStatsIncoming_10;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsOutgoing
	TrafficStats_t3177679614 * ___TrafficStatsOutgoing_11;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::TrafficStatsGameLevel
	TrafficStatsGameLevel_t2447340108 * ___TrafficStatsGameLevel_12;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::trafficStatsStopwatch
	Stopwatch_t2509581612 * ___trafficStatsStopwatch_13;
	// System.Boolean ExitGames.Client.Photon.PeerBase::trafficStatsEnabled
	bool ___trafficStatsEnabled_14;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::crcEnabled
	bool ___crcEnabled_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_18;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::debugOut
	uint8_t ___debugOut_19;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t435176470 * ___ActionQueue_20;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_21;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_22;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_23;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_24;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_25;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_26;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval_32;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_34;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize_37;
	// System.Int32 ExitGames.Client.Photon.PeerBase::sentCountAllowance
	int32_t ___sentCountAllowance_38;
	// System.Int32 ExitGames.Client.Photon.PeerBase::DisconnectTimeout
	int32_t ___DisconnectTimeout_39;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timePingInterval
	int32_t ___timePingInterval_40;
	// System.Byte ExitGames.Client.Photon.PeerBase::ChannelCount
	uint8_t ___ChannelCount_41;
	// System.Int32 ExitGames.Client.Photon.PeerBase::limitOfUnreliableCommands
	int32_t ___limitOfUnreliableCommands_42;
	// Photon.SocketServer.Security.DiffieHellmanCryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	DiffieHellmanCryptoProvider_t3764219664 * ___CryptoProvider_43;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t922188920 * ___lagRandomizer_44;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t282237216 * ___NetSimListOutgoing_45;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t282237216 * ___NetSimListIncoming_46;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t651747241 * ___networkSimulationSettings_47;
	// System.Int32 ExitGames.Client.Photon.PeerBase::CommandLogSize
	int32_t ___CommandLogSize_48;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t67269933 * ___CommandLog_49;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t67269933 * ___InReliableLog_50;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::INIT_BYTES
	ByteU5BU5D_t58506160* ___INIT_BYTES_51;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_52;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_53;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_54;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_55;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_56;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_57;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_58;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_59;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_61;
	// System.Int32 ExitGames.Client.Photon.PeerBase::mtu
	int32_t ___mtu_62;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMinConnections
	int32_t ___rhttpMinConnections_63;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMaxConnections
	int32_t ___rhttpMaxConnections_64;
	// System.IO.MemoryStream ExitGames.Client.Photon.PeerBase::SerializeMemStream
	MemoryStream_t2881531048 * ___SerializeMemStream_65;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_66;
	// System.String ExitGames.Client.Photon.PeerBase::<HttpUrlParameters>k__BackingField
	String_t* ___U3CHttpUrlParametersU3Ek__BackingField_67;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::<Listener>k__BackingField
	Il2CppObject * ___U3CListenerU3Ek__BackingField_68;
	// System.Byte ExitGames.Client.Photon.PeerBase::<QuickResendAttempts>k__BackingField
	uint8_t ___U3CQuickResendAttemptsU3Ek__BackingField_69;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::<TcpConnectionPrefix>k__BackingField
	ByteU5BU5D_t58506160* ___U3CTcpConnectionPrefixU3Ek__BackingField_70;
	// System.Boolean ExitGames.Client.Photon.PeerBase::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_71;

public:
	inline static int32_t get_offset_of_SocketImplementation_4() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___SocketImplementation_4)); }
	inline Type_t * get_SocketImplementation_4() const { return ___SocketImplementation_4; }
	inline Type_t ** get_address_of_SocketImplementation_4() { return &___SocketImplementation_4; }
	inline void set_SocketImplementation_4(Type_t * value)
	{
		___SocketImplementation_4 = value;
		Il2CppCodeGenWriteBarrier(&___SocketImplementation_4, value);
	}

	inline static int32_t get_offset_of_rt_5() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___rt_5)); }
	inline IPhotonSocket_t3731899444 * get_rt_5() const { return ___rt_5; }
	inline IPhotonSocket_t3731899444 ** get_address_of_rt_5() { return &___rt_5; }
	inline void set_rt_5(IPhotonSocket_t3731899444 * value)
	{
		___rt_5 = value;
		Il2CppCodeGenWriteBarrier(&___rt_5, value);
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_6() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___ByteCountLastOperation_6)); }
	inline int32_t get_ByteCountLastOperation_6() const { return ___ByteCountLastOperation_6; }
	inline int32_t* get_address_of_ByteCountLastOperation_6() { return &___ByteCountLastOperation_6; }
	inline void set_ByteCountLastOperation_6(int32_t value)
	{
		___ByteCountLastOperation_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_7() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___ByteCountCurrentDispatch_7)); }
	inline int32_t get_ByteCountCurrentDispatch_7() const { return ___ByteCountCurrentDispatch_7; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_7() { return &___ByteCountCurrentDispatch_7; }
	inline void set_ByteCountCurrentDispatch_7(int32_t value)
	{
		___ByteCountCurrentDispatch_7 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___CommandInCurrentDispatch_8)); }
	inline NCommand_t3301568857 * get_CommandInCurrentDispatch_8() const { return ___CommandInCurrentDispatch_8; }
	inline NCommand_t3301568857 ** get_address_of_CommandInCurrentDispatch_8() { return &___CommandInCurrentDispatch_8; }
	inline void set_CommandInCurrentDispatch_8(NCommand_t3301568857 * value)
	{
		___CommandInCurrentDispatch_8 = value;
		Il2CppCodeGenWriteBarrier(&___CommandInCurrentDispatch_8, value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_9() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___TrafficPackageHeaderSize_9)); }
	inline int32_t get_TrafficPackageHeaderSize_9() const { return ___TrafficPackageHeaderSize_9; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_9() { return &___TrafficPackageHeaderSize_9; }
	inline void set_TrafficPackageHeaderSize_9(int32_t value)
	{
		___TrafficPackageHeaderSize_9 = value;
	}

	inline static int32_t get_offset_of_TrafficStatsIncoming_10() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___TrafficStatsIncoming_10)); }
	inline TrafficStats_t3177679614 * get_TrafficStatsIncoming_10() const { return ___TrafficStatsIncoming_10; }
	inline TrafficStats_t3177679614 ** get_address_of_TrafficStatsIncoming_10() { return &___TrafficStatsIncoming_10; }
	inline void set_TrafficStatsIncoming_10(TrafficStats_t3177679614 * value)
	{
		___TrafficStatsIncoming_10 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsIncoming_10, value);
	}

	inline static int32_t get_offset_of_TrafficStatsOutgoing_11() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___TrafficStatsOutgoing_11)); }
	inline TrafficStats_t3177679614 * get_TrafficStatsOutgoing_11() const { return ___TrafficStatsOutgoing_11; }
	inline TrafficStats_t3177679614 ** get_address_of_TrafficStatsOutgoing_11() { return &___TrafficStatsOutgoing_11; }
	inline void set_TrafficStatsOutgoing_11(TrafficStats_t3177679614 * value)
	{
		___TrafficStatsOutgoing_11 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsOutgoing_11, value);
	}

	inline static int32_t get_offset_of_TrafficStatsGameLevel_12() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___TrafficStatsGameLevel_12)); }
	inline TrafficStatsGameLevel_t2447340108 * get_TrafficStatsGameLevel_12() const { return ___TrafficStatsGameLevel_12; }
	inline TrafficStatsGameLevel_t2447340108 ** get_address_of_TrafficStatsGameLevel_12() { return &___TrafficStatsGameLevel_12; }
	inline void set_TrafficStatsGameLevel_12(TrafficStatsGameLevel_t2447340108 * value)
	{
		___TrafficStatsGameLevel_12 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsGameLevel_12, value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_13() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___trafficStatsStopwatch_13)); }
	inline Stopwatch_t2509581612 * get_trafficStatsStopwatch_13() const { return ___trafficStatsStopwatch_13; }
	inline Stopwatch_t2509581612 ** get_address_of_trafficStatsStopwatch_13() { return &___trafficStatsStopwatch_13; }
	inline void set_trafficStatsStopwatch_13(Stopwatch_t2509581612 * value)
	{
		___trafficStatsStopwatch_13 = value;
		Il2CppCodeGenWriteBarrier(&___trafficStatsStopwatch_13, value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_14() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___trafficStatsEnabled_14)); }
	inline bool get_trafficStatsEnabled_14() const { return ___trafficStatsEnabled_14; }
	inline bool* get_address_of_trafficStatsEnabled_14() { return &___trafficStatsEnabled_14; }
	inline void set_trafficStatsEnabled_14(bool value)
	{
		___trafficStatsEnabled_14 = value;
	}

	inline static int32_t get_offset_of_usedProtocol_15() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___usedProtocol_15)); }
	inline uint8_t get_usedProtocol_15() const { return ___usedProtocol_15; }
	inline uint8_t* get_address_of_usedProtocol_15() { return &___usedProtocol_15; }
	inline void set_usedProtocol_15(uint8_t value)
	{
		___usedProtocol_15 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_16() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___crcEnabled_16)); }
	inline bool get_crcEnabled_16() const { return ___crcEnabled_16; }
	inline bool* get_address_of_crcEnabled_16() { return &___crcEnabled_16; }
	inline void set_crcEnabled_16(bool value)
	{
		___crcEnabled_16 = value;
	}

	inline static int32_t get_offset_of_packetLossByCrc_17() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___packetLossByCrc_17)); }
	inline int32_t get_packetLossByCrc_17() const { return ___packetLossByCrc_17; }
	inline int32_t* get_address_of_packetLossByCrc_17() { return &___packetLossByCrc_17; }
	inline void set_packetLossByCrc_17(int32_t value)
	{
		___packetLossByCrc_17 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_18() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___packetLossByChallenge_18)); }
	inline int32_t get_packetLossByChallenge_18() const { return ___packetLossByChallenge_18; }
	inline int32_t* get_address_of_packetLossByChallenge_18() { return &___packetLossByChallenge_18; }
	inline void set_packetLossByChallenge_18(int32_t value)
	{
		___packetLossByChallenge_18 = value;
	}

	inline static int32_t get_offset_of_debugOut_19() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___debugOut_19)); }
	inline uint8_t get_debugOut_19() const { return ___debugOut_19; }
	inline uint8_t* get_address_of_debugOut_19() { return &___debugOut_19; }
	inline void set_debugOut_19(uint8_t value)
	{
		___debugOut_19 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_20() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___ActionQueue_20)); }
	inline Queue_1_t435176470 * get_ActionQueue_20() const { return ___ActionQueue_20; }
	inline Queue_1_t435176470 ** get_address_of_ActionQueue_20() { return &___ActionQueue_20; }
	inline void set_ActionQueue_20(Queue_1_t435176470 * value)
	{
		___ActionQueue_20 = value;
		Il2CppCodeGenWriteBarrier(&___ActionQueue_20, value);
	}

	inline static int32_t get_offset_of_peerID_21() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___peerID_21)); }
	inline int16_t get_peerID_21() const { return ___peerID_21; }
	inline int16_t* get_address_of_peerID_21() { return &___peerID_21; }
	inline void set_peerID_21(int16_t value)
	{
		___peerID_21 = value;
	}

	inline static int32_t get_offset_of_peerConnectionState_22() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___peerConnectionState_22)); }
	inline uint8_t get_peerConnectionState_22() const { return ___peerConnectionState_22; }
	inline uint8_t* get_address_of_peerConnectionState_22() { return &___peerConnectionState_22; }
	inline void set_peerConnectionState_22(uint8_t value)
	{
		___peerConnectionState_22 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_23() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___serverTimeOffset_23)); }
	inline int32_t get_serverTimeOffset_23() const { return ___serverTimeOffset_23; }
	inline int32_t* get_address_of_serverTimeOffset_23() { return &___serverTimeOffset_23; }
	inline void set_serverTimeOffset_23(int32_t value)
	{
		___serverTimeOffset_23 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_24() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___serverTimeOffsetIsAvailable_24)); }
	inline bool get_serverTimeOffsetIsAvailable_24() const { return ___serverTimeOffsetIsAvailable_24; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_24() { return &___serverTimeOffsetIsAvailable_24; }
	inline void set_serverTimeOffsetIsAvailable_24(bool value)
	{
		___serverTimeOffsetIsAvailable_24 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_25() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___roundTripTime_25)); }
	inline int32_t get_roundTripTime_25() const { return ___roundTripTime_25; }
	inline int32_t* get_address_of_roundTripTime_25() { return &___roundTripTime_25; }
	inline void set_roundTripTime_25(int32_t value)
	{
		___roundTripTime_25 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_26() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___roundTripTimeVariance_26)); }
	inline int32_t get_roundTripTimeVariance_26() const { return ___roundTripTimeVariance_26; }
	inline int32_t* get_address_of_roundTripTimeVariance_26() { return &___roundTripTimeVariance_26; }
	inline void set_roundTripTimeVariance_26(int32_t value)
	{
		___roundTripTimeVariance_26 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_27() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___lastRoundTripTime_27)); }
	inline int32_t get_lastRoundTripTime_27() const { return ___lastRoundTripTime_27; }
	inline int32_t* get_address_of_lastRoundTripTime_27() { return &___lastRoundTripTime_27; }
	inline void set_lastRoundTripTime_27(int32_t value)
	{
		___lastRoundTripTime_27 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_28() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___lowestRoundTripTime_28)); }
	inline int32_t get_lowestRoundTripTime_28() const { return ___lowestRoundTripTime_28; }
	inline int32_t* get_address_of_lowestRoundTripTime_28() { return &___lowestRoundTripTime_28; }
	inline void set_lowestRoundTripTime_28(int32_t value)
	{
		___lowestRoundTripTime_28 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTimeVariance_29() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___lastRoundTripTimeVariance_29)); }
	inline int32_t get_lastRoundTripTimeVariance_29() const { return ___lastRoundTripTimeVariance_29; }
	inline int32_t* get_address_of_lastRoundTripTimeVariance_29() { return &___lastRoundTripTimeVariance_29; }
	inline void set_lastRoundTripTimeVariance_29(int32_t value)
	{
		___lastRoundTripTimeVariance_29 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_30() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___highestRoundTripTimeVariance_30)); }
	inline int32_t get_highestRoundTripTimeVariance_30() const { return ___highestRoundTripTimeVariance_30; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_30() { return &___highestRoundTripTimeVariance_30; }
	inline void set_highestRoundTripTimeVariance_30(int32_t value)
	{
		___highestRoundTripTimeVariance_30 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timestampOfLastReceive_31)); }
	inline int32_t get_timestampOfLastReceive_31() const { return ___timestampOfLastReceive_31; }
	inline int32_t* get_address_of_timestampOfLastReceive_31() { return &___timestampOfLastReceive_31; }
	inline void set_timestampOfLastReceive_31(int32_t value)
	{
		___timestampOfLastReceive_31 = value;
	}

	inline static int32_t get_offset_of_packetThrottleInterval_32() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___packetThrottleInterval_32)); }
	inline int32_t get_packetThrottleInterval_32() const { return ___packetThrottleInterval_32; }
	inline int32_t* get_address_of_packetThrottleInterval_32() { return &___packetThrottleInterval_32; }
	inline void set_packetThrottleInterval_32(int32_t value)
	{
		___packetThrottleInterval_32 = value;
	}

	inline static int32_t get_offset_of_bytesOut_34() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___bytesOut_34)); }
	inline int64_t get_bytesOut_34() const { return ___bytesOut_34; }
	inline int64_t* get_address_of_bytesOut_34() { return &___bytesOut_34; }
	inline void set_bytesOut_34(int64_t value)
	{
		___bytesOut_34 = value;
	}

	inline static int32_t get_offset_of_bytesIn_35() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___bytesIn_35)); }
	inline int64_t get_bytesIn_35() const { return ___bytesIn_35; }
	inline int64_t* get_address_of_bytesIn_35() { return &___bytesIn_35; }
	inline void set_bytesIn_35(int64_t value)
	{
		___bytesIn_35 = value;
	}

	inline static int32_t get_offset_of_commandBufferSize_36() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___commandBufferSize_36)); }
	inline int32_t get_commandBufferSize_36() const { return ___commandBufferSize_36; }
	inline int32_t* get_address_of_commandBufferSize_36() { return &___commandBufferSize_36; }
	inline void set_commandBufferSize_36(int32_t value)
	{
		___commandBufferSize_36 = value;
	}

	inline static int32_t get_offset_of_warningSize_37() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___warningSize_37)); }
	inline int32_t get_warningSize_37() const { return ___warningSize_37; }
	inline int32_t* get_address_of_warningSize_37() { return &___warningSize_37; }
	inline void set_warningSize_37(int32_t value)
	{
		___warningSize_37 = value;
	}

	inline static int32_t get_offset_of_sentCountAllowance_38() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___sentCountAllowance_38)); }
	inline int32_t get_sentCountAllowance_38() const { return ___sentCountAllowance_38; }
	inline int32_t* get_address_of_sentCountAllowance_38() { return &___sentCountAllowance_38; }
	inline void set_sentCountAllowance_38(int32_t value)
	{
		___sentCountAllowance_38 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_39() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___DisconnectTimeout_39)); }
	inline int32_t get_DisconnectTimeout_39() const { return ___DisconnectTimeout_39; }
	inline int32_t* get_address_of_DisconnectTimeout_39() { return &___DisconnectTimeout_39; }
	inline void set_DisconnectTimeout_39(int32_t value)
	{
		___DisconnectTimeout_39 = value;
	}

	inline static int32_t get_offset_of_timePingInterval_40() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timePingInterval_40)); }
	inline int32_t get_timePingInterval_40() const { return ___timePingInterval_40; }
	inline int32_t* get_address_of_timePingInterval_40() { return &___timePingInterval_40; }
	inline void set_timePingInterval_40(int32_t value)
	{
		___timePingInterval_40 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_41() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___ChannelCount_41)); }
	inline uint8_t get_ChannelCount_41() const { return ___ChannelCount_41; }
	inline uint8_t* get_address_of_ChannelCount_41() { return &___ChannelCount_41; }
	inline void set_ChannelCount_41(uint8_t value)
	{
		___ChannelCount_41 = value;
	}

	inline static int32_t get_offset_of_limitOfUnreliableCommands_42() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___limitOfUnreliableCommands_42)); }
	inline int32_t get_limitOfUnreliableCommands_42() const { return ___limitOfUnreliableCommands_42; }
	inline int32_t* get_address_of_limitOfUnreliableCommands_42() { return &___limitOfUnreliableCommands_42; }
	inline void set_limitOfUnreliableCommands_42(int32_t value)
	{
		___limitOfUnreliableCommands_42 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_43() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___CryptoProvider_43)); }
	inline DiffieHellmanCryptoProvider_t3764219664 * get_CryptoProvider_43() const { return ___CryptoProvider_43; }
	inline DiffieHellmanCryptoProvider_t3764219664 ** get_address_of_CryptoProvider_43() { return &___CryptoProvider_43; }
	inline void set_CryptoProvider_43(DiffieHellmanCryptoProvider_t3764219664 * value)
	{
		___CryptoProvider_43 = value;
		Il2CppCodeGenWriteBarrier(&___CryptoProvider_43, value);
	}

	inline static int32_t get_offset_of_lagRandomizer_44() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___lagRandomizer_44)); }
	inline Random_t922188920 * get_lagRandomizer_44() const { return ___lagRandomizer_44; }
	inline Random_t922188920 ** get_address_of_lagRandomizer_44() { return &___lagRandomizer_44; }
	inline void set_lagRandomizer_44(Random_t922188920 * value)
	{
		___lagRandomizer_44 = value;
		Il2CppCodeGenWriteBarrier(&___lagRandomizer_44, value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_45() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___NetSimListOutgoing_45)); }
	inline LinkedList_1_t282237216 * get_NetSimListOutgoing_45() const { return ___NetSimListOutgoing_45; }
	inline LinkedList_1_t282237216 ** get_address_of_NetSimListOutgoing_45() { return &___NetSimListOutgoing_45; }
	inline void set_NetSimListOutgoing_45(LinkedList_1_t282237216 * value)
	{
		___NetSimListOutgoing_45 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListOutgoing_45, value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_46() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___NetSimListIncoming_46)); }
	inline LinkedList_1_t282237216 * get_NetSimListIncoming_46() const { return ___NetSimListIncoming_46; }
	inline LinkedList_1_t282237216 ** get_address_of_NetSimListIncoming_46() { return &___NetSimListIncoming_46; }
	inline void set_NetSimListIncoming_46(LinkedList_1_t282237216 * value)
	{
		___NetSimListIncoming_46 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListIncoming_46, value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_47() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___networkSimulationSettings_47)); }
	inline NetworkSimulationSet_t651747241 * get_networkSimulationSettings_47() const { return ___networkSimulationSettings_47; }
	inline NetworkSimulationSet_t651747241 ** get_address_of_networkSimulationSettings_47() { return &___networkSimulationSettings_47; }
	inline void set_networkSimulationSettings_47(NetworkSimulationSet_t651747241 * value)
	{
		___networkSimulationSettings_47 = value;
		Il2CppCodeGenWriteBarrier(&___networkSimulationSettings_47, value);
	}

	inline static int32_t get_offset_of_CommandLogSize_48() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___CommandLogSize_48)); }
	inline int32_t get_CommandLogSize_48() const { return ___CommandLogSize_48; }
	inline int32_t* get_address_of_CommandLogSize_48() { return &___CommandLogSize_48; }
	inline void set_CommandLogSize_48(int32_t value)
	{
		___CommandLogSize_48 = value;
	}

	inline static int32_t get_offset_of_CommandLog_49() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___CommandLog_49)); }
	inline Queue_1_t67269933 * get_CommandLog_49() const { return ___CommandLog_49; }
	inline Queue_1_t67269933 ** get_address_of_CommandLog_49() { return &___CommandLog_49; }
	inline void set_CommandLog_49(Queue_1_t67269933 * value)
	{
		___CommandLog_49 = value;
		Il2CppCodeGenWriteBarrier(&___CommandLog_49, value);
	}

	inline static int32_t get_offset_of_InReliableLog_50() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___InReliableLog_50)); }
	inline Queue_1_t67269933 * get_InReliableLog_50() const { return ___InReliableLog_50; }
	inline Queue_1_t67269933 ** get_address_of_InReliableLog_50() { return &___InReliableLog_50; }
	inline void set_InReliableLog_50(Queue_1_t67269933 * value)
	{
		___InReliableLog_50 = value;
		Il2CppCodeGenWriteBarrier(&___InReliableLog_50, value);
	}

	inline static int32_t get_offset_of_INIT_BYTES_51() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___INIT_BYTES_51)); }
	inline ByteU5BU5D_t58506160* get_INIT_BYTES_51() const { return ___INIT_BYTES_51; }
	inline ByteU5BU5D_t58506160** get_address_of_INIT_BYTES_51() { return &___INIT_BYTES_51; }
	inline void set_INIT_BYTES_51(ByteU5BU5D_t58506160* value)
	{
		___INIT_BYTES_51 = value;
		Il2CppCodeGenWriteBarrier(&___INIT_BYTES_51, value);
	}

	inline static int32_t get_offset_of_timeBase_52() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeBase_52)); }
	inline int32_t get_timeBase_52() const { return ___timeBase_52; }
	inline int32_t* get_address_of_timeBase_52() { return &___timeBase_52; }
	inline void set_timeBase_52(int32_t value)
	{
		___timeBase_52 = value;
	}

	inline static int32_t get_offset_of_timeInt_53() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeInt_53)); }
	inline int32_t get_timeInt_53() const { return ___timeInt_53; }
	inline int32_t* get_address_of_timeInt_53() { return &___timeInt_53; }
	inline void set_timeInt_53(int32_t value)
	{
		___timeInt_53 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_54() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeoutInt_54)); }
	inline int32_t get_timeoutInt_54() const { return ___timeoutInt_54; }
	inline int32_t* get_address_of_timeoutInt_54() { return &___timeoutInt_54; }
	inline void set_timeoutInt_54(int32_t value)
	{
		___timeoutInt_54 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_55() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeLastAckReceive_55)); }
	inline int32_t get_timeLastAckReceive_55() const { return ___timeLastAckReceive_55; }
	inline int32_t* get_address_of_timeLastAckReceive_55() { return &___timeLastAckReceive_55; }
	inline void set_timeLastAckReceive_55(int32_t value)
	{
		___timeLastAckReceive_55 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_56() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeLastSendAck_56)); }
	inline int32_t get_timeLastSendAck_56() const { return ___timeLastSendAck_56; }
	inline int32_t* get_address_of_timeLastSendAck_56() { return &___timeLastSendAck_56; }
	inline void set_timeLastSendAck_56(int32_t value)
	{
		___timeLastSendAck_56 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_57() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___timeLastSendOutgoing_57)); }
	inline int32_t get_timeLastSendOutgoing_57() const { return ___timeLastSendOutgoing_57; }
	inline int32_t* get_address_of_timeLastSendOutgoing_57() { return &___timeLastSendOutgoing_57; }
	inline void set_timeLastSendOutgoing_57(int32_t value)
	{
		___timeLastSendOutgoing_57 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_58() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___ApplicationIsInitialized_58)); }
	inline bool get_ApplicationIsInitialized_58() const { return ___ApplicationIsInitialized_58; }
	inline bool* get_address_of_ApplicationIsInitialized_58() { return &___ApplicationIsInitialized_58; }
	inline void set_ApplicationIsInitialized_58(bool value)
	{
		___ApplicationIsInitialized_58 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_59() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___isEncryptionAvailable_59)); }
	inline bool get_isEncryptionAvailable_59() const { return ___isEncryptionAvailable_59; }
	inline bool* get_address_of_isEncryptionAvailable_59() { return &___isEncryptionAvailable_59; }
	inline void set_isEncryptionAvailable_59(bool value)
	{
		___isEncryptionAvailable_59 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_61() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___outgoingCommandsInStream_61)); }
	inline int32_t get_outgoingCommandsInStream_61() const { return ___outgoingCommandsInStream_61; }
	inline int32_t* get_address_of_outgoingCommandsInStream_61() { return &___outgoingCommandsInStream_61; }
	inline void set_outgoingCommandsInStream_61(int32_t value)
	{
		___outgoingCommandsInStream_61 = value;
	}

	inline static int32_t get_offset_of_mtu_62() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___mtu_62)); }
	inline int32_t get_mtu_62() const { return ___mtu_62; }
	inline int32_t* get_address_of_mtu_62() { return &___mtu_62; }
	inline void set_mtu_62(int32_t value)
	{
		___mtu_62 = value;
	}

	inline static int32_t get_offset_of_rhttpMinConnections_63() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___rhttpMinConnections_63)); }
	inline int32_t get_rhttpMinConnections_63() const { return ___rhttpMinConnections_63; }
	inline int32_t* get_address_of_rhttpMinConnections_63() { return &___rhttpMinConnections_63; }
	inline void set_rhttpMinConnections_63(int32_t value)
	{
		___rhttpMinConnections_63 = value;
	}

	inline static int32_t get_offset_of_rhttpMaxConnections_64() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___rhttpMaxConnections_64)); }
	inline int32_t get_rhttpMaxConnections_64() const { return ___rhttpMaxConnections_64; }
	inline int32_t* get_address_of_rhttpMaxConnections_64() { return &___rhttpMaxConnections_64; }
	inline void set_rhttpMaxConnections_64(int32_t value)
	{
		___rhttpMaxConnections_64 = value;
	}

	inline static int32_t get_offset_of_SerializeMemStream_65() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___SerializeMemStream_65)); }
	inline MemoryStream_t2881531048 * get_SerializeMemStream_65() const { return ___SerializeMemStream_65; }
	inline MemoryStream_t2881531048 ** get_address_of_SerializeMemStream_65() { return &___SerializeMemStream_65; }
	inline void set_SerializeMemStream_65(MemoryStream_t2881531048 * value)
	{
		___SerializeMemStream_65 = value;
		Il2CppCodeGenWriteBarrier(&___SerializeMemStream_65, value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CServerAddressU3Ek__BackingField_66)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_66() const { return ___U3CServerAddressU3Ek__BackingField_66; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_66() { return &___U3CServerAddressU3Ek__BackingField_66; }
	inline void set_U3CServerAddressU3Ek__BackingField_66(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier(&___U3CServerAddressU3Ek__BackingField_66, value);
	}

	inline static int32_t get_offset_of_U3CHttpUrlParametersU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CHttpUrlParametersU3Ek__BackingField_67)); }
	inline String_t* get_U3CHttpUrlParametersU3Ek__BackingField_67() const { return ___U3CHttpUrlParametersU3Ek__BackingField_67; }
	inline String_t** get_address_of_U3CHttpUrlParametersU3Ek__BackingField_67() { return &___U3CHttpUrlParametersU3Ek__BackingField_67; }
	inline void set_U3CHttpUrlParametersU3Ek__BackingField_67(String_t* value)
	{
		___U3CHttpUrlParametersU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHttpUrlParametersU3Ek__BackingField_67, value);
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CListenerU3Ek__BackingField_68)); }
	inline Il2CppObject * get_U3CListenerU3Ek__BackingField_68() const { return ___U3CListenerU3Ek__BackingField_68; }
	inline Il2CppObject ** get_address_of_U3CListenerU3Ek__BackingField_68() { return &___U3CListenerU3Ek__BackingField_68; }
	inline void set_U3CListenerU3Ek__BackingField_68(Il2CppObject * value)
	{
		___U3CListenerU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier(&___U3CListenerU3Ek__BackingField_68, value);
	}

	inline static int32_t get_offset_of_U3CQuickResendAttemptsU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CQuickResendAttemptsU3Ek__BackingField_69)); }
	inline uint8_t get_U3CQuickResendAttemptsU3Ek__BackingField_69() const { return ___U3CQuickResendAttemptsU3Ek__BackingField_69; }
	inline uint8_t* get_address_of_U3CQuickResendAttemptsU3Ek__BackingField_69() { return &___U3CQuickResendAttemptsU3Ek__BackingField_69; }
	inline void set_U3CQuickResendAttemptsU3Ek__BackingField_69(uint8_t value)
	{
		___U3CQuickResendAttemptsU3Ek__BackingField_69 = value;
	}

	inline static int32_t get_offset_of_U3CTcpConnectionPrefixU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CTcpConnectionPrefixU3Ek__BackingField_70)); }
	inline ByteU5BU5D_t58506160* get_U3CTcpConnectionPrefixU3Ek__BackingField_70() const { return ___U3CTcpConnectionPrefixU3Ek__BackingField_70; }
	inline ByteU5BU5D_t58506160** get_address_of_U3CTcpConnectionPrefixU3Ek__BackingField_70() { return &___U3CTcpConnectionPrefixU3Ek__BackingField_70; }
	inline void set_U3CTcpConnectionPrefixU3Ek__BackingField_70(ByteU5BU5D_t58506160* value)
	{
		___U3CTcpConnectionPrefixU3Ek__BackingField_70 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTcpConnectionPrefixU3Ek__BackingField_70, value);
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551, ___U3CIsSendingOnlyAcksU3Ek__BackingField_71)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_71() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_71; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_71() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_71; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_71(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_71 = value;
	}
};

struct PeerBase_t2319621551_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingStreamBufferSize
	int32_t ___outgoingStreamBufferSize_60;

public:
	inline static int32_t get_offset_of_peerCount_33() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551_StaticFields, ___peerCount_33)); }
	inline int16_t get_peerCount_33() const { return ___peerCount_33; }
	inline int16_t* get_address_of_peerCount_33() { return &___peerCount_33; }
	inline void set_peerCount_33(int16_t value)
	{
		___peerCount_33 = value;
	}

	inline static int32_t get_offset_of_outgoingStreamBufferSize_60() { return static_cast<int32_t>(offsetof(PeerBase_t2319621551_StaticFields, ___outgoingStreamBufferSize_60)); }
	inline int32_t get_outgoingStreamBufferSize_60() const { return ___outgoingStreamBufferSize_60; }
	inline int32_t* get_address_of_outgoingStreamBufferSize_60() { return &___outgoingStreamBufferSize_60; }
	inline void set_outgoingStreamBufferSize_60(int32_t value)
	{
		___outgoingStreamBufferSize_60 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
