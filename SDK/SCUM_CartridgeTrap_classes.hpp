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

// BlueprintGeneratedClass CartridgeTrap.CartridgeTrap_C
// 0x0008 (0x0988 - 0x0980)
class ACartridgeTrap_C : public AExplosiveTrapItem
{
public:
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CartridgeTrap.CartridgeTrap_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
