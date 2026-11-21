#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpPrismaticConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpPrismaticConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpPrismaticConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpPrismaticConstraintData };

		// members
		std::uint8_t unk18[0x8];                  // 0x18
		hkpPrismaticConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpPrismaticConstraintData) == 0x120);
	static_assert(offsetof(hkpPrismaticConstraintData, m_atoms) == 0x20);
}
