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

// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  itemCDO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfoSecondIteration_C::Init(class AItem** itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init");

	UUI_CraftingInfoSecondIteration_C_Init_Params params;
	params.itemCDO = itemCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Caption                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CraftingInfoSecondIteration_C::SetCaptionAndDescription(struct FText* Caption, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription");

	UUI_CraftingInfoSecondIteration_C_SetCaptionAndDescription_Params params;
	params.Caption = Caption;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfoSecondIteration_C::ExecuteUbergraph_UI_CraftingInfoSecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration");

	UUI_CraftingInfoSecondIteration_C_ExecuteUbergraph_UI_CraftingInfoSecondIteration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
