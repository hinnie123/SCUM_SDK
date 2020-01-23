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

// Function UI_ItemTooltip.UI_ItemTooltip_C.GetVisibilityForPageBorder
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ItemTooltip_C::GetVisibilityForPageBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemTooltip.UI_ItemTooltip_C.GetVisibilityForPageBorder");

	UUI_ItemTooltip_C_GetVisibilityForPageBorder_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
