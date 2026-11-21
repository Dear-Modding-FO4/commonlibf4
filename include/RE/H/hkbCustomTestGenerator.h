#pragma once

#include "RE/H/hkbCustomTestGeneratorAnnotatedTypes.h"

namespace RE
{
	class __declspec(novtable) hkbCustomTestGenerator :
		public hkbCustomTestGeneratorAnnotatedTypes  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGenerator };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGenerator };

		// members
		bool m_protectedHiddenMember;  // 0x680
		bool m_privateHiddenMember;    // 0x681
	};
	static_assert(sizeof(hkbCustomTestGenerator) == 0x690);
	static_assert(offsetof(hkbCustomTestGenerator, m_protectedHiddenMember) == 0x680);
	static_assert(offsetof(hkbCustomTestGenerator, m_privateHiddenMember) == 0x681);
}
