#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2319621551;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t3684923994  : public Il2CppObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t2319621551 * ___peerBase_1;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Il2CppObject * ___SendOutgoingLockObject_2;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Il2CppObject * ___DispatchLockObject_3;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Il2CppObject * ___EnqueueLock_4;

public:
	inline static int32_t get_offset_of_peerBase_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t3684923994, ___peerBase_1)); }
	inline PeerBase_t2319621551 * get_peerBase_1() const { return ___peerBase_1; }
	inline PeerBase_t2319621551 ** get_address_of_peerBase_1() { return &___peerBase_1; }
	inline void set_peerBase_1(PeerBase_t2319621551 * value)
	{
		___peerBase_1 = value;
		Il2CppCodeGenWriteBarrier(&___peerBase_1, value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t3684923994, ___SendOutgoingLockObject_2)); }
	inline Il2CppObject * get_SendOutgoingLockObject_2() const { return ___SendOutgoingLockObject_2; }
	inline Il2CppObject ** get_address_of_SendOutgoingLockObject_2() { return &___SendOutgoingLockObject_2; }
	inline void set_SendOutgoingLockObject_2(Il2CppObject * value)
	{
		___SendOutgoingLockObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___SendOutgoingLockObject_2, value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_3() { return static_cast<int32_t>(offsetof(PhotonPeer_t3684923994, ___DispatchLockObject_3)); }
	inline Il2CppObject * get_DispatchLockObject_3() const { return ___DispatchLockObject_3; }
	inline Il2CppObject ** get_address_of_DispatchLockObject_3() { return &___DispatchLockObject_3; }
	inline void set_DispatchLockObject_3(Il2CppObject * value)
	{
		___DispatchLockObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___DispatchLockObject_3, value);
	}

	inline static int32_t get_offset_of_EnqueueLock_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t3684923994, ___EnqueueLock_4)); }
	inline Il2CppObject * get_EnqueueLock_4() const { return ___EnqueueLock_4; }
	inline Il2CppObject ** get_address_of_EnqueueLock_4() { return &___EnqueueLock_4; }
	inline void set_EnqueueLock_4(Il2CppObject * value)
	{
		___EnqueueLock_4 = value;
		Il2CppCodeGenWriteBarrier(&___EnqueueLock_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
