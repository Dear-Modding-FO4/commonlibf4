#pragma once

namespace RE
{
	class BGSIncreaseLevelEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSIncreaseLevelEvent::EventIndex };
			return *eventIdx;
		}

		// members
		std::uint32_t newLevel;  // 00
	};
	static_assert(sizeof(BGSIncreaseLevelEvent) == 0x04);
}
