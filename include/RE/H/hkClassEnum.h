#pragma once

namespace RE
{
	class hkClassEnum
	{
	public:

		// members
		const char* m_name;          // 0x00
		std::uint8_t m_items[0x10];  // 0x08
	};
	static_assert(sizeof(hkClassEnum) == 0x18);
	static_assert(offsetof(hkClassEnum, m_name) == 0x0);
	static_assert(offsetof(hkClassEnum, m_items) == 0x8);
}
