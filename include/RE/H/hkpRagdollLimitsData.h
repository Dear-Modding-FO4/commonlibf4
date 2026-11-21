#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpRagdollLimitsDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpRagdollLimitsData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpRagdollLimitsData };
		inline static constexpr auto VTABLE{ VTABLE::hkpRagdollLimitsData };

		// members
		std::uint8_t unk18[0x8];            // 0x18
		hkpRagdollLimitsDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpRagdollLimitsData) == 0xF0);
	static_assert(offsetof(hkpRagdollLimitsData, m_atoms) == 0x20);
}
