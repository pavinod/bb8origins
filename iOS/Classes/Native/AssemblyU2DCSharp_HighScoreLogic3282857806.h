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
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighScoreLogic
struct  HighScoreLogic_t3282857806  : public PunBehaviour_t1644375368
{
public:
	// System.String HighScoreLogic::currentPlayerName
	String_t* ___currentPlayerName_3;
	// ExitGames.Client.Photon.Hashtable HighScoreLogic::dict
	Hashtable_t223732124 * ___dict_4;

public:
	inline static int32_t get_offset_of_currentPlayerName_3() { return static_cast<int32_t>(offsetof(HighScoreLogic_t3282857806, ___currentPlayerName_3)); }
	inline String_t* get_currentPlayerName_3() const { return ___currentPlayerName_3; }
	inline String_t** get_address_of_currentPlayerName_3() { return &___currentPlayerName_3; }
	inline void set_currentPlayerName_3(String_t* value)
	{
		___currentPlayerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayerName_3, value);
	}

	inline static int32_t get_offset_of_dict_4() { return static_cast<int32_t>(offsetof(HighScoreLogic_t3282857806, ___dict_4)); }
	inline Hashtable_t223732124 * get_dict_4() const { return ___dict_4; }
	inline Hashtable_t223732124 ** get_address_of_dict_4() { return &___dict_4; }
	inline void set_dict_4(Hashtable_t223732124 * value)
	{
		___dict_4 = value;
		Il2CppCodeGenWriteBarrier(&___dict_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
