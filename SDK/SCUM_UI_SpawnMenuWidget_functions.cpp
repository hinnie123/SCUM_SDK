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

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERespawnOption                 Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::EnableOption(ERespawnOption Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption");

	UUI_SpawnMenuWidget_C_EnableOption_Params fn_params;
	fn_params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   spawnTag                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSpawnTag(struct FName* spawnTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag");

	UUI_SpawnMenuWidget_C_GetSpawnTag_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (spawnTag != nullptr)
		*spawnTag = fn_params.spawnTag;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnMenuWidget_C::GetSectorSelectorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility");

	UUI_SpawnMenuWidget_C_GetSectorSelectorVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions");

	UUI_SpawnMenuWidget_C_UpdateOptions_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_RemainingFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_ColorAndOpacity_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_CurrentFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_ColorAndOpacity_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_RemainingFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_CurrentFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_TotalPriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText");

	UUI_SpawnMenuWidget_C_Get_TotalPriceText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateCurrentFP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP");

	UUI_SpawnMenuWidget_C_UpdateCurrentFP_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice");

	UUI_SpawnMenuWidget_C_UpdateTotalPrice_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectionValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid");

	UUI_SpawnMenuWidget_C_SelectionValid_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = fn_params.Valid;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSelectedLocation(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation");

	UUI_SpawnMenuWidget_C_GetSelectedLocation_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = fn_params.Index;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectLocation(class UUI_SpawnChoiceWidget_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation");

	UUI_SpawnMenuWidget_C_SelectLocation_Params fn_params;
	fn_params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params fn_params;
	fn_params._this = _this;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params fn_params;
	fn_params._this = _this;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params fn_params;
	fn_params._this = _this;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpawnMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct");

	UUI_SpawnMenuWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params fn_params;
	fn_params._this = _this;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick");

	UUI_SpawnMenuWidget_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::ExecuteUbergraph_UI_SpawnMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget");

	UUI_SpawnMenuWidget_C_ExecuteUbergraph_UI_SpawnMenuWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
