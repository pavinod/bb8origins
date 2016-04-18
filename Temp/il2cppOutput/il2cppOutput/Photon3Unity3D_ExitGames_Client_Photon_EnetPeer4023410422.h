#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t1890226084;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t4098527826;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t714689101;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ExitGames.Client.Photon.EnetChannel[]
struct EnetChannelU5BU5D_t3844700062;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t260535031;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase2319621551.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EnetPeer
struct  EnetPeer_t4023410422  : public PeerBase_t2319621551
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t1890226084 * ___channels_72;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t4098527826 * ___sentReliableCommands_73;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t714689101 * ___outgoingAcknowledgementsList_74;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize_75;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount_76;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t58506160* ___udpBuffer_77;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex_78;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge_79;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated_80;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent_81;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime_82;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::initData
	ByteU5BU5D_t58506160* ___initData_85;
	// ExitGames.Client.Photon.EnetChannel[] ExitGames.Client.Photon.EnetPeer::channelArray
	EnetChannelU5BU5D_t3844700062* ___channelArray_86;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t260535031 * ___commandsToRemove_87;

public:
	inline static int32_t get_offset_of_channels_72() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___channels_72)); }
	inline Dictionary_2_t1890226084 * get_channels_72() const { return ___channels_72; }
	inline Dictionary_2_t1890226084 ** get_address_of_channels_72() { return &___channels_72; }
	inline void set_channels_72(Dictionary_2_t1890226084 * value)
	{
		___channels_72 = value;
		Il2CppCodeGenWriteBarrier(&___channels_72, value);
	}

	inline static int32_t get_offset_of_sentReliableCommands_73() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___sentReliableCommands_73)); }
	inline List_1_t4098527826 * get_sentReliableCommands_73() const { return ___sentReliableCommands_73; }
	inline List_1_t4098527826 ** get_address_of_sentReliableCommands_73() { return &___sentReliableCommands_73; }
	inline void set_sentReliableCommands_73(List_1_t4098527826 * value)
	{
		___sentReliableCommands_73 = value;
		Il2CppCodeGenWriteBarrier(&___sentReliableCommands_73, value);
	}

	inline static int32_t get_offset_of_outgoingAcknowledgementsList_74() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___outgoingAcknowledgementsList_74)); }
	inline Queue_1_t714689101 * get_outgoingAcknowledgementsList_74() const { return ___outgoingAcknowledgementsList_74; }
	inline Queue_1_t714689101 ** get_address_of_outgoingAcknowledgementsList_74() { return &___outgoingAcknowledgementsList_74; }
	inline void set_outgoingAcknowledgementsList_74(Queue_1_t714689101 * value)
	{
		___outgoingAcknowledgementsList_74 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingAcknowledgementsList_74, value);
	}

	inline static int32_t get_offset_of_windowSize_75() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___windowSize_75)); }
	inline int32_t get_windowSize_75() const { return ___windowSize_75; }
	inline int32_t* get_address_of_windowSize_75() { return &___windowSize_75; }
	inline void set_windowSize_75(int32_t value)
	{
		___windowSize_75 = value;
	}

	inline static int32_t get_offset_of_udpCommandCount_76() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___udpCommandCount_76)); }
	inline uint8_t get_udpCommandCount_76() const { return ___udpCommandCount_76; }
	inline uint8_t* get_address_of_udpCommandCount_76() { return &___udpCommandCount_76; }
	inline void set_udpCommandCount_76(uint8_t value)
	{
		___udpCommandCount_76 = value;
	}

	inline static int32_t get_offset_of_udpBuffer_77() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___udpBuffer_77)); }
	inline ByteU5BU5D_t58506160* get_udpBuffer_77() const { return ___udpBuffer_77; }
	inline ByteU5BU5D_t58506160** get_address_of_udpBuffer_77() { return &___udpBuffer_77; }
	inline void set_udpBuffer_77(ByteU5BU5D_t58506160* value)
	{
		___udpBuffer_77 = value;
		Il2CppCodeGenWriteBarrier(&___udpBuffer_77, value);
	}

	inline static int32_t get_offset_of_udpBufferIndex_78() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___udpBufferIndex_78)); }
	inline int32_t get_udpBufferIndex_78() const { return ___udpBufferIndex_78; }
	inline int32_t* get_address_of_udpBufferIndex_78() { return &___udpBufferIndex_78; }
	inline void set_udpBufferIndex_78(int32_t value)
	{
		___udpBufferIndex_78 = value;
	}

	inline static int32_t get_offset_of_challenge_79() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___challenge_79)); }
	inline int32_t get_challenge_79() const { return ___challenge_79; }
	inline int32_t* get_address_of_challenge_79() { return &___challenge_79; }
	inline void set_challenge_79(int32_t value)
	{
		___challenge_79 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsRepeated_80() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___reliableCommandsRepeated_80)); }
	inline int32_t get_reliableCommandsRepeated_80() const { return ___reliableCommandsRepeated_80; }
	inline int32_t* get_address_of_reliableCommandsRepeated_80() { return &___reliableCommandsRepeated_80; }
	inline void set_reliableCommandsRepeated_80(int32_t value)
	{
		___reliableCommandsRepeated_80 = value;
	}

	inline static int32_t get_offset_of_reliableCommandsSent_81() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___reliableCommandsSent_81)); }
	inline int32_t get_reliableCommandsSent_81() const { return ___reliableCommandsSent_81; }
	inline int32_t* get_address_of_reliableCommandsSent_81() { return &___reliableCommandsSent_81; }
	inline void set_reliableCommandsSent_81(int32_t value)
	{
		___reliableCommandsSent_81 = value;
	}

	inline static int32_t get_offset_of_serverSentTime_82() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___serverSentTime_82)); }
	inline int32_t get_serverSentTime_82() const { return ___serverSentTime_82; }
	inline int32_t* get_address_of_serverSentTime_82() { return &___serverSentTime_82; }
	inline void set_serverSentTime_82(int32_t value)
	{
		___serverSentTime_82 = value;
	}

	inline static int32_t get_offset_of_initData_85() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___initData_85)); }
	inline ByteU5BU5D_t58506160* get_initData_85() const { return ___initData_85; }
	inline ByteU5BU5D_t58506160** get_address_of_initData_85() { return &___initData_85; }
	inline void set_initData_85(ByteU5BU5D_t58506160* value)
	{
		___initData_85 = value;
		Il2CppCodeGenWriteBarrier(&___initData_85, value);
	}

	inline static int32_t get_offset_of_channelArray_86() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___channelArray_86)); }
	inline EnetChannelU5BU5D_t3844700062* get_channelArray_86() const { return ___channelArray_86; }
	inline EnetChannelU5BU5D_t3844700062** get_address_of_channelArray_86() { return &___channelArray_86; }
	inline void set_channelArray_86(EnetChannelU5BU5D_t3844700062* value)
	{
		___channelArray_86 = value;
		Il2CppCodeGenWriteBarrier(&___channelArray_86, value);
	}

	inline static int32_t get_offset_of_commandsToRemove_87() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422, ___commandsToRemove_87)); }
	inline Queue_1_t260535031 * get_commandsToRemove_87() const { return ___commandsToRemove_87; }
	inline Queue_1_t260535031 ** get_address_of_commandsToRemove_87() { return &___commandsToRemove_87; }
	inline void set_commandsToRemove_87(Queue_1_t260535031 * value)
	{
		___commandsToRemove_87 = value;
		Il2CppCodeGenWriteBarrier(&___commandsToRemove_87, value);
	}
};

struct EnetPeer_t4023410422_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t58506160* ___udpHeader0xF3_83;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t58506160* ___messageHeader_84;

public:
	inline static int32_t get_offset_of_udpHeader0xF3_83() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422_StaticFields, ___udpHeader0xF3_83)); }
	inline ByteU5BU5D_t58506160* get_udpHeader0xF3_83() const { return ___udpHeader0xF3_83; }
	inline ByteU5BU5D_t58506160** get_address_of_udpHeader0xF3_83() { return &___udpHeader0xF3_83; }
	inline void set_udpHeader0xF3_83(ByteU5BU5D_t58506160* value)
	{
		___udpHeader0xF3_83 = value;
		Il2CppCodeGenWriteBarrier(&___udpHeader0xF3_83, value);
	}

	inline static int32_t get_offset_of_messageHeader_84() { return static_cast<int32_t>(offsetof(EnetPeer_t4023410422_StaticFields, ___messageHeader_84)); }
	inline ByteU5BU5D_t58506160* get_messageHeader_84() const { return ___messageHeader_84; }
	inline ByteU5BU5D_t58506160** get_address_of_messageHeader_84() { return &___messageHeader_84; }
	inline void set_messageHeader_84(ByteU5BU5D_t58506160* value)
	{
		___messageHeader_84 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_84, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
