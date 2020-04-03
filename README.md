# SCUM_SDK
SDK for the game SCUM

UPDATED FOR LATEST VERSION: 0.3.75.21392 [March 31, 2020]

Useful game info:
```
Objects:
4C 8B 15 ? ? ? ? 8D 43 01
\x4C\x8B\x15\x00\x00\x00\x00\x8D\x43\x01 xxx????xxx

TotalObjects: 
44 8B 15 ? ? ? ? 45 33 C9 45 85 D2
\x4C\x8B\x15\x00\x00\x00\x00\x8D\x43\x01 xxx????xxx

GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 5F
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x5F xxx????xxxxx

GWorld:
48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01
\x48\x8B\x1D\x00\x00\x00\x00\x48\x85\xDB\x74\x3B\x41\xB0\x01 xxx????xxxxxxxx

ProcessEvent: 65
CreateDefaultObject: 102

void init_sdk()
{
	const auto gname_addr = utils::find_pattern("48 8B 05 ? ? ? ? 48 85 C0 75 5F");
	auto offset = *(uint32_t*)(gname_addr + 3);
	SDK::FName::GNames = (SDK::TNameEntryArray*)(*(uintptr_t*)(gname_addr + 7 + offset));

	const auto objects_addr = utils::find_pattern("4C 8B 15 ? ? ? ? 8D 43 01");
	offset = *(int32_t*)(objects_addr + 3);
	SDK::TUObjectArray::g_objects = (uintptr_t)(objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);

	const auto total_objects_addr = utils::find_pattern("44 8B 15 ? ? ? ? 45 33 C9 45 85 D2");
	offset = *(int32_t*)(total_objects_addr + 3);
	SDK::TUObjectArray::g_total_objects = (uintptr_t)(total_objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);
}

Loop actors like so:
auto actors = g_World->PersistentLevel->GetActors();
for (size_t i = 0; i < actors.Num(); ++i)
{
	SDK::AActor* actor = actors[i];
}
```

Useful files:
- SCUM_Basic.cpp
- SCUM_Basic.hpp
- SCUM_CoreUObject_classes.hpp
- SCUM_CoreUObject_functions.cpp
- SCUM_Engine_classes.hpp
- SCUM_Engine_functions.cpp
- SCUM_ConZ_classes.hpp
- SCUM_ConZ_Functions.cpp
