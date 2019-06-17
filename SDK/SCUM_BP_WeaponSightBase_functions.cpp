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

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSightBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.UserConstructionScript");

	ABP_WeaponSightBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSightBase_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem");

	ABP_WeaponSightBase_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSightBase_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem");

	ABP_WeaponSightBase_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSightBase_C::ExecuteUbergraph_BP_WeaponSightBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase");

	ABP_WeaponSightBase_C_ExecuteUbergraph_BP_WeaponSightBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
