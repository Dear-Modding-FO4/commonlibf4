#pragma once

#include "RE/H/hknpWeldingModifier.h"

namespace RE
{
	class __declspec(novtable) hknpNeighborWeldingModifier :
		public hknpWeldingModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpNeighborWeldingModifier };
		inline static constexpr auto VTABLE{ VTABLE::hknpNeighborWeldingModifier };
	};
	static_assert(sizeof(hknpNeighborWeldingModifier) == 0x8);
}
