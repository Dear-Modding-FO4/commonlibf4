#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbTwistModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbTwistModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbTwistModifier };

		enum class SetAngleMethod : std::uint8_t
		{
			kLinear = 0,
			kRamped = 1
		};

		enum class RotationAxisCoordinates : std::uint8_t
		{
			kRotationAxisInModelCoordinates = 0,
			kRotationAxisInParentCoordinates = 1,
			kRotationAxisInLocalCoordinates = 2
		};

		// members
		std::uint8_t unk58[0x8];                 // 0x58
		hkVector4f m_axisOfRotation;             // 0x60
		float m_twistAngle;                      // 0x70
		std::int16_t m_startBoneIndex;           // 0x74
		std::int16_t m_endBoneIndex;             // 0x76
		hkEnum<SetAngleMethod, std::int8_t> m_setAngleMethod;            // 0x78
		hkEnum<RotationAxisCoordinates, std::int8_t> m_rotationAxisCoordinates;   // 0x79
		bool m_isAdditive;                       // 0x7A
		std::uint8_t pad7B[0x5];                 // 0x7B
		std::uint8_t m_boneChainIndices[0x10];   // 0x80
		std::uint8_t m_parentBoneIndices[0x10];  // 0x90
	};
	static_assert(sizeof(hkbTwistModifier) == 0xA0);
	static_assert(offsetof(hkbTwistModifier, m_axisOfRotation) == 0x60);
	static_assert(offsetof(hkbTwistModifier, m_twistAngle) == 0x70);
	static_assert(offsetof(hkbTwistModifier, m_startBoneIndex) == 0x74);
	static_assert(offsetof(hkbTwistModifier, m_endBoneIndex) == 0x76);
	static_assert(offsetof(hkbTwistModifier, m_setAngleMethod) == 0x78);
	static_assert(offsetof(hkbTwistModifier, m_rotationAxisCoordinates) == 0x79);
	static_assert(offsetof(hkbTwistModifier, m_isAdditive) == 0x7A);
	static_assert(offsetof(hkbTwistModifier, m_boneChainIndices) == 0x80);
	static_assert(offsetof(hkbTwistModifier, m_parentBoneIndices) == 0x90);
}
