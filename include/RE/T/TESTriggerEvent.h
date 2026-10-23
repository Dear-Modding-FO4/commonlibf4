#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESTriggerEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESTriggerEvent>* GetEventSource()
		{
			using func_t = decltype(&TESTriggerEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESTriggerEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> triggerRef;  // 00
		NiPointer<TESObjectREFR> actionRef;   // 08
	};
	static_assert(sizeof(TESTriggerEvent) == 0x10);
}
