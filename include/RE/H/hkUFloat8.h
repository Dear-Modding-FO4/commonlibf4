#pragma once

namespace RE
{
	class hkUFloat8
	{
	public:

		// members
		std::uint8_t m_value;  // 0x00
	};
	static_assert(sizeof(hkUFloat8) == 0x1);
	static_assert(offsetof(hkUFloat8, m_value) == 0x0);
}
