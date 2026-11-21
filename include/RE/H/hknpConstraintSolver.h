#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hknpConstraintSolver :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpConstraintSolver };
		inline static constexpr auto VTABLE{ VTABLE::hknpConstraintSolver };
	};
	static_assert(sizeof(hknpConstraintSolver) == 0x10);
}
