#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
struct UMIDIDeviceManager_FindMIDIDevices_Params
{
	TArray<struct FFoundMIDIDevice>                    OutMIDIDevices;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMIDIDeviceController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
