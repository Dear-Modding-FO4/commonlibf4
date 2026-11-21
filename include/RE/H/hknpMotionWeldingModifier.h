#pragma once

#include "RE/H/hknpWeldingModifier.h"

namespace RE
{
	class __declspec(novtable) hknpMotionWeldingModifier :
		public hknpWeldingModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMotionWeldingModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpMotionWeldingModifier };
	};
	static_assert(sizeof(hknpMotionWeldingModifier) == 0x8);
}
