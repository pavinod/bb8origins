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
// UnityEngine.UI.InputField
struct InputField_t2345609593;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.String[]
struct StringU5BU5D_t2956870243;
// TypedLobby
struct TypedLobby_t1020404140;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t909267611;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MainMenu::joystick
	GameObject_t4012695102 * ___joystick_2;
	// System.Single MainMenu::var1
	float ___var1_3;
	// UnityEngine.UI.Button MainMenu::create
	Button_t990034267 * ___create_4;
	// UnityEngine.UI.Button MainMenu::random
	Button_t990034267 * ___random_5;
	// UnityEngine.UI.Button MainMenu::quit
	Button_t990034267 * ___quit_6;
	// UnityEngine.UI.InputField MainMenu::createroom
	InputField_t2345609593 * ___createroom_7;
	// UnityEngine.GameObject MainMenu::scroller
	GameObject_t4012695102 * ___scroller_8;
	// UnityEngine.GameObject MainMenu::rooms
	GameObject_t4012695102 * ___rooms_9;
	// ExitGames.Client.Photon.Hashtable MainMenu::roomProps
	Hashtable_t223732124 * ___roomProps_10;
	// System.String[] MainMenu::roomPropsInLobby
	StringU5BU5D_t2956870243* ___roomPropsInLobby_11;
	// TypedLobby MainMenu::defaultLobby
	TypedLobby_t1020404140 * ___defaultLobby_12;
	// UnityEngine.UI.Text MainMenu::connect
	Text_t3286458198 * ___connect_13;
	// System.Boolean MainMenu::refreshed
	bool ___refreshed_14;
	// System.String MainMenu::roomName
	String_t* ___roomName_15;
	// UnityEngine.Vector2 MainMenu::scrollPos
	Vector2_t3525329788  ___scrollPos_16;

public:
	inline static int32_t get_offset_of_joystick_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___joystick_2)); }
	inline GameObject_t4012695102 * get_joystick_2() const { return ___joystick_2; }
	inline GameObject_t4012695102 ** get_address_of_joystick_2() { return &___joystick_2; }
	inline void set_joystick_2(GameObject_t4012695102 * value)
	{
		___joystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_2, value);
	}

	inline static int32_t get_offset_of_var1_3() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___var1_3)); }
	inline float get_var1_3() const { return ___var1_3; }
	inline float* get_address_of_var1_3() { return &___var1_3; }
	inline void set_var1_3(float value)
	{
		___var1_3 = value;
	}

	inline static int32_t get_offset_of_create_4() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___create_4)); }
	inline Button_t990034267 * get_create_4() const { return ___create_4; }
	inline Button_t990034267 ** get_address_of_create_4() { return &___create_4; }
	inline void set_create_4(Button_t990034267 * value)
	{
		___create_4 = value;
		Il2CppCodeGenWriteBarrier(&___create_4, value);
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___random_5)); }
	inline Button_t990034267 * get_random_5() const { return ___random_5; }
	inline Button_t990034267 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(Button_t990034267 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier(&___random_5, value);
	}

	inline static int32_t get_offset_of_quit_6() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___quit_6)); }
	inline Button_t990034267 * get_quit_6() const { return ___quit_6; }
	inline Button_t990034267 ** get_address_of_quit_6() { return &___quit_6; }
	inline void set_quit_6(Button_t990034267 * value)
	{
		___quit_6 = value;
		Il2CppCodeGenWriteBarrier(&___quit_6, value);
	}

	inline static int32_t get_offset_of_createroom_7() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___createroom_7)); }
	inline InputField_t2345609593 * get_createroom_7() const { return ___createroom_7; }
	inline InputField_t2345609593 ** get_address_of_createroom_7() { return &___createroom_7; }
	inline void set_createroom_7(InputField_t2345609593 * value)
	{
		___createroom_7 = value;
		Il2CppCodeGenWriteBarrier(&___createroom_7, value);
	}

	inline static int32_t get_offset_of_scroller_8() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___scroller_8)); }
	inline GameObject_t4012695102 * get_scroller_8() const { return ___scroller_8; }
	inline GameObject_t4012695102 ** get_address_of_scroller_8() { return &___scroller_8; }
	inline void set_scroller_8(GameObject_t4012695102 * value)
	{
		___scroller_8 = value;
		Il2CppCodeGenWriteBarrier(&___scroller_8, value);
	}

	inline static int32_t get_offset_of_rooms_9() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___rooms_9)); }
	inline GameObject_t4012695102 * get_rooms_9() const { return ___rooms_9; }
	inline GameObject_t4012695102 ** get_address_of_rooms_9() { return &___rooms_9; }
	inline void set_rooms_9(GameObject_t4012695102 * value)
	{
		___rooms_9 = value;
		Il2CppCodeGenWriteBarrier(&___rooms_9, value);
	}

	inline static int32_t get_offset_of_roomProps_10() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomProps_10)); }
	inline Hashtable_t223732124 * get_roomProps_10() const { return ___roomProps_10; }
	inline Hashtable_t223732124 ** get_address_of_roomProps_10() { return &___roomProps_10; }
	inline void set_roomProps_10(Hashtable_t223732124 * value)
	{
		___roomProps_10 = value;
		Il2CppCodeGenWriteBarrier(&___roomProps_10, value);
	}

	inline static int32_t get_offset_of_roomPropsInLobby_11() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomPropsInLobby_11)); }
	inline StringU5BU5D_t2956870243* get_roomPropsInLobby_11() const { return ___roomPropsInLobby_11; }
	inline StringU5BU5D_t2956870243** get_address_of_roomPropsInLobby_11() { return &___roomPropsInLobby_11; }
	inline void set_roomPropsInLobby_11(StringU5BU5D_t2956870243* value)
	{
		___roomPropsInLobby_11 = value;
		Il2CppCodeGenWriteBarrier(&___roomPropsInLobby_11, value);
	}

	inline static int32_t get_offset_of_defaultLobby_12() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___defaultLobby_12)); }
	inline TypedLobby_t1020404140 * get_defaultLobby_12() const { return ___defaultLobby_12; }
	inline TypedLobby_t1020404140 ** get_address_of_defaultLobby_12() { return &___defaultLobby_12; }
	inline void set_defaultLobby_12(TypedLobby_t1020404140 * value)
	{
		___defaultLobby_12 = value;
		Il2CppCodeGenWriteBarrier(&___defaultLobby_12, value);
	}

	inline static int32_t get_offset_of_connect_13() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___connect_13)); }
	inline Text_t3286458198 * get_connect_13() const { return ___connect_13; }
	inline Text_t3286458198 ** get_address_of_connect_13() { return &___connect_13; }
	inline void set_connect_13(Text_t3286458198 * value)
	{
		___connect_13 = value;
		Il2CppCodeGenWriteBarrier(&___connect_13, value);
	}

	inline static int32_t get_offset_of_refreshed_14() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___refreshed_14)); }
	inline bool get_refreshed_14() const { return ___refreshed_14; }
	inline bool* get_address_of_refreshed_14() { return &___refreshed_14; }
	inline void set_refreshed_14(bool value)
	{
		___refreshed_14 = value;
	}

	inline static int32_t get_offset_of_roomName_15() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomName_15)); }
	inline String_t* get_roomName_15() const { return ___roomName_15; }
	inline String_t** get_address_of_roomName_15() { return &___roomName_15; }
	inline void set_roomName_15(String_t* value)
	{
		___roomName_15 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_15, value);
	}

	inline static int32_t get_offset_of_scrollPos_16() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___scrollPos_16)); }
	inline Vector2_t3525329788  get_scrollPos_16() const { return ___scrollPos_16; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_16() { return &___scrollPos_16; }
	inline void set_scrollPos_16(Vector2_t3525329788  value)
	{
		___scrollPos_16 = value;
	}
};

struct MainMenu_t55996120_StaticFields
{
public:
	// UnityEngine.Events.UnityAction MainMenu::<>f__am$cacheF
	UnityAction_t909267611 * ___U3CU3Ef__amU24cacheF_17;
	// UnityEngine.Events.UnityAction MainMenu::<>f__am$cache10
	UnityAction_t909267611 * ___U3CU3Ef__amU24cache10_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline UnityAction_t909267611 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline UnityAction_t909267611 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(UnityAction_t909267611 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_18() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___U3CU3Ef__amU24cache10_18)); }
	inline UnityAction_t909267611 * get_U3CU3Ef__amU24cache10_18() const { return ___U3CU3Ef__amU24cache10_18; }
	inline UnityAction_t909267611 ** get_address_of_U3CU3Ef__amU24cache10_18() { return &___U3CU3Ef__amU24cache10_18; }
	inline void set_U3CU3Ef__amU24cache10_18(UnityAction_t909267611 * value)
	{
		___U3CU3Ef__amU24cache10_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
