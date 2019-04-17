#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function M1887_InsertShell.M1887_InsertShell_C.ExecuteUsingData
struct UM1887_InsertShell_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function M1887_InsertShell.M1887_InsertShell_C.CanExecuteUsingData
struct UM1887_InsertShell_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
