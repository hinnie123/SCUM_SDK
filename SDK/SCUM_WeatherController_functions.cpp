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

// Function WeatherController.WeatherController_C.RecaptureSkyProbe
// (Public, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::RecaptureSkyProbe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.RecaptureSkyProbe");

	AWeatherController_C_RecaptureSkyProbe_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.LerpFactors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::LerpFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.LerpFactors");

	AWeatherController_C_LerpFactors_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateSkyParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::UpdateSkyParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateSkyParameters");

	AWeatherController_C_UpdateSkyParameters_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.sunCompute
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::sunCompute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.sunCompute");

	AWeatherController_C_sunCompute_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UserConstructionScript");

	AWeatherController_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.NetworkSyncDayTime
// (BlueprintCallable, BlueprintEvent)

void AWeatherController_C::NetworkSyncDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.NetworkSyncDayTime");

	AWeatherController_C_NetworkSyncDayTime_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.StartWeatherTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          newStormIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::StartWeatherTransition(float newStormIntensity, float TransitionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.StartWeatherTransition");

	AWeatherController_C_StartWeatherTransition_Params fn_params;
	fn_params.newStormIntensity = newStormIntensity;
	fn_params.TransitionTime = TransitionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveTick");

	AWeatherController_C_ReceiveTick_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeatherController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveBeginPlay");

	AWeatherController_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Recapture
// (BlueprintCallable, BlueprintEvent)

void AWeatherController_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Recapture");

	AWeatherController_C_Recapture_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AWeatherController_C::Event_SetWindDirection(const struct FVector2D& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindDirection");

	AWeatherController_C_Event_SetWindDirection_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::Event_SetWindSpeed(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindSpeed");

	AWeatherController_C_Event_SetWindSpeed_Params fn_params;
	fn_params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ChangeWindDir
// (BlueprintCallable, BlueprintEvent)

void AWeatherController_C::ChangeWindDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ChangeWindDir");

	AWeatherController_C_ChangeWindDir_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateWeatherVisuals
// (Event, Public, BlueprintEvent)

void AWeatherController_C::UpdateWeatherVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateWeatherVisuals");

	AWeatherController_C_UpdateWeatherVisuals_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::ExecuteUbergraph_WeatherController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController");

	AWeatherController_C_ExecuteUbergraph_WeatherController_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
