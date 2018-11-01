// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Border.Border_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBorder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Border.Border_C.Construct");

	UBorder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Border.Border_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UBorder_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function Border.Border_C.OnSynchronizeProperties");

	UBorder_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Border.Border_C.ExecuteUbergraph_Border
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorder_C::ExecuteUbergraph_Border(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Border.Border_C.ExecuteUbergraph_Border");

	UBorder_C_ExecuteUbergraph_Border_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
