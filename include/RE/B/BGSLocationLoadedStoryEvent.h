#pragma once

namespace RE
{
	class BGSLocation;

	class BGSLocationLoadedStoryEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSLocationLoadedStoryEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation* location;  // 00
	};
	static_assert(sizeof(BGSLocationLoadedStoryEvent) == 0x08);
}
