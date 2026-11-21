#pragma once

#include "RE/H/hknpContactConstraintSolver.h"

namespace RE
{
	class __declspec(novtable) hknpMxContactSolver :
		public hknpContactConstraintSolver  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpMxContactSolver };
		inline static constexpr auto VTABLE{ VTABLE::hknpMxContactSolver };
	};
	static_assert(sizeof(hknpMxContactSolver) == 0x10);
}
