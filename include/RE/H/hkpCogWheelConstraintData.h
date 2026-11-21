#pragma once

#include "RE/H/hkpCogWheelConstraintDataAtoms.h"
#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpCogWheelConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpCogWheelConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpCogWheelConstraintData };

		// members
		std::uint8_t unk18[0x8];                 // 0x18
		hkpCogWheelConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpCogWheelConstraintData) == 0xC0);
	static_assert(offsetof(hkpCogWheelConstraintData, m_atoms) == 0x20);
}
