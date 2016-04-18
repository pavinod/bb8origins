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
// PhotonHandler
struct PhotonHandler_t1652511502;
// NetworkingPeer
struct NetworkingPeer_t1870069398;
// ServerSettings
struct ServerSettings_t602941606;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1355425710;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t2416416477;
// System.Type
struct Type_t;
// Room
struct Room_t2553083;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;
// PhotonNetwork/EventCallback
struct EventCallback_t3012881631;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t1033429381;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t3264453621;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_PhotonLogLevel1681911644.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonNetwork
struct  PhotonNetwork_t2803193330  : public Il2CppObject
{
public:

public:
};

struct PhotonNetwork_t2803193330_StaticFields
{
public:
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t1652511502 * ___photonMono_3;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t1870069398 * ___networkingPeer_4;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_5;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t602941606 * ___PhotonServerSettings_6;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_7;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_8;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_9;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_10;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_11;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_12;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_13;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t1355425710 * ___PrefabCache_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t2416416477 * ___SendMonoMessageTargets_15;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_16;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_17;
	// Room PhotonNetwork::offlineModeRoom
	Room_t2553083 * ___offlineModeRoom_18;
	// System.Int32 PhotonNetwork::maxConnections
	int32_t ___maxConnections_19;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_20;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_21;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_22;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_23;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_24;
	// System.Boolean PhotonNetwork::UsePreciseTimer
	bool ___UsePreciseTimer_25;
	// System.Diagnostics.Stopwatch PhotonNetwork::startupStopwatch
	Stopwatch_t2509581612 * ___startupStopwatch_26;
	// System.Single PhotonNetwork::BackgroundTimeout
	float ___BackgroundTimeout_27;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t3012881631 * ___OnEventCall_28;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_29;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_30;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t3644373756 * ___manuallyAllocatedViewIds_31;
	// System.String PhotonNetwork::<gameVersion>k__BackingField
	String_t* ___U3CgameVersionU3Ek__BackingField_32;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t1033429381 * ___U3CFriendsU3Ek__BackingField_33;
	// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate PhotonNetwork::<>f__am$cache1F
	IntegerMillisecondsDelegate_t3264453621 * ___U3CU3Ef__amU24cache1F_34;

public:
	inline static int32_t get_offset_of_photonMono_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___photonMono_3)); }
	inline PhotonHandler_t1652511502 * get_photonMono_3() const { return ___photonMono_3; }
	inline PhotonHandler_t1652511502 ** get_address_of_photonMono_3() { return &___photonMono_3; }
	inline void set_photonMono_3(PhotonHandler_t1652511502 * value)
	{
		___photonMono_3 = value;
		Il2CppCodeGenWriteBarrier(&___photonMono_3, value);
	}

	inline static int32_t get_offset_of_networkingPeer_4() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___networkingPeer_4)); }
	inline NetworkingPeer_t1870069398 * get_networkingPeer_4() const { return ___networkingPeer_4; }
	inline NetworkingPeer_t1870069398 ** get_address_of_networkingPeer_4() { return &___networkingPeer_4; }
	inline void set_networkingPeer_4(NetworkingPeer_t1870069398 * value)
	{
		___networkingPeer_4 = value;
		Il2CppCodeGenWriteBarrier(&___networkingPeer_4, value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_5() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___MAX_VIEW_IDS_5)); }
	inline int32_t get_MAX_VIEW_IDS_5() const { return ___MAX_VIEW_IDS_5; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_5() { return &___MAX_VIEW_IDS_5; }
	inline void set_MAX_VIEW_IDS_5(int32_t value)
	{
		___MAX_VIEW_IDS_5 = value;
	}

	inline static int32_t get_offset_of_PhotonServerSettings_6() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___PhotonServerSettings_6)); }
	inline ServerSettings_t602941606 * get_PhotonServerSettings_6() const { return ___PhotonServerSettings_6; }
	inline ServerSettings_t602941606 ** get_address_of_PhotonServerSettings_6() { return &___PhotonServerSettings_6; }
	inline void set_PhotonServerSettings_6(ServerSettings_t602941606 * value)
	{
		___PhotonServerSettings_6 = value;
		Il2CppCodeGenWriteBarrier(&___PhotonServerSettings_6, value);
	}

	inline static int32_t get_offset_of_InstantiateInRoomOnly_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___InstantiateInRoomOnly_7)); }
	inline bool get_InstantiateInRoomOnly_7() const { return ___InstantiateInRoomOnly_7; }
	inline bool* get_address_of_InstantiateInRoomOnly_7() { return &___InstantiateInRoomOnly_7; }
	inline void set_InstantiateInRoomOnly_7(bool value)
	{
		___InstantiateInRoomOnly_7 = value;
	}

	inline static int32_t get_offset_of_logLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___logLevel_8)); }
	inline int32_t get_logLevel_8() const { return ___logLevel_8; }
	inline int32_t* get_address_of_logLevel_8() { return &___logLevel_8; }
	inline void set_logLevel_8(int32_t value)
	{
		___logLevel_8 = value;
	}

	inline static int32_t get_offset_of_precisionForVectorSynchronization_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___precisionForVectorSynchronization_9)); }
	inline float get_precisionForVectorSynchronization_9() const { return ___precisionForVectorSynchronization_9; }
	inline float* get_address_of_precisionForVectorSynchronization_9() { return &___precisionForVectorSynchronization_9; }
	inline void set_precisionForVectorSynchronization_9(float value)
	{
		___precisionForVectorSynchronization_9 = value;
	}

	inline static int32_t get_offset_of_precisionForQuaternionSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___precisionForQuaternionSynchronization_10)); }
	inline float get_precisionForQuaternionSynchronization_10() const { return ___precisionForQuaternionSynchronization_10; }
	inline float* get_address_of_precisionForQuaternionSynchronization_10() { return &___precisionForQuaternionSynchronization_10; }
	inline void set_precisionForQuaternionSynchronization_10(float value)
	{
		___precisionForQuaternionSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_precisionForFloatSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___precisionForFloatSynchronization_11)); }
	inline float get_precisionForFloatSynchronization_11() const { return ___precisionForFloatSynchronization_11; }
	inline float* get_address_of_precisionForFloatSynchronization_11() { return &___precisionForFloatSynchronization_11; }
	inline void set_precisionForFloatSynchronization_11(float value)
	{
		___precisionForFloatSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___UseRpcMonoBehaviourCache_12)); }
	inline bool get_UseRpcMonoBehaviourCache_12() const { return ___UseRpcMonoBehaviourCache_12; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_12() { return &___UseRpcMonoBehaviourCache_12; }
	inline void set_UseRpcMonoBehaviourCache_12(bool value)
	{
		___UseRpcMonoBehaviourCache_12 = value;
	}

	inline static int32_t get_offset_of_UsePrefabCache_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___UsePrefabCache_13)); }
	inline bool get_UsePrefabCache_13() const { return ___UsePrefabCache_13; }
	inline bool* get_address_of_UsePrefabCache_13() { return &___UsePrefabCache_13; }
	inline void set_UsePrefabCache_13(bool value)
	{
		___UsePrefabCache_13 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___PrefabCache_14)); }
	inline Dictionary_2_t1355425710 * get_PrefabCache_14() const { return ___PrefabCache_14; }
	inline Dictionary_2_t1355425710 ** get_address_of_PrefabCache_14() { return &___PrefabCache_14; }
	inline void set_PrefabCache_14(Dictionary_2_t1355425710 * value)
	{
		___PrefabCache_14 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabCache_14, value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargets_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___SendMonoMessageTargets_15)); }
	inline HashSet_1_t2416416477 * get_SendMonoMessageTargets_15() const { return ___SendMonoMessageTargets_15; }
	inline HashSet_1_t2416416477 ** get_address_of_SendMonoMessageTargets_15() { return &___SendMonoMessageTargets_15; }
	inline void set_SendMonoMessageTargets_15(HashSet_1_t2416416477 * value)
	{
		___SendMonoMessageTargets_15 = value;
		Il2CppCodeGenWriteBarrier(&___SendMonoMessageTargets_15, value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargetType_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___SendMonoMessageTargetType_16)); }
	inline Type_t * get_SendMonoMessageTargetType_16() const { return ___SendMonoMessageTargetType_16; }
	inline Type_t ** get_address_of_SendMonoMessageTargetType_16() { return &___SendMonoMessageTargetType_16; }
	inline void set_SendMonoMessageTargetType_16(Type_t * value)
	{
		___SendMonoMessageTargetType_16 = value;
		Il2CppCodeGenWriteBarrier(&___SendMonoMessageTargetType_16, value);
	}

	inline static int32_t get_offset_of_isOfflineMode_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___isOfflineMode_17)); }
	inline bool get_isOfflineMode_17() const { return ___isOfflineMode_17; }
	inline bool* get_address_of_isOfflineMode_17() { return &___isOfflineMode_17; }
	inline void set_isOfflineMode_17(bool value)
	{
		___isOfflineMode_17 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___offlineModeRoom_18)); }
	inline Room_t2553083 * get_offlineModeRoom_18() const { return ___offlineModeRoom_18; }
	inline Room_t2553083 ** get_address_of_offlineModeRoom_18() { return &___offlineModeRoom_18; }
	inline void set_offlineModeRoom_18(Room_t2553083 * value)
	{
		___offlineModeRoom_18 = value;
		Il2CppCodeGenWriteBarrier(&___offlineModeRoom_18, value);
	}

	inline static int32_t get_offset_of_maxConnections_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___maxConnections_19)); }
	inline int32_t get_maxConnections_19() const { return ___maxConnections_19; }
	inline int32_t* get_address_of_maxConnections_19() { return &___maxConnections_19; }
	inline void set_maxConnections_19(int32_t value)
	{
		___maxConnections_19 = value;
	}

	inline static int32_t get_offset_of__mAutomaticallySyncScene_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ____mAutomaticallySyncScene_20)); }
	inline bool get__mAutomaticallySyncScene_20() const { return ____mAutomaticallySyncScene_20; }
	inline bool* get_address_of__mAutomaticallySyncScene_20() { return &____mAutomaticallySyncScene_20; }
	inline void set__mAutomaticallySyncScene_20(bool value)
	{
		____mAutomaticallySyncScene_20 = value;
	}

	inline static int32_t get_offset_of_m_autoCleanUpPlayerObjects_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___m_autoCleanUpPlayerObjects_21)); }
	inline bool get_m_autoCleanUpPlayerObjects_21() const { return ___m_autoCleanUpPlayerObjects_21; }
	inline bool* get_address_of_m_autoCleanUpPlayerObjects_21() { return &___m_autoCleanUpPlayerObjects_21; }
	inline void set_m_autoCleanUpPlayerObjects_21(bool value)
	{
		___m_autoCleanUpPlayerObjects_21 = value;
	}

	inline static int32_t get_offset_of_sendInterval_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___sendInterval_22)); }
	inline int32_t get_sendInterval_22() const { return ___sendInterval_22; }
	inline int32_t* get_address_of_sendInterval_22() { return &___sendInterval_22; }
	inline void set_sendInterval_22(int32_t value)
	{
		___sendInterval_22 = value;
	}

	inline static int32_t get_offset_of_sendIntervalOnSerialize_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___sendIntervalOnSerialize_23)); }
	inline int32_t get_sendIntervalOnSerialize_23() const { return ___sendIntervalOnSerialize_23; }
	inline int32_t* get_address_of_sendIntervalOnSerialize_23() { return &___sendIntervalOnSerialize_23; }
	inline void set_sendIntervalOnSerialize_23(int32_t value)
	{
		___sendIntervalOnSerialize_23 = value;
	}

	inline static int32_t get_offset_of_m_isMessageQueueRunning_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___m_isMessageQueueRunning_24)); }
	inline bool get_m_isMessageQueueRunning_24() const { return ___m_isMessageQueueRunning_24; }
	inline bool* get_address_of_m_isMessageQueueRunning_24() { return &___m_isMessageQueueRunning_24; }
	inline void set_m_isMessageQueueRunning_24(bool value)
	{
		___m_isMessageQueueRunning_24 = value;
	}

	inline static int32_t get_offset_of_UsePreciseTimer_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___UsePreciseTimer_25)); }
	inline bool get_UsePreciseTimer_25() const { return ___UsePreciseTimer_25; }
	inline bool* get_address_of_UsePreciseTimer_25() { return &___UsePreciseTimer_25; }
	inline void set_UsePreciseTimer_25(bool value)
	{
		___UsePreciseTimer_25 = value;
	}

	inline static int32_t get_offset_of_startupStopwatch_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___startupStopwatch_26)); }
	inline Stopwatch_t2509581612 * get_startupStopwatch_26() const { return ___startupStopwatch_26; }
	inline Stopwatch_t2509581612 ** get_address_of_startupStopwatch_26() { return &___startupStopwatch_26; }
	inline void set_startupStopwatch_26(Stopwatch_t2509581612 * value)
	{
		___startupStopwatch_26 = value;
		Il2CppCodeGenWriteBarrier(&___startupStopwatch_26, value);
	}

	inline static int32_t get_offset_of_BackgroundTimeout_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___BackgroundTimeout_27)); }
	inline float get_BackgroundTimeout_27() const { return ___BackgroundTimeout_27; }
	inline float* get_address_of_BackgroundTimeout_27() { return &___BackgroundTimeout_27; }
	inline void set_BackgroundTimeout_27(float value)
	{
		___BackgroundTimeout_27 = value;
	}

	inline static int32_t get_offset_of_OnEventCall_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___OnEventCall_28)); }
	inline EventCallback_t3012881631 * get_OnEventCall_28() const { return ___OnEventCall_28; }
	inline EventCallback_t3012881631 ** get_address_of_OnEventCall_28() { return &___OnEventCall_28; }
	inline void set_OnEventCall_28(EventCallback_t3012881631 * value)
	{
		___OnEventCall_28 = value;
		Il2CppCodeGenWriteBarrier(&___OnEventCall_28, value);
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___lastUsedViewSubId_29)); }
	inline int32_t get_lastUsedViewSubId_29() const { return ___lastUsedViewSubId_29; }
	inline int32_t* get_address_of_lastUsedViewSubId_29() { return &___lastUsedViewSubId_29; }
	inline void set_lastUsedViewSubId_29(int32_t value)
	{
		___lastUsedViewSubId_29 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___lastUsedViewSubIdStatic_30)); }
	inline int32_t get_lastUsedViewSubIdStatic_30() const { return ___lastUsedViewSubIdStatic_30; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_30() { return &___lastUsedViewSubIdStatic_30; }
	inline void set_lastUsedViewSubIdStatic_30(int32_t value)
	{
		___lastUsedViewSubIdStatic_30 = value;
	}

	inline static int32_t get_offset_of_manuallyAllocatedViewIds_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___manuallyAllocatedViewIds_31)); }
	inline List_1_t3644373756 * get_manuallyAllocatedViewIds_31() const { return ___manuallyAllocatedViewIds_31; }
	inline List_1_t3644373756 ** get_address_of_manuallyAllocatedViewIds_31() { return &___manuallyAllocatedViewIds_31; }
	inline void set_manuallyAllocatedViewIds_31(List_1_t3644373756 * value)
	{
		___manuallyAllocatedViewIds_31 = value;
		Il2CppCodeGenWriteBarrier(&___manuallyAllocatedViewIds_31, value);
	}

	inline static int32_t get_offset_of_U3CgameVersionU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___U3CgameVersionU3Ek__BackingField_32)); }
	inline String_t* get_U3CgameVersionU3Ek__BackingField_32() const { return ___U3CgameVersionU3Ek__BackingField_32; }
	inline String_t** get_address_of_U3CgameVersionU3Ek__BackingField_32() { return &___U3CgameVersionU3Ek__BackingField_32; }
	inline void set_U3CgameVersionU3Ek__BackingField_32(String_t* value)
	{
		___U3CgameVersionU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameVersionU3Ek__BackingField_32, value);
	}

	inline static int32_t get_offset_of_U3CFriendsU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___U3CFriendsU3Ek__BackingField_33)); }
	inline List_1_t1033429381 * get_U3CFriendsU3Ek__BackingField_33() const { return ___U3CFriendsU3Ek__BackingField_33; }
	inline List_1_t1033429381 ** get_address_of_U3CFriendsU3Ek__BackingField_33() { return &___U3CFriendsU3Ek__BackingField_33; }
	inline void set_U3CFriendsU3Ek__BackingField_33(List_1_t1033429381 * value)
	{
		___U3CFriendsU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFriendsU3Ek__BackingField_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_34() { return static_cast<int32_t>(offsetof(PhotonNetwork_t2803193330_StaticFields, ___U3CU3Ef__amU24cache1F_34)); }
	inline IntegerMillisecondsDelegate_t3264453621 * get_U3CU3Ef__amU24cache1F_34() const { return ___U3CU3Ef__amU24cache1F_34; }
	inline IntegerMillisecondsDelegate_t3264453621 ** get_address_of_U3CU3Ef__amU24cache1F_34() { return &___U3CU3Ef__amU24cache1F_34; }
	inline void set_U3CU3Ef__amU24cache1F_34(IntegerMillisecondsDelegate_t3264453621 * value)
	{
		___U3CU3Ef__amU24cache1F_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1F_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
