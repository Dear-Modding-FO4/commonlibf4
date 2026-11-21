#pragma once

#include "RE/H/hkaParameterizedReferenceFrame.h"

namespace RE
{
	class __declspec(novtable) hkaAngularReferenceFrame :
		public hkaParameterizedReferenceFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAngularReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaAngularReferenceFrame };

		// members
		float m_topAngle;  // 0x60
		float m_radius;    // 0x64
	};
	static_assert(sizeof(hkaAngularReferenceFrame) == 0x70);
	static_assert(offsetof(hkaAngularReferenceFrame, m_topAngle) == 0x60);
	static_assert(offsetof(hkaAngularReferenceFrame, m_radius) == 0x64);
}
