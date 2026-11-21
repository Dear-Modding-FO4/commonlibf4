#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkTypeManager :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkTypeManager };
		inline static constexpr auto VTABLE{ VTABLE::hkTypeManager };

		// members
		void* unk10;  // 0x10
		std::uint8_t unk18[0x78];  // 0x18
		void* unk90;  // 0x90
		std::uint8_t unk98[0x38];  // 0x98
		void* unkD0;  // 0xD0
		std::uint8_t unkD8[0x28];  // 0xD8
	};
	static_assert(sizeof(hkTypeManager) == 0x100);
	static_assert(offsetof(hkTypeManager, unk10) == 0x10);
	static_assert(offsetof(hkTypeManager, unk18) == 0x18);
	static_assert(offsetof(hkTypeManager, unk90) == 0x90);
	static_assert(offsetof(hkTypeManager, unk98) == 0x98);
	static_assert(offsetof(hkTypeManager, unkD0) == 0xD0);
	static_assert(offsetof(hkTypeManager, unkD8) == 0xD8);
}
