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

// BlueprintGeneratedClass Claymore.Claymore_C
// 0x0018 (0x0998 - 0x0980)
class AClaymore_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Claymore.Claymore_C");
		return ptr;
	}


	void UserConstructionScript();
	void BP_OnArmed();
	void BP_OnDisarmed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Claymore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
