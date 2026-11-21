#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpWheelConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpWheelConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpWheelConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpWheelConstraintData };

		// members
		std::uint8_t unk18[0x8];              // 0x18
		hkpWheelConstraintDataAtoms m_atoms;  // 0x20
		hkVector4f m_initialAxleInB;          // 0x170
		hkVector4f m_initialSteeringAxisInB;  // 0x180
	};
	static_assert(sizeof(hkpWheelConstraintData) == 0x190);
	static_assert(offsetof(hkpWheelConstraintData, m_atoms) == 0x20);
	static_assert(offsetof(hkpWheelConstraintData, m_initialAxleInB) == 0x170);
	static_assert(offsetof(hkpWheelConstraintData, m_initialSteeringAxisInB) == 0x180);
}
