#pragma once
#include "RE/H/hkEnum.h"

namespace RE
{
	class hkpConstraintAtom
	{
	public:

		enum class AtomType : std::uint16_t
		{
			kTypeInvalid = 0,
			kTypeBridge = 1,
			kTypeSetLocalTransforms = 2,
			kTypeSetLocalTranslations = 3,
			kTypeSetLocalRotations = 4,
			kTypeBallSocket = 5,
			kTypeStiffSpring = 6,
			kTypeLin = 7,
			kTypeLinSoft = 8,
			kTypeLinLimit = 9,
			kTypeLinFriction = 10,
			kTypeLinMotor = 11,
			kType2dAng = 12,
			kTypeAng = 13,
			kTypeAngLimit = 14,
			kTypeTwistLimit = 15,
			kTypeConeLimit = 16,
			kTypeAngFriction = 17,
			kTypeAngMotor = 18,
			kTypeRagdollMotor = 19,
			kTypePulley = 20,
			kTypeRackAndPinion = 21,
			kTypeCogWheel = 22,
			kTypeSetupStabilization = 23,
			kType3dAng = 24,
			kTypeDeformable3dLin = 25,
			kTypeDeformable3dAng = 26,
			kTypeOverwritePivot = 27,
			kTypeWheelFriction = 28,
			kTypeContact = 29,
			kFirstModifierType = 30,
			kTypeModifierSoftContact = 30,
			kTypeModifierMassChanger = 31,
			kTypeModifierViscousSurface = 32,
			kTypeModifierMovingSurface = 33,
			kTypeModifierIgnoreConstraint = 34,
			kTypeModifierCenterOfMassChanger = 35,
			kLastModifierType = 35,
			kTypeMax = 36
		};

		enum class CallbackRequest : std::uint32_t
		{
			kCallbackRequestNone = 0,
			kCallbackRequestNewContactPoint = 1,
			kCallbackRequestSetupPpuOnly = 2,
			kCallbackRequestSetupCallback = 4,
			kCallbackRequestContactPointCallback = 8
		};

		enum class SolvingMethod : std::uint32_t
		{
			kMethodStabilized = 0,
			kMethodOld = 1
		};

		// members
		hkEnum<AtomType, std::uint16_t> m_type;  // 0x00
	};
	static_assert(sizeof(hkpConstraintAtom) == 0x2);
	static_assert(offsetof(hkpConstraintAtom, m_type) == 0x0);
}
