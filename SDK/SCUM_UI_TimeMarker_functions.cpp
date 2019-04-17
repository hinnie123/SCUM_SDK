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

// Function UI_TimeMarker.UI_TimeMarker_C.SetNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TimeMarker_C::SetNumber(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TimeMarker.UI_TimeMarker_C.SetNumber");

	UUI_TimeMarker_C_SetNumber_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
