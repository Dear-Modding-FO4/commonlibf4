#pragma once

#include "RE/H/hkaAnimation.h"

namespace RE
{
	class hkaSkeleton;

	class __declspec(novtable) hkaReferencePoseAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaReferencePoseAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaReferencePoseAnimation };

		// members
		hkaSkeleton* m_skeleton;  // 0x38
	};
	static_assert(sizeof(hkaReferencePoseAnimation) == 0x40);
	static_assert(offsetof(hkaReferencePoseAnimation, m_skeleton) == 0x38);
}
