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

// BlueprintGeneratedClass BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C
// 0x0014 (0x0634 - 0x0620)
class UBP_SphereProximityTriggerComponent_C : public USphereProximityTriggerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (Transient, DuplicateTransient)
	float                                              MaxBeepPeriod;                                            // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBeepPeriod;                                            // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeepDelayCounter;                                         // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SphereProximityTriggerComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
