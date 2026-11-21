#pragma once

namespace RE
{
	class hkbVariableValue
	{
	public:

		// members
		std::int32_t m_value;  // 0x00
	};
	static_assert(sizeof(hkbVariableValue) == 0x4);
	static_assert(offsetof(hkbVariableValue, m_value) == 0x0);
}
