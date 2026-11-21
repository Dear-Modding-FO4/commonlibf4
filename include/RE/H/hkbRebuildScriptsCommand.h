#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbRebuildScriptsCommand :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbRebuildScriptsCommand };
		inline static constexpr auto VTABLE{ VTABLE::hkbRebuildScriptsCommand };

		// members
		std::uint64_t m_characterId;  // 0x10
	};
	static_assert(sizeof(hkbRebuildScriptsCommand) == 0x18);
	static_assert(offsetof(hkbRebuildScriptsCommand, m_characterId) == 0x10);
}
