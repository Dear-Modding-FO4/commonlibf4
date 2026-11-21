#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkbBehaviorInfoIdToNamePair
	{
	public:

		// members
		hkStringPtr m_behaviorName;  // 0x00
		hkStringPtr m_nodeName;      // 0x08
		std::uint16_t m_toolType;    // 0x10
		std::uint16_t m_id;          // 0x12
	};
	static_assert(sizeof(hkbBehaviorInfoIdToNamePair) == 0x18);
	static_assert(offsetof(hkbBehaviorInfoIdToNamePair, m_behaviorName) == 0x0);
	static_assert(offsetof(hkbBehaviorInfoIdToNamePair, m_nodeName) == 0x8);
	static_assert(offsetof(hkbBehaviorInfoIdToNamePair, m_toolType) == 0x10);
	static_assert(offsetof(hkbBehaviorInfoIdToNamePair, m_id) == 0x12);
}
