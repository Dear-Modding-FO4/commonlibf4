#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESPickNewIdleEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESPickNewIdleEvent>* GetEventSource()
		{
			using func_t = decltype(&TESPickNewIdleEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESPickNewIdleEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> actorRef;  // 00
	};
	static_assert(sizeof(TESPickNewIdleEvent) == 0x08);
}
