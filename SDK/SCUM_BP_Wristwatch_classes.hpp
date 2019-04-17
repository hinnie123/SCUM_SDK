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

// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// 0x0018 (0x0350 - 0x0338)
class ABP_Wristwatch_C : public AWristwatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            FaceWidget;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C");
		return ptr;
	}


	void UpdateFatnessLeannessVisuals();
	void UserConstructionScript();
	void SetTime(float* Value);
	void ReceiveBeginPlay();
	void ToggleDisplayVisibility(bool* Visiblity);
	void SetDisplayBrightness(float* Value);
	void ExecuteUbergraph_BP_Wristwatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
