#pragma once

namespace RE
{
	class NiAVObject;
}

namespace RE::BSPrecomputedVisibility
{
	class MultiCellVisibilityData
	{
	public:
		[[nodiscard]] static MultiCellVisibilityData* GetSingleton()
		{
			static REL::Relocation<MultiCellVisibilityData**> singleton{ ID::BSPrecomputedVisibility::MultiCellVisibilityData::Singleton };
			return *singleton;
		}

		// Queue standalone 3D for the native dynamic-object visibility pass.
		// Attach it normally and retain it while registered. Changes take effect
		// when the engine next updates visibility, not immediately in this call.
		void RegisterDynamicObject(NiAVObject* a_object)
		{
			using func_t = decltype(&MultiCellVisibilityData::RegisterDynamicObject);
			static REL::Relocation<func_t> func{ ID::BSPrecomputedVisibility::MultiCellVisibilityData::RegisterDynamicObject };
			func(this, a_object);
		}

		// Pair registration with this call before detaching/releasing the 3D.
		// The native queue retains it until the removal is processed.
		void UnregisterDynamicObject(NiAVObject* a_object)
		{
			using func_t = decltype(&MultiCellVisibilityData::UnregisterDynamicObject);
			static REL::Relocation<func_t> func{ ID::BSPrecomputedVisibility::MultiCellVisibilityData::UnregisterDynamicObject };
			func(this, a_object);
		}

		[[nodiscard]] bool IsCellVisibilityActive(std::uint32_t a_formID)
		{
			using func_t = decltype(&MultiCellVisibilityData::IsCellVisibilityActive);
			static REL::Relocation<func_t> func{ ID::BSPrecomputedVisibility::MultiCellVisibilityData::IsCellVisibilityActive };
			return func(this, a_formID);
		}
	};
}
