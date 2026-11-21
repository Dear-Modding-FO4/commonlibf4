#pragma once

#include "RE/H/hkOstream.h"

namespace RE
{
	class __declspec(novtable) hkErrStream :
		public hkOstream  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkErrStream };
		inline static constexpr auto VTABLE{ VTABLE::hkErrStream };
	};
	static_assert(sizeof(hkErrStream) == 0x18);
}
