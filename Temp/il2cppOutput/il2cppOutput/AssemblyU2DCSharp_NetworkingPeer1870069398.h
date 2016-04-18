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
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t4217389847;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t2381636979;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t1528701369;
// RoomInfo[]
struct RoomInfoU5BU5D_t761346164;
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams
struct EnterRoomParams_t1470694169;
// Room
struct Room_t2553083;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t1891320892;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t3977425488;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1251136162;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t1989649152;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t714542907;
// IPunPrefabPool
struct IPunPrefabPool_t2276860384;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1355425710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t2075760665;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t502334556;
// AuthenticationValues
struct AuthenticationValues_t2964448730;
// System.Collections.Generic.List`1<Region>
struct List_1_t3240997901;
// TypedLobby
struct TypedLobby_t1020404140;
// PhotonPlayer
struct PhotonPlayer_t1400510109;

#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Loadbala2012947601.h"
#include "AssemblyU2DCSharp_JoinType2957877156.h"
#include "AssemblyU2DCSharp_ServerConnection3129530017.h"
#include "AssemblyU2DCSharp_PeerState4150202415.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkingPeer
struct  NetworkingPeer_t1870069398  : public LoadbalancingPeer_t2012947601
{
public:
	// System.String NetworkingPeer::mAppId
	String_t* ___mAppId_13;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_15;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_16;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_t2381636979 * ___LobbyStatistics_17;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_18;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t1528701369 * ___mGameList_19;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t761346164* ___mGameListCopy_20;
	// System.Boolean NetworkingPeer::isFetchingFriends
	bool ___isFetchingFriends_21;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t2956870243* ___friendListRequested_22;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_23;
	// System.String NetworkingPeer::playername
	String_t* ___playername_24;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_25;
	// ExitGames.Client.Photon.LoadbalancingPeer/EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_t1470694169 * ___enterRoomParamsCache_26;
	// JoinType NetworkingPeer::mLastJoinType
	int32_t ___mLastJoinType_27;
	// Room NetworkingPeer::mCurrentGame
	Room_t2553083 * ___mCurrentGame_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t1891320892 * ___mActors_29;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t3977425488* ___mOtherPlayerListCopy_30;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t3977425488* ___mPlayerListCopy_31;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_32;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t1251136162 * ___allowedReceivingGroups_33;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t1251136162 * ___blockSendingGroups_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t1989649152 * ___photonViewList_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t714542907 * ___dataPerGroupReliable_36;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t714542907 * ___dataPerGroupUnreliable_37;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_38;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_39;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	Il2CppObject * ___ObjectPool_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t2075760665 * ___monoRPCMethodsCache_43;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t190145395 * ___rpcShortcuts_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t502334556 * ___tempInstantiationData_45;
	// AuthenticationValues NetworkingPeer::<CustomAuthenticationValues>k__BackingField
	AuthenticationValues_t2964448730 * ___U3CCustomAuthenticationValuesU3Ek__BackingField_46;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_47;
	// System.String NetworkingPeer::<mGameserver>k__BackingField
	String_t* ___U3CmGameserverU3Ek__BackingField_48;
	// ServerConnection NetworkingPeer::<server>k__BackingField
	int32_t ___U3CserverU3Ek__BackingField_49;
	// PeerState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_50;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_51;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t3240997901 * ___U3CAvailableRegionsU3Ek__BackingField_52;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_53;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t1020404140 * ___U3ClobbyU3Ek__BackingField_54;
	// System.Int32 NetworkingPeer::<mPlayersOnMasterCount>k__BackingField
	int32_t ___U3CmPlayersOnMasterCountU3Ek__BackingField_55;
	// System.Int32 NetworkingPeer::<mGameCount>k__BackingField
	int32_t ___U3CmGameCountU3Ek__BackingField_56;
	// System.Int32 NetworkingPeer::<mPlayersInRoomsCount>k__BackingField
	int32_t ___U3CmPlayersInRoomsCountU3Ek__BackingField_57;
	// PhotonPlayer NetworkingPeer::<mLocalActor>k__BackingField
	PhotonPlayer_t1400510109 * ___U3CmLocalActorU3Ek__BackingField_58;

public:
	inline static int32_t get_offset_of_mAppId_13() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mAppId_13)); }
	inline String_t* get_mAppId_13() const { return ___mAppId_13; }
	inline String_t** get_address_of_mAppId_13() { return &___mAppId_13; }
	inline void set_mAppId_13(String_t* value)
	{
		___mAppId_13 = value;
		Il2CppCodeGenWriteBarrier(&___mAppId_13, value);
	}

	inline static int32_t get_offset_of_IsInitialConnect_15() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___IsInitialConnect_15)); }
	inline bool get_IsInitialConnect_15() const { return ___IsInitialConnect_15; }
	inline bool* get_address_of_IsInitialConnect_15() { return &___IsInitialConnect_15; }
	inline void set_IsInitialConnect_15(bool value)
	{
		___IsInitialConnect_15 = value;
	}

	inline static int32_t get_offset_of_didAuthenticate_16() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___didAuthenticate_16)); }
	inline bool get_didAuthenticate_16() const { return ___didAuthenticate_16; }
	inline bool* get_address_of_didAuthenticate_16() { return &___didAuthenticate_16; }
	inline void set_didAuthenticate_16(bool value)
	{
		___didAuthenticate_16 = value;
	}

	inline static int32_t get_offset_of_LobbyStatistics_17() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___LobbyStatistics_17)); }
	inline List_1_t2381636979 * get_LobbyStatistics_17() const { return ___LobbyStatistics_17; }
	inline List_1_t2381636979 ** get_address_of_LobbyStatistics_17() { return &___LobbyStatistics_17; }
	inline void set_LobbyStatistics_17(List_1_t2381636979 * value)
	{
		___LobbyStatistics_17 = value;
		Il2CppCodeGenWriteBarrier(&___LobbyStatistics_17, value);
	}

	inline static int32_t get_offset_of_insideLobby_18() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___insideLobby_18)); }
	inline bool get_insideLobby_18() const { return ___insideLobby_18; }
	inline bool* get_address_of_insideLobby_18() { return &___insideLobby_18; }
	inline void set_insideLobby_18(bool value)
	{
		___insideLobby_18 = value;
	}

	inline static int32_t get_offset_of_mGameList_19() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mGameList_19)); }
	inline Dictionary_2_t1528701369 * get_mGameList_19() const { return ___mGameList_19; }
	inline Dictionary_2_t1528701369 ** get_address_of_mGameList_19() { return &___mGameList_19; }
	inline void set_mGameList_19(Dictionary_2_t1528701369 * value)
	{
		___mGameList_19 = value;
		Il2CppCodeGenWriteBarrier(&___mGameList_19, value);
	}

	inline static int32_t get_offset_of_mGameListCopy_20() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mGameListCopy_20)); }
	inline RoomInfoU5BU5D_t761346164* get_mGameListCopy_20() const { return ___mGameListCopy_20; }
	inline RoomInfoU5BU5D_t761346164** get_address_of_mGameListCopy_20() { return &___mGameListCopy_20; }
	inline void set_mGameListCopy_20(RoomInfoU5BU5D_t761346164* value)
	{
		___mGameListCopy_20 = value;
		Il2CppCodeGenWriteBarrier(&___mGameListCopy_20, value);
	}

	inline static int32_t get_offset_of_isFetchingFriends_21() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___isFetchingFriends_21)); }
	inline bool get_isFetchingFriends_21() const { return ___isFetchingFriends_21; }
	inline bool* get_address_of_isFetchingFriends_21() { return &___isFetchingFriends_21; }
	inline void set_isFetchingFriends_21(bool value)
	{
		___isFetchingFriends_21 = value;
	}

	inline static int32_t get_offset_of_friendListRequested_22() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___friendListRequested_22)); }
	inline StringU5BU5D_t2956870243* get_friendListRequested_22() const { return ___friendListRequested_22; }
	inline StringU5BU5D_t2956870243** get_address_of_friendListRequested_22() { return &___friendListRequested_22; }
	inline void set_friendListRequested_22(StringU5BU5D_t2956870243* value)
	{
		___friendListRequested_22 = value;
		Il2CppCodeGenWriteBarrier(&___friendListRequested_22, value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_23() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___friendListTimestamp_23)); }
	inline int32_t get_friendListTimestamp_23() const { return ___friendListTimestamp_23; }
	inline int32_t* get_address_of_friendListTimestamp_23() { return &___friendListTimestamp_23; }
	inline void set_friendListTimestamp_23(int32_t value)
	{
		___friendListTimestamp_23 = value;
	}

	inline static int32_t get_offset_of_playername_24() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___playername_24)); }
	inline String_t* get_playername_24() const { return ___playername_24; }
	inline String_t** get_address_of_playername_24() { return &___playername_24; }
	inline void set_playername_24(String_t* value)
	{
		___playername_24 = value;
		Il2CppCodeGenWriteBarrier(&___playername_24, value);
	}

	inline static int32_t get_offset_of_mPlayernameHasToBeUpdated_25() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mPlayernameHasToBeUpdated_25)); }
	inline bool get_mPlayernameHasToBeUpdated_25() const { return ___mPlayernameHasToBeUpdated_25; }
	inline bool* get_address_of_mPlayernameHasToBeUpdated_25() { return &___mPlayernameHasToBeUpdated_25; }
	inline void set_mPlayernameHasToBeUpdated_25(bool value)
	{
		___mPlayernameHasToBeUpdated_25 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_26() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___enterRoomParamsCache_26)); }
	inline EnterRoomParams_t1470694169 * get_enterRoomParamsCache_26() const { return ___enterRoomParamsCache_26; }
	inline EnterRoomParams_t1470694169 ** get_address_of_enterRoomParamsCache_26() { return &___enterRoomParamsCache_26; }
	inline void set_enterRoomParamsCache_26(EnterRoomParams_t1470694169 * value)
	{
		___enterRoomParamsCache_26 = value;
		Il2CppCodeGenWriteBarrier(&___enterRoomParamsCache_26, value);
	}

	inline static int32_t get_offset_of_mLastJoinType_27() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mLastJoinType_27)); }
	inline int32_t get_mLastJoinType_27() const { return ___mLastJoinType_27; }
	inline int32_t* get_address_of_mLastJoinType_27() { return &___mLastJoinType_27; }
	inline void set_mLastJoinType_27(int32_t value)
	{
		___mLastJoinType_27 = value;
	}

	inline static int32_t get_offset_of_mCurrentGame_28() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mCurrentGame_28)); }
	inline Room_t2553083 * get_mCurrentGame_28() const { return ___mCurrentGame_28; }
	inline Room_t2553083 ** get_address_of_mCurrentGame_28() { return &___mCurrentGame_28; }
	inline void set_mCurrentGame_28(Room_t2553083 * value)
	{
		___mCurrentGame_28 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentGame_28, value);
	}

	inline static int32_t get_offset_of_mActors_29() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mActors_29)); }
	inline Dictionary_2_t1891320892 * get_mActors_29() const { return ___mActors_29; }
	inline Dictionary_2_t1891320892 ** get_address_of_mActors_29() { return &___mActors_29; }
	inline void set_mActors_29(Dictionary_2_t1891320892 * value)
	{
		___mActors_29 = value;
		Il2CppCodeGenWriteBarrier(&___mActors_29, value);
	}

	inline static int32_t get_offset_of_mOtherPlayerListCopy_30() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mOtherPlayerListCopy_30)); }
	inline PhotonPlayerU5BU5D_t3977425488* get_mOtherPlayerListCopy_30() const { return ___mOtherPlayerListCopy_30; }
	inline PhotonPlayerU5BU5D_t3977425488** get_address_of_mOtherPlayerListCopy_30() { return &___mOtherPlayerListCopy_30; }
	inline void set_mOtherPlayerListCopy_30(PhotonPlayerU5BU5D_t3977425488* value)
	{
		___mOtherPlayerListCopy_30 = value;
		Il2CppCodeGenWriteBarrier(&___mOtherPlayerListCopy_30, value);
	}

	inline static int32_t get_offset_of_mPlayerListCopy_31() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___mPlayerListCopy_31)); }
	inline PhotonPlayerU5BU5D_t3977425488* get_mPlayerListCopy_31() const { return ___mPlayerListCopy_31; }
	inline PhotonPlayerU5BU5D_t3977425488** get_address_of_mPlayerListCopy_31() { return &___mPlayerListCopy_31; }
	inline void set_mPlayerListCopy_31(PhotonPlayerU5BU5D_t3977425488* value)
	{
		___mPlayerListCopy_31 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerListCopy_31, value);
	}

	inline static int32_t get_offset_of_hasSwitchedMC_32() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___hasSwitchedMC_32)); }
	inline bool get_hasSwitchedMC_32() const { return ___hasSwitchedMC_32; }
	inline bool* get_address_of_hasSwitchedMC_32() { return &___hasSwitchedMC_32; }
	inline void set_hasSwitchedMC_32(bool value)
	{
		___hasSwitchedMC_32 = value;
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_33() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___allowedReceivingGroups_33)); }
	inline HashSet_1_t1251136162 * get_allowedReceivingGroups_33() const { return ___allowedReceivingGroups_33; }
	inline HashSet_1_t1251136162 ** get_address_of_allowedReceivingGroups_33() { return &___allowedReceivingGroups_33; }
	inline void set_allowedReceivingGroups_33(HashSet_1_t1251136162 * value)
	{
		___allowedReceivingGroups_33 = value;
		Il2CppCodeGenWriteBarrier(&___allowedReceivingGroups_33, value);
	}

	inline static int32_t get_offset_of_blockSendingGroups_34() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___blockSendingGroups_34)); }
	inline HashSet_1_t1251136162 * get_blockSendingGroups_34() const { return ___blockSendingGroups_34; }
	inline HashSet_1_t1251136162 ** get_address_of_blockSendingGroups_34() { return &___blockSendingGroups_34; }
	inline void set_blockSendingGroups_34(HashSet_1_t1251136162 * value)
	{
		___blockSendingGroups_34 = value;
		Il2CppCodeGenWriteBarrier(&___blockSendingGroups_34, value);
	}

	inline static int32_t get_offset_of_photonViewList_35() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___photonViewList_35)); }
	inline Dictionary_2_t1989649152 * get_photonViewList_35() const { return ___photonViewList_35; }
	inline Dictionary_2_t1989649152 ** get_address_of_photonViewList_35() { return &___photonViewList_35; }
	inline void set_photonViewList_35(Dictionary_2_t1989649152 * value)
	{
		___photonViewList_35 = value;
		Il2CppCodeGenWriteBarrier(&___photonViewList_35, value);
	}

	inline static int32_t get_offset_of_dataPerGroupReliable_36() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___dataPerGroupReliable_36)); }
	inline Dictionary_2_t714542907 * get_dataPerGroupReliable_36() const { return ___dataPerGroupReliable_36; }
	inline Dictionary_2_t714542907 ** get_address_of_dataPerGroupReliable_36() { return &___dataPerGroupReliable_36; }
	inline void set_dataPerGroupReliable_36(Dictionary_2_t714542907 * value)
	{
		___dataPerGroupReliable_36 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupReliable_36, value);
	}

	inline static int32_t get_offset_of_dataPerGroupUnreliable_37() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___dataPerGroupUnreliable_37)); }
	inline Dictionary_2_t714542907 * get_dataPerGroupUnreliable_37() const { return ___dataPerGroupUnreliable_37; }
	inline Dictionary_2_t714542907 ** get_address_of_dataPerGroupUnreliable_37() { return &___dataPerGroupUnreliable_37; }
	inline void set_dataPerGroupUnreliable_37(Dictionary_2_t714542907 * value)
	{
		___dataPerGroupUnreliable_37 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupUnreliable_37, value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_38() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___currentLevelPrefix_38)); }
	inline int16_t get_currentLevelPrefix_38() const { return ___currentLevelPrefix_38; }
	inline int16_t* get_address_of_currentLevelPrefix_38() { return &___currentLevelPrefix_38; }
	inline void set_currentLevelPrefix_38(int16_t value)
	{
		___currentLevelPrefix_38 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_39() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___loadingLevelAndPausedNetwork_39)); }
	inline bool get_loadingLevelAndPausedNetwork_39() const { return ___loadingLevelAndPausedNetwork_39; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_39() { return &___loadingLevelAndPausedNetwork_39; }
	inline void set_loadingLevelAndPausedNetwork_39(bool value)
	{
		___loadingLevelAndPausedNetwork_39 = value;
	}

	inline static int32_t get_offset_of_ObjectPool_41() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___ObjectPool_41)); }
	inline Il2CppObject * get_ObjectPool_41() const { return ___ObjectPool_41; }
	inline Il2CppObject ** get_address_of_ObjectPool_41() { return &___ObjectPool_41; }
	inline void set_ObjectPool_41(Il2CppObject * value)
	{
		___ObjectPool_41 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectPool_41, value);
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_43() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___monoRPCMethodsCache_43)); }
	inline Dictionary_2_t2075760665 * get_monoRPCMethodsCache_43() const { return ___monoRPCMethodsCache_43; }
	inline Dictionary_2_t2075760665 ** get_address_of_monoRPCMethodsCache_43() { return &___monoRPCMethodsCache_43; }
	inline void set_monoRPCMethodsCache_43(Dictionary_2_t2075760665 * value)
	{
		___monoRPCMethodsCache_43 = value;
		Il2CppCodeGenWriteBarrier(&___monoRPCMethodsCache_43, value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_44() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___rpcShortcuts_44)); }
	inline Dictionary_2_t190145395 * get_rpcShortcuts_44() const { return ___rpcShortcuts_44; }
	inline Dictionary_2_t190145395 ** get_address_of_rpcShortcuts_44() { return &___rpcShortcuts_44; }
	inline void set_rpcShortcuts_44(Dictionary_2_t190145395 * value)
	{
		___rpcShortcuts_44 = value;
		Il2CppCodeGenWriteBarrier(&___rpcShortcuts_44, value);
	}

	inline static int32_t get_offset_of_tempInstantiationData_45() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___tempInstantiationData_45)); }
	inline Dictionary_2_t502334556 * get_tempInstantiationData_45() const { return ___tempInstantiationData_45; }
	inline Dictionary_2_t502334556 ** get_address_of_tempInstantiationData_45() { return &___tempInstantiationData_45; }
	inline void set_tempInstantiationData_45(Dictionary_2_t502334556 * value)
	{
		___tempInstantiationData_45 = value;
		Il2CppCodeGenWriteBarrier(&___tempInstantiationData_45, value);
	}

	inline static int32_t get_offset_of_U3CCustomAuthenticationValuesU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CCustomAuthenticationValuesU3Ek__BackingField_46)); }
	inline AuthenticationValues_t2964448730 * get_U3CCustomAuthenticationValuesU3Ek__BackingField_46() const { return ___U3CCustomAuthenticationValuesU3Ek__BackingField_46; }
	inline AuthenticationValues_t2964448730 ** get_address_of_U3CCustomAuthenticationValuesU3Ek__BackingField_46() { return &___U3CCustomAuthenticationValuesU3Ek__BackingField_46; }
	inline void set_U3CCustomAuthenticationValuesU3Ek__BackingField_46(AuthenticationValues_t2964448730 * value)
	{
		___U3CCustomAuthenticationValuesU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCustomAuthenticationValuesU3Ek__BackingField_46, value);
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CMasterServerAddressU3Ek__BackingField_47)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_47() const { return ___U3CMasterServerAddressU3Ek__BackingField_47; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_47() { return &___U3CMasterServerAddressU3Ek__BackingField_47; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_47(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMasterServerAddressU3Ek__BackingField_47, value);
	}

	inline static int32_t get_offset_of_U3CmGameserverU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CmGameserverU3Ek__BackingField_48)); }
	inline String_t* get_U3CmGameserverU3Ek__BackingField_48() const { return ___U3CmGameserverU3Ek__BackingField_48; }
	inline String_t** get_address_of_U3CmGameserverU3Ek__BackingField_48() { return &___U3CmGameserverU3Ek__BackingField_48; }
	inline void set_U3CmGameserverU3Ek__BackingField_48(String_t* value)
	{
		___U3CmGameserverU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmGameserverU3Ek__BackingField_48, value);
	}

	inline static int32_t get_offset_of_U3CserverU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CserverU3Ek__BackingField_49)); }
	inline int32_t get_U3CserverU3Ek__BackingField_49() const { return ___U3CserverU3Ek__BackingField_49; }
	inline int32_t* get_address_of_U3CserverU3Ek__BackingField_49() { return &___U3CserverU3Ek__BackingField_49; }
	inline void set_U3CserverU3Ek__BackingField_49(int32_t value)
	{
		___U3CserverU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CStateU3Ek__BackingField_50)); }
	inline int32_t get_U3CStateU3Ek__BackingField_50() const { return ___U3CStateU3Ek__BackingField_50; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_50() { return &___U3CStateU3Ek__BackingField_50; }
	inline void set_U3CStateU3Ek__BackingField_50(int32_t value)
	{
		___U3CStateU3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CIsUsingNameServerU3Ek__BackingField_51)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_51() const { return ___U3CIsUsingNameServerU3Ek__BackingField_51; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_51() { return &___U3CIsUsingNameServerU3Ek__BackingField_51; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_51(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_51 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CAvailableRegionsU3Ek__BackingField_52)); }
	inline List_1_t3240997901 * get_U3CAvailableRegionsU3Ek__BackingField_52() const { return ___U3CAvailableRegionsU3Ek__BackingField_52; }
	inline List_1_t3240997901 ** get_address_of_U3CAvailableRegionsU3Ek__BackingField_52() { return &___U3CAvailableRegionsU3Ek__BackingField_52; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_52(List_1_t3240997901 * value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvailableRegionsU3Ek__BackingField_52, value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CCloudRegionU3Ek__BackingField_53)); }
	inline int32_t get_U3CCloudRegionU3Ek__BackingField_53() const { return ___U3CCloudRegionU3Ek__BackingField_53; }
	inline int32_t* get_address_of_U3CCloudRegionU3Ek__BackingField_53() { return &___U3CCloudRegionU3Ek__BackingField_53; }
	inline void set_U3CCloudRegionU3Ek__BackingField_53(int32_t value)
	{
		___U3CCloudRegionU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3ClobbyU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3ClobbyU3Ek__BackingField_54)); }
	inline TypedLobby_t1020404140 * get_U3ClobbyU3Ek__BackingField_54() const { return ___U3ClobbyU3Ek__BackingField_54; }
	inline TypedLobby_t1020404140 ** get_address_of_U3ClobbyU3Ek__BackingField_54() { return &___U3ClobbyU3Ek__BackingField_54; }
	inline void set_U3ClobbyU3Ek__BackingField_54(TypedLobby_t1020404140 * value)
	{
		___U3ClobbyU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClobbyU3Ek__BackingField_54, value);
	}

	inline static int32_t get_offset_of_U3CmPlayersOnMasterCountU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CmPlayersOnMasterCountU3Ek__BackingField_55)); }
	inline int32_t get_U3CmPlayersOnMasterCountU3Ek__BackingField_55() const { return ___U3CmPlayersOnMasterCountU3Ek__BackingField_55; }
	inline int32_t* get_address_of_U3CmPlayersOnMasterCountU3Ek__BackingField_55() { return &___U3CmPlayersOnMasterCountU3Ek__BackingField_55; }
	inline void set_U3CmPlayersOnMasterCountU3Ek__BackingField_55(int32_t value)
	{
		___U3CmPlayersOnMasterCountU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CmGameCountU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CmGameCountU3Ek__BackingField_56)); }
	inline int32_t get_U3CmGameCountU3Ek__BackingField_56() const { return ___U3CmGameCountU3Ek__BackingField_56; }
	inline int32_t* get_address_of_U3CmGameCountU3Ek__BackingField_56() { return &___U3CmGameCountU3Ek__BackingField_56; }
	inline void set_U3CmGameCountU3Ek__BackingField_56(int32_t value)
	{
		___U3CmGameCountU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CmPlayersInRoomsCountU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CmPlayersInRoomsCountU3Ek__BackingField_57)); }
	inline int32_t get_U3CmPlayersInRoomsCountU3Ek__BackingField_57() const { return ___U3CmPlayersInRoomsCountU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CmPlayersInRoomsCountU3Ek__BackingField_57() { return &___U3CmPlayersInRoomsCountU3Ek__BackingField_57; }
	inline void set_U3CmPlayersInRoomsCountU3Ek__BackingField_57(int32_t value)
	{
		___U3CmPlayersInRoomsCountU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CmLocalActorU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398, ___U3CmLocalActorU3Ek__BackingField_58)); }
	inline PhotonPlayer_t1400510109 * get_U3CmLocalActorU3Ek__BackingField_58() const { return ___U3CmLocalActorU3Ek__BackingField_58; }
	inline PhotonPlayer_t1400510109 ** get_address_of_U3CmLocalActorU3Ek__BackingField_58() { return &___U3CmLocalActorU3Ek__BackingField_58; }
	inline void set_U3CmLocalActorU3Ek__BackingField_58(PhotonPlayer_t1400510109 * value)
	{
		___U3CmLocalActorU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmLocalActorU3Ek__BackingField_58, value);
	}
};

struct NetworkingPeer_t1870069398_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t4217389847 * ___ProtocolToNameServerPort_14;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_40;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t1355425710 * ___PrefabCache_42;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_14() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___ProtocolToNameServerPort_14)); }
	inline Dictionary_2_t4217389847 * get_ProtocolToNameServerPort_14() const { return ___ProtocolToNameServerPort_14; }
	inline Dictionary_2_t4217389847 ** get_address_of_ProtocolToNameServerPort_14() { return &___ProtocolToNameServerPort_14; }
	inline void set_ProtocolToNameServerPort_14(Dictionary_2_t4217389847 * value)
	{
		___ProtocolToNameServerPort_14 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_14, value);
	}

	inline static int32_t get_offset_of_UsePrefabCache_40() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___UsePrefabCache_40)); }
	inline bool get_UsePrefabCache_40() const { return ___UsePrefabCache_40; }
	inline bool* get_address_of_UsePrefabCache_40() { return &___UsePrefabCache_40; }
	inline void set_UsePrefabCache_40(bool value)
	{
		___UsePrefabCache_40 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_42() { return static_cast<int32_t>(offsetof(NetworkingPeer_t1870069398_StaticFields, ___PrefabCache_42)); }
	inline Dictionary_2_t1355425710 * get_PrefabCache_42() const { return ___PrefabCache_42; }
	inline Dictionary_2_t1355425710 ** get_address_of_PrefabCache_42() { return &___PrefabCache_42; }
	inline void set_PrefabCache_42(Dictionary_2_t1355425710 * value)
	{
		___PrefabCache_42 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabCache_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
