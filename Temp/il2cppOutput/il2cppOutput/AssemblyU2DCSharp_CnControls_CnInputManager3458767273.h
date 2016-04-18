#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CnControls.CnInputManager
struct CnInputManager_t3458767273;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>>
struct Dictionary_2_t2010410128;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>>
struct Dictionary_2_t2123330913;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.CnInputManager
struct  CnInputManager_t3458767273  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualAxis>> CnControls.CnInputManager::_virtualAxisDictionary
	Dictionary_2_t2010410128 * ____virtualAxisDictionary_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<CnControls.VirtualButton>> CnControls.CnInputManager::_virtualButtonsDictionary
	Dictionary_2_t2123330913 * ____virtualButtonsDictionary_3;

public:
	inline static int32_t get_offset_of__virtualAxisDictionary_2() { return static_cast<int32_t>(offsetof(CnInputManager_t3458767273, ____virtualAxisDictionary_2)); }
	inline Dictionary_2_t2010410128 * get__virtualAxisDictionary_2() const { return ____virtualAxisDictionary_2; }
	inline Dictionary_2_t2010410128 ** get_address_of__virtualAxisDictionary_2() { return &____virtualAxisDictionary_2; }
	inline void set__virtualAxisDictionary_2(Dictionary_2_t2010410128 * value)
	{
		____virtualAxisDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&____virtualAxisDictionary_2, value);
	}

	inline static int32_t get_offset_of__virtualButtonsDictionary_3() { return static_cast<int32_t>(offsetof(CnInputManager_t3458767273, ____virtualButtonsDictionary_3)); }
	inline Dictionary_2_t2123330913 * get__virtualButtonsDictionary_3() const { return ____virtualButtonsDictionary_3; }
	inline Dictionary_2_t2123330913 ** get_address_of__virtualButtonsDictionary_3() { return &____virtualButtonsDictionary_3; }
	inline void set__virtualButtonsDictionary_3(Dictionary_2_t2123330913 * value)
	{
		____virtualButtonsDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&____virtualButtonsDictionary_3, value);
	}
};

struct CnInputManager_t3458767273_StaticFields
{
public:
	// CnControls.CnInputManager CnControls.CnInputManager::_instance
	CnInputManager_t3458767273 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(CnInputManager_t3458767273_StaticFields, ____instance_1)); }
	inline CnInputManager_t3458767273 * get__instance_1() const { return ____instance_1; }
	inline CnInputManager_t3458767273 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(CnInputManager_t3458767273 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
