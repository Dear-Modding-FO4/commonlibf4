#pragma once

#include "RE/H/hkpConstraintData.h"
#include "RE/H/hkpRagdollConstraintDataAtoms.h"

namespace RE
{
	class __declspec(novtable) hkpRagdollConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpRagdollConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpRagdollConstraintData };

		enum class MotorIndex : std::uint32_t
		{
			kMotorTwist = 0,
			kMotorPlane = 1,
			kMotorCone = 2
		};

		// members
		std::uint8_t unk18[0x8];                // 0x18
		hkpRagdollConstraintDataAtoms m_atoms;  // 0x20
	};
	static_assert(sizeof(hkpRagdollConstraintData) == 0x1A0);
	static_assert(offsetof(hkpRagdollConstraintData, m_atoms) == 0x20);
}
