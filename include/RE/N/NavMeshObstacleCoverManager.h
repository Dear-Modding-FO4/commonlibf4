#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSNavmeshObstacleCoverData.h"
#include "RE/B/BSTArrayRefCounted.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BSTSingleton.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPointer.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESBoundObject;

	class __declspec(novtable) NavMeshObstacleCoverManager :
		public TESForm,                                            // 00
		public BSTSingletonImplicit<NavMeshObstacleCoverManager>   // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMeshObstacleCoverManager };
		static constexpr auto VTABLE{ VTABLE::NavMeshObstacleCoverManager };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kNOCM };

		using BSNavmeshObstacleCoverDataArray = BSTArrayRefCounted<NiPointer<BSNavmeshObstacleCoverData>, BSTArrayHeapAllocator>;

		[[nodiscard]] static NavMeshObstacleCoverManager* GetSingleton()
		{
			using func_t = decltype(&NavMeshObstacleCoverManager::GetSingleton);
			static REL::Relocation<func_t> func{ ID::NavMeshObstacleCoverManager::Singleton };
			return func();
		}

		[[nodiscard]] BSNavmeshObstacleCoverData* GetObstacleCoverData(const BSFixedString& a_name, std::uint32_t a_index)
		{
			using func_t = decltype(&NavMeshObstacleCoverManager::GetObstacleCoverData);
			static REL::Relocation<func_t> func{ ID::NavMeshObstacleCoverManager::GetObstacleCoverData };
			return func(this, a_name, a_index);
		}

		[[nodiscard]] bool IsObstacle(const TESBoundObject& a_object)
		{
			using func_t = decltype(&NavMeshObstacleCoverManager::IsObstacle);
			static REL::Relocation<func_t> func{ ID::NavMeshObstacleCoverManager::IsObstacle };
			return func(this, a_object);
		}

		// members
		BSTHashMap<BSFixedString, BSTSmartPointer<BSNavmeshObstacleCoverDataArray>> coverDataMap;  // 20
	};
	static_assert(sizeof(NavMeshObstacleCoverManager) == 0x50);
}
