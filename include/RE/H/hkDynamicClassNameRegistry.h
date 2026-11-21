#pragma once

#include "RE/H/hkClassNameRegistry.h"

namespace RE
{
	class __declspec(novtable) hkDynamicClassNameRegistry :
		public hkClassNameRegistry  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDynamicClassNameRegistry };
		inline static constexpr auto VTABLE{ VTABLE::hkDynamicClassNameRegistry };

		// members
		void* unk10;               // 0x10
		std::uint8_t unk18[0x18];  // 0x18
	};
	static_assert(sizeof(hkDynamicClassNameRegistry) == 0x30);
	static_assert(offsetof(hkDynamicClassNameRegistry, unk10) == 0x10);
}
