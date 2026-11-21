#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRaiseEventCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRaiseEventCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbRaiseEventCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
		bool m_global;                // 0x18
		std::uint8_t pad19[0x3];      // 0x19
		std::int32_t m_externalId;    // 0x1C
	};
	static_assert(sizeof(hkbRaiseEventCommand) == 0x20);
	static_assert(offsetof(hkbRaiseEventCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbRaiseEventCommand, m_global) == 0x18);
	static_assert(offsetof(hkbRaiseEventCommand, m_externalId) == 0x1C);
}
