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
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t2519962843  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ScoreManager::text
	Text_t3286458198 * ___text_10;

public:
	inline static int32_t get_offset_of_text_10() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___text_10)); }
	inline Text_t3286458198 * get_text_10() const { return ___text_10; }
	inline Text_t3286458198 ** get_address_of_text_10() { return &___text_10; }
	inline void set_text_10(Text_t3286458198 * value)
	{
		___text_10 = value;
		Il2CppCodeGenWriteBarrier(&___text_10, value);
	}
};

struct ScoreManager_t2519962843_StaticFields
{
public:
	// System.Int32 ScoreManager::score1
	int32_t ___score1_2;
	// System.Int32 ScoreManager::score2
	int32_t ___score2_3;
	// System.Int32 ScoreManager::score3
	int32_t ___score3_4;
	// System.Int32 ScoreManager::score4
	int32_t ___score4_5;
	// System.Boolean ScoreManager::waiting
	bool ___waiting_6;
	// System.String ScoreManager::waitingtext
	String_t* ___waitingtext_7;
	// System.Boolean ScoreManager::start
	bool ___start_8;
	// System.Int32 ScoreManager::count
	int32_t ___count_9;

public:
	inline static int32_t get_offset_of_score1_2() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___score1_2)); }
	inline int32_t get_score1_2() const { return ___score1_2; }
	inline int32_t* get_address_of_score1_2() { return &___score1_2; }
	inline void set_score1_2(int32_t value)
	{
		___score1_2 = value;
	}

	inline static int32_t get_offset_of_score2_3() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___score2_3)); }
	inline int32_t get_score2_3() const { return ___score2_3; }
	inline int32_t* get_address_of_score2_3() { return &___score2_3; }
	inline void set_score2_3(int32_t value)
	{
		___score2_3 = value;
	}

	inline static int32_t get_offset_of_score3_4() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___score3_4)); }
	inline int32_t get_score3_4() const { return ___score3_4; }
	inline int32_t* get_address_of_score3_4() { return &___score3_4; }
	inline void set_score3_4(int32_t value)
	{
		___score3_4 = value;
	}

	inline static int32_t get_offset_of_score4_5() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___score4_5)); }
	inline int32_t get_score4_5() const { return ___score4_5; }
	inline int32_t* get_address_of_score4_5() { return &___score4_5; }
	inline void set_score4_5(int32_t value)
	{
		___score4_5 = value;
	}

	inline static int32_t get_offset_of_waiting_6() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___waiting_6)); }
	inline bool get_waiting_6() const { return ___waiting_6; }
	inline bool* get_address_of_waiting_6() { return &___waiting_6; }
	inline void set_waiting_6(bool value)
	{
		___waiting_6 = value;
	}

	inline static int32_t get_offset_of_waitingtext_7() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___waitingtext_7)); }
	inline String_t* get_waitingtext_7() const { return ___waitingtext_7; }
	inline String_t** get_address_of_waitingtext_7() { return &___waitingtext_7; }
	inline void set_waitingtext_7(String_t* value)
	{
		___waitingtext_7 = value;
		Il2CppCodeGenWriteBarrier(&___waitingtext_7, value);
	}

	inline static int32_t get_offset_of_start_8() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___start_8)); }
	inline bool get_start_8() const { return ___start_8; }
	inline bool* get_address_of_start_8() { return &___start_8; }
	inline void set_start_8(bool value)
	{
		___start_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
