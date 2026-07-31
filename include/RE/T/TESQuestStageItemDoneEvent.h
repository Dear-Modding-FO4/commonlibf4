#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class TESQuestStageItemDoneEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESQuestStageItemDoneEvent>* GetEventSource()
		{
			using func_t = decltype(&TESQuestStageItemDoneEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESQuestStageItemDoneEvent::GetEventSource };
			return func();
		}

		// members
		TESFormID     questFormID;  // 00
		std::uint16_t stageID;      // 04
		std::uint8_t  itemID;       // 06
	};
	static_assert(sizeof(TESQuestStageItemDoneEvent) == 0x08);
}
