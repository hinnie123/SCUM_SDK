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

// BlueprintGeneratedClass Menu.Menu_C
// 0x0038 (0x0368 - 0x0330)
class AMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UMenuPlayAsDroneOverlayWidget_C*             DroneOverlayWidget;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ASceneCapture2D*                             HeadCapture_ExecuteUbergraph_Menu_RefProperty;            // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_Menu_RefProperty;      // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Prisoner_C*                              BP_Prisoner_4136_ExecuteUbergraph_Menu_RefProperty;       // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      FollowsCursorActor_ExecuteUbergraph_Menu_RefProperty;     // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          GlobalPostProcessVolume_0_EdGraph_0_RefProperty;          // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu.Menu_C");
		return ptr;
	}


	void UpdateDroneVisual();
	void InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Recapture();
	void ExecuteUbergraph_Menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
