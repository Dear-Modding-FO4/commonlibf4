#pragma once

#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class hkpConstraintData;

	class __declspec(novtable) hkpWrappedConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpWrappedConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpWrappedConstraintData };

		// add
		virtual const hkpConstraintData* getWrappedConstraintData();  // 0xC0 [18]
		virtual hkpConstraintData* accessWrappedConstraintData();  // 0xC8 [19]
		virtual void deepClone();  // 0xD0 [1A] (void)

		// members
		hkpConstraintData* m_constraintData;  // 0x18
	};
	static_assert(sizeof(hkpWrappedConstraintData) == 0x20);
	static_assert(offsetof(hkpWrappedConstraintData, m_constraintData) == 0x18);
}
