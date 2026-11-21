#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkbPoseMatchingGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbPoseMatchingGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbPoseMatchingGeneratorInternalState };

		// members
		std::int32_t m_currentMatch;        // 0x10
		std::int32_t m_bestMatch;           // 0x14
		float m_timeSinceBetterMatch;       // 0x18
		float m_error;                      // 0x1C
		bool m_resetCurrentMatchLocalTime;  // 0x20
	};
	static_assert(sizeof(hkbPoseMatchingGeneratorInternalState) == 0x28);
	static_assert(offsetof(hkbPoseMatchingGeneratorInternalState, m_currentMatch) == 0x10);
	static_assert(offsetof(hkbPoseMatchingGeneratorInternalState, m_bestMatch) == 0x14);
	static_assert(offsetof(hkbPoseMatchingGeneratorInternalState, m_timeSinceBetterMatch) == 0x18);
	static_assert(offsetof(hkbPoseMatchingGeneratorInternalState, m_error) == 0x1C);
	static_assert(offsetof(hkbPoseMatchingGeneratorInternalState, m_resetCurrentMatchLocalTime) == 0x20);
}
