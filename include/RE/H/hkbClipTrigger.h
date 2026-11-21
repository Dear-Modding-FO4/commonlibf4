#pragma once

#include "RE/H/hkbEventProperty.h"

namespace RE
{
	class hkbClipTrigger
	{
	public:

		// members
		float m_localTime;           // 0x00
		std::uint8_t unk04[0x4];     // 0x04
		hkbEventProperty m_event;    // 0x08
		bool m_relativeToEndOfClip;  // 0x18
		bool m_acyclic;              // 0x19
		bool m_isAnnotation;         // 0x1A
	};
	static_assert(sizeof(hkbClipTrigger) == 0x20);
	static_assert(offsetof(hkbClipTrigger, m_localTime) == 0x0);
	static_assert(offsetof(hkbClipTrigger, m_event) == 0x8);
	static_assert(offsetof(hkbClipTrigger, m_relativeToEndOfClip) == 0x18);
	static_assert(offsetof(hkbClipTrigger, m_acyclic) == 0x19);
	static_assert(offsetof(hkbClipTrigger, m_isAnnotation) == 0x1A);
}
