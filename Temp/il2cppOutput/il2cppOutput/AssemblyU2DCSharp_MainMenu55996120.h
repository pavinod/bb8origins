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
// UnityEngine.UI.Image
struct Image_t3354615620;
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
	// UnityEngine.UI.Image MainMenu::bg
	Image_t3354615620 * ___bg_3;
	// System.Single MainMenu::var1
	float ___var1_4;
	// UnityEngine.UI.Button MainMenu::create
	Button_t990034267 * ___create_5;
	// UnityEngine.UI.Button MainMenu::joinRoom
	Button_t990034267 * ___joinRoom_6;
	// UnityEngine.UI.Button MainMenu::random
	Button_t990034267 * ___random_7;
	// UnityEngine.UI.Button MainMenu::quit
	Button_t990034267 * ___quit_8;
	// UnityEngine.UI.InputField MainMenu::playername
	InputField_t2345609593 * ___playername_9;
	// UnityEngine.UI.InputField MainMenu::createroom
	InputField_t2345609593 * ___createroom_10;
	// UnityEngine.GameObject MainMenu::scroller
	GameObject_t4012695102 * ___scroller_11;
	// UnityEngine.GameObject MainMenu::rooms
	GameObject_t4012695102 * ___rooms_12;
	// ExitGames.Client.Photon.Hashtable MainMenu::roomProps
	Hashtable_t223732124 * ___roomProps_13;
	// System.String[] MainMenu::roomPropsInLobby
	StringU5BU5D_t2956870243* ___roomPropsInLobby_14;
	// TypedLobby MainMenu::defaultLobby
	TypedLobby_t1020404140 * ___defaultLobby_15;
	// UnityEngine.UI.Text MainMenu::connect
	Text_t3286458198 * ___connect_16;
	// System.Boolean MainMenu::refreshed
	bool ___refreshed_17;
	// System.String MainMenu::roomName
	String_t* ___roomName_18;
	// UnityEngine.Vector2 MainMenu::scrollPos
	Vector2_t3525329788  ___scrollPos_19;

public:
	inline static int32_t get_offset_of_joystick_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___joystick_2)); }
	inline GameObject_t4012695102 * get_joystick_2() const { return ___joystick_2; }
	inline GameObject_t4012695102 ** get_address_of_joystick_2() { return &___joystick_2; }
	inline void set_joystick_2(GameObject_t4012695102 * value)
	{
		___joystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_2, value);
	}

	inline static int32_t get_offset_of_bg_3() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___bg_3)); }
	inline Image_t3354615620 * get_bg_3() const { return ___bg_3; }
	inline Image_t3354615620 ** get_address_of_bg_3() { return &___bg_3; }
	inline void set_bg_3(Image_t3354615620 * value)
	{
		___bg_3 = value;
		Il2CppCodeGenWriteBarrier(&___bg_3, value);
	}

	inline static int32_t get_offset_of_var1_4() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___var1_4)); }
	inline float get_var1_4() const { return ___var1_4; }
	inline float* get_address_of_var1_4() { return &___var1_4; }
	inline void set_var1_4(float value)
	{
		___var1_4 = value;
	}

	inline static int32_t get_offset_of_create_5() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___create_5)); }
	inline Button_t990034267 * get_create_5() const { return ___create_5; }
	inline Button_t990034267 ** get_address_of_create_5() { return &___create_5; }
	inline void set_create_5(Button_t990034267 * value)
	{
		___create_5 = value;
		Il2CppCodeGenWriteBarrier(&___create_5, value);
	}

	inline static int32_t get_offset_of_joinRoom_6() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___joinRoom_6)); }
	inline Button_t990034267 * get_joinRoom_6() const { return ___joinRoom_6; }
	inline Button_t990034267 ** get_address_of_joinRoom_6() { return &___joinRoom_6; }
	inline void set_joinRoom_6(Button_t990034267 * value)
	{
		___joinRoom_6 = value;
		Il2CppCodeGenWriteBarrier(&___joinRoom_6, value);
	}

	inline static int32_t get_offset_of_random_7() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___random_7)); }
	inline Button_t990034267 * get_random_7() const { return ___random_7; }
	inline Button_t990034267 ** get_address_of_random_7() { return &___random_7; }
	inline void set_random_7(Button_t990034267 * value)
	{
		___random_7 = value;
		Il2CppCodeGenWriteBarrier(&___random_7, value);
	}

	inline static int32_t get_offset_of_quit_8() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___quit_8)); }
	inline Button_t990034267 * get_quit_8() const { return ___quit_8; }
	inline Button_t990034267 ** get_address_of_quit_8() { return &___quit_8; }
	inline void set_quit_8(Button_t990034267 * value)
	{
		___quit_8 = value;
		Il2CppCodeGenWriteBarrier(&___quit_8, value);
	}

	inline static int32_t get_offset_of_playername_9() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___playername_9)); }
	inline InputField_t2345609593 * get_playername_9() const { return ___playername_9; }
	inline InputField_t2345609593 ** get_address_of_playername_9() { return &___playername_9; }
	inline void set_playername_9(InputField_t2345609593 * value)
	{
		___playername_9 = value;
		Il2CppCodeGenWriteBarrier(&___playername_9, value);
	}

	inline static int32_t get_offset_of_createroom_10() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___createroom_10)); }
	inline InputField_t2345609593 * get_createroom_10() const { return ___createroom_10; }
	inline InputField_t2345609593 ** get_address_of_createroom_10() { return &___createroom_10; }
	inline void set_createroom_10(InputField_t2345609593 * value)
	{
		___createroom_10 = value;
		Il2CppCodeGenWriteBarrier(&___createroom_10, value);
	}

	inline static int32_t get_offset_of_scroller_11() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___scroller_11)); }
	inline GameObject_t4012695102 * get_scroller_11() const { return ___scroller_11; }
	inline GameObject_t4012695102 ** get_address_of_scroller_11() { return &___scroller_11; }
	inline void set_scroller_11(GameObject_t4012695102 * value)
	{
		___scroller_11 = value;
		Il2CppCodeGenWriteBarrier(&___scroller_11, value);
	}

	inline static int32_t get_offset_of_rooms_12() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___rooms_12)); }
	inline GameObject_t4012695102 * get_rooms_12() const { return ___rooms_12; }
	inline GameObject_t4012695102 ** get_address_of_rooms_12() { return &___rooms_12; }
	inline void set_rooms_12(GameObject_t4012695102 * value)
	{
		___rooms_12 = value;
		Il2CppCodeGenWriteBarrier(&___rooms_12, value);
	}

	inline static int32_t get_offset_of_roomProps_13() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomProps_13)); }
	inline Hashtable_t223732124 * get_roomProps_13() const { return ___roomProps_13; }
	inline Hashtable_t223732124 ** get_address_of_roomProps_13() { return &___roomProps_13; }
	inline void set_roomProps_13(Hashtable_t223732124 * value)
	{
		___roomProps_13 = value;
		Il2CppCodeGenWriteBarrier(&___roomProps_13, value);
	}

	inline static int32_t get_offset_of_roomPropsInLobby_14() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomPropsInLobby_14)); }
	inline StringU5BU5D_t2956870243* get_roomPropsInLobby_14() const { return ___roomPropsInLobby_14; }
	inline StringU5BU5D_t2956870243** get_address_of_roomPropsInLobby_14() { return &___roomPropsInLobby_14; }
	inline void set_roomPropsInLobby_14(StringU5BU5D_t2956870243* value)
	{
		___roomPropsInLobby_14 = value;
		Il2CppCodeGenWriteBarrier(&___roomPropsInLobby_14, value);
	}

	inline static int32_t get_offset_of_defaultLobby_15() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___defaultLobby_15)); }
	inline TypedLobby_t1020404140 * get_defaultLobby_15() const { return ___defaultLobby_15; }
	inline TypedLobby_t1020404140 ** get_address_of_defaultLobby_15() { return &___defaultLobby_15; }
	inline void set_defaultLobby_15(TypedLobby_t1020404140 * value)
	{
		___defaultLobby_15 = value;
		Il2CppCodeGenWriteBarrier(&___defaultLobby_15, value);
	}

	inline static int32_t get_offset_of_connect_16() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___connect_16)); }
	inline Text_t3286458198 * get_connect_16() const { return ___connect_16; }
	inline Text_t3286458198 ** get_address_of_connect_16() { return &___connect_16; }
	inline void set_connect_16(Text_t3286458198 * value)
	{
		___connect_16 = value;
		Il2CppCodeGenWriteBarrier(&___connect_16, value);
	}

	inline static int32_t get_offset_of_refreshed_17() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___refreshed_17)); }
	inline bool get_refreshed_17() const { return ___refreshed_17; }
	inline bool* get_address_of_refreshed_17() { return &___refreshed_17; }
	inline void set_refreshed_17(bool value)
	{
		___refreshed_17 = value;
	}

	inline static int32_t get_offset_of_roomName_18() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___roomName_18)); }
	inline String_t* get_roomName_18() const { return ___roomName_18; }
	inline String_t** get_address_of_roomName_18() { return &___roomName_18; }
	inline void set_roomName_18(String_t* value)
	{
		___roomName_18 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_18, value);
	}

	inline static int32_t get_offset_of_scrollPos_19() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___scrollPos_19)); }
	inline Vector2_t3525329788  get_scrollPos_19() const { return ___scrollPos_19; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_19() { return &___scrollPos_19; }
	inline void set_scrollPos_19(Vector2_t3525329788  value)
	{
		___scrollPos_19 = value;
	}
};

struct MainMenu_t55996120_StaticFields
{
public:
	// UnityEngine.Events.UnityAction MainMenu::<>f__am$cache12
	UnityAction_t909267611 * ___U3CU3Ef__amU24cache12_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_20() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___U3CU3Ef__amU24cache12_20)); }
	inline UnityAction_t909267611 * get_U3CU3Ef__amU24cache12_20() const { return ___U3CU3Ef__amU24cache12_20; }
	inline UnityAction_t909267611 ** get_address_of_U3CU3Ef__amU24cache12_20() { return &___U3CU3Ef__amU24cache12_20; }
	inline void set_U3CU3Ef__amU24cache12_20(UnityAction_t909267611 * value)
	{
		___U3CU3Ef__amU24cache12_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
