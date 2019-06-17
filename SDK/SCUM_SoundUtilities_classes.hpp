#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SoundUtilities.SoundSimple
// 0x0018 (0x00C0 - 0x00A8)
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                               // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundWave*                                  SoundWave;                                                // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}

};


// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}


	float STATIC_GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	int STATIC_GetMIDIPitchFromFrequency(float Frequency);
	float STATIC_GetFrequencyFromMIDIPitch(int MidiNote);
	float STATIC_GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
