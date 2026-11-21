#pragma once

namespace RE
{
	class hkbBlenderGeneratorChildInternalState
	{
	public:

		// members
		bool m_isActive;       // 0x00
		bool m_syncNextFrame;  // 0x01
	};
	static_assert(sizeof(hkbBlenderGeneratorChildInternalState) == 0x2);
	static_assert(offsetof(hkbBlenderGeneratorChildInternalState, m_isActive) == 0x0);
	static_assert(offsetof(hkbBlenderGeneratorChildInternalState, m_syncNextFrame) == 0x1);
}
