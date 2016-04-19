#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MatchTimer
struct MatchTimer_t3848236192;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Void MatchTimer::.ctor()
extern "C"  void MatchTimer__ctor_m4209795067 (MatchTimer_t3848236192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MatchTimer::get_IsItTimeYet()
extern "C"  bool MatchTimer_get_IsItTimeYet_m2377074018 (MatchTimer_t3848236192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MatchTimer::get_IsTimeToStartKnown()
extern "C"  bool MatchTimer_get_IsTimeToStartKnown_m3355497145 (MatchTimer_t3848236192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MatchTimer::get_SecondsUntilItsTime()
extern "C"  double MatchTimer_get_SecondsUntilItsTime_m241940323 (MatchTimer_t3848236192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchTimer::Update()
extern "C"  void MatchTimer_Update_m3381490290 (MatchTimer_t3848236192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void MatchTimer_OnPhotonCustomRoomPropertiesChanged_m3067934489 (MatchTimer_t3848236192 * __this, Hashtable_t223732124 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
