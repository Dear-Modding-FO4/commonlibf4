#pragma once

#include "RE/H/hkbReferencePoseGenerator.h"

namespace RE
{
	class __declspec(novtable) hkbCustomTestGeneratorHiddenTypes :
		public hkbReferencePoseGenerator  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbCustomTestGeneratorHiddenTypes };
		inline static constexpr auto VTABLE{ VTABLE::hkbCustomTestGeneratorHiddenTypes };

		// members
		bool m_inheritedHiddenMember;           // 0x90
		bool m_protectedInheritedHiddenMember;  // 0x91
		bool m_privateInheritedHiddenMember;    // 0x92
	};
	static_assert(sizeof(hkbCustomTestGeneratorHiddenTypes) == 0x98);
	static_assert(offsetof(hkbCustomTestGeneratorHiddenTypes, m_inheritedHiddenMember) == 0x90);
	static_assert(offsetof(hkbCustomTestGeneratorHiddenTypes, m_protectedInheritedHiddenMember) == 0x91);
	static_assert(offsetof(hkbCustomTestGeneratorHiddenTypes, m_privateInheritedHiddenMember) == 0x92);
}
