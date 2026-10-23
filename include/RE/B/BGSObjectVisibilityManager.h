#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BSTSingleton.h"
#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class TESObjectREFR;

	class __declspec(novtable) BGSObjectVisibilityManager :
		public TESForm,                                          // 00
		public BSTSingletonImplicit<BGSObjectVisibilityManager>  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSObjectVisibilityManager };
		static constexpr auto VTABLE{ VTABLE::BGSObjectVisibilityManager };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kOVIS };

		struct ObjectVisibilityData
		{
		public:
			// members
			NiPoint3 min;  // 00
			NiPoint3 max;  // 0C
		};
		static_assert(sizeof(ObjectVisibilityData) == 0x18);

		struct alignas(0x10) ReferenceBox
		{
		public:
			// members
			std::uint32_t unk00;       // 00
			NiMatrix3     rotation;    // 10
			NiPoint3      center;      // 40
			NiPoint3      halfExtent;  // 4C
			std::byte     unk58[0x8];  // 58
			float         radius;      // 60
			std::byte     unk64[0xC];  // 64
		};
		static_assert(sizeof(ReferenceBox) == 0x70);

		[[nodiscard]] static BGSObjectVisibilityManager* GetSingleton()
		{
			using func_t = decltype(&BGSObjectVisibilityManager::GetSingleton);
			static REL::Relocation<func_t> func{ ID::BGSObjectVisibilityManager::Singleton };
			return func();
		}

		void AddReference(TESObjectREFR& a_ref)
		{
			using func_t = decltype(&BGSObjectVisibilityManager::AddReference);
			static REL::Relocation<func_t> func{ ID::BGSObjectVisibilityManager::AddReference };
			return func(this, a_ref);
		}

		[[nodiscard]] std::uint32_t CalculateVisibilityCount(const NiPoint3& a_start, const NiPoint3& a_end, std::uint32_t a_maxCount)
		{
			using func_t = decltype(&BGSObjectVisibilityManager::CalculateVisibilityCount);
			static REL::Relocation<func_t> func{ ID::BGSObjectVisibilityManager::CalculateVisibilityCount };
			return func(this, a_start, a_end, a_maxCount);
		}

		void RemoveReference(TESObjectREFR& a_ref)
		{
			using func_t = decltype(&BGSObjectVisibilityManager::RemoveReference);
			static REL::Relocation<func_t> func{ ID::BGSObjectVisibilityManager::RemoveReference };
			return func(this, a_ref);
		}

		// members
		BSTHashMap<std::uint32_t, ObjectVisibilityData> visibilityData;  // 20
		BSTHashMap<ObjectRefHandle, ReferenceBox>       referenceBoxes;  // 50
	};
	static_assert(sizeof(BGSObjectVisibilityManager) == 0x80);
}
