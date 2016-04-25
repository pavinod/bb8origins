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

// startTimer
struct startTimer_t2711339011;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Void startTimer::.ctor()
extern "C"  void startTimer__ctor_m2319723512 (startTimer_t2711339011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean startTimer::get_IsItTimeYet()
extern "C"  bool startTimer_get_IsItTimeYet_m2617899295 (startTimer_t2711339011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean startTimer::get_IsTimeToStartKnown()
extern "C"  bool startTimer_get_IsTimeToStartKnown_m3825524828 (startTimer_t2711339011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double startTimer::get_SecondsUntilItsTime()
extern "C"  double startTimer_get_SecondsUntilItsTime_m1927896608 (startTimer_t2711339011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void startTimer::Update()
extern "C"  void startTimer_Update_m623846933 (startTimer_t2711339011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void startTimer::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void startTimer_OnPhotonCustomRoomPropertiesChanged_m1821941628 (startTimer_t2711339011 * __this, Hashtable_t223732124 * ___propertiesThatChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
