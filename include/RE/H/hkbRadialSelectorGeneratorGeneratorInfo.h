#pragma once

namespace RE
{
	class hkbGenerator;

	class hkbRadialSelectorGeneratorGeneratorInfo
	{
	public:

		// members
		hkbGenerator* m_generator;  // 0x00
		float m_angle;              // 0x08
		float m_radialSpeed;        // 0x0C
	};
	static_assert(sizeof(hkbRadialSelectorGeneratorGeneratorInfo) == 0x10);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorInfo, m_generator) == 0x0);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorInfo, m_angle) == 0x8);
	static_assert(offsetof(hkbRadialSelectorGeneratorGeneratorInfo, m_radialSpeed) == 0xC);
}
