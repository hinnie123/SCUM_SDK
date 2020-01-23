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

// BlueprintGeneratedClass Improvised_Barbecue.Improvised_Barbecue_C
// 0x0008 (0x0848 - 0x0840)
class AImprovised_Barbecue_C : public AItem
{
public:
	class UStaticMeshComponent*                        SM_Improvised_Barbecue_01;                                // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Improvised_Barbecue.Improvised_Barbecue_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
