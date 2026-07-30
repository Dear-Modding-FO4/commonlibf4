#pragma once

namespace RE
{
	class BGSLocation;
	class TESForm;

	class BGSEscapeJailEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSEscapeJailEvent::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation* location;    // 00
		TESForm*     crimeGroup;  // 08
	};
	static_assert(sizeof(BGSEscapeJailEvent) == 0x10);
}
