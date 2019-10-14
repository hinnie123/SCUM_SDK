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

// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct");

	UUI_HandsHolstersWidget3_C_PreConstruct_Params fn_params;
	fn_params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::ExecuteUbergraph_UI_HandsHolstersWidget3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3");

	UUI_HandsHolstersWidget3_C_ExecuteUbergraph_UI_HandsHolstersWidget3_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
