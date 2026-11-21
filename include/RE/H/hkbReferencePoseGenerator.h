#pragma once

#include "RE/H/hkbGenerator.h"

namespace RE
{
	class __declspec(novtable) hkbReferencePoseGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbReferencePoseGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbReferencePoseGenerator };

		// members
		void* m_skeleton;  // 0x88
	};
	static_assert(sizeof(hkbReferencePoseGenerator) == 0x90);
	static_assert(offsetof(hkbReferencePoseGenerator, m_skeleton) == 0x88);
}
