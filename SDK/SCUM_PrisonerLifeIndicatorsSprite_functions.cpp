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

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPrisonerLifeIndicatorsSprite_C::Get_BloodDropBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1");

	UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBodyPart                      bodyPart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetImageVisibility(EBodyPart bodyPart, class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility");

	UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params params;
	params.bodyPart = bodyPart;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner");

	UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCircularProgressBarSprites_C* circularProgresBar             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetProgressBar(int Index, class UCircularProgressBarSprites_C** circularProgresBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar");

	UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularProgresBar != nullptr)
		*circularProgresBar = params.circularProgresBar;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::UpdateIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators");

	UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct");

	UPrisonerLifeIndicatorsSprite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick");

	UPrisonerLifeIndicatorsSprite_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
// (BlueprintCallable, BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::UpdateLifeIndicatorsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent");

	UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet");

	UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::ExecuteUbergraph_PrisonerLifeIndicatorsSprite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite");

	UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
