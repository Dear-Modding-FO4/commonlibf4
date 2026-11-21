#pragma once

#include "RE/H/hkbGenerator.h"

namespace RE
{
	class __declspec(novtable) hkbAnimatedSkeletonGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAnimatedSkeletonGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbAnimatedSkeletonGenerator };

		// members
		void* m_animatedSkeleton;  // 0x88
	};
	static_assert(sizeof(hkbAnimatedSkeletonGenerator) == 0x90);
	static_assert(offsetof(hkbAnimatedSkeletonGenerator, m_animatedSkeleton) == 0x88);
}
