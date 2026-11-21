#pragma once

namespace RE
{
	class hkxMaterialProperty
	{
	public:

		// members
		std::uint32_t m_key;    // 0x00
		std::uint32_t m_value;  // 0x04
	};
	static_assert(sizeof(hkxMaterialProperty) == 0x8);
	static_assert(offsetof(hkxMaterialProperty, m_key) == 0x0);
	static_assert(offsetof(hkxMaterialProperty, m_value) == 0x4);
}
