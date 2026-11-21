#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaInterleavedUncompressedAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaInterleavedUncompressedAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaInterleavedUncompressedAnimation };

		// members
		hkArray<hkQsTransformf> m_transforms;  // 0x38
		hkArray<float> m_floats;               // 0x48
	};
	static_assert(sizeof(hkaInterleavedUncompressedAnimation) == 0x58);
	static_assert(offsetof(hkaInterleavedUncompressedAnimation, m_transforms) == 0x38);
	static_assert(offsetof(hkaInterleavedUncompressedAnimation, m_floats) == 0x48);
}
