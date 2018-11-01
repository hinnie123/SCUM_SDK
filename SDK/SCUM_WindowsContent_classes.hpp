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

// WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C
// 0x0020 (0x0260 - 0x0240)
class UWindowsContent_C : public UCustomGUIWindow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UCustomGUIWindow_C*                          _parentWindow;                                            // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UCustomGUIWindow_C*>                  _childrenWindows;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C");
		return ptr;
	}


	void GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets);
	void AddChildWindow(class UCustomGUIWindow_C* childWindowRef);
	void NotifyParentOnAlarmSwitchedOffOnContent();
	void NotifyParentOnAlarmRaisedOnContent();
	void NotifyParentOnWindowsContentSizeChanged();
	void SetParentWindow(class UCustomGUIWindow_C* parentWindowToSet);
	void GetParentWindow(class UCustomGUIWindow_C** parentWindow);
	void WindowContentSizeChanged();
	void ExecuteUbergraph_WindowsContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
