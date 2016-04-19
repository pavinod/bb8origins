#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomInfo
struct  RoomInfo_t4185970761  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t223732124 * ___customPropertiesField_0;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField_1;
	// System.Boolean RoomInfo::openField
	bool ___openField_2;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField_3;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField_4;
	// System.String RoomInfo::nameField
	String_t* ___nameField_5;
	// System.Int32 RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_6;
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField_7;
	// System.Boolean RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_8;
	// System.Int32 RoomInfo::<playerCount>k__BackingField
	int32_t ___U3CplayerCountU3Ek__BackingField_9;
	// System.Boolean RoomInfo::<isLocalClientInside>k__BackingField
	bool ___U3CisLocalClientInsideU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_customPropertiesField_0() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___customPropertiesField_0)); }
	inline Hashtable_t223732124 * get_customPropertiesField_0() const { return ___customPropertiesField_0; }
	inline Hashtable_t223732124 ** get_address_of_customPropertiesField_0() { return &___customPropertiesField_0; }
	inline void set_customPropertiesField_0(Hashtable_t223732124 * value)
	{
		___customPropertiesField_0 = value;
		Il2CppCodeGenWriteBarrier(&___customPropertiesField_0, value);
	}

	inline static int32_t get_offset_of_maxPlayersField_1() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___maxPlayersField_1)); }
	inline uint8_t get_maxPlayersField_1() const { return ___maxPlayersField_1; }
	inline uint8_t* get_address_of_maxPlayersField_1() { return &___maxPlayersField_1; }
	inline void set_maxPlayersField_1(uint8_t value)
	{
		___maxPlayersField_1 = value;
	}

	inline static int32_t get_offset_of_openField_2() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___openField_2)); }
	inline bool get_openField_2() const { return ___openField_2; }
	inline bool* get_address_of_openField_2() { return &___openField_2; }
	inline void set_openField_2(bool value)
	{
		___openField_2 = value;
	}

	inline static int32_t get_offset_of_visibleField_3() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___visibleField_3)); }
	inline bool get_visibleField_3() const { return ___visibleField_3; }
	inline bool* get_address_of_visibleField_3() { return &___visibleField_3; }
	inline void set_visibleField_3(bool value)
	{
		___visibleField_3 = value;
	}

	inline static int32_t get_offset_of_autoCleanUpField_4() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___autoCleanUpField_4)); }
	inline bool get_autoCleanUpField_4() const { return ___autoCleanUpField_4; }
	inline bool* get_address_of_autoCleanUpField_4() { return &___autoCleanUpField_4; }
	inline void set_autoCleanUpField_4(bool value)
	{
		___autoCleanUpField_4 = value;
	}

	inline static int32_t get_offset_of_nameField_5() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___nameField_5)); }
	inline String_t* get_nameField_5() const { return ___nameField_5; }
	inline String_t** get_address_of_nameField_5() { return &___nameField_5; }
	inline void set_nameField_5(String_t* value)
	{
		___nameField_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameField_5, value);
	}

	inline static int32_t get_offset_of_masterClientIdField_6() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___masterClientIdField_6)); }
	inline int32_t get_masterClientIdField_6() const { return ___masterClientIdField_6; }
	inline int32_t* get_address_of_masterClientIdField_6() { return &___masterClientIdField_6; }
	inline void set_masterClientIdField_6(int32_t value)
	{
		___masterClientIdField_6 = value;
	}

	inline static int32_t get_offset_of_U3CremovedFromListU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CremovedFromListU3Ek__BackingField_7)); }
	inline bool get_U3CremovedFromListU3Ek__BackingField_7() const { return ___U3CremovedFromListU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CremovedFromListU3Ek__BackingField_7() { return &___U3CremovedFromListU3Ek__BackingField_7; }
	inline void set_U3CremovedFromListU3Ek__BackingField_7(bool value)
	{
		___U3CremovedFromListU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CserverSideMasterClientU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CserverSideMasterClientU3Ek__BackingField_8)); }
	inline bool get_U3CserverSideMasterClientU3Ek__BackingField_8() const { return ___U3CserverSideMasterClientU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CserverSideMasterClientU3Ek__BackingField_8() { return &___U3CserverSideMasterClientU3Ek__BackingField_8; }
	inline void set_U3CserverSideMasterClientU3Ek__BackingField_8(bool value)
	{
		___U3CserverSideMasterClientU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CplayerCountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CplayerCountU3Ek__BackingField_9)); }
	inline int32_t get_U3CplayerCountU3Ek__BackingField_9() const { return ___U3CplayerCountU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CplayerCountU3Ek__BackingField_9() { return &___U3CplayerCountU3Ek__BackingField_9; }
	inline void set_U3CplayerCountU3Ek__BackingField_9(int32_t value)
	{
		___U3CplayerCountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisLocalClientInsideU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomInfo_t4185970761, ___U3CisLocalClientInsideU3Ek__BackingField_10)); }
	inline bool get_U3CisLocalClientInsideU3Ek__BackingField_10() const { return ___U3CisLocalClientInsideU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisLocalClientInsideU3Ek__BackingField_10() { return &___U3CisLocalClientInsideU3Ek__BackingField_10; }
	inline void set_U3CisLocalClientInsideU3Ek__BackingField_10(bool value)
	{
		___U3CisLocalClientInsideU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
