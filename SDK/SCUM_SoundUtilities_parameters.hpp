#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
struct USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params
{
	int                                                BaseMidiNote;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetMidiNote;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
struct USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params
{
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
struct USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params
{
	int                                                MidiNote;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
struct USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params
{
	float                                              BeatsPerMinute;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeatMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivisionsOfWholeNote;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
