#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpDeformableFixedConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpDeformableFixedConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpDeformableFixedConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpDeformableFixedConstraintData };

		// members
		std::uint8_t unk18[0x8];                        // 0x18
		hkpDeformableFixedConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpDeformableFixedConstraintData) == 0x170);
	static_assert(offsetof(hkpDeformableFixedConstraintData, m_atoms) == 0x20);
}
