#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESEquipEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESEquipEvent>* GetEventSource()
		{
			using func_t = decltype(&TESEquipEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESEquipEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> actor;         // 00
		std::uint32_t            baseObject;    // 08
		std::uint32_t            originalRefr;  // 0C
		std::uint16_t            uniqueID;      // 10
		bool                     equipped;      // 12
	};
	static_assert(sizeof(TESEquipEvent) == 0x18);
}
