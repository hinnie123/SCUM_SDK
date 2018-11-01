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

// BlueprintGeneratedClass Menu.Menu_C
// 0x0028 (0x0358 - 0x0330)
class AMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class ABP_Prisoner_C*                              BP_Prisoner_4136_ExecuteUbergraph_Menu_RefProperty;       // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_Menu_RefProperty;      // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      FollowsCursorActor_ExecuteUbergraph_Menu_RefProperty;     // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASceneCapture2D*                             HeadCapture_ExecuteUbergraph_Menu_RefProperty;            // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu.Menu_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Recapture();
	void ExecuteUbergraph_Menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
