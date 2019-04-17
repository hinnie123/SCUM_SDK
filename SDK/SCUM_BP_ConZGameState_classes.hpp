#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConZGameState.BP_ConZGameState_C
// 0x0008 (0x05E8 - 0x05E0)
class ABP_ConZGameState_C : public AConZGameState
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConZGameState.BP_ConZGameState_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
