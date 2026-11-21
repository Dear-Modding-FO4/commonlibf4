#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaAnnotationTrackAnnotation;

	class hkaAnnotationTrack
	{
	public:

		// members
		hkStringPtr m_trackName;                              // 0x00
		hkArray<hkaAnnotationTrackAnnotation> m_annotations;  // 0x08
	};
	static_assert(sizeof(hkaAnnotationTrack) == 0x18);
	static_assert(offsetof(hkaAnnotationTrack, m_trackName) == 0x0);
	static_assert(offsetof(hkaAnnotationTrack, m_annotations) == 0x8);
}
