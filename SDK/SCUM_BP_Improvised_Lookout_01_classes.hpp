#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C
// 0x0020 (0x0700 - 0x06E0)
class ABP_Improvised_Lookout_01_C : public ALookoutItem
{
public:
	TArray<struct FLadderMarker>                       LadderMarkers;                                            // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWindowMarker>                       WindowMarkers;                                            // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C");
		return ptr;
	}


	void GetWindowMarkers(TArray<struct FWindowMarker>* Result);
	void GetLadderMarkers(TArray<struct FLadderMarker>* Result);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
