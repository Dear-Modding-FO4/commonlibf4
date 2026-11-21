#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkbClipGeneratorEcho;

	class __declspec(novtable) hkbClipGeneratorInternalState :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbClipGeneratorInternalState };
		inline static constexpr auto VTABLE{ VTABLE::hkbClipGeneratorInternalState };

		// members
		hkQsTransformf m_extractedMotion;            // 0x10
		hkArray<hkbClipGeneratorEcho> m_echos;       // 0x40
		float m_localTime;                           // 0x50
		float m_time;                                // 0x54
		float m_previousUserControlledTimeFraction;  // 0x58
		std::int32_t m_bufferSize;                   // 0x5C
		bool m_atEnd;                                // 0x60
		bool m_ignoreStartTime;                      // 0x61
		bool m_pingPongBackward;                     // 0x62
	};
	static_assert(sizeof(hkbClipGeneratorInternalState) == 0x70);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_extractedMotion) == 0x10);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_echos) == 0x40);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_localTime) == 0x50);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_time) == 0x54);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_previousUserControlledTimeFraction) == 0x58);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_bufferSize) == 0x5C);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_atEnd) == 0x60);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_ignoreStartTime) == 0x61);
	static_assert(offsetof(hkbClipGeneratorInternalState, m_pingPongBackward) == 0x62);
}
