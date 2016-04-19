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

// StormTrooperControl
struct StormTrooperControl_t3842439687;
// System.String
struct String_t;
// UnityEngine.Collision
struct Collision_t1119538015;
// PhotonStream
struct PhotonStream_t1494272828;
// PhotonMessageInfo
struct PhotonMessageInfo_t259585817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void StormTrooperControl::.ctor()
extern "C"  void StormTrooperControl__ctor_m1783787844 (StormTrooperControl_t3842439687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::Awake()
extern "C"  void StormTrooperControl_Awake_m2021393063 (StormTrooperControl_t3842439687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::Wakeup(System.String)
extern "C"  void StormTrooperControl_Wakeup_m60541475 (StormTrooperControl_t3842439687 * __this, String_t* ___targetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::Sleep()
extern "C"  void StormTrooperControl_Sleep_m505195385 (StormTrooperControl_t3842439687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::Update()
extern "C"  void StormTrooperControl_Update_m1189710409 (StormTrooperControl_t3842439687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void StormTrooperControl_OnCollisionEnter_m226829074 (StormTrooperControl_t3842439687 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StormTrooperControl::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void StormTrooperControl_OnPhotonSerializeView_m2177039683 (StormTrooperControl_t3842439687 * __this, PhotonStream_t1494272828 * ___stream, PhotonMessageInfo_t259585817 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
