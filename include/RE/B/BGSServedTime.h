#pragma once

namespace RE
{
	class BGSLocation;
	class TESForm;

	class BGSServedTime
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSServedTime::EventIndex };
			return *eventIdx;
		}

		// members
		BGSLocation*  location;    // 00
		TESForm*      crimeGroup;  // 08
		std::uint32_t crimeGold;   // 10
		std::uint32_t daysInJail;  // 14
	};
	static_assert(sizeof(BGSServedTime) == 0x18);
}
