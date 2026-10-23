#pragma once

namespace RE
{
	class TESQuest;

	class BGSStartQuestEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSStartQuestEvent::EventIndex };
			return *eventIdx;
		}

		// members
		TESQuest* quest;  // 00
	};
	static_assert(sizeof(BGSStartQuestEvent) == 0x08);
}
