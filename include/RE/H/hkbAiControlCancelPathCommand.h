#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbAiControlCancelPathCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAiControlCancelPathCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbAiControlCancelPathCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
	};
	static_assert(sizeof(hkbAiControlCancelPathCommand) == 0x18);
	static_assert(offsetof(hkbAiControlCancelPathCommand, m_characterId) == 0x10);
}
