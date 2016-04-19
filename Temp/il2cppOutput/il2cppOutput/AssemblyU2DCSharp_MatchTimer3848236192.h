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

#include "AssemblyU2DCSharp_Photon_PunBehaviour1644375368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchTimer
struct  MatchTimer_t3848236192  : public PunBehaviour_t1644375368
{
public:
	// System.Double MatchTimer::timeToStart
	double ___timeToStart_4;
	// System.Double MatchTimer::SecondsBeforeStart
	double ___SecondsBeforeStart_5;

public:
	inline static int32_t get_offset_of_timeToStart_4() { return static_cast<int32_t>(offsetof(MatchTimer_t3848236192, ___timeToStart_4)); }
	inline double get_timeToStart_4() const { return ___timeToStart_4; }
	inline double* get_address_of_timeToStart_4() { return &___timeToStart_4; }
	inline void set_timeToStart_4(double value)
	{
		___timeToStart_4 = value;
	}

	inline static int32_t get_offset_of_SecondsBeforeStart_5() { return static_cast<int32_t>(offsetof(MatchTimer_t3848236192, ___SecondsBeforeStart_5)); }
	inline double get_SecondsBeforeStart_5() const { return ___SecondsBeforeStart_5; }
	inline double* get_address_of_SecondsBeforeStart_5() { return &___SecondsBeforeStart_5; }
	inline void set_SecondsBeforeStart_5(double value)
	{
		___SecondsBeforeStart_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
