#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.DictionaryEntryEnumerator
struct DictionaryEntryEnumerator_t92261500;

#include "mscorlib_System_Collections_Generic_Dictionary_2_g3824425150.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Hashtable
struct  Hashtable_t223732124  : public Dictionary_2_t3824425150
{
public:
	// ExitGames.Client.Photon.DictionaryEntryEnumerator ExitGames.Client.Photon.Hashtable::enumerator
	DictionaryEntryEnumerator_t92261500 * ___enumerator_16;

public:
	inline static int32_t get_offset_of_enumerator_16() { return static_cast<int32_t>(offsetof(Hashtable_t223732124, ___enumerator_16)); }
	inline DictionaryEntryEnumerator_t92261500 * get_enumerator_16() const { return ___enumerator_16; }
	inline DictionaryEntryEnumerator_t92261500 ** get_address_of_enumerator_16() { return &___enumerator_16; }
	inline void set_enumerator_16(DictionaryEntryEnumerator_t92261500 * value)
	{
		___enumerator_16 = value;
		Il2CppCodeGenWriteBarrier(&___enumerator_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
