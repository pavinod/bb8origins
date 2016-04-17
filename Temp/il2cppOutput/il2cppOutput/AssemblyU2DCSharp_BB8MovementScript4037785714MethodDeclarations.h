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

// BB8MovementScript
struct BB8MovementScript_t4037785714;
// UnityEngine.Collision
struct Collision_t1119538015;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collider
struct Collider_t955670625;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "mscorlib_System_String968488902.h"

// System.Void BB8MovementScript::.ctor()
extern "C"  void BB8MovementScript__ctor_m3381351737 (BB8MovementScript_t4037785714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::Start()
extern "C"  void BB8MovementScript_Start_m2328489529 (BB8MovementScript_t4037785714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void BB8MovementScript_OnCollisionEnter_m1206448903 (BB8MovementScript_t4037785714 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::Update()
extern "C"  void BB8MovementScript_Update_m3469550836 (BB8MovementScript_t4037785714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::FixedUpdate()
extern "C"  void BB8MovementScript_FixedUpdate_m1145349108 (BB8MovementScript_t4037785714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BB8MovementScript::OnTriggerEnter(UnityEngine.Collider)
extern "C"  Il2CppObject * BB8MovementScript_OnTriggerEnter_m2414083479 (BB8MovementScript_t4037785714 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::ActivateStormtrooper(System.String,System.String)
extern "C"  void BB8MovementScript_ActivateStormtrooper_m973927818 (BB8MovementScript_t4037785714 * __this, String_t* ___stormtrooperTag, String_t* ___BB8Tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::soundFlag()
extern "C"  void BB8MovementScript_soundFlag_m3505174994 (BB8MovementScript_t4037785714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::DeactivateFlag(System.String)
extern "C"  void BB8MovementScript_DeactivateFlag_m1130941047 (BB8MovementScript_t4037785714 * __this, String_t* ___cube, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BB8MovementScript::ActivateFlag(System.String)
extern "C"  void BB8MovementScript_ActivateFlag_m1076747544 (BB8MovementScript_t4037785714 * __this, String_t* ___cube, const MethodInfo* method) IL2CPP_METHOD_ATTR;
