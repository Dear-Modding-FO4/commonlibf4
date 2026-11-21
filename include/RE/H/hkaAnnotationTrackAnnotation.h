#pragma once

#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaAnnotationTrackAnnotation
	{
	public:

		// members
		float m_time;             // 0x00
		std::uint8_t unk04[0x4];  // 0x04
		hkStringPtr m_text;       // 0x08
	};
	static_assert(sizeof(hkaAnnotationTrackAnnotation) == 0x10);
	static_assert(offsetof(hkaAnnotationTrackAnnotation, m_time) == 0x0);
	static_assert(offsetof(hkaAnnotationTrackAnnotation, m_text) == 0x8);
}
