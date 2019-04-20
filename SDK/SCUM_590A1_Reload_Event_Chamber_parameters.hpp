#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUsingData
struct U590A1_Reload_Event_Chamber_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.CanExecuteUsingData
struct U590A1_Reload_Event_Chamber_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.OnActionAnimNotify
struct U590A1_Reload_Event_Chamber_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType*                        notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUbergraph_590A1_Reload_Event_Chamber
struct U590A1_Reload_Event_Chamber_C_ExecuteUbergraph_590A1_Reload_Event_Chamber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
