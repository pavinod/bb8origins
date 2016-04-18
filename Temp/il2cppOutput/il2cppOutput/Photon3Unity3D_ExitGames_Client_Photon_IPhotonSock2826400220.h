#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t3731899444;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.IPhotonSocket/<>c__DisplayClass3
struct  U3CU3Ec__DisplayClass3_t2826400220  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.IPhotonSocket/<>c__DisplayClass3::<>4__this
	IPhotonSocket_t3731899444 * ___U3CU3E4__this_0;
	// System.Byte[] ExitGames.Client.Photon.IPhotonSocket/<>c__DisplayClass3::inBuffer
	ByteU5BU5D_t58506160* ___inBuffer_1;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket/<>c__DisplayClass3::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t2826400220, ___U3CU3E4__this_0)); }
	inline IPhotonSocket_t3731899444 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline IPhotonSocket_t3731899444 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(IPhotonSocket_t3731899444 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E4__this_0, value);
	}

	inline static int32_t get_offset_of_inBuffer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t2826400220, ___inBuffer_1)); }
	inline ByteU5BU5D_t58506160* get_inBuffer_1() const { return ___inBuffer_1; }
	inline ByteU5BU5D_t58506160** get_address_of_inBuffer_1() { return &___inBuffer_1; }
	inline void set_inBuffer_1(ByteU5BU5D_t58506160* value)
	{
		___inBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___inBuffer_1, value);
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_t2826400220, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
