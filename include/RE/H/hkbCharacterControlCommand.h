#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterControlCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterControlCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterControlCommand };

		enum class CharacterControlCommand : std::uint32_t
		{
			kCommandHide = 0,
			kCommandShow = 1
		};

		// members
		std::uint64_t m_characterId;  // 0x10
		std::uint8_t m_command;       // 0x18
		std::uint8_t pad19[0x3];      // 0x19
		std::int32_t m_padding;       // 0x1C
	};
	static_assert(sizeof(hkbCharacterControlCommand) == 0x20);
	static_assert(offsetof(hkbCharacterControlCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbCharacterControlCommand, m_command) == 0x18);
	static_assert(offsetof(hkbCharacterControlCommand, m_padding) == 0x1C);
}
