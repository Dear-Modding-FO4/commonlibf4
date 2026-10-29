#pragma once

namespace RE
{
	class TESUniqueIDChangeEvent
	{
	public:
		// TESObjectREFR_Events::SendUniqueIDChange
		static void Send(std::uint16_t a_oldUniqueID, TESFormID a_oldBaseID, std::uint16_t a_newUniqueID, TESFormID a_newBaseID, TESFormID a_objectID)
		{
			using func_t = decltype(&TESUniqueIDChangeEvent::Send);
			static REL::Relocation<func_t> func{ ID::TESUniqueIDChangeEvent::Send };
			func(a_oldUniqueID, a_oldBaseID, a_newUniqueID, a_newBaseID, a_objectID);
		}

		// members
		TESFormID     oldBaseID;    // 00
		TESFormID     newBaseID;    // 04
		TESFormID     objectID;     // 08
		std::uint16_t oldUniqueID;  // 0C
		std::uint16_t newUniqueID;  // 0E
	};
	static_assert(sizeof(TESUniqueIDChangeEvent) == 0x10);
}
