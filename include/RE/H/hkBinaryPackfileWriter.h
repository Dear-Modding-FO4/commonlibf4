#pragma once

#include "RE/H/hkPackfileWriter.h"

namespace RE
{
	class __declspec(novtable) hkBinaryPackfileWriter :
		public hkPackfileWriter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBinaryPackfileWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkBinaryPackfileWriter };

		// members
		std::uint8_t unk138[0x8];  // 0x138
	};
	static_assert(sizeof(hkBinaryPackfileWriter) == 0x140);
}
