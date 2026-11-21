#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpHingeConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpHingeConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpHingeConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpHingeConstraintData };

		// members
		std::uint8_t unk18[0x8];              // 0x18
		hkpHingeConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpHingeConstraintData) == 0xE0);
	static_assert(offsetof(hkpHingeConstraintData, m_atoms) == 0x20);
}
