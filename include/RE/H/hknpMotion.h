#pragma once

#include "RE/H/hkHalf.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(0x10) hknpMotion
	{
	public:
		[[nodiscard]] float GetInverseMass() const noexcept
		{
			return std::bit_cast<float>(static_cast<std::uint32_t>(static_cast<std::uint16_t>(m_inverseInertiaAndMass[3].m_value)) << 16);
		}

		// members
		hkVector4f    m_centerOfMassAndMassFactor;  // 00
		hkQuaternionf m_orientation;                // 10
		hkHalf        m_inverseInertiaAndMass[4];   // 20
		std::byte     unk28[0x18];                  // 28
		hkVector4f    m_linearVelocity;             // 40
		std::byte     unk50[0x30];                  // 50
	};
	static_assert(offsetof(hknpMotion, m_inverseInertiaAndMass) == 0x20);
	static_assert(offsetof(hknpMotion, m_linearVelocity) == 0x40);
	static_assert(sizeof(hknpMotion) == 0x80);
}
