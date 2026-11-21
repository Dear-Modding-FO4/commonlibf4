#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpFixedConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpFixedConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpFixedConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpFixedConstraintData };

		// members
		std::uint8_t unk18[0x8];              // 0x18
		hkpFixedConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpFixedConstraintData) == 0xE0);
	static_assert(offsetof(hkpFixedConstraintData, m_atoms) == 0x20);
}
