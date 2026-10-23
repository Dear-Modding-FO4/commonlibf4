#pragma once

#include "RE/B/BSStringT.h"
#include "RE/E/EffectItemData.h"
#include "RE/M/MemoryManager.h"
#include "RE/T/TESCondition.h"

namespace RE
{
	class EffectItem
	{
	public:
		EffectItem* Ctor(EffectSetting* a_setting, float a_magnitude, std::int32_t a_duration, std::int32_t a_area)
		{
			using func_t = decltype(&EffectItem::Ctor);
			static REL::Relocation<func_t> func{ ID::EffectItem::Ctor };
			return func(this, a_setting, a_magnitude, a_duration, a_area);
		}

		[[nodiscard]] static EffectItem* Create(EffectSetting* a_setting, float a_magnitude, std::int32_t a_duration, std::int32_t a_area)
		{
			if (const auto mem = static_cast<EffectItem*>(RE::malloc(sizeof(EffectItem)))) {
				return mem->Ctor(a_setting, a_magnitude, a_duration, a_area);
			}
			return nullptr;
		}

		bool SetMagnitude(float a_magnitude)
		{
			using func_t = decltype(&EffectItem::SetMagnitude);
			static REL::Relocation<func_t> func{ ID::EffectItem::SetMagnitude };
			return func(this, a_magnitude);
		}

		bool SetDuration(std::int32_t a_duration)
		{
			using func_t = decltype(&EffectItem::SetDuration);
			static REL::Relocation<func_t> func{ ID::EffectItem::SetDuration };
			return func(this, a_duration);
		}

		bool SetArea(std::int32_t a_area)
		{
			using func_t = decltype(&EffectItem::SetArea);
			static REL::Relocation<func_t> func{ ID::EffectItem::SetArea };
			return func(this, a_area);
		}

		void RecalculateRawCost()
		{
			using func_t = decltype(&EffectItem::RecalculateRawCost);
			static REL::Relocation<func_t> func{ ID::EffectItem::RecalculateRawCost };
			return func(this);
		}

		void GetDescription(BSString* a_buffer, const char* a_beginTagFormat, const char* a_endTagFormat, float a_magnitude, float a_duration)
		{
			using func_t = decltype(&EffectItem::GetDescription);
			static REL::Relocation<func_t> func{ ID::EffectItem::GetDescription };
			return func(this, a_buffer, a_beginTagFormat, a_endTagFormat, a_magnitude, a_duration);
		}

		// members
		EffectItemData data;           // 00
		EffectSetting* effectSetting;  // 10
		float          rawCost;        // 18
		TESCondition   conditions;     // 20
	};
	static_assert(sizeof(EffectItem) == 0x28);
}
