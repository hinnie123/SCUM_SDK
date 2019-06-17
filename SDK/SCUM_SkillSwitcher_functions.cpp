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

// Function SkillSwitcher.SkillSwitcher_C.IsDifferenceSignificant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          referentValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          currentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkillSwitcher_C::IsDifferenceSignificant(float referentValue, float currentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.IsDifferenceSignificant");

	USkillSwitcher_C_IsDifferenceSignificant_Params params;
	params.referentValue = referentValue;
	params.currentValue = currentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillSwitcher.SkillSwitcher_C.RoundTo1DecPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          floatNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          floatTo1Dec                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::RoundTo1DecPos(float floatNum, float* floatTo1Dec)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.RoundTo1DecPos");

	USkillSwitcher_C_RoundTo1DecPos_Params params;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (floatTo1Dec != nullptr)
		*floatTo1Dec = params.floatTo1Dec;
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateIntelligenceAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::DeactivateIntelligenceAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateIntelligenceAlarm");

	USkillSwitcher_C_DeactivateIntelligenceAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateDexterityAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::DeactivateDexterityAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateDexterityAlarm");

	USkillSwitcher_C_DeactivateDexterityAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateConstitutionAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::DeactivateConstitutionAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateConstitutionAlarm");

	USkillSwitcher_C_DeactivateConstitutionAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateStrengthAlarm
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::DeactivateStrengthAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateStrengthAlarm");

	USkillSwitcher_C_DeactivateStrengthAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.InitReferentAttributeValues
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::InitReferentAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitReferentAttributeValues");

	USkillSwitcher_C_InitReferentAttributeValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.SetParents
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::SetParents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SetParents");

	USkillSwitcher_C_SetParents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.shouldAlarmBeOn");

	USkillSwitcher_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillIntelligenceAlarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::CheckSkillIntelligenceAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillIntelligenceAlarm");

	USkillSwitcher_C_CheckSkillIntelligenceAlarm_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillDexterityAlarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::CheckSkillDexterityAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillDexterityAlarm");

	USkillSwitcher_C_CheckSkillDexterityAlarm_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillConstitutionAlarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::CheckSkillConstitutionAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillConstitutionAlarm");

	USkillSwitcher_C_CheckSkillConstitutionAlarm_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillStrengthAlarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::CheckSkillStrengthAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillStrengthAlarm");

	USkillSwitcher_C_CheckSkillStrengthAlarm_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.SetPrisonerToMonitorOnChildren
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SetPrisonerToMonitorOnChildren");

	USkillSwitcher_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateAttributeLevels
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::UpdateAttributeLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateAttributeLevels");

	USkillSwitcher_C_UpdateAttributeLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateButtonBorderSizes
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::UpdateButtonBorderSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateButtonBorderSizes");

	USkillSwitcher_C_UpdateButtonBorderSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.SaveButtonBorderXSizes
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::SaveButtonBorderXSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SaveButtonBorderXSizes");

	USkillSwitcher_C_SaveButtonBorderXSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.ResetXSizes
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::ResetXSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ResetXSizes");

	USkillSwitcher_C_ResetXSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustXSizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          sizeIncreaseX0                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          sizeIncreaseX1                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          sizeIncreaseX2                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          sizeIncreaseX3                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::AdjustXSizes(float sizeIncreaseX0, float sizeIncreaseX1, float sizeIncreaseX2, float sizeIncreaseX3)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustXSizes");

	USkillSwitcher_C_AdjustXSizes_Params params;
	params.sizeIncreaseX0 = sizeIncreaseX0;
	params.sizeIncreaseX1 = sizeIncreaseX1;
	params.sizeIncreaseX2 = sizeIncreaseX2;
	params.sizeIncreaseX3 = sizeIncreaseX3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonSizes
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::AdjustButtonSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustButtonSizes");

	USkillSwitcher_C_AdjustButtonSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonPositions
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::AdjustButtonPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustButtonPositions");

	USkillSwitcher_C_AdjustButtonPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.HideButtonBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::HideButtonBorder(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.HideButtonBorder");

	USkillSwitcher_C_HideButtonBorder_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.ShowAllButtonBorders
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::ShowAllButtonBorders()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShowAllButtonBorders");

	USkillSwitcher_C_ShowAllButtonBorders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.SelectActiveSkillContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::SelectActiveSkillContent(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SelectActiveSkillContent");

	USkillSwitcher_C_SelectActiveSkillContent_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.GetActiveSkillContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkillsContent_C*        activeSkillContent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USkillSwitcher_C::GetActiveSkillContent(class USkillsContent_C** activeSkillContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.GetActiveSkillContent");

	USkillSwitcher_C_GetActiveSkillContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (activeSkillContent != nullptr)
		*activeSkillContent = params.activeSkillContent;
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContents
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::InitSkillContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContents");

	USkillSwitcher_C_InitSkillContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentTypes
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::InitSkillContentTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContentTypes");

	USkillSwitcher_C_InitSkillContentTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentsArray
// (Public, BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::InitSkillContentsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContentsArray");

	USkillSwitcher_C_InitSkillContentsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.GetSkillsCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            skillsCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::GetSkillsCount(int* skillsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.GetSkillsCount");

	USkillSwitcher_C_GetSkillsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (skillsCount != nullptr)
		*skillsCount = params.skillsCount;
}


// Function SkillSwitcher.SkillSwitcher_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.OnPrisonerSet");

	USkillSwitcher_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.Tick");

	USkillSwitcher_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillSwitcher_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.Construct");

	USkillSwitcher_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature
// (BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature");

	USkillSwitcher_C_BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature
// (BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature");

	USkillSwitcher_C_BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature
// (BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature");

	USkillSwitcher_C_BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature
// (BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature");

	USkillSwitcher_C_BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateSkillsEvent
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::UpdateSkillsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateSkillsEvent");

	USkillSwitcher_C_UpdateSkillsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.ShouldActivateAlarm
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShouldActivateAlarm");

	USkillSwitcher_C_ShouldActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.ShouldDeactivateAlarm
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShouldDeactivateAlarm");

	USkillSwitcher_C_ShouldDeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AlarmOnWindowContent");

	USkillSwitcher_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void USkillSwitcher_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AlarmOffWindowContent");

	USkillSwitcher_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSwitcher.SkillSwitcher_C.ExecuteUbergraph_SkillSwitcher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillSwitcher_C::ExecuteUbergraph_SkillSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ExecuteUbergraph_SkillSwitcher");

	USkillSwitcher_C_ExecuteUbergraph_SkillSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
