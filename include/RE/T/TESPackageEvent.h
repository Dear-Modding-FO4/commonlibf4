#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESPackageEvent
	{
	public:
		enum class EventType : std::int32_t
		{
			kBegin = 0,
			kEnd = 1,
			kChange = 2
		};

		[[nodiscard]] static BSTEventSource<TESPackageEvent>* GetEventSource()
		{
			using func_t = decltype(&TESPackageEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESPackageEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> actorRef;       // 00
		TESFormID                packageFormID;  // 08
		REX::TEnum<EventType>    eventType;      // 0C
	};
	static_assert(sizeof(TESPackageEvent) == 0x10);
}
