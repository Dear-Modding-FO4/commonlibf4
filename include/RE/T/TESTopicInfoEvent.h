#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPointer.h"

namespace RE::REFREventCallbacks
{
	class IEventCallback;
}

namespace RE
{
	class TESTopicInfoEvent
	{
	public:
		enum class EventType : std::int32_t
		{
			kBegin = 0,
			kEnd = 1
		};

		[[nodiscard]] static BSTEventSource<TESTopicInfoEvent>* GetEventSource()
		{
			using func_t = decltype(&TESTopicInfoEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESTopicInfoEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR>                            speakerRef;       // 00
		BSTSmartPointer<REFREventCallbacks::IEventCallback> callback;         // 08
		TESFormID                                           topicInfoFormID;  // 10
		REX::TEnum<EventType>                               eventType;        // 14
		std::uint32_t                                       stage;            // 18
	};
	static_assert(sizeof(TESTopicInfoEvent) == 0x20);
}
