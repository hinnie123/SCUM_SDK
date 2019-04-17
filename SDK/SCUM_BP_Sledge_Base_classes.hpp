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

// BlueprintGeneratedClass BP_Sledge_Base.BP_Sledge_Base_C
// 0x0028 (0x0948 - 0x0920)
class ABP_Sledge_Base_C : public ASledge
{
public:
	class UStaticMeshComponent*                        Collision;                                                // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgePassengerMountSlot*                   Passenger;                                                // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgeDriverMountSlot*                      Driver;                                                   // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgeSpringArmComponent*                   CameraBoom;                                               // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sledge_Base.BP_Sledge_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
