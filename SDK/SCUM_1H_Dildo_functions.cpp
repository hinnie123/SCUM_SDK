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

// Function 1H_Dildo.1H_Dildo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void A1H_Dildo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function 1H_Dildo.1H_Dildo_C.UserConstructionScript");

	A1H_Dildo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
