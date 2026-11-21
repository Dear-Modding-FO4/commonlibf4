#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkaAnimatedReferenceFrame.h"

namespace RE
{
	class __declspec(novtable) hkaDefaultAnimatedReferenceFrame :
		public hkaAnimatedReferenceFrame  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaDefaultAnimatedReferenceFrame };
		inline static constexpr auto VTABLE{ VTABLE::hkaDefaultAnimatedReferenceFrame };

		// members
		std::uint8_t unk10[0x10];                     // 0x10
		hkVector4f m_up;                              // 0x20
		hkVector4f m_forward;                         // 0x30
		float m_duration;                             // 0x40
		std::uint8_t pad44[0x4];                      // 0x44
		hkArray<hkVector4f> m_referenceFrameSamples;  // 0x48
	};
	static_assert(sizeof(hkaDefaultAnimatedReferenceFrame) == 0x60);
	static_assert(offsetof(hkaDefaultAnimatedReferenceFrame, m_up) == 0x20);
	static_assert(offsetof(hkaDefaultAnimatedReferenceFrame, m_forward) == 0x30);
	static_assert(offsetof(hkaDefaultAnimatedReferenceFrame, m_duration) == 0x40);
	static_assert(offsetof(hkaDefaultAnimatedReferenceFrame, m_referenceFrameSamples) == 0x48);
}
