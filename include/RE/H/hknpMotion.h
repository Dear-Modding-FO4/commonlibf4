#pragma once

#include "RE/H/hkHalf.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(0x10) hknpMotion
	{
	public:
		// m_inverseInertia[3] holds the inverse mass
		[[nodiscard]] float GetInverseMass() const noexcept
		{
			return std::bit_cast<float>(static_cast<std::uint32_t>(static_cast<std::uint16_t>(m_inverseInertia[3].m_value)) << 16);
		}

		// members
		hkVector4f    m_centerOfMassAndMassFactor;             // 0x00
		hkQuaternionf m_orientation;                           // 0x10
		hkHalf        m_inverseInertia[4];                     // 0x20
		std::uint32_t m_firstAttachedBodyId;                   // 0x28
		std::uint32_t m_solverId;                              // 0x2C
		hkHalf        m_linearVelocityCage[3];                 // 0x30
		hkHalf        m_integrationFactor;                     // 0x36
		std::uint16_t m_motionPropertiesId;                    // 0x38
		hkHalf        m_maxLinearAccelerationDistancePerStep;  // 0x3A
		hkHalf        m_maxRotationToPreventTunneling;         // 0x3C
		std::uint8_t  m_cellIndex;                             // 0x3E
		std::uint8_t  m_spaceSplitterWeight;                   // 0x3F
		hkVector4f    m_linearVelocity;                        // 0x40
		hkVector4f    m_angularVelocity;                       // 0x50
		hkVector4f    m_previousStepLinearVelocity;            // 0x60
		hkVector4f    m_previousStepAngularVelocity;           // 0x70
	};
	static_assert(sizeof(hknpMotion) == 0x80);
	static_assert(offsetof(hknpMotion, m_centerOfMassAndMassFactor) == 0x0);
	static_assert(offsetof(hknpMotion, m_orientation) == 0x10);
	static_assert(offsetof(hknpMotion, m_inverseInertia) == 0x20);
	static_assert(offsetof(hknpMotion, m_firstAttachedBodyId) == 0x28);
	static_assert(offsetof(hknpMotion, m_solverId) == 0x2C);
	static_assert(offsetof(hknpMotion, m_linearVelocityCage) == 0x30);
	static_assert(offsetof(hknpMotion, m_integrationFactor) == 0x36);
	static_assert(offsetof(hknpMotion, m_motionPropertiesId) == 0x38);
	static_assert(offsetof(hknpMotion, m_maxLinearAccelerationDistancePerStep) == 0x3A);
	static_assert(offsetof(hknpMotion, m_maxRotationToPreventTunneling) == 0x3C);
	static_assert(offsetof(hknpMotion, m_cellIndex) == 0x3E);
	static_assert(offsetof(hknpMotion, m_spaceSplitterWeight) == 0x3F);
	static_assert(offsetof(hknpMotion, m_linearVelocity) == 0x40);
	static_assert(offsetof(hknpMotion, m_angularVelocity) == 0x50);
	static_assert(offsetof(hknpMotion, m_previousStepLinearVelocity) == 0x60);
	static_assert(offsetof(hknpMotion, m_previousStepAngularVelocity) == 0x70);
}
