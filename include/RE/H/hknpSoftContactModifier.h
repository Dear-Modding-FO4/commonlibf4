#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpSoftContactModifier :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSoftContactModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpSoftContactModifier };
	};
	static_assert(sizeof(hknpSoftContactModifier) == 0x8);
}
