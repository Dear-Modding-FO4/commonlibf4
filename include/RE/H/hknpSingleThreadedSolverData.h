#pragma once

#include "RE/H/hknpSolverData.h"

namespace RE
{
	class __declspec(novtable) hknpSingleThreadedSolverData :
		public hknpSolverData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpSingleThreadedSolverData };
		inline static constexpr auto VTABLE{ VTABLE::hknpSingleThreadedSolverData };
	};
	static_assert(sizeof(hknpSingleThreadedSolverData) == 0x160);
}
