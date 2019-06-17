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

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUsingData
struct U590A1_Reload_Event_NoChamber_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.CanExecuteUsingData
struct U590A1_Reload_Event_NoChamber_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.OnActionAnimNotify
struct U590A1_Reload_Event_NoChamber_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType*                        notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUbergraph_590A1_Reload_Event_NoChamber
struct U590A1_Reload_Event_NoChamber_C_ExecuteUbergraph_590A1_Reload_Event_NoChamber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
