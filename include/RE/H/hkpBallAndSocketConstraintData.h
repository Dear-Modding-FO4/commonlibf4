#pragma once

#include "RE/H/hkpBallAndSocketConstraintDataAtoms.h"
#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class __declspec(novtable) hkpBallAndSocketConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpBallAndSocketConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpBallAndSocketConstraintData };

		// members
		std::uint8_t unk18[0x8];                      // 0x18
		hkpBallAndSocketConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpBallAndSocketConstraintData) == 0x70);
	static_assert(offsetof(hkpBallAndSocketConstraintData, m_atoms) == 0x20);
}
