#pragma once

#include "RE/H/hkResource.h"

namespace RE
{
	class hkClassNameRegistry;
	class hkTypeInfoRegistry;

	class __declspec(novtable) hkObjectResource :
		public hkResource  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkObjectResource };
		inline static constexpr auto VTABLE{ VTABLE::hkObjectResource };

		// members
		std::uint8_t m_topLevelObject[0x10];   // 0x10
		hkClassNameRegistry* m_classRegistry;  // 0x20
		hkTypeInfoRegistry* m_typeRegistry;    // 0x28
	};
	static_assert(sizeof(hkObjectResource) == 0x30);
	static_assert(offsetof(hkObjectResource, m_topLevelObject) == 0x10);
	static_assert(offsetof(hkObjectResource, m_classRegistry) == 0x20);
	static_assert(offsetof(hkObjectResource, m_typeRegistry) == 0x28);
}
