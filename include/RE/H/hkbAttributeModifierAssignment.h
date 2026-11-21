#pragma once

namespace RE
{
	class hkbAttributeModifierAssignment
	{
	public:

		// members
		std::int32_t m_attributeIndex;  // 0x00
		float m_attributeValue;         // 0x04
	};
	static_assert(sizeof(hkbAttributeModifierAssignment) == 0x8);
	static_assert(offsetof(hkbAttributeModifierAssignment, m_attributeIndex) == 0x0);
	static_assert(offsetof(hkbAttributeModifierAssignment, m_attributeValue) == 0x4);
}
