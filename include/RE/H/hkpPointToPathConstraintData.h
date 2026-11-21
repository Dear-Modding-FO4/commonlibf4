#pragma once

#include "RE/H/hkEnum.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkpBridgeAtoms.h"
#include "RE/H/hkpConstraintData.h"

namespace RE
{
	class hkpParametricCurve;

	class __declspec(novtable) hkpPointToPathConstraintData :
		public hkpConstraintData  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkpPointToPathConstraintData };
		inline static constexpr auto VTABLE{ VTABLE::hkpPointToPathConstraintData };

		enum class OrientationConstraintType : std::int8_t
		{
			kConstrainOrientationInvalid = 0,
			kConstrainOrientationNone = 1,
			kConstrainOrientationAllowSpin = 2,
			kConstrainOrientationToPath = 3,
			kConstrainOrientationMaxId = 4
		};

		// members
		std::uint8_t unk18[0x8];                                                 // 0x18
		hkpBridgeAtoms m_atoms;                                                  // 0x20
		hkpParametricCurve* m_path;                                              // 0x40
		float m_maxFrictionForce;                                                // 0x48
		hkEnum<OrientationConstraintType, std::int8_t> m_angularConstrainedDOF;  // 0x4C
		std::uint8_t pad4D[0x3];                                                 // 0x4D
		hkTransformf m_transform_OS_KS[2];                                       // 0x50
	};
	static_assert(sizeof(hkpPointToPathConstraintData) == 0xD0);
	static_assert(offsetof(hkpPointToPathConstraintData, m_atoms) == 0x20);
	static_assert(offsetof(hkpPointToPathConstraintData, m_path) == 0x40);
	static_assert(offsetof(hkpPointToPathConstraintData, m_maxFrictionForce) == 0x48);
	static_assert(offsetof(hkpPointToPathConstraintData, m_angularConstrainedDOF) == 0x4C);
	static_assert(offsetof(hkpPointToPathConstraintData, m_transform_OS_KS) == 0x50);
}
