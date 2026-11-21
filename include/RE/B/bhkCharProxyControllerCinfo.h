#pragma once

#include "RE/B/bhkCharacterControllerCinfo.h"

namespace RE
{
	class __declspec(novtable) bhkCharProxyControllerCinfo :
		public bhkCharacterControllerCinfo  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharProxyControllerCinfo };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharProxyControllerCinfo };

		// members
		std::uint8_t unkA0[0x7C];   // 0xA0
		float unk11C;               // 0x11C
		float unk120;               // 0x120
		std::uint8_t unk124[0x2C];  // 0x124
	};
	static_assert(sizeof(bhkCharProxyControllerCinfo) == 0x150);
	static_assert(offsetof(bhkCharProxyControllerCinfo, unk11C) == 0x11C);
	static_assert(offsetof(bhkCharProxyControllerCinfo, unk120) == 0x120);
}
