#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class TESSceneEvent
	{
	public:
		enum class EventType : std::int32_t
		{
			kBegin = 0,
			kEnd = 1
		};

		[[nodiscard]] static BSTEventSource<TESSceneEvent>* GetEventSource()
		{
			using func_t = decltype(&TESSceneEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESSceneEvent::GetEventSource };
			return func();
		}

		// members
		TESFormID             sceneFormID;   // 00
		REX::TEnum<EventType> eventType;     // 04
		std::uint16_t         questStageID;  // 08
	};
	static_assert(sizeof(TESSceneEvent) == 0x0C);
}
