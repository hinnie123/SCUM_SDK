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

// Function Sicknesses.Sicknesses_C.HasContentSizeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            oldSicknessCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newSicknessCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           contentSizeChanged             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::HasContentSizeChanged(int oldSicknessCount, int newSicknessCount, bool* contentSizeChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasContentSizeChanged");

	USicknesses_C_HasContentSizeChanged_Params fn_params;
	fn_params.oldSicknessCount = oldSicknessCount;
	fn_params.newSicknessCount = newSicknessCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (contentSizeChanged != nullptr)
		*contentSizeChanged = fn_params.contentSizeChanged;
}


// Function Sicknesses.Sicknesses_C.CheckForAlarms
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            previousSicknessCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            sicknessCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::CheckForAlarms(int previousSicknessCount, int sicknessCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CheckForAlarms");

	USicknesses_C_CheckForAlarms_Params fn_params;
	fn_params.previousSicknessCount = previousSicknessCount;
	fn_params.sicknessCount = sicknessCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessCount
// (Public, BlueprintCallable, BlueprintEvent)

void USicknesses_C::UpdateSicknessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessCount");

	USicknesses_C_UpdateSicknessCount_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USickness*               sicknessRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SicknessName                   (Parm, OutParm)
// struct FText                   sicknessState                  (Parm, OutParm)
// struct FText                   sicknessPhase                  (Parm, OutParm)

void USicknesses_C::SicknessToText(class USickness* sicknessRef, struct FText* SicknessName, struct FText* sicknessState, struct FText* sicknessPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessToText");

	USicknesses_C_SicknessToText_Params fn_params;
	fn_params.sicknessRef = sicknessRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (SicknessName != nullptr)
		*SicknessName = fn_params.SicknessName;
	if (sicknessState != nullptr)
		*sicknessState = fn_params.sicknessState;
	if (sicknessPhase != nullptr)
		*sicknessPhase = fn_params.sicknessPhase;
}


// Function Sicknesses.Sicknesses_C.FillSicknessLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParameterLine_C*        sicknessLineRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USickness*               Sickness                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::FillSicknessLine(class UParameterLine_C* sicknessLineRef, class USickness* Sickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.FillSicknessLine");

	USicknesses_C_FillSicknessLine_Params fn_params;
	fn_params.sicknessLineRef = sicknessLineRef;
	fn_params.Sickness = Sickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessLine
// (Public, BlueprintCallable, BlueprintEvent)

void USicknesses_C::UpdateSicknessLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessLine");

	USicknesses_C_UpdateSicknessLine_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USickness*               sicknessRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParameterLine_C*        sicknessParameterLine          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::CreateSicknessLine(class USickness* sicknessRef, class UParameterLine_C** sicknessParameterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLine");

	USicknesses_C_CreateSicknessLine_Params fn_params;
	fn_params.sicknessRef = sicknessRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (sicknessParameterLine != nullptr)
		*sicknessParameterLine = fn_params.sicknessParameterLine;
}


// Function Sicknesses.Sicknesses_C.ShowSickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::ShowSickness(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ShowSickness");

	USicknesses_C_ShowSickness_Params fn_params;
	fn_params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.InitSicknesses
// (Public, BlueprintCallable, BlueprintEvent)

void USicknesses_C::InitSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.InitSicknesses");

	USicknesses_C_InitSicknesses_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AddSicknessLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParameterLine_C*        sicknessLineRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::AddSicknessLine(class UParameterLine_C* sicknessLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AddSicknessLine");

	USicknesses_C_AddSicknessLine_Params fn_params;
	fn_params.sicknessLineRef = sicknessLineRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SicknessName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SicknessTextValue              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SicknessMaxValue               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParameterLine_C*        sicknessLine                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::CreateSicknessLineFromText(const struct FText& SicknessName, const struct FText& SicknessTextValue, const struct FText& SicknessMaxValue, class UParameterLine_C** sicknessLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText");

	USicknesses_C_CreateSicknessLineFromText_Params fn_params;
	fn_params.SicknessName = SicknessName;
	fn_params.SicknessTextValue = SicknessTextValue;
	fn_params.SicknessMaxValue = SicknessMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (sicknessLine != nullptr)
		*sicknessLine = fn_params.sicknessLine;
}


// Function Sicknesses.Sicknesses_C.GetSicknesses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USickness*>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USickness*> USicknesses_C::GetSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetSicknesses");

	USicknesses_C_GetSicknesses_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.SetSicknessCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sicknessCountToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::SetSicknessCount(int sicknessCountToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SetSicknessCount");

	USicknesses_C_SetSicknessCount_Params fn_params;
	fn_params.sicknessCountToSet = sicknessCountToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.ClearSicknessLines
// (Public, BlueprintCallable, BlueprintEvent)

void USicknesses_C::ClearSicknessLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ClearSicknessLines");

	USicknesses_C_ClearSicknessLines_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CountSicknesses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            numberOfSicknesses             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::CountSicknesses(int* numberOfSicknesses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CountSicknesses");

	USicknesses_C_CountSicknesses_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (numberOfSicknesses != nullptr)
		*numberOfSicknesses = fn_params.numberOfSicknesses;
}


// Function Sicknesses.Sicknesses_C.HasSicknessCountChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           sicknessCountChanged           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::HasSicknessCountChanged(bool* sicknessCountChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasSicknessCountChanged");

	USicknesses_C_HasSicknessCountChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (sicknessCountChanged != nullptr)
		*sicknessCountChanged = fn_params.sicknessCountChanged;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknesses
// (Public, BlueprintCallable, BlueprintEvent)

void USicknesses_C::UpdateSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknesses");

	USicknesses_C_UpdateSicknesses_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USicknesses_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetTitleText");

	USicknesses_C_GetTitleText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USicknesses_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetDefaultTitle");

	USicknesses_C_GetDefaultTitle_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = fn_params.defaultTitle;
}


// Function Sicknesses.Sicknesses_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void USicknesses_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SelectCustomColor");

	USicknesses_C_SelectCustomColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = fn_params.Color;
}


// Function Sicknesses.Sicknesses_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USicknesses_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.Construct");

	USicknesses_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnMinimize");

	USicknesses_C_OnMinimize_Params fn_params;
	fn_params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void USicknesses_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnPrisonerSet");

	USicknesses_C_OnPrisonerSet_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void USicknesses_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateContent");

	USicknesses_C_UpdateContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm
// (BlueprintCallable, BlueprintEvent)

void USicknesses_C::SicknessEmergedShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm");

	USicknesses_C_SicknessEmergedShouldActivateAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm
// (BlueprintCallable, BlueprintEvent)

void USicknesses_C::SicknessGoneShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm");

	USicknesses_C_SicknessGoneShouldDeactivateAlarm_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::ExecuteUbergraph_Sicknesses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses");

	USicknesses_C_ExecuteUbergraph_Sicknesses_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USicknesses_C::AlarmOffSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature");

	USicknesses_C_AlarmOffSicknessesEventDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USicknesses_C::AlarmOnSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature");

	USicknesses_C_AlarmOnSicknessesEventDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
