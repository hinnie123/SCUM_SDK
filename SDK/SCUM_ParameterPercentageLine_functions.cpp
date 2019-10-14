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

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor");

	UParameterPercentageLine_C_ActivateNormalColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor");

	UParameterPercentageLine_C_ActivateAlarmColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UParameterPercentageLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor");

	UParameterPercentageLine_C_SetAlarmColor_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Update");

	UParameterPercentageLine_C_Update_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock");

	UParameterPercentageLine_C_GetValueTextBlock_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = fn_params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue");

	UParameterPercentageLine_C_SetColorOfValue_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName");

	UParameterPercentageLine_C_SetColorOfParameterName_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UParameterPercentageLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor");

	UParameterPercentageLine_C_SetColor_Params fn_params;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock");

	UParameterPercentageLine_C_GetParameterNameTextBlock_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = fn_params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UParameterPercentageLine_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor");

	UParameterPercentageLine_C_SelectCustomColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = fn_params.Color;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UParameterPercentageLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Construct");

	UParameterPercentageLine_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Tick");

	UParameterPercentageLine_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged");

	UParameterPercentageLine_C_OnPercentageChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn
// (Protected, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn");

	UParameterPercentageLine_C_AlarmSwitchOn_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff
// (Protected, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff");

	UParameterPercentageLine_C_AlarmSwitchOff_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::ExecuteUbergraph_ParameterPercentageLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine");

	UParameterPercentageLine_C_ExecuteUbergraph_ParameterPercentageLine_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
