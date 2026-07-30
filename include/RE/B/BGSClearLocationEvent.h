#pragma once

namespace RE
{
	class BGSLocation;

	class BGSClearLocationEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSClearLocationEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation* location;  // 00
	};
	static_assert(sizeof(BGSClearLocationEvent) == 0x08);
}
