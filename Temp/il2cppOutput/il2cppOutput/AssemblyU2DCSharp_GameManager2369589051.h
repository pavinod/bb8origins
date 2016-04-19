#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// PhotonView
struct PhotonView_t1498838369;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.Button
struct Button_t990034267;
// MatchTimer
struct MatchTimer_t3848236192;
// PlayMusic
struct PlayMusic_t109867825;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Dictionary_2_t1665019366;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32>
struct Dictionary_2_t1479814815;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Camera GameManager::mainCam
	Camera_t3533968274 * ___mainCam_3;
	// PhotonView GameManager::myPhotonView
	PhotonView_t1498838369 * ___myPhotonView_4;
	// UnityEngine.GameObject GameManager::joystick
	GameObject_t4012695102 * ___joystick_5;
	// UnityEngine.UI.Image GameManager::bg
	Image_t3354615620 * ___bg_6;
	// UnityEngine.UI.Button GameManager::quit
	Button_t990034267 * ___quit_7;
	// MatchTimer GameManager::gametimer
	MatchTimer_t3848236192 * ___gametimer_8;
	// UnityEngine.GameObject GameManager::lobby
	GameObject_t4012695102 * ___lobby_9;
	// PlayMusic GameManager::playMusic
	PlayMusic_t109867825 * ___playMusic_10;
	// MatchTimer GameManager::gamestarted
	MatchTimer_t3848236192 * ___gamestarted_11;
	// UnityEngine.GameObject GameManager::gameUI
	GameObject_t4012695102 * ___gameUI_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.Vector3>> GameManager::dict
	Dictionary_2_t1665019366 * ___dict_13;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color32> GameManager::colorRef
	Dictionary_2_t1479814815 * ___colorRef_14;
	// System.Boolean GameManager::start
	bool ___start_15;

public:
	inline static int32_t get_offset_of_mainCam_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___mainCam_3)); }
	inline Camera_t3533968274 * get_mainCam_3() const { return ___mainCam_3; }
	inline Camera_t3533968274 ** get_address_of_mainCam_3() { return &___mainCam_3; }
	inline void set_mainCam_3(Camera_t3533968274 * value)
	{
		___mainCam_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_3, value);
	}

	inline static int32_t get_offset_of_myPhotonView_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___myPhotonView_4)); }
	inline PhotonView_t1498838369 * get_myPhotonView_4() const { return ___myPhotonView_4; }
	inline PhotonView_t1498838369 ** get_address_of_myPhotonView_4() { return &___myPhotonView_4; }
	inline void set_myPhotonView_4(PhotonView_t1498838369 * value)
	{
		___myPhotonView_4 = value;
		Il2CppCodeGenWriteBarrier(&___myPhotonView_4, value);
	}

	inline static int32_t get_offset_of_joystick_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___joystick_5)); }
	inline GameObject_t4012695102 * get_joystick_5() const { return ___joystick_5; }
	inline GameObject_t4012695102 ** get_address_of_joystick_5() { return &___joystick_5; }
	inline void set_joystick_5(GameObject_t4012695102 * value)
	{
		___joystick_5 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_5, value);
	}

	inline static int32_t get_offset_of_bg_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___bg_6)); }
	inline Image_t3354615620 * get_bg_6() const { return ___bg_6; }
	inline Image_t3354615620 ** get_address_of_bg_6() { return &___bg_6; }
	inline void set_bg_6(Image_t3354615620 * value)
	{
		___bg_6 = value;
		Il2CppCodeGenWriteBarrier(&___bg_6, value);
	}

	inline static int32_t get_offset_of_quit_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___quit_7)); }
	inline Button_t990034267 * get_quit_7() const { return ___quit_7; }
	inline Button_t990034267 ** get_address_of_quit_7() { return &___quit_7; }
	inline void set_quit_7(Button_t990034267 * value)
	{
		___quit_7 = value;
		Il2CppCodeGenWriteBarrier(&___quit_7, value);
	}

	inline static int32_t get_offset_of_gametimer_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gametimer_8)); }
	inline MatchTimer_t3848236192 * get_gametimer_8() const { return ___gametimer_8; }
	inline MatchTimer_t3848236192 ** get_address_of_gametimer_8() { return &___gametimer_8; }
	inline void set_gametimer_8(MatchTimer_t3848236192 * value)
	{
		___gametimer_8 = value;
		Il2CppCodeGenWriteBarrier(&___gametimer_8, value);
	}

	inline static int32_t get_offset_of_lobby_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___lobby_9)); }
	inline GameObject_t4012695102 * get_lobby_9() const { return ___lobby_9; }
	inline GameObject_t4012695102 ** get_address_of_lobby_9() { return &___lobby_9; }
	inline void set_lobby_9(GameObject_t4012695102 * value)
	{
		___lobby_9 = value;
		Il2CppCodeGenWriteBarrier(&___lobby_9, value);
	}

	inline static int32_t get_offset_of_playMusic_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playMusic_10)); }
	inline PlayMusic_t109867825 * get_playMusic_10() const { return ___playMusic_10; }
	inline PlayMusic_t109867825 ** get_address_of_playMusic_10() { return &___playMusic_10; }
	inline void set_playMusic_10(PlayMusic_t109867825 * value)
	{
		___playMusic_10 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_10, value);
	}

	inline static int32_t get_offset_of_gamestarted_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gamestarted_11)); }
	inline MatchTimer_t3848236192 * get_gamestarted_11() const { return ___gamestarted_11; }
	inline MatchTimer_t3848236192 ** get_address_of_gamestarted_11() { return &___gamestarted_11; }
	inline void set_gamestarted_11(MatchTimer_t3848236192 * value)
	{
		___gamestarted_11 = value;
		Il2CppCodeGenWriteBarrier(&___gamestarted_11, value);
	}

	inline static int32_t get_offset_of_gameUI_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gameUI_12)); }
	inline GameObject_t4012695102 * get_gameUI_12() const { return ___gameUI_12; }
	inline GameObject_t4012695102 ** get_address_of_gameUI_12() { return &___gameUI_12; }
	inline void set_gameUI_12(GameObject_t4012695102 * value)
	{
		___gameUI_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameUI_12, value);
	}

	inline static int32_t get_offset_of_dict_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___dict_13)); }
	inline Dictionary_2_t1665019366 * get_dict_13() const { return ___dict_13; }
	inline Dictionary_2_t1665019366 ** get_address_of_dict_13() { return &___dict_13; }
	inline void set_dict_13(Dictionary_2_t1665019366 * value)
	{
		___dict_13 = value;
		Il2CppCodeGenWriteBarrier(&___dict_13, value);
	}

	inline static int32_t get_offset_of_colorRef_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___colorRef_14)); }
	inline Dictionary_2_t1479814815 * get_colorRef_14() const { return ___colorRef_14; }
	inline Dictionary_2_t1479814815 ** get_address_of_colorRef_14() { return &___colorRef_14; }
	inline void set_colorRef_14(Dictionary_2_t1479814815 * value)
	{
		___colorRef_14 = value;
		Il2CppCodeGenWriteBarrier(&___colorRef_14, value);
	}

	inline static int32_t get_offset_of_start_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___start_15)); }
	inline bool get_start_15() const { return ___start_15; }
	inline bool* get_address_of_start_15() { return &___start_15; }
	inline void set_start_15(bool value)
	{
		___start_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
