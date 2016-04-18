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

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t1708848712;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t3595356884;
// PhotonStream
struct PhotonStream_t1494272828;
// PhotonMessageInfo
struct PhotonMessageInfo_t259585817;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel3595356884.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C"  void PhotonTransformViewScaleControl__ctor_m155400219 (PhotonTransformViewScaleControl_t1708848712 * __this, PhotonTransformViewScaleModel_t3595356884 * ___model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  PhotonTransformViewScaleControl_GetScale_m1386116190 (PhotonTransformViewScaleControl_t1708848712 * __this, Vector3_t3525329789  ___currentScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewScaleControl_OnPhotonSerializeView_m981455727 (PhotonTransformViewScaleControl_t1708848712 * __this, Vector3_t3525329789  ___currentScale, PhotonStream_t1494272828 * ___stream, PhotonMessageInfo_t259585817 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
