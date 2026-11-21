#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpMassChangerModifier :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMassChangerModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpMassChangerModifier };
	};
	static_assert(sizeof(hknpMassChangerModifier) == 0x8);
}
