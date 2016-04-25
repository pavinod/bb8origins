#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_t1766593700;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t855465129;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase2319621551.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TPeer
struct  TPeer_t2266327570  : public PeerBase_t2319621551
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_t1766593700 * ___incomingList_72;
	// System.Collections.Generic.List`1<System.Byte[]> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t855465129 * ___outgoingStream_73;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_74;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_t58506160* ___pingRequest_75;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_t58506160* ___messageHeader_78;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_79;

public:
	inline static int32_t get_offset_of_incomingList_72() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___incomingList_72)); }
	inline Queue_1_t1766593700 * get_incomingList_72() const { return ___incomingList_72; }
	inline Queue_1_t1766593700 ** get_address_of_incomingList_72() { return &___incomingList_72; }
	inline void set_incomingList_72(Queue_1_t1766593700 * value)
	{
		___incomingList_72 = value;
		Il2CppCodeGenWriteBarrier(&___incomingList_72, value);
	}

	inline static int32_t get_offset_of_outgoingStream_73() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___outgoingStream_73)); }
	inline List_1_t855465129 * get_outgoingStream_73() const { return ___outgoingStream_73; }
	inline List_1_t855465129 ** get_address_of_outgoingStream_73() { return &___outgoingStream_73; }
	inline void set_outgoingStream_73(List_1_t855465129 * value)
	{
		___outgoingStream_73 = value;
		Il2CppCodeGenWriteBarrier(&___outgoingStream_73, value);
	}

	inline static int32_t get_offset_of_lastPingResult_74() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___lastPingResult_74)); }
	inline int32_t get_lastPingResult_74() const { return ___lastPingResult_74; }
	inline int32_t* get_address_of_lastPingResult_74() { return &___lastPingResult_74; }
	inline void set_lastPingResult_74(int32_t value)
	{
		___lastPingResult_74 = value;
	}

	inline static int32_t get_offset_of_pingRequest_75() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___pingRequest_75)); }
	inline ByteU5BU5D_t58506160* get_pingRequest_75() const { return ___pingRequest_75; }
	inline ByteU5BU5D_t58506160** get_address_of_pingRequest_75() { return &___pingRequest_75; }
	inline void set_pingRequest_75(ByteU5BU5D_t58506160* value)
	{
		___pingRequest_75 = value;
		Il2CppCodeGenWriteBarrier(&___pingRequest_75, value);
	}

	inline static int32_t get_offset_of_messageHeader_78() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___messageHeader_78)); }
	inline ByteU5BU5D_t58506160* get_messageHeader_78() const { return ___messageHeader_78; }
	inline ByteU5BU5D_t58506160** get_address_of_messageHeader_78() { return &___messageHeader_78; }
	inline void set_messageHeader_78(ByteU5BU5D_t58506160* value)
	{
		___messageHeader_78 = value;
		Il2CppCodeGenWriteBarrier(&___messageHeader_78, value);
	}

	inline static int32_t get_offset_of_DoFraming_79() { return static_cast<int32_t>(offsetof(TPeer_t2266327570, ___DoFraming_79)); }
	inline bool get_DoFraming_79() const { return ___DoFraming_79; }
	inline bool* get_address_of_DoFraming_79() { return &___DoFraming_79; }
	inline void set_DoFraming_79(bool value)
	{
		___DoFraming_79 = value;
	}
};

struct TPeer_t2266327570_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_t58506160* ___tcpFramedMessageHead_76;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_t58506160* ___tcpMsgHead_77;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_76() { return static_cast<int32_t>(offsetof(TPeer_t2266327570_StaticFields, ___tcpFramedMessageHead_76)); }
	inline ByteU5BU5D_t58506160* get_tcpFramedMessageHead_76() const { return ___tcpFramedMessageHead_76; }
	inline ByteU5BU5D_t58506160** get_address_of_tcpFramedMessageHead_76() { return &___tcpFramedMessageHead_76; }
	inline void set_tcpFramedMessageHead_76(ByteU5BU5D_t58506160* value)
	{
		___tcpFramedMessageHead_76 = value;
		Il2CppCodeGenWriteBarrier(&___tcpFramedMessageHead_76, value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_77() { return static_cast<int32_t>(offsetof(TPeer_t2266327570_StaticFields, ___tcpMsgHead_77)); }
	inline ByteU5BU5D_t58506160* get_tcpMsgHead_77() const { return ___tcpMsgHead_77; }
	inline ByteU5BU5D_t58506160** get_address_of_tcpMsgHead_77() { return &___tcpMsgHead_77; }
	inline void set_tcpMsgHead_77(ByteU5BU5D_t58506160* value)
	{
		___tcpMsgHead_77 = value;
		Il2CppCodeGenWriteBarrier(&___tcpMsgHead_77, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
