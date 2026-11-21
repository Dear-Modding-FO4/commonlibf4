#pragma once

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkbGenerator.h"

namespace RE
{
	class __declspec(novtable) hkbBehaviorReferenceGenerator :
		public hkbGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBehaviorReferenceGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbBehaviorReferenceGenerator };

		// members
		hkStringPtr m_behaviorName;  // 0x88
		void* m_behavior;            // 0x90
	};
	static_assert(sizeof(hkbBehaviorReferenceGenerator) == 0x98);
	static_assert(offsetof(hkbBehaviorReferenceGenerator, m_behaviorName) == 0x88);
	static_assert(offsetof(hkbBehaviorReferenceGenerator, m_behavior) == 0x90);
}
