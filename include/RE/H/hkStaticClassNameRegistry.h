#pragma once

#include "RE/H/hkClassNameRegistry.h"

namespace RE
{
	class __declspec(novtable) hkStaticClassNameRegistry :
		public hkClassNameRegistry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkStaticClassNameRegistry };
		inline static constexpr auto VTABLE{ VTABLE::hkStaticClassNameRegistry };

		// members
		void* m_name;                 // 0x10
		void* m_classes;              // 0x18
		std::int32_t m_classVersion;  // 0x20
		std::uint8_t m_ready[0x4];    // 0x24
	};
	static_assert(sizeof(hkStaticClassNameRegistry) == 0x28);
	static_assert(offsetof(hkStaticClassNameRegistry, m_name) == 0x10);
	static_assert(offsetof(hkStaticClassNameRegistry, m_classes) == 0x18);
	static_assert(offsetof(hkStaticClassNameRegistry, m_classVersion) == 0x20);
	static_assert(offsetof(hkStaticClassNameRegistry, m_ready) == 0x24);
}
