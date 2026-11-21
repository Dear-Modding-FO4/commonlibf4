#pragma once

namespace RE
{
	class hkbCharacterControllerModifierControlData
	{
	public:

		// members
		float m_verticalGain;             // 0x00
		float m_horizontalCatchUpGain;    // 0x04
		float m_maxVerticalSeparation;    // 0x08
		float m_maxHorizontalSeparation;  // 0x0C
	};
	static_assert(sizeof(hkbCharacterControllerModifierControlData) == 0x10);
	static_assert(offsetof(hkbCharacterControllerModifierControlData, m_verticalGain) == 0x0);
	static_assert(offsetof(hkbCharacterControllerModifierControlData, m_horizontalCatchUpGain) == 0x4);
	static_assert(offsetof(hkbCharacterControllerModifierControlData, m_maxVerticalSeparation) == 0x8);
	static_assert(offsetof(hkbCharacterControllerModifierControlData, m_maxHorizontalSeparation) == 0xC);
}
