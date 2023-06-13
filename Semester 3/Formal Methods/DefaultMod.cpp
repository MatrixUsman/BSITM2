//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2022-01-31 by the VDM-SL to C++ Code Generator
// (v9.0.5 - Fri 29-Aug-2014 09:17:54 +0900)
//

#include "DefaultMod.h"


static Map vdm_DefaultMod_authorized;

static Set vdm_DefaultMod_inside;


TYPE_DefaultMod_SecSys &TYPE_DefaultMod_SecSys::Init (const type_cLcLM &p1, const type_cLS &p2) {
  SetField(1, p1);
  SetField(2, p2);
  return * this;
}


type_cLcLM TYPE_DefaultMod_SecSys::get_authorized () const {
  return GetMap(1);
}


void TYPE_DefaultMod_SecSys::set_authorized (const type_cLcLM &p) {
  SetField(1, p);
}


type_cLS TYPE_DefaultMod_SecSys::get_inside () const {
  return GetSet(2);
}


void TYPE_DefaultMod_SecSys::set_inside (const type_cLS &p) {
  SetField(2, p);
}

#ifndef DEF_DefaultMod_inv_SecSys

Bool vdm_DefaultMod_inv_SecSys (const TYPE_DefaultMod_SecSys &var_1_1) {
  Map vdm_DefaultMod_a;
  Set vdm_DefaultMod_i;
  vdm_DefaultMod_a = var_1_1.GetField(1);
  vdm_DefaultMod_i = var_1_1.GetField(2);
  Bool varRes_2;
  if ((varRes_2 = static_cast<Bool>(vdm_DefaultMod_a == Map())).GetValue()) 
    varRes_2 = static_cast<Bool>(vdm_DefaultMod_i == Set());
  return varRes_2;
}

#endif // DEF_DefaultMod_inv_SecSys


void init_DefaultMod_VDMLib () {
  VDMGetDefaultRecInfoMap().NewTag(TAG_TYPE_DefaultMod_SecSys, 2);
  VDMGetDefaultRecInfoMap().SetSymTag(TAG_TYPE_DefaultMod_SecSys, L"DefaultMod`SecSys");
  AddRecordTag(L"DefaultMod`SecSys", TAG_TYPE_DefaultMod_SecSys);
}

#include "DefaultMod_userimpl.cpp"



void init_DefaultMod () {
  init_DefaultMod_VDMLib();
}

#ifndef DEF_DefaultMod_pre_enter

Bool vdm_DefaultMod_pre_enter (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_String &var_2_2, const TYPE_DefaultMod_SecSys &var_3_3) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  Sequence vdm_DefaultMod_passwordIn;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_passwordIn = var_2_2;
  vdm_DefaultMod_authorized = var_3_3.GetField(1);
  vdm_DefaultMod_inside = var_3_3.GetField(2);
  return Bool(true);
}

#endif // DEF_DefaultMod_pre_enter

#ifndef DEF_DefaultMod_post_enter

Bool vdm_DefaultMod_post_enter (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_String &var_2_2, const TYPE_DefaultMod_Signal &var_3_3, const TYPE_DefaultMod_SecSys &var_4_4, const TYPE_DefaultMod_SecSys &var_5_5) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Generic vdm_DefaultMod_signal;
  Map vdm_DefaultMod_authorized;
  Sequence vdm_DefaultMod_passwordIn;
  Set _vdm_DefaultMod_inside;
  Map _vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_passwordIn = var_2_2;
  vdm_DefaultMod_signal = var_3_3;
  _vdm_DefaultMod_authorized = var_4_4.GetField(1);
  _vdm_DefaultMod_inside = var_4_4.GetField(2);
  vdm_DefaultMod_authorized = var_5_5.GetField(1);
  vdm_DefaultMod_inside = var_5_5.GetField(2);
  Bool varRes_6;
  Bool var1_7;
  Bool var1_8;
  if ((var1_8 = static_cast<Bool>(static_cast<const Sequence &>(vdm_DefaultMod_authorized[vdm_DefaultMod_nameIn]) == vdm_DefaultMod_passwordIn)).GetValue()) 
    var1_8 = static_cast<Bool>(!vdm_DefaultMod_inside.InSet(vdm_DefaultMod_nameIn));
  if ((var1_7 = var1_8).GetValue()) {
    Bool var2_17;
    Set var2_20;
    var2_20 = vdm_DefaultMod_inside;
    var2_20.ImpUnion(mk_set(vdm_DefaultMod_nameIn));
    if ((var2_17 = static_cast<Bool>(vdm_DefaultMod_inside == var2_20)).GetValue()) 
      var2_17 = static_cast<Bool>(vdm_DefaultMod_signal == Quote(L"OPEN_DOOR"));
    var1_7 = var2_17;
  }
  if (!(varRes_6 = var1_7).GetValue()) {
    Bool var2_27;
    Bool var1_28;
    if (!(var1_28 = static_cast<Bool>(!(static_cast<const Sequence &>(vdm_DefaultMod_authorized[vdm_DefaultMod_nameIn]) == vdm_DefaultMod_passwordIn))).GetValue()) 
      var1_28 = static_cast<Bool>(vdm_DefaultMod_inside.InSet(vdm_DefaultMod_nameIn));
    if ((var2_27 = var1_28).GetValue()) {
      Bool var2_37;
      if ((var2_37 = static_cast<Bool>(vdm_DefaultMod_inside == vdm_DefaultMod_inside)).GetValue()) 
        var2_37 = static_cast<Bool>(vdm_DefaultMod_signal == Quote(L"ACTIVATE_ALARM"));
      var2_27 = var2_37;
    }
    varRes_6 = var2_27;
  }
  return varRes_6;
}

#endif // DEF_DefaultMod_post_enter

#ifndef DEF_DefaultMod_pre_leave

Bool vdm_DefaultMod_pre_leave (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_SecSys &var_2_2) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_authorized = var_2_2.GetField(1);
  vdm_DefaultMod_inside = var_2_2.GetField(2);
  return Bool(true);
}

#endif // DEF_DefaultMod_pre_leave

#ifndef DEF_DefaultMod_post_leave

Bool vdm_DefaultMod_post_leave (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_Signal &var_2_2, const TYPE_DefaultMod_SecSys &var_3_3, const TYPE_DefaultMod_SecSys &var_4_4) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Generic vdm_DefaultMod_signal;
  Map vdm_DefaultMod_authorized;
  Set _vdm_DefaultMod_inside;
  Map _vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_signal = var_2_2;
  _vdm_DefaultMod_authorized = var_3_3.GetField(1);
  _vdm_DefaultMod_inside = var_3_3.GetField(2);
  vdm_DefaultMod_authorized = var_4_4.GetField(1);
  vdm_DefaultMod_inside = var_4_4.GetField(2);
  Bool varRes_5;
  Bool var1_6;
  Bool var1_7;
  if ((var1_7 = static_cast<Bool>(vdm_DefaultMod_inside.InSet(vdm_DefaultMod_nameIn))).GetValue()) {
    Set var2_13;
    var2_13 = vdm_DefaultMod_inside;
    var2_13.ImpDiff(mk_set(vdm_DefaultMod_nameIn));
    var1_7 = static_cast<Bool>(vdm_DefaultMod_inside == var2_13);
  }
  if ((var1_6 = var1_7).GetValue()) 
    var1_6 = static_cast<Bool>(vdm_DefaultMod_signal == Quote(L"OPEN_DOOR"));
  if (!(varRes_5 = var1_6).GetValue()) {
    Bool var2_20;
    Bool var1_21;
    if ((var1_21 = static_cast<Bool>(vdm_DefaultMod_inside.InSet(vdm_DefaultMod_nameIn))).GetValue()) 
      var1_21 = static_cast<Bool>(vdm_DefaultMod_inside == vdm_DefaultMod_inside);
    if ((var2_20 = var1_21).GetValue()) 
      var2_20 = static_cast<Bool>(vdm_DefaultMod_signal == Quote(L"ACTIVATE_ALARM"));
    varRes_5 = var2_20;
  }
  return varRes_5;
}

#endif // DEF_DefaultMod_post_leave

#ifndef DEF_DefaultMod_pre_addEmployee

Bool vdm_DefaultMod_pre_addEmployee (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_String &var_2_2, const TYPE_DefaultMod_SecSys &var_3_3) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  Sequence vdm_DefaultMod_passwordIn;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_passwordIn = var_2_2;
  vdm_DefaultMod_authorized = var_3_3.GetField(1);
  vdm_DefaultMod_inside = var_3_3.GetField(2);
  return static_cast<Bool>(!vdm_DefaultMod_authorized.Dom().InSet(vdm_DefaultMod_nameIn));
}

#endif // DEF_DefaultMod_pre_addEmployee

#ifndef DEF_DefaultMod_post_addEmployee

Bool vdm_DefaultMod_post_addEmployee (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_String &var_2_2, const TYPE_DefaultMod_SecSys &var_3_3, const TYPE_DefaultMod_SecSys &var_4_4) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  Sequence vdm_DefaultMod_passwordIn;
  Set _vdm_DefaultMod_inside;
  Map _vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_passwordIn = var_2_2;
  _vdm_DefaultMod_authorized = var_3_3.GetField(1);
  _vdm_DefaultMod_inside = var_3_3.GetField(2);
  vdm_DefaultMod_authorized = var_4_4.GetField(1);
  vdm_DefaultMod_inside = var_4_4.GetField(2);
  Map var2_7;
  Map modmap_10;
  modmap_10.Insert(vdm_DefaultMod_nameIn, vdm_DefaultMod_passwordIn);
  Map modmap_8 (modmap_10);
  var2_7 = vdm_DefaultMod_authorized;
  var2_7.ImpOverride(modmap_8);
  return static_cast<Bool>(vdm_DefaultMod_authorized == var2_7);
}

#endif // DEF_DefaultMod_post_addEmployee

#ifndef DEF_DefaultMod_pre_removeEmployee

Bool vdm_DefaultMod_pre_removeEmployee (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_SecSys &var_2_2) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  vdm_DefaultMod_authorized = var_2_2.GetField(1);
  vdm_DefaultMod_inside = var_2_2.GetField(2);
  Bool varRes_3;
  if ((varRes_3 = static_cast<Bool>(vdm_DefaultMod_authorized.Dom().InSet(vdm_DefaultMod_nameIn))).GetValue()) 
    varRes_3 = static_cast<Bool>(!vdm_DefaultMod_inside.InSet(vdm_DefaultMod_nameIn));
  return varRes_3;
}

#endif // DEF_DefaultMod_pre_removeEmployee

#ifndef DEF_DefaultMod_post_removeEmployee

Bool vdm_DefaultMod_post_removeEmployee (const TYPE_DefaultMod_String &var_1_1, const TYPE_DefaultMod_SecSys &var_2_2, const TYPE_DefaultMod_SecSys &var_3_3) {
  Set vdm_DefaultMod_inside;
  Sequence vdm_DefaultMod_nameIn;
  Map vdm_DefaultMod_authorized;
  Set _vdm_DefaultMod_inside;
  Map _vdm_DefaultMod_authorized;
  vdm_DefaultMod_nameIn = var_1_1;
  _vdm_DefaultMod_authorized = var_2_2.GetField(1);
  _vdm_DefaultMod_inside = var_2_2.GetField(2);
  vdm_DefaultMod_authorized = var_3_3.GetField(1);
  vdm_DefaultMod_inside = var_3_3.GetField(2);
  return static_cast<Bool>(vdm_DefaultMod_authorized == vdm_DefaultMod_authorized.DomRestrictedBy(mk_set(vdm_DefaultMod_nameIn)));
}

#endif // DEF_DefaultMod_post_removeEmployee
