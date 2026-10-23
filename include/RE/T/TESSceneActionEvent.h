#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE::REFREventCallbacks
{
	class IEventCallback;
}

namespace RE
{
	class TESSceneActionEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESSceneActionEvent>* GetEventSource()
		{
			using func_t = decltype(&TESSceneActionEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESSceneActionEvent::GetEventSource };
			return func();
		}

		// members
		TESFormID                                           sceneFormID;   // 00
		std::uint32_t                                       actionID;      // 04
		TESFormID                                           questFormID;   // 08
		std::uint32_t                                       refAliasID;    // 0C
		std::uint16_t                                       questStageID;  // 10
		BSTSmartPointer<REFREventCallbacks::IEventCallback> callback;      // 18
	};
	static_assert(sizeof(TESSceneActionEvent) == 0x20);
}
