#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpStiffSpringConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpStiffSpringConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpStiffSpringConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpStiffSpringConstraintData };

		// members
		std::uint8_t unk18[0x8];                    // 0x18
		hkpStiffSpringConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpStiffSpringConstraintData) == 0x70);
	static_assert(offsetof(hkpStiffSpringConstraintData, m_atoms) == 0x20);
}
