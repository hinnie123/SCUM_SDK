#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SoundUtilities.SoundVariation
// 0x0020
struct FSoundVariation
{
	class USoundWave*                                  SoundWave;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityWeight;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
