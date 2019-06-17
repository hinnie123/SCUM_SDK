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

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            BaseMidiNote                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetMidiNote                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params;
	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USoundUtilitiesBPFunctionLibrary::STATIC_GetMIDIPitchFromFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");

	USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// int                            MidiNote                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetFrequencyFromMIDIPitch(int MidiNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params;
	params.MidiNote = MidiNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeatMultiplier                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            DivisionsOfWholeNote           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");

	USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params;
	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
