#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.CanExecuteUsingData
struct UBP_M1_OpenEjectClipInsertClip_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.OnActionAnimNotify
struct UBP_M1_OpenEjectClipInsertClip_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType*                        notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip
struct UBP_M1_OpenEjectClipInsertClip_C_ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
