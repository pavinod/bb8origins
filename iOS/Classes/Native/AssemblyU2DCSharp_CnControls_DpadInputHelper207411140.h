#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CnControls.Dpad
struct Dpad_t3197204170;

#include "AssemblyU2DCSharp_CnControls_BaseInputHelper3918482786.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.DpadInputHelper
struct  DpadInputHelper_t207411140  : public BaseInputHelper_t3918482786
{
public:
	// CnControls.Dpad CnControls.DpadInputHelper::_linkedDpad
	Dpad_t3197204170 * ____linkedDpad_5;

public:
	inline static int32_t get_offset_of__linkedDpad_5() { return static_cast<int32_t>(offsetof(DpadInputHelper_t207411140, ____linkedDpad_5)); }
	inline Dpad_t3197204170 * get__linkedDpad_5() const { return ____linkedDpad_5; }
	inline Dpad_t3197204170 ** get_address_of__linkedDpad_5() { return &____linkedDpad_5; }
	inline void set__linkedDpad_5(Dpad_t3197204170 * value)
	{
		____linkedDpad_5 = value;
		Il2CppCodeGenWriteBarrier(&____linkedDpad_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
