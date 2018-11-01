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

// BlueprintGeneratedClass BP_MissionObjective.BP_MissionObjective_C
// 0x0018 (0x0340 - 0x0328)
class ABP_MissionObjective_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Changed;                                                  // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionObjective.BP_MissionObjective_C");
		return ptr;
	}


	void OnChanged();
	void GetDescription(struct FText* Value);
	void IsCompleted(bool* Value);
	void UserConstructionScript();
	void Changed__DelegateSignature(class ABP_MissionObjective_C* sender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
