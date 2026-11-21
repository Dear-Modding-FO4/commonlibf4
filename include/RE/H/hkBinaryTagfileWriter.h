#pragma once

#include "RE/H/hkTagfileWriter.h"

namespace RE
{
	class __declspec(novtable) hkBinaryTagfileWriter :
		public hkTagfileWriter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBinaryTagfileWriter };
		inline static constexpr auto VTABLE{ VTABLE::hkBinaryTagfileWriter };
	};
	static_assert(sizeof(hkBinaryTagfileWriter) == 0x10);
}
