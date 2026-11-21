#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbSetSelectedCharacterCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbSetSelectedCharacterCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbSetSelectedCharacterCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
	};
	static_assert(sizeof(hkbSetSelectedCharacterCommand) == 0x18);
	static_assert(offsetof(hkbSetSelectedCharacterCommand, m_characterId) == 0x10);
}
