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

// BlueprintGeneratedClass BP_Sledge_Base.BP_Sledge_Base_C
// 0x0028 (0x0A50 - 0x0A28)
class ABP_Sledge_Base_C : public ASledge
{
public:
	class UStaticMeshComponent*                        Collision;                                                // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgePassengerMountSlot*                   Passenger;                                                // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgeDriverMountSlot*                      Driver;                                                   // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USledgeSpringArmComponent*                   CameraBoom;                                               // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

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
