#pragma once

#include "RE/H/hkVector4.h"
#include "RE/H/hkbCharacterControllerModifierControlData.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbCharacterControllerModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCharacterControllerModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbCharacterControllerModifier };

		enum class InitialVelocityCoordinates : std::uint8_t
		{
			kInitialVelocityInWorldCoordinates = 0,
			kInitialVelocityInModelCoordinates = 1
		};

		enum class MotionMode : std::uint8_t
		{
			kMotionModeFollowAnimation = 0,
			kMotionModeDynamic = 1
		};

		// members
		hkbCharacterControllerModifierControlData m_controlData;  // 0x58
		std::uint8_t unk68[0x8];                                  // 0x68
		hkVector4f m_initialVelocity;                             // 0x70
		hkEnum<InitialVelocityCoordinates, std::int8_t> m_initialVelocityCoordinates;                 // 0x80
		hkEnum<MotionMode, std::int8_t> m_motionMode;                                 // 0x81
		bool m_forceDownwardMomentum;                             // 0x82
		bool m_applyGravity;                                      // 0x83
		bool m_setInitialVelocity;                                // 0x84
		bool m_isTouchingGround;                                  // 0x85
		std::uint8_t unk86[0xA];                                  // 0x86
		hkVector4f m_gravity;                                     // 0x90
		bool m_isInitialVelocityAdded;                            // 0xA0
	};
	static_assert(sizeof(hkbCharacterControllerModifier) == 0xB0);
	static_assert(offsetof(hkbCharacterControllerModifier, m_controlData) == 0x58);
	static_assert(offsetof(hkbCharacterControllerModifier, m_initialVelocity) == 0x70);
	static_assert(offsetof(hkbCharacterControllerModifier, m_initialVelocityCoordinates) == 0x80);
	static_assert(offsetof(hkbCharacterControllerModifier, m_motionMode) == 0x81);
	static_assert(offsetof(hkbCharacterControllerModifier, m_forceDownwardMomentum) == 0x82);
	static_assert(offsetof(hkbCharacterControllerModifier, m_applyGravity) == 0x83);
	static_assert(offsetof(hkbCharacterControllerModifier, m_setInitialVelocity) == 0x84);
	static_assert(offsetof(hkbCharacterControllerModifier, m_isTouchingGround) == 0x85);
	static_assert(offsetof(hkbCharacterControllerModifier, m_gravity) == 0x90);
	static_assert(offsetof(hkbCharacterControllerModifier, m_isInitialVelocityAdded) == 0xA0);
}
