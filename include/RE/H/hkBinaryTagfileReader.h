#pragma once

#include "RE/H/hkTagfileReader.h"

namespace RE
{
	class __declspec(novtable) hkBinaryTagfileReader :
		public hkTagfileReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkBinaryTagfileReader };
		inline static constexpr auto VTABLE{ VTABLE::hkBinaryTagfileReader };
	};
	static_assert(sizeof(hkBinaryTagfileReader) == 0x10);
}
