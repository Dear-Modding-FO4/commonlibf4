#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESMagicWardHitEvent
	{
	public:
		// layout confirmed; enumerators not yet recovered
		enum class Status : std::int32_t;

		[[nodiscard]] static BSTEventSource<TESMagicWardHitEvent>* GetEventSource()
		{
			using func_t = decltype(&TESMagicWardHitEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESMagicWardHitEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> targetRef;    // 00
		NiPointer<TESObjectREFR> casterRef;    // 08
		TESFormID                spellFormID;  // 10
		REX::TEnum<Status>       status;       // 14
	};
	static_assert(sizeof(TESMagicWardHitEvent) == 0x18);
}
