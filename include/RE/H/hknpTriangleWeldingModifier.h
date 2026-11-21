#pragma once

#include "RE/H/hknpWeldingModifier.h"

namespace RE
{
	class __declspec(novtable) hknpTriangleWeldingModifier :
		public hknpWeldingModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpTriangleWeldingModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpTriangleWeldingModifier };
	};
	static_assert(sizeof(hknpTriangleWeldingModifier) == 0x8);
}
