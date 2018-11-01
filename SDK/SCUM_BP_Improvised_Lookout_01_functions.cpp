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

// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetWindowMarkers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWindowMarker>   Result                         (Parm, OutParm, ZeroConstructor)

void ABP_Improvised_Lookout_01_C::GetWindowMarkers(TArray<struct FWindowMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetWindowMarkers");

	ABP_Improvised_Lookout_01_C_GetWindowMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetLadderMarkers
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLadderMarker>   Result                         (Parm, OutParm, ZeroConstructor)

void ABP_Improvised_Lookout_01_C::GetLadderMarkers(TArray<struct FLadderMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetLadderMarkers");

	ABP_Improvised_Lookout_01_C_GetLadderMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Improvised_Lookout_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.UserConstructionScript");

	ABP_Improvised_Lookout_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
