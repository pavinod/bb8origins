#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.NCommand
struct  NCommand_t3301568857  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags_26;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType_27;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID_28;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber_29;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber_30;
	// System.Int32 ExitGames.Client.Photon.NCommand::unsequencedGroupNumber
	int32_t ___unsequencedGroupNumber_31;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte_32;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber_33;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount_34;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber_35;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength_36;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset_37;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining_38;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t58506160* ___Payload_39;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime_40;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount_41;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout_42;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime_43;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber_44;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime_45;
	// System.Byte[] ExitGames.Client.Photon.NCommand::completeCommand
	ByteU5BU5D_t58506160* ___completeCommand_46;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size_47;

public:
	inline static int32_t get_offset_of_commandFlags_26() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandFlags_26)); }
	inline uint8_t get_commandFlags_26() const { return ___commandFlags_26; }
	inline uint8_t* get_address_of_commandFlags_26() { return &___commandFlags_26; }
	inline void set_commandFlags_26(uint8_t value)
	{
		___commandFlags_26 = value;
	}

	inline static int32_t get_offset_of_commandType_27() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandType_27)); }
	inline uint8_t get_commandType_27() const { return ___commandType_27; }
	inline uint8_t* get_address_of_commandType_27() { return &___commandType_27; }
	inline void set_commandType_27(uint8_t value)
	{
		___commandType_27 = value;
	}

	inline static int32_t get_offset_of_commandChannelID_28() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandChannelID_28)); }
	inline uint8_t get_commandChannelID_28() const { return ___commandChannelID_28; }
	inline uint8_t* get_address_of_commandChannelID_28() { return &___commandChannelID_28; }
	inline void set_commandChannelID_28(uint8_t value)
	{
		___commandChannelID_28 = value;
	}

	inline static int32_t get_offset_of_reliableSequenceNumber_29() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___reliableSequenceNumber_29)); }
	inline int32_t get_reliableSequenceNumber_29() const { return ___reliableSequenceNumber_29; }
	inline int32_t* get_address_of_reliableSequenceNumber_29() { return &___reliableSequenceNumber_29; }
	inline void set_reliableSequenceNumber_29(int32_t value)
	{
		___reliableSequenceNumber_29 = value;
	}

	inline static int32_t get_offset_of_unreliableSequenceNumber_30() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___unreliableSequenceNumber_30)); }
	inline int32_t get_unreliableSequenceNumber_30() const { return ___unreliableSequenceNumber_30; }
	inline int32_t* get_address_of_unreliableSequenceNumber_30() { return &___unreliableSequenceNumber_30; }
	inline void set_unreliableSequenceNumber_30(int32_t value)
	{
		___unreliableSequenceNumber_30 = value;
	}

	inline static int32_t get_offset_of_unsequencedGroupNumber_31() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___unsequencedGroupNumber_31)); }
	inline int32_t get_unsequencedGroupNumber_31() const { return ___unsequencedGroupNumber_31; }
	inline int32_t* get_address_of_unsequencedGroupNumber_31() { return &___unsequencedGroupNumber_31; }
	inline void set_unsequencedGroupNumber_31(int32_t value)
	{
		___unsequencedGroupNumber_31 = value;
	}

	inline static int32_t get_offset_of_reservedByte_32() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___reservedByte_32)); }
	inline uint8_t get_reservedByte_32() const { return ___reservedByte_32; }
	inline uint8_t* get_address_of_reservedByte_32() { return &___reservedByte_32; }
	inline void set_reservedByte_32(uint8_t value)
	{
		___reservedByte_32 = value;
	}

	inline static int32_t get_offset_of_startSequenceNumber_33() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___startSequenceNumber_33)); }
	inline int32_t get_startSequenceNumber_33() const { return ___startSequenceNumber_33; }
	inline int32_t* get_address_of_startSequenceNumber_33() { return &___startSequenceNumber_33; }
	inline void set_startSequenceNumber_33(int32_t value)
	{
		___startSequenceNumber_33 = value;
	}

	inline static int32_t get_offset_of_fragmentCount_34() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentCount_34)); }
	inline int32_t get_fragmentCount_34() const { return ___fragmentCount_34; }
	inline int32_t* get_address_of_fragmentCount_34() { return &___fragmentCount_34; }
	inline void set_fragmentCount_34(int32_t value)
	{
		___fragmentCount_34 = value;
	}

	inline static int32_t get_offset_of_fragmentNumber_35() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentNumber_35)); }
	inline int32_t get_fragmentNumber_35() const { return ___fragmentNumber_35; }
	inline int32_t* get_address_of_fragmentNumber_35() { return &___fragmentNumber_35; }
	inline void set_fragmentNumber_35(int32_t value)
	{
		___fragmentNumber_35 = value;
	}

	inline static int32_t get_offset_of_totalLength_36() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___totalLength_36)); }
	inline int32_t get_totalLength_36() const { return ___totalLength_36; }
	inline int32_t* get_address_of_totalLength_36() { return &___totalLength_36; }
	inline void set_totalLength_36(int32_t value)
	{
		___totalLength_36 = value;
	}

	inline static int32_t get_offset_of_fragmentOffset_37() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentOffset_37)); }
	inline int32_t get_fragmentOffset_37() const { return ___fragmentOffset_37; }
	inline int32_t* get_address_of_fragmentOffset_37() { return &___fragmentOffset_37; }
	inline void set_fragmentOffset_37(int32_t value)
	{
		___fragmentOffset_37 = value;
	}

	inline static int32_t get_offset_of_fragmentsRemaining_38() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentsRemaining_38)); }
	inline int32_t get_fragmentsRemaining_38() const { return ___fragmentsRemaining_38; }
	inline int32_t* get_address_of_fragmentsRemaining_38() { return &___fragmentsRemaining_38; }
	inline void set_fragmentsRemaining_38(int32_t value)
	{
		___fragmentsRemaining_38 = value;
	}

	inline static int32_t get_offset_of_Payload_39() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___Payload_39)); }
	inline ByteU5BU5D_t58506160* get_Payload_39() const { return ___Payload_39; }
	inline ByteU5BU5D_t58506160** get_address_of_Payload_39() { return &___Payload_39; }
	inline void set_Payload_39(ByteU5BU5D_t58506160* value)
	{
		___Payload_39 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_39, value);
	}

	inline static int32_t get_offset_of_commandSentTime_40() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandSentTime_40)); }
	inline int32_t get_commandSentTime_40() const { return ___commandSentTime_40; }
	inline int32_t* get_address_of_commandSentTime_40() { return &___commandSentTime_40; }
	inline void set_commandSentTime_40(int32_t value)
	{
		___commandSentTime_40 = value;
	}

	inline static int32_t get_offset_of_commandSentCount_41() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandSentCount_41)); }
	inline uint8_t get_commandSentCount_41() const { return ___commandSentCount_41; }
	inline uint8_t* get_address_of_commandSentCount_41() { return &___commandSentCount_41; }
	inline void set_commandSentCount_41(uint8_t value)
	{
		___commandSentCount_41 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeout_42() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___roundTripTimeout_42)); }
	inline int32_t get_roundTripTimeout_42() const { return ___roundTripTimeout_42; }
	inline int32_t* get_address_of_roundTripTimeout_42() { return &___roundTripTimeout_42; }
	inline void set_roundTripTimeout_42(int32_t value)
	{
		___roundTripTimeout_42 = value;
	}

	inline static int32_t get_offset_of_timeoutTime_43() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___timeoutTime_43)); }
	inline int32_t get_timeoutTime_43() const { return ___timeoutTime_43; }
	inline int32_t* get_address_of_timeoutTime_43() { return &___timeoutTime_43; }
	inline void set_timeoutTime_43(int32_t value)
	{
		___timeoutTime_43 = value;
	}

	inline static int32_t get_offset_of_ackReceivedReliableSequenceNumber_44() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___ackReceivedReliableSequenceNumber_44)); }
	inline int32_t get_ackReceivedReliableSequenceNumber_44() const { return ___ackReceivedReliableSequenceNumber_44; }
	inline int32_t* get_address_of_ackReceivedReliableSequenceNumber_44() { return &___ackReceivedReliableSequenceNumber_44; }
	inline void set_ackReceivedReliableSequenceNumber_44(int32_t value)
	{
		___ackReceivedReliableSequenceNumber_44 = value;
	}

	inline static int32_t get_offset_of_ackReceivedSentTime_45() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___ackReceivedSentTime_45)); }
	inline int32_t get_ackReceivedSentTime_45() const { return ___ackReceivedSentTime_45; }
	inline int32_t* get_address_of_ackReceivedSentTime_45() { return &___ackReceivedSentTime_45; }
	inline void set_ackReceivedSentTime_45(int32_t value)
	{
		___ackReceivedSentTime_45 = value;
	}

	inline static int32_t get_offset_of_completeCommand_46() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___completeCommand_46)); }
	inline ByteU5BU5D_t58506160* get_completeCommand_46() const { return ___completeCommand_46; }
	inline ByteU5BU5D_t58506160** get_address_of_completeCommand_46() { return &___completeCommand_46; }
	inline void set_completeCommand_46(ByteU5BU5D_t58506160* value)
	{
		___completeCommand_46 = value;
		Il2CppCodeGenWriteBarrier(&___completeCommand_46, value);
	}

	inline static int32_t get_offset_of_Size_47() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___Size_47)); }
	inline int32_t get_Size_47() const { return ___Size_47; }
	inline int32_t* get_address_of_Size_47() { return &___Size_47; }
	inline void set_Size_47(int32_t value)
	{
		___Size_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
