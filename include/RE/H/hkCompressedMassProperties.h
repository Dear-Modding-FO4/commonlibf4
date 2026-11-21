#pragma once

namespace RE
{
	class hkCompressedMassProperties
	{
	public:

		// members
		std::int16_t m_centerOfMass[4];    // 0x00
		std::int16_t m_inertia[4];         // 0x08
		std::int16_t m_majorAxisSpace[4];  // 0x10
		float m_mass;                      // 0x18
		float m_volume;                    // 0x1C
	};
	static_assert(sizeof(hkCompressedMassProperties) == 0x20);
	static_assert(offsetof(hkCompressedMassProperties, m_centerOfMass) == 0x0);
	static_assert(offsetof(hkCompressedMassProperties, m_inertia) == 0x8);
	static_assert(offsetof(hkCompressedMassProperties, m_majorAxisSpace) == 0x10);
	static_assert(offsetof(hkCompressedMassProperties, m_mass) == 0x18);
	static_assert(offsetof(hkCompressedMassProperties, m_volume) == 0x1C);
}
