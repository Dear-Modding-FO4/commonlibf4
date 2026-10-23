#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE::REFREventCallbacks
{
	class IEventCallback;
}

namespace RE
{
	class TESScenePhaseEvent
	{
	public:
		enum class EventType : std::int32_t
		{
			kBegin = 0,
			kEnd = 1
		};

		[[nodiscard]] static BSTEventSource<TESScenePhaseEvent>* GetEventSource()
		{
			using func_t = decltype(&TESScenePhaseEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESScenePhaseEvent::GetEventSource };
			return func();
		}

		// members
		TESFormID                                           sceneFormID;   // 00
		std::uint32_t                                       phaseIndex;    // 04
		REX::TEnum<EventType>                               eventType;     // 08
		std::uint16_t                                       questStageID;  // 0C
		BSTSmartPointer<REFREventCallbacks::IEventCallback> callback;      // 10
	};
	static_assert(sizeof(TESScenePhaseEvent) == 0x18);
}
