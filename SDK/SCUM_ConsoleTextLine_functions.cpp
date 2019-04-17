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

// Function ConsoleTextLine.ConsoleTextLine_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            textColorToSet                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UConsoleTextLine_C::SetText(const struct FText& textToSet, const struct FLinearColor& textColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.SetText");

	UConsoleTextLine_C_SetText_Params params;
	params.textToSet = textToSet;
	params.textColorToSet = textColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleTextLine.ConsoleTextLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleTextLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.Construct");

	UConsoleTextLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleTextLine_C::ExecuteUbergraph_ConsoleTextLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine");

	UConsoleTextLine_C_ExecuteUbergraph_ConsoleTextLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
