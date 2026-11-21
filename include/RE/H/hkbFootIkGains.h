#pragma once

namespace RE
{
	class hkbFootIkGains
	{
	public:

		// members
		float m_onOffGain;                   // 0x00
		float m_groundAscendingGain;         // 0x04
		float m_groundDescendingGain;        // 0x08
		float m_footPlantedGain;             // 0x0C
		float m_footRaisedGain;              // 0x10
		float m_footLockingGain;             // 0x14
		float m_worldFromModelFeedbackGain;  // 0x18
		float m_errorUpDownBias;             // 0x1C
		float m_alignWorldFromModelGain;     // 0x20
		float m_hipOrientationGain;          // 0x24
		float m_maxKneeAngleDifference;      // 0x28
		float m_ankleOrientationGain;        // 0x2C
	};
	static_assert(sizeof(hkbFootIkGains) == 0x30);
	static_assert(offsetof(hkbFootIkGains, m_onOffGain) == 0x0);
	static_assert(offsetof(hkbFootIkGains, m_groundAscendingGain) == 0x4);
	static_assert(offsetof(hkbFootIkGains, m_groundDescendingGain) == 0x8);
	static_assert(offsetof(hkbFootIkGains, m_footPlantedGain) == 0xC);
	static_assert(offsetof(hkbFootIkGains, m_footRaisedGain) == 0x10);
	static_assert(offsetof(hkbFootIkGains, m_footLockingGain) == 0x14);
	static_assert(offsetof(hkbFootIkGains, m_worldFromModelFeedbackGain) == 0x18);
	static_assert(offsetof(hkbFootIkGains, m_errorUpDownBias) == 0x1C);
	static_assert(offsetof(hkbFootIkGains, m_alignWorldFromModelGain) == 0x20);
	static_assert(offsetof(hkbFootIkGains, m_hipOrientationGain) == 0x24);
	static_assert(offsetof(hkbFootIkGains, m_maxKneeAngleDifference) == 0x28);
	static_assert(offsetof(hkbFootIkGains, m_ankleOrientationGain) == 0x2C);
}
