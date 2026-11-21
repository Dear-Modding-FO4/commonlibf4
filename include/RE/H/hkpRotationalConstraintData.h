#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpRotationalConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpRotationalConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpRotationalConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpRotationalConstraintData };

		// members
		std::uint8_t unk18[0x8];                   // 0x18
		hkpRotationalConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpRotationalConstraintData) == 0xA0);
	static_assert(offsetof(hkpRotationalConstraintData, m_atoms) == 0x20);
}
