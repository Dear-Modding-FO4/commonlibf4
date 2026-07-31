#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE::REFREventCallbacks
{
	class IEventCallback;
}

namespace RE
{
	class TESQuestStageEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESQuestStageEvent>* GetEventSource()
		{
			using func_t = decltype(&TESQuestStageEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESQuestStageEvent::GetEventSource };
			return func();
		}

		// members
		BSTSmartPointer<REFREventCallbacks::IEventCallback> callback;     // 00
		TESFormID                                           questFormID;  // 08
		std::uint16_t                                       stageID;      // 0C
		std::uint8_t                                        itemID;       // 0E
	};
	static_assert(sizeof(TESQuestStageEvent) == 0x10);
}
