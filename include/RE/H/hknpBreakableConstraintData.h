#pragma once

#include "RE/H/hkpWrappedConstraintData.h"

namespace RE
{
	class __declspec(novtable) hknpBreakableConstraintData :
		public hkpWrappedConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBreakableConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hknpBreakableConstraintData };

		// members
		float m_threshold;  // 0x20
	};
	static_assert(sizeof(hknpBreakableConstraintData) == 0x28);
	static_assert(offsetof(hknpBreakableConstraintData, m_threshold) == 0x20);
}
