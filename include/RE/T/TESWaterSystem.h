#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BSCullingProcess;
	class BSMultiBoundAABB;
	class BSMultiBoundNode;
	class NiAVObject;
	class NiNode;
	class TESWaterDisplacement;
	class TESWaterForm;
	class TESWaterNormals;
	class TESWaterObject;
	class TESWaterReflections;
	class TESWorldSpace;
	class WadingWaterData;

	class TESWaterSystem
	{
	public:
		[[nodiscard]] static TESWaterSystem* GetSingleton()
		{
			static REL::Relocation<TESWaterSystem**> singleton{ ID::TESWaterSystem::Singleton };
			return *singleton;
		}

		bool AddWater(NiAVObject* a_geometry, TESWaterForm* a_form, float a_height,
			BSTArray<NiPointer<BSMultiBoundAABB>>* a_bounds, bool a_forceNonHorizontal, bool a_addRipples)
		{
			using func_t = decltype(&TESWaterSystem::AddWater);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::AddWater };
			return func(this, a_geometry, a_form, a_height, a_bounds, a_forceNonHorizontal, a_addRipples);
		}

		bool RemoveWater(NiAVObject* a_geometry)
		{
			using func_t = decltype(&TESWaterSystem::RemoveWater);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::RemoveWater };
			return func(this, a_geometry);
		}

		void AddLODWater(NiAVObject* a_geometry, TESWorldSpace* a_world, NiNode* a_root,
			BSMultiBoundNode* a_parent, bool a_useWorldHeight)
		{
			using func_t = decltype(&TESWaterSystem::AddLODWater);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::AddLODWater };
			return func(this, a_geometry, a_world, a_root, a_parent, a_useWorldHeight);
		}

		void RemoveLODWater(NiAVObject* a_geometry, NiNode* a_root, BSMultiBoundNode* a_parent)
		{
			using func_t = decltype(&TESWaterSystem::RemoveLODWater);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::RemoveLODWater };
			return func(this, a_geometry, a_root, a_parent);
		}

		bool Enable()
		{
			using func_t = decltype(&TESWaterSystem::Enable);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::Enable };
			return func(this);
		}

		void UpdateWaterSystem(BSCullingProcess* a_process)
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterSystem);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::UpdateWaterSystem };
			return func(this, a_process);
		}

		void UpdateWaterDisplacementGeometry()
		{
			using func_t = decltype(&TESWaterSystem::UpdateWaterDisplacementGeometry);
			static REL::Relocation<func_t> func{ ID::TESWaterSystem::UpdateWaterDisplacementGeometry };
			return func(this);
		}

		// members
		std::byte                                 unk00[0x8];        // 000
		BSFixedString*                            type;              // 008
		std::byte                                 unk10[0x8];        // 010
		BSTArray<NiPointer<TESWaterObject>>       water;             // 018
		BSTArray<NiPointer<TESWaterReflections>>  reflections;       // 030
		BSTArray<NiPointer<TESWaterNormals>>      normals;           // 048
		BSTArray<NiPointer<TESWaterDisplacement>> displacement;      // 060
		std::byte                                 unk78[0x10];       // 078
		NiPointer<NiNode>                         waterRoot;         // 088
		std::byte                                 unk90[0x18];       // 090
		bool                                      enabled;           // 0A8
		std::byte                                 unkA9[0x7];        // 0A9
		bool                                      underwater;        // 0B0
		std::byte                                 unkB1[0x7];        // 0B1
		float                                     underwaterHeight;  // 0B8
		std::byte                                 unkBC[0x14];       // 0BC
		// Keyed by the native ActorHandle value.
		NiTPointerMap<std::uint32_t, WadingWaterData*> wadingWaterData;                 // 0D0
		std::byte                                      unkF0[0x18];                     // 0F0
		bool                                           skipNextUpdate;                  // 108
		std::byte                                      unk109[0xF];                     // 109
		BSSpinLock                                     lock;                            // 118
		NiPointer<NiAVObject>                          defaultDisplacementWaterObject;  // 120
	};
	// Static-buffer spacing cannot distinguish a 0x128 from a 0x130 object.
	static_assert(offsetof(TESWaterSystem, type) == 0x8);
	static_assert(offsetof(TESWaterSystem, water) == 0x18);
	static_assert(offsetof(TESWaterSystem, reflections) == 0x30);
	static_assert(offsetof(TESWaterSystem, normals) == 0x48);
	static_assert(offsetof(TESWaterSystem, displacement) == 0x60);
	static_assert(offsetof(TESWaterSystem, waterRoot) == 0x88);
	static_assert(offsetof(TESWaterSystem, enabled) == 0xA8);
	static_assert(offsetof(TESWaterSystem, underwater) == 0xB0);
	static_assert(offsetof(TESWaterSystem, underwaterHeight) == 0xB8);
	static_assert(offsetof(TESWaterSystem, wadingWaterData) == 0xD0);
	static_assert(offsetof(TESWaterSystem, skipNextUpdate) == 0x108);
	static_assert(offsetof(TESWaterSystem, lock) == 0x118);
	static_assert(offsetof(TESWaterSystem, defaultDisplacementWaterObject) == 0x120);
}
