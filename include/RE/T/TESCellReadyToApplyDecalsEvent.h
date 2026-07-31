#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class TESObjectCELL;

	class TESCellReadyToApplyDecalsEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESCellReadyToApplyDecalsEvent>* GetEventSource()
		{
			using func_t = decltype(&TESCellReadyToApplyDecalsEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESCellReadyToApplyDecalsEvent::GetEventSource };
			return func();
		}

		// members
		TESObjectCELL* cell;  // 00
	};
	static_assert(sizeof(TESCellReadyToApplyDecalsEvent) == 0x08);
}
