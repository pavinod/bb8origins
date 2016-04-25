﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1417492998;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>[]
struct List_1U5BU5D_t3682635859;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t808529290;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t490692065;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct  Dictionary_2_t2075760665  : public Il2CppObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1809983122* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t1417492998* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3431720054* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t3682635859* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Il2CppObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t2995724695 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___table_4)); }
	inline Int32U5BU5D_t1809983122* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t1809983122** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t1809983122* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier(&___table_4, value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___linkSlots_5)); }
	inline LinkU5BU5D_t1417492998* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t1417492998** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t1417492998* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier(&___linkSlots_5, value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___keySlots_6)); }
	inline TypeU5BU5D_t3431720054* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3431720054** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3431720054* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier(&___keySlots_6, value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___valueSlots_7)); }
	inline List_1U5BU5D_t3682635859* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t3682635859** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t3682635859* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier(&___valueSlots_7, value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___hcp_12)); }
	inline Il2CppObject* get_hcp_12() const { return ___hcp_12; }
	inline Il2CppObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(Il2CppObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier(&___hcp_12, value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___serialization_info_13)); }
	inline SerializationInfo_t2995724695 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t2995724695 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t2995724695 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier(&___serialization_info_13, value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2075760665_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t490692065 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2075760665_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t490692065 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t490692065 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t490692065 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif