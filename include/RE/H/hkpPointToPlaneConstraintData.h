#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpPointToPlaneConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpPointToPlaneConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpPointToPlaneConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpPointToPlaneConstraintData };

		// members
		std::uint8_t unk18[0x8];                     // 0x18
		hkpPointToPlaneConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpPointToPlaneConstraintData) == 0xC0);
	static_assert(offsetof(hkpPointToPlaneConstraintData, m_atoms) == 0x20);
}
