#pragma once

#include "RE/N/NiObject.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterProxy :
		public NiObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterProxy };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterProxy };

		// members
		std::uint8_t unk10[0x430];  // 0x10
	};
	static_assert(sizeof(bhkCharacterProxy) == 0x440);
}
