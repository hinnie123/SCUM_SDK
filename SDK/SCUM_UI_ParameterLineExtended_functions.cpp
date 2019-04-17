// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetExpandableContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ParameterLineExtended_C::SetExpandableContainer(class UUI_ExpandableContainer_C* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetExpandableContainer");

	UUI_ParameterLineExtended_C_SetExpandableContainer_Params params;
	params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.DisableAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ParameterLineExtended_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.DisableAlarm");

	UUI_ParameterLineExtended_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.EnableAlarm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ParameterLineExtended_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.EnableAlarm");

	UUI_ParameterLineExtended_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLineExtended_C::SetName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetName");

	UUI_ParameterLineExtended_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.UpdatePercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ParameterLineExtended_C::UpdatePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.UpdatePercentage");

	UUI_ParameterLineExtended_C_UpdatePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueInt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLineExtended_C::SetMaxValueInt(int MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueInt");

	UUI_ParameterLineExtended_C_SetMaxValueInt_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueFloat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            minDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            maxDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLineExtended_C::SetMaxValueFloat(float MaxValue, int minDecimals, int maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueFloat");

	UUI_ParameterLineExtended_C_SetMaxValueFloat_Params params;
	params.MaxValue = MaxValue;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLineExtended_C::SetMaxValueText(const struct FText& MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetMaxValueText");

	UUI_ParameterLineExtended_C_SetMaxValueText_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueInt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLineExtended_C::SetValueInt(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueInt");

	UUI_ParameterLineExtended_C_SetValueInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueFloat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            minDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            maxDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLineExtended_C::SetValueFloat(float Value, int minDecimals, int maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueFloat");

	UUI_ParameterLineExtended_C_SetValueFloat_Params params;
	params.Value = Value;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLineExtended_C::SetValueText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.SetValueText");

	UUI_ParameterLineExtended_C_SetValueText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_ParameterLineExtended_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.OnSynchronizeProperties");

	UUI_ParameterLineExtended_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ParameterLineExtended_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.Construct");

	UUI_ParameterLineExtended_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.ExecuteUbergraph_UI_ParameterLineExtended
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLineExtended_C::ExecuteUbergraph_UI_ParameterLineExtended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLineExtended.UI_ParameterLineExtended_C.ExecuteUbergraph_UI_ParameterLineExtended");

	UUI_ParameterLineExtended_C_ExecuteUbergraph_UI_ParameterLineExtended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
