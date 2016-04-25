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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>
struct Dictionary_2_t2829435641;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>[]
struct KeyValuePair_2U5BU5D_t2012696026;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color32>>
struct IEnumerator_1_t3801073387;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color32>
struct KeyCollection_t857743625;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color32>
struct ValueCollection_t456605439;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22317966939.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2596463582.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor()
extern "C"  void Dictionary_2__ctor_m1019955468_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1019955468(__this, method) ((  void (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2__ctor_m1019955468_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m769405315_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m769405315(__this, ___comparer, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m769405315_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m98028637_gshared (Dictionary_2_t2829435641 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m98028637(__this, ___capacity, method) ((  void (*) (Dictionary_2_t2829435641 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m98028637_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m498851917_gshared (Dictionary_2_t2829435641 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m498851917(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2829435641 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m498851917_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2156884690_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2156884690(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2156884690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2250544188_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2250544188(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2250544188_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3097914273_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3097914273(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3097914273_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m335630864_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m335630864(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m335630864_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2162170726_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2162170726(__this, ___key, method) ((  bool (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2162170726_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3921561567_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3921561567(__this, ___key, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3921561567_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1462222254_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1462222254(__this, method) ((  bool (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1462222254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m281083866_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m281083866(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m281083866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m587636850_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m587636850(__this, method) ((  bool (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m587636850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1502689525_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2_t2317966939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1502689525(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t2829435641 *, KeyValuePair_2_t2317966939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1502689525_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1311257837_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2_t2317966939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1311257837(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2829435641 *, KeyValuePair_2_t2317966939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1311257837_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1574942105_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2U5BU5D_t2012696026* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1574942105(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2829435641 *, KeyValuePair_2U5BU5D_t2012696026*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1574942105_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2116596562_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2_t2317966939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2116596562(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2829435641 *, KeyValuePair_2_t2317966939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2116596562_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2610366904_gshared (Dictionary_2_t2829435641 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2610366904(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2610366904_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4091981107_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4091981107(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4091981107_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2731507888_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2731507888(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2731507888_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3808448843_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3808448843(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3808448843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m235147124_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m235147124(__this, method) ((  int32_t (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_get_Count_m235147124_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Item(TKey)
extern "C"  Color32_t4137084207  Dictionary_2_get_Item_m3630578423_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3630578423(__this, ___key, method) ((  Color32_t4137084207  (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3630578423_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m622115276_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m622115276(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_set_Item_m622115276_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m120701060_gshared (Dictionary_2_t2829435641 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m120701060(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t2829435641 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m120701060_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3915418547_gshared (Dictionary_2_t2829435641 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3915418547(__this, ___size, method) ((  void (*) (Dictionary_2_t2829435641 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3915418547_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3288298095_gshared (Dictionary_2_t2829435641 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3288298095(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3288298095_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2317966939  Dictionary_2_make_pair_m3809958587_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m3809958587(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2317966939  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_make_pair_m3809958587_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2530050267_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m2530050267(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_pick_key_m2530050267_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::pick_value(TKey,TValue)
extern "C"  Color32_t4137084207  Dictionary_2_pick_value_m2829914971_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m2829914971(__this /* static, unused */, ___key, ___value, method) ((  Color32_t4137084207  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_pick_value_m2829914971_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3761869440_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2U5BU5D_t2012696026* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3761869440(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2829435641 *, KeyValuePair_2U5BU5D_t2012696026*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3761869440_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Resize()
extern "C"  void Dictionary_2_Resize_m1611645100_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1611645100(__this, method) ((  void (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_Resize_m1611645100_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3360643369_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m3360643369(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_Add_m3360643369_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Clear()
extern "C"  void Dictionary_2_Clear_m2721056055_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2721056055(__this, method) ((  void (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_Clear_m2721056055_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1484446429_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1484446429(__this, ___key, method) ((  bool (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1484446429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2349037661_gshared (Dictionary_2_t2829435641 * __this, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2349037661(__this, ___value, method) ((  bool (*) (Dictionary_2_t2829435641 *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_ContainsValue_m2349037661_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m749898410_gshared (Dictionary_2_t2829435641 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m749898410(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2829435641 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m749898410_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3632045562_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3632045562(__this, ___sender, method) ((  void (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3632045562_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1624590323_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1624590323(__this, ___key, method) ((  bool (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1624590323_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2476803638_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, Color32_t4137084207 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2476803638(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t2829435641 *, Il2CppObject *, Color32_t4137084207 *, const MethodInfo*))Dictionary_2_TryGetValue_m2476803638_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Keys()
extern "C"  KeyCollection_t857743625 * Dictionary_2_get_Keys_m3226586505_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3226586505(__this, method) ((  KeyCollection_t857743625 * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_get_Keys_m3226586505_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::get_Values()
extern "C"  ValueCollection_t456605439 * Dictionary_2_get_Values_m3590087241_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3590087241(__this, method) ((  ValueCollection_t456605439 * (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_get_Values_m3590087241_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m1979909174_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1979909174(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1979909174_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ToTValue(System.Object)
extern "C"  Color32_t4137084207  Dictionary_2_ToTValue_m1142229110_gshared (Dictionary_2_t2829435641 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1142229110(__this, ___value, method) ((  Color32_t4137084207  (*) (Dictionary_2_t2829435641 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1142229110_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1643994582_gshared (Dictionary_2_t2829435641 * __this, KeyValuePair_2_t2317966939  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1643994582(__this, ___pair, method) ((  bool (*) (Dictionary_2_t2829435641 *, KeyValuePair_2_t2317966939 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1643994582_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::GetEnumerator()
extern "C"  Enumerator_t2596463583  Dictionary_2_GetEnumerator_m1123565393_gshared (Dictionary_2_t2829435641 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1123565393(__this, method) ((  Enumerator_t2596463583  (*) (Dictionary_2_t2829435641 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1123565393_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color32>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m1325938016_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Color32_t4137084207  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1325938016(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color32_t4137084207 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1325938016_gshared)(__this /* static, unused */, ___key, ___value, method)
