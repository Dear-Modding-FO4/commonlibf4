#pragma once

namespace RE
{
	class hkCustomAttributes
	{
	public:

		// members
		std::uint8_t m_attributes[0x10];  // 0x00
	};
	static_assert(sizeof(hkCustomAttributes) == 0x10);
	static_assert(offsetof(hkCustomAttributes, m_attributes) == 0x0);
}
