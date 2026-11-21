#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hkbAiControlPathToCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAiControlPathToCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbAiControlPathToCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
		std::uint8_t unk18[0x8];      // 0x18
		hkVector4f m_goalPoint;       // 0x20
	};
	static_assert(sizeof(hkbAiControlPathToCommand) == 0x30);
	static_assert(offsetof(hkbAiControlPathToCommand, m_characterId) == 0x10);
	static_assert(offsetof(hkbAiControlPathToCommand, m_goalPoint) == 0x20);
}
