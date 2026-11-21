#pragma once

#include "RE/H/hknpSimulation.h"

namespace RE
{
	class __declspec(novtable) hknpSingleThreadedSimulation :
		public hknpSimulation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSingleThreadedSimulation };
		inline static constexpr auto VTABLE{ VTABLE::hknpSingleThreadedSimulation };
	};
	static_assert(sizeof(hknpSingleThreadedSimulation) == 0x8);
}
