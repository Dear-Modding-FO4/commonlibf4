#pragma once

#include "RE/H/hknpConstraintSolver.h"

namespace RE
{
	class __declspec(novtable) hknpConstraintAtomSolver :
		public hknpConstraintSolver  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConstraintAtomSolver };
		inline static constexpr auto VTABLE{ VTABLE::hknpConstraintAtomSolver };
	};
	static_assert(sizeof(hknpConstraintAtomSolver) == 0x10);
}
