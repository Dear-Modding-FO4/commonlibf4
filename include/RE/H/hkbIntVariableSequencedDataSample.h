#pragma once

namespace RE
{
	class hkbIntVariableSequencedDataSample
	{
	public:

		// members
		float m_time;          // 0x00
		std::int32_t m_value;  // 0x04
	};
	static_assert(sizeof(hkbIntVariableSequencedDataSample) == 0x8);
	static_assert(offsetof(hkbIntVariableSequencedDataSample, m_time) == 0x0);
	static_assert(offsetof(hkbIntVariableSequencedDataSample, m_value) == 0x4);
}
