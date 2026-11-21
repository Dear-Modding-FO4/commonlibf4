#pragma once

#include "RE/H/hknpConstraintSolver.h"

namespace RE
{
	class __declspec(novtable) hknpContactConstraintSolver :
		public hknpConstraintSolver  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpContactConstraintSolver };
		inline static constexpr auto VTABLE{ VTABLE::hknpContactConstraintSolver };
	};
	static_assert(sizeof(hknpContactConstraintSolver) == 0x10);
}
