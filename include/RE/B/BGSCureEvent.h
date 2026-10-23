#pragma once

namespace RE
{
	class TESForm;

	class BGSCureEvent
	{
	public:
		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSCureEvent::EventIndex };
			return *eventIdx;
		}

		// members
		TESForm* infection;  // 00
	};
	static_assert(sizeof(BGSCureEvent) == 0x08);
}
