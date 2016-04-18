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

// ExitGames.Client.Photon.CmdLogReceivedReliable
struct CmdLogReceivedReliable_t1825138545;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3301568857;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand3301568857.h"

// System.Void ExitGames.Client.Photon.CmdLogReceivedReliable::.ctor(ExitGames.Client.Photon.NCommand,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void CmdLogReceivedReliable__ctor_m2843586625 (CmdLogReceivedReliable_t1825138545 * __this, NCommand_t3301568857 * ___command, int32_t ___timeInt, int32_t ___rtt, int32_t ___variance, int32_t ___timeSinceLastSend, int32_t ___timeSinceLastSendAck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.CmdLogReceivedReliable::ToString()
extern "C"  String_t* CmdLogReceivedReliable_ToString_m30107814 (CmdLogReceivedReliable_t1825138545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
