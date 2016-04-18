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
// MatchTimer
struct MatchTimer_t3848236192;
// PlayMusic
struct PlayMusic_t109867825;

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
	// MatchTimer GameManager::gametimer
	MatchTimer_t3848236192 * ___gametimer_7;
	// UnityEngine.GameObject GameManager::lobby
	GameObject_t4012695102 * ___lobby_8;
	// PlayMusic GameManager::playMusic
	PlayMusic_t109867825 * ___playMusic_9;
	// System.Boolean GameManager::start
	bool ___start_10;

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

	inline static int32_t get_offset_of_gametimer_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gametimer_7)); }
	inline MatchTimer_t3848236192 * get_gametimer_7() const { return ___gametimer_7; }
	inline MatchTimer_t3848236192 ** get_address_of_gametimer_7() { return &___gametimer_7; }
	inline void set_gametimer_7(MatchTimer_t3848236192 * value)
	{
		___gametimer_7 = value;
		Il2CppCodeGenWriteBarrier(&___gametimer_7, value);
	}

	inline static int32_t get_offset_of_lobby_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___lobby_8)); }
	inline GameObject_t4012695102 * get_lobby_8() const { return ___lobby_8; }
	inline GameObject_t4012695102 ** get_address_of_lobby_8() { return &___lobby_8; }
	inline void set_lobby_8(GameObject_t4012695102 * value)
	{
		___lobby_8 = value;
		Il2CppCodeGenWriteBarrier(&___lobby_8, value);
	}

	inline static int32_t get_offset_of_playMusic_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playMusic_9)); }
	inline PlayMusic_t109867825 * get_playMusic_9() const { return ___playMusic_9; }
	inline PlayMusic_t109867825 ** get_address_of_playMusic_9() { return &___playMusic_9; }
	inline void set_playMusic_9(PlayMusic_t109867825 * value)
	{
		___playMusic_9 = value;
		Il2CppCodeGenWriteBarrier(&___playMusic_9, value);
	}

	inline static int32_t get_offset_of_start_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___start_10)); }
	inline bool get_start_10() const { return ___start_10; }
	inline bool* get_address_of_start_10() { return &___start_10; }
	inline void set_start_10(bool value)
	{
		___start_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
