// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BowSilencer.BP_BowSilencer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BowSilencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowSilencer.BP_BowSilencer_C.UserConstructionScript");

	ABP_BowSilencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowSilencer.BP_BowSilencer_C.OnDetachedFromItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowSilencer_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowSilencer.BP_BowSilencer_C.OnDetachedFromItem");

	ABP_BowSilencer_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowSilencer.BP_BowSilencer_C.OnAttachedToItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowSilencer_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowSilencer.BP_BowSilencer_C.OnAttachedToItem");

	ABP_BowSilencer_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowSilencer.BP_BowSilencer_C.ExecuteUbergraph_BP_BowSilencer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowSilencer_C::ExecuteUbergraph_BP_BowSilencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowSilencer.BP_BowSilencer_C.ExecuteUbergraph_BP_BowSilencer");

	ABP_BowSilencer_C_ExecuteUbergraph_BP_BowSilencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
