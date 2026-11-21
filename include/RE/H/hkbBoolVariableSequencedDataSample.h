#pragma once

namespace RE
{
	class hkbBoolVariableSequencedDataSample
	{
	public:

		// members
		float m_time;  // 0x00
		bool m_value;  // 0x04
	};
	static_assert(sizeof(hkbBoolVariableSequencedDataSample) == 0x8);
	static_assert(offsetof(hkbBoolVariableSequencedDataSample, m_time) == 0x0);
	static_assert(offsetof(hkbBoolVariableSequencedDataSample, m_value) == 0x4);
}
