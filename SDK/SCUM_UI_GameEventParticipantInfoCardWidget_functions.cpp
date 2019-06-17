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

// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventParticipantInfoCardWidget_C::UpdateStats(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats");

	UUI_GameEventParticipantInfoCardWidget_C_UpdateStats_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventParticipantInfoCardWidget_C::ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget");

	UUI_GameEventParticipantInfoCardWidget_C_ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
