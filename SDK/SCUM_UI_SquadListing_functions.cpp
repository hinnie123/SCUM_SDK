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

// Function UI_SquadListing.UI_SquadListing_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            squadRank                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SquadName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FConZSquadEmblem        SquadEmblem                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FString                 SquadInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SquadScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_SquadListing_C::SetInfo(int squadRank, const struct FString& SquadName, const struct FConZSquadEmblem& SquadEmblem, const struct FString& SquadInfo, int SquadScore, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.SetInfo");

	UUI_SquadListing_C_SetInfo_Params fn_params;
	fn_params.squadRank = squadRank;
	fn_params.SquadName = SquadName;
	fn_params.SquadEmblem = SquadEmblem;
	fn_params.SquadInfo = SquadInfo;
	fn_params.SquadScore = SquadScore;
	fn_params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadListing.UI_SquadListing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SquadListing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.Construct");

	UUI_SquadListing_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadListing_C::ExecuteUbergraph_UI_SquadListing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing");

	UUI_SquadListing_C_ExecuteUbergraph_UI_SquadListing_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
