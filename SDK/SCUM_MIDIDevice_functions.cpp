// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice> OutMIDIDevices                 (Parm, OutParm, ZeroConstructor)

void UMIDIDeviceManager::STATIC_FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices");

	UMIDIDeviceManager_FindMIDIDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = params.OutMIDIDevices;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MIDIBufferSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMIDIDeviceController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMIDIDeviceController* UMIDIDeviceManager::STATIC_CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController");

	UMIDIDeviceManager_CreateMIDIDeviceController_Params params;
	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
