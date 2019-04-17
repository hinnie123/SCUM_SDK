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

// WidgetBlueprintGeneratedClass UI_TeammateName.UI_TeammateName_C
// 0x0018 (0x0220 - 0x0208)
class UUI_TeammateName_C : public UUserWidget
{
public:
	class UTextBlock*                                  PlayerName;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     _name;                                                    // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TeammateName.UI_TeammateName_C");
		return ptr;
	}


	void GetName(struct FString* Name);
	void SetName(const struct FString& Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
