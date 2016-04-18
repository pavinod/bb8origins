#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;

#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer3684923994.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.LoadbalancingPeer
struct  LoadbalancingPeer_t2012947601  : public PhotonPeer_t3684923994
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.LoadbalancingPeer::opParameters
	Dictionary_2_t3871407537 * ___opParameters_5;

public:
	inline static int32_t get_offset_of_opParameters_5() { return static_cast<int32_t>(offsetof(LoadbalancingPeer_t2012947601, ___opParameters_5)); }
	inline Dictionary_2_t3871407537 * get_opParameters_5() const { return ___opParameters_5; }
	inline Dictionary_2_t3871407537 ** get_address_of_opParameters_5() { return &___opParameters_5; }
	inline void set_opParameters_5(Dictionary_2_t3871407537 * value)
	{
		___opParameters_5 = value;
		Il2CppCodeGenWriteBarrier(&___opParameters_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
