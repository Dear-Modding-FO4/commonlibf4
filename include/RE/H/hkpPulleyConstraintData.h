#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpPulleyConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpPulleyConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpPulleyConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpPulleyConstraintData };

		// members
		std::uint8_t unk18[0x8];               // 0x18
		hkpPulleyConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpPulleyConstraintData) == 0x90);
	static_assert(offsetof(hkpPulleyConstraintData, m_atoms) == 0x20);
}
