#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpLimitedHingeConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpLimitedHingeConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpLimitedHingeConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpLimitedHingeConstraintData };

		// members
		std::uint8_t unk18[0x8];                     // 0x18
		hkpLimitedHingeConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpLimitedHingeConstraintData) == 0x130);
	static_assert(offsetof(hkpLimitedHingeConstraintData, m_atoms) == 0x20);
}
