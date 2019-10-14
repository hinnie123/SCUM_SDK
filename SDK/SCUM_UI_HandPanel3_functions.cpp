// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HandPanel3.UI_HandPanel3_C.GetQuickAccessAt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuickAccessItemSwitcher3* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UQuickAccessItemSwitcher3* UUI_HandPanel3_C::GetQuickAccessAt(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel3.UI_HandPanel3_C.GetQuickAccessAt");

	UUI_HandPanel3_C_GetQuickAccessAt_Params fn_params;
	fn_params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
