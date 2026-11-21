#pragma once

#include "RE/H/hknpModifier.h"

namespace RE
{
	class __declspec(novtable) hknpTriggerModifier :
		public hknpModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpTriggerModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpTriggerModifier };
	};
	static_assert(sizeof(hknpTriggerModifier) == 0x8);
}
