#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/P/PipboyDataGroup.h"

namespace RE
{
	class ConditionBoyEvent;

	namespace ActorItemEquipped
	{
		class Event;
	}

	namespace ActorValueEvents
	{
		class ActorValueChangedEvent;
	}

	namespace BGSInventoryItemEvent
	{
		class Event;
	}

	namespace BGSInventoryListEvent
	{
		class Event;
	}

	namespace PlayerActiveEffectChanged
	{
		class Event;
	}

	class __declspec(novtable) PipboyStatsData :
	    public PipboyDataGroup,                                         // 00
	    public BSTEventSink<ActorValueEvents::ActorValueChangedEvent>,  // 98
	    public BSTEventSink<BGSInventoryListEvent::Event>,              // A0
	    public BSTEventSink<PlayerActiveEffectChanged::Event>,          // A8
	    public BSTEventSink<ConditionBoyEvent>,                         // B0
	    public BSTEventSink<ActorItemEquipped::Event>,                  // B8
	    public BSTEventSink<BGSInventoryItemEvent::Event>               // C0
	{
	public:
		static constexpr auto RTTI{ RTTI::PipboyStatsData };
		static constexpr auto VTABLE{ VTABLE::PipboyStatsData };

		virtual ~PipboyStatsData() = default;

		virtual BSEventNotifyControl ProcessEvent(const ActorValueEvents::ActorValueChangedEvent& a_event, BSTEventSource<ActorValueEvents::ActorValueChangedEvent>* a_source) override;  // 01
		virtual BSEventNotifyControl ProcessEvent(const BGSInventoryListEvent::Event& a_event, BSTEventSource<BGSInventoryListEvent::Event>* a_source) override;                          // 01
		virtual BSEventNotifyControl ProcessEvent(const PlayerActiveEffectChanged::Event& a_event, BSTEventSource<PlayerActiveEffectChanged::Event>* a_source) override;                  // 01
		virtual BSEventNotifyControl ProcessEvent(const ConditionBoyEvent& a_event, BSTEventSource<ConditionBoyEvent>* a_source) override;                                                // 01
		virtual BSEventNotifyControl ProcessEvent(const ActorItemEquipped::Event& a_event, BSTEventSource<ActorItemEquipped::Event>* a_source) override;                                  // 01
		virtual BSEventNotifyControl ProcessEvent(const BGSInventoryItemEvent::Event& a_event, BSTEventSource<BGSInventoryItemEvent::Event>* a_source) override;                          // 01

		// override
		virtual void Populate(bool a_arg1) override;  // 01
		virtual void DoClearData() override;          // 02
		virtual void DoClearSink() override;          // 03

		// members
		PipboyObject*                                            playerStatsObject;       // C8
		PipboyArray*                                             activeEffectsArray;      // D0
		BSTHashMap<MagicItem*, PipboyObject*>                    activeEffectsMap;        // D8
		BSTHashMap<BSTSmartPointer<ActiveEffect>, PipboyObject*> activeEffectEntriesMap;  // 108
	};
	static_assert(sizeof(PipboyStatsData) == 0x138);
}
