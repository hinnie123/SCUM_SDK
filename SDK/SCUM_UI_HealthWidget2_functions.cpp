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

// Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HealthWidget2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.Construct");

	UUI_HealthWidget2_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::SetHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage");

	UUI_HealthWidget2_C_SetHealthPercentage_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::SetMaxHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage");

	UUI_HealthWidget2_C_SetMaxHealthPercentage_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::ExecuteUbergraph_UI_HealthWidget2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2");

	UUI_HealthWidget2_C_ExecuteUbergraph_UI_HealthWidget2_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
