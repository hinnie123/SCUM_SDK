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

// Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)

void UCustomGUIWindow_C::GetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.GetTitle");

	UCustomGUIWindow_C_GetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomGUIWindow_C::SetTitle(const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.SetTitle");

	UCustomGUIWindow_C_SetTitle_Params params;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UCustomGUIWindow_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent");

	UCustomGUIWindow_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UCustomGUIWindow_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent");

	UCustomGUIWindow_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGUIWindow_C::ExecuteUbergraph_CustomGUIWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow");

	UCustomGUIWindow_C_ExecuteUbergraph_CustomGUIWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
