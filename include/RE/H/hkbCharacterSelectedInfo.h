#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterSelectedInfo :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterSelectedInfo };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterSelectedInfo };

		// members
		std::uint64_t m_characterId;         // 0x10
		std::int32_t m_scriptDebuggingPort;  // 0x18
		std::int32_t m_padding;              // 0x1C
	};
	static_assert(sizeof(hkbCharacterSelectedInfo) == 0x20);
	static_assert(offsetof(hkbCharacterSelectedInfo, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterSelectedInfo, m_scriptDebuggingPort) == 0x18);
	static_assert(offsetof(hkbCharacterSelectedInfo, m_padding) == 0x1C);
}
