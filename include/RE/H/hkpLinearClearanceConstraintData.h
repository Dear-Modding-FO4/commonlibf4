#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpLinearClearanceConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpLinearClearanceConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpLinearClearanceConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpLinearClearanceConstraintData };

		enum class Type : std::uint32_t
		{
			kPrismatic = 0,
			kHinge = 1,
			kBallSocket = 2
		};

		// members
		std::uint8_t unk18[0x8];                        // 0x18
		hkpLinearClearanceConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpLinearClearanceConstraintData) == 0x140);
	static_assert(offsetof(hkpLinearClearanceConstraintData, m_atoms) == 0x20);
}
