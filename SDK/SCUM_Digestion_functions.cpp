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

// Function Digestion.Digestion_C.HasContentSizeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            oldDigestionItemCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            newDigestionItemCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           contentSizeChanged             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::HasContentSizeChanged(int oldDigestionItemCount, int newDigestionItemCount, bool* contentSizeChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.HasContentSizeChanged");

	UDigestion_C_HasContentSizeChanged_Params fn_params;
	fn_params.oldDigestionItemCount = oldDigestionItemCount;
	fn_params.newDigestionItemCount = newDigestionItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (contentSizeChanged != nullptr)
		*contentSizeChanged = fn_params.contentSizeChanged;
}


// Function Digestion.Digestion_C.PrintArrayOfDigestionItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDigestionItem*>  digestionItemsTArray           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDigestion_C::PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.PrintArrayOfDigestionItems");

	UDigestion_C_PrintArrayOfDigestionItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (digestionItemsTArray != nullptr)
		*digestionItemsTArray = fn_params.digestionItemsTArray;
}


// Function Digestion.Digestion_C.UpdateDigestionItemsCount
// (Public, BlueprintCallable, BlueprintEvent)

void UDigestion_C::UpdateDigestionItemsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateDigestionItemsCount");

	UDigestion_C_UpdateDigestionItemsCount_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.DigestionItemToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDigestionItem*          digestionItemRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   digestionItemName              (Parm, OutParm)
// struct FText                   digestionItemID                (Parm, OutParm)
// struct FText                   digestionItemWeight            (Parm, OutParm)

void UDigestion_C::DigestionItemToText(class UDigestionItem* digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.DigestionItemToText");

	UDigestion_C_DigestionItemToText_Params fn_params;
	fn_params.digestionItemRef = digestionItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (digestionItemName != nullptr)
		*digestionItemName = fn_params.digestionItemName;
	if (digestionItemID != nullptr)
		*digestionItemID = fn_params.digestionItemID;
	if (digestionItemWeight != nullptr)
		*digestionItemWeight = fn_params.digestionItemWeight;
}


// Function Digestion.Digestion_C.FillDigestionLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParameterLine_C*        digestionLineRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDigestionItem*          digestionItemRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::FillDigestionLine(class UParameterLine_C* digestionLineRef, class UDigestionItem* digestionItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.FillDigestionLine");

	UDigestion_C_FillDigestionLine_Params fn_params;
	fn_params.digestionLineRef = digestionLineRef;
	fn_params.digestionItemRef = digestionItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.CreateDigestionLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDigestionItem*          digestionItemRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParameterLine_C*        digestionParameterLine         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDigestion_C::CreateDigestionLine(class UDigestionItem* digestionItemRef, class UParameterLine_C** digestionParameterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CreateDigestionLine");

	UDigestion_C_CreateDigestionLine_Params fn_params;
	fn_params.digestionItemRef = digestionItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (digestionParameterLine != nullptr)
		*digestionParameterLine = fn_params.digestionParameterLine;
}


// Function Digestion.Digestion_C.ShowDigestion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::ShowDigestion(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ShowDigestion");

	UDigestion_C_ShowDigestion_Params fn_params;
	fn_params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.InitDigestionItems
// (Public, BlueprintCallable, BlueprintEvent)

void UDigestion_C::InitDigestionItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.InitDigestionItems");

	UDigestion_C_InitDigestionItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.AddDigestionLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParameterLine_C*        digestionLineRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDigestion_C::AddDigestionLine(int Index, class UParameterLine_C* digestionLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.AddDigestionLine");

	UDigestion_C_AddDigestionLine_Params fn_params;
	fn_params.Index = Index;
	fn_params.digestionLineRef = digestionLineRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.CreateDigestionLineFromText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   digestionItemName              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   digestionItemID                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   digestionItemWeightRemained    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParameterLine_C*        digestionLine                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDigestion_C::CreateDigestionLineFromText(const struct FText& digestionItemName, const struct FText& digestionItemID, const struct FText& digestionItemWeightRemained, class UParameterLine_C** digestionLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CreateDigestionLineFromText");

	UDigestion_C_CreateDigestionLineFromText_Params fn_params;
	fn_params.digestionItemName = digestionItemName;
	fn_params.digestionItemID = digestionItemID;
	fn_params.digestionItemWeightRemained = digestionItemWeightRemained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (digestionLine != nullptr)
		*digestionLine = fn_params.digestionLine;
}


// Function Digestion.Digestion_C.GetDigestionItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UDigestionItem*>  digestionItemsTArrayRef        (Parm, OutParm, ZeroConstructor)

void UDigestion_C::GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetDigestionItems");

	UDigestion_C_GetDigestionItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (digestionItemsTArrayRef != nullptr)
		*digestionItemsTArrayRef = fn_params.digestionItemsTArrayRef;
}


// Function Digestion.Digestion_C.SetDigestionCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            digestionItemsCountToSet       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::SetDigestionCount(int digestionItemsCountToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.SetDigestionCount");

	UDigestion_C_SetDigestionCount_Params fn_params;
	fn_params.digestionItemsCountToSet = digestionItemsCountToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.ClearDigestionLines
// (Public, BlueprintCallable, BlueprintEvent)

void UDigestion_C::ClearDigestionLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ClearDigestionLines");

	UDigestion_C_ClearDigestionLines_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.CountDigestionItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            numberOfDigestionItems         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::CountDigestionItems(int* numberOfDigestionItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CountDigestionItems");

	UDigestion_C_CountDigestionItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (numberOfDigestionItems != nullptr)
		*numberOfDigestionItems = fn_params.numberOfDigestionItems;
}


// Function Digestion.Digestion_C.HasDigestionCountChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           sicknessCountChanged           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::HasDigestionCountChanged(bool* sicknessCountChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.HasDigestionCountChanged");

	UDigestion_C_HasDigestionCountChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (sicknessCountChanged != nullptr)
		*sicknessCountChanged = fn_params.sicknessCountChanged;
}


// Function Digestion.Digestion_C.UpdateDigestion
// (Public, BlueprintCallable, BlueprintEvent)

void UDigestion_C::UpdateDigestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateDigestion");

	UDigestion_C_UpdateDigestion_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDigestion_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetTitleText");

	UDigestion_C_GetTitleText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function Digestion.Digestion_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UDigestion_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetDefaultTitle");

	UDigestion_C_GetDefaultTitle_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = fn_params.defaultTitle;
}


// Function Digestion.Digestion_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UDigestion_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.SelectCustomColor");

	UDigestion_C_SelectCustomColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = fn_params.Color;
}


// Function Digestion.Digestion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDigestion_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.Construct");

	UDigestion_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.OnMinimize");

	UDigestion_C_OnMinimize_Params fn_params;
	fn_params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UDigestion_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.OnPrisonerSet");

	UDigestion_C_OnPrisonerSet_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void UDigestion_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateContent");

	UDigestion_C_UpdateContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Digestion.Digestion_C.ExecuteUbergraph_Digestion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDigestion_C::ExecuteUbergraph_Digestion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ExecuteUbergraph_Digestion");

	UDigestion_C_ExecuteUbergraph_Digestion_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
