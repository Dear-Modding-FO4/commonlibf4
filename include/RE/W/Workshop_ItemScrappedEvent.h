#pragma once

#include "RE/B/BSTEvent.h"

namespace RE::Workshop
{
	class ItemScrappedEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<ItemScrappedEvent>* GetEventSource()
		{
			using func_t = decltype(&ItemScrappedEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::Workshop::ItemScrappedEvent::GetEventSource };
			return func();
		}
	};
	static_assert(std::is_empty_v<ItemScrappedEvent>);
}
