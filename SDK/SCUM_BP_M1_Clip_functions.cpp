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

// Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AItem**                  Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionState ABP_M1_Clip_C::GetStateForInteractionWithItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem");

	ABP_M1_Clip_C_GetStateForInteractionWithItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APrisoner**              Prisoner                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractionQueryParameters* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractionStruct      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInteractionStruct ABP_M1_Clip_C::GetDefaultInteractionForPrisoner(class APrisoner** Prisoner, struct FInteractionQueryParameters* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner");

	ABP_M1_Clip_C_GetDefaultInteractionForPrisoner_Params fn_params;
	fn_params.Prisoner = Prisoner;
	fn_params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_M1_Clip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.UserConstructionScript");

	ABP_M1_Clip_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
