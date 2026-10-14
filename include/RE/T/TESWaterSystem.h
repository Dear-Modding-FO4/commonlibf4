#pragma once

#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiPointer.h"

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
		std::byte                                 unk00[0x18];   // 000
		BSTArray<NiPointer<TESWaterObject>>       water;         // 018
		BSTArray<NiPointer<TESWaterReflections>>  reflections;   // 030
		BSTArray<NiPointer<TESWaterNormals>>      normals;       // 048
		BSTArray<NiPointer<TESWaterDisplacement>> displacement;  // 060
		std::byte                                 unk78[0x30];   // 078
		bool                                      enabled;       // 0A8
		std::byte                                 unkA9[0x6F];   // 0A9
		BSSpinLock                                lock;          // 118
	};
	static_assert(offsetof(TESWaterSystem, water) == 0x18);
	static_assert(offsetof(TESWaterSystem, reflections) == 0x30);
	static_assert(offsetof(TESWaterSystem, normals) == 0x48);
	static_assert(offsetof(TESWaterSystem, displacement) == 0x60);
	static_assert(offsetof(TESWaterSystem, enabled) == 0xA8);
	static_assert(offsetof(TESWaterSystem, lock) == 0x118);
}
