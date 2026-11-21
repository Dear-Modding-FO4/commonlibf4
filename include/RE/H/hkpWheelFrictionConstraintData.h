#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpWheelFrictionConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpWheelFrictionConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpWheelFrictionConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpWheelFrictionConstraintData };

		// members
		std::uint8_t unk18[0x8];                      // 0x18
		hkpWheelFrictionConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpWheelFrictionConstraintData) == 0xE0);
	static_assert(offsetof(hkpWheelFrictionConstraintData, m_atoms) == 0x20);
}
