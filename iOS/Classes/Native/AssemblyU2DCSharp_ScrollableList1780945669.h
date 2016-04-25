#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Button
struct Button_t990034267;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t4161147807;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollableList
struct  ScrollableList_t1780945669  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject ScrollableList::itemPrefab
	GameObject_t4012695102 * ___itemPrefab_2;
	// System.Int32 ScrollableList::itemCount
	int32_t ___itemCount_3;
	// System.Int32 ScrollableList::columnCount
	int32_t ___columnCount_4;
	// UnityEngine.UI.Button ScrollableList::refresh
	Button_t990034267 * ___refresh_5;

public:
	inline static int32_t get_offset_of_itemPrefab_2() { return static_cast<int32_t>(offsetof(ScrollableList_t1780945669, ___itemPrefab_2)); }
	inline GameObject_t4012695102 * get_itemPrefab_2() const { return ___itemPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_itemPrefab_2() { return &___itemPrefab_2; }
	inline void set_itemPrefab_2(GameObject_t4012695102 * value)
	{
		___itemPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___itemPrefab_2, value);
	}

	inline static int32_t get_offset_of_itemCount_3() { return static_cast<int32_t>(offsetof(ScrollableList_t1780945669, ___itemCount_3)); }
	inline int32_t get_itemCount_3() const { return ___itemCount_3; }
	inline int32_t* get_address_of_itemCount_3() { return &___itemCount_3; }
	inline void set_itemCount_3(int32_t value)
	{
		___itemCount_3 = value;
	}

	inline static int32_t get_offset_of_columnCount_4() { return static_cast<int32_t>(offsetof(ScrollableList_t1780945669, ___columnCount_4)); }
	inline int32_t get_columnCount_4() const { return ___columnCount_4; }
	inline int32_t* get_address_of_columnCount_4() { return &___columnCount_4; }
	inline void set_columnCount_4(int32_t value)
	{
		___columnCount_4 = value;
	}

	inline static int32_t get_offset_of_refresh_5() { return static_cast<int32_t>(offsetof(ScrollableList_t1780945669, ___refresh_5)); }
	inline Button_t990034267 * get_refresh_5() const { return ___refresh_5; }
	inline Button_t990034267 ** get_address_of_refresh_5() { return &___refresh_5; }
	inline void set_refresh_5(Button_t990034267 * value)
	{
		___refresh_5 = value;
		Il2CppCodeGenWriteBarrier(&___refresh_5, value);
	}
};

struct ScrollableList_t1780945669_StaticFields
{
public:
	// System.Action`1<UnityEngine.GameObject> ScrollableList::<>f__am$cache4
	Action_1_t4161147807 * ___U3CU3Ef__amU24cache4_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_6() { return static_cast<int32_t>(offsetof(ScrollableList_t1780945669_StaticFields, ___U3CU3Ef__amU24cache4_6)); }
	inline Action_1_t4161147807 * get_U3CU3Ef__amU24cache4_6() const { return ___U3CU3Ef__amU24cache4_6; }
	inline Action_1_t4161147807 ** get_address_of_U3CU3Ef__amU24cache4_6() { return &___U3CU3Ef__amU24cache4_6; }
	inline void set_U3CU3Ef__amU24cache4_6(Action_1_t4161147807 * value)
	{
		___U3CU3Ef__amU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
