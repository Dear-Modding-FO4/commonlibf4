#pragma once

#include "RE/H/hkbGeneratorSyncInfoActiveInterval.h"
#include "RE/H/hkbGeneratorSyncInfoSyncPoint.h"

namespace RE
{
	class hkbGeneratorSyncInfo
	{
	public:

		// members
		hkbGeneratorSyncInfoSyncPoint m_syncPoints[16];       // 0x00
		float m_duration;                                     // 0x80
		float m_localTime;                                    // 0x84
		float m_playbackSpeed;                                // 0x88
		std::int8_t m_numSyncPoints;                          // 0x8C
		bool m_isCyclic;                                      // 0x8D
		bool m_isMirrored;                                    // 0x8E
		bool m_isAdditive;                                    // 0x8F
		hkbGeneratorSyncInfoActiveInterval m_activeInterval;  // 0x90
		float m_nativePlaybackSpeed;                          // 0xA4
	};
	static_assert(sizeof(hkbGeneratorSyncInfo) == 0xA8);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_syncPoints) == 0x0);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_duration) == 0x80);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_localTime) == 0x84);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_playbackSpeed) == 0x88);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_numSyncPoints) == 0x8C);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_isCyclic) == 0x8D);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_isMirrored) == 0x8E);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_isAdditive) == 0x8F);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_activeInterval) == 0x90);
	static_assert(offsetof(hkbGeneratorSyncInfo, m_nativePlaybackSpeed) == 0xA4);
}
