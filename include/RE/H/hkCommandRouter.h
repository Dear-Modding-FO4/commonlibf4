#pragma once

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class __declspec(novtable) hkCommandRouter :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkCommandRouter };
		inline static constexpr auto VTABLE{ VTABLE::hkCommandRouter };

		// members
		void* unk10;  // 0x10
		void* unk18;  // 0x18
		std::uint8_t unk20[0x8];  // 0x20
	};
	static_assert(sizeof(hkCommandRouter) == 0x28);
	static_assert(offsetof(hkCommandRouter, unk10) == 0x10);
	static_assert(offsetof(hkCommandRouter, unk18) == 0x18);
	static_assert(offsetof(hkCommandRouter, unk20) == 0x20);
}
