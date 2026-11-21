#pragma once

namespace RE
{
	class hkbRealVariableSequencedDataSample
	{
	public:

		// members
		float m_time;   // 0x00
		float m_value;  // 0x04
	};
	static_assert(sizeof(hkbRealVariableSequencedDataSample) == 0x8);
	static_assert(offsetof(hkbRealVariableSequencedDataSample, m_time) == 0x0);
	static_assert(offsetof(hkbRealVariableSequencedDataSample, m_value) == 0x4);
}
