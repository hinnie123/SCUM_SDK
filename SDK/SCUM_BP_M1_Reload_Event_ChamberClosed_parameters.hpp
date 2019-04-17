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

// Function BP_M1_Reload_Event_ChamberClosed.BP_M1_Reload_Event_ChamberClosed_C.CanExecuteUsingData
struct UBP_M1_Reload_Event_ChamberClosed_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
