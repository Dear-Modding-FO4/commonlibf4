#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hknpActionManager :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpActionManager };
		inline static constexpr auto VTABLE{ VTABLE::hknpActionManager };

		// members
		std::uint8_t unk10[0x8];  // 0x10
		hkArray<std::uint8_t> unk18;  // 0x18
		std::uint8_t unk28[0x28];  // 0x28
	};
	static_assert(sizeof(hknpActionManager) == 0x50);
	static_assert(offsetof(hknpActionManager, unk10) == 0x10);
	static_assert(offsetof(hknpActionManager, unk18) == 0x18);
	static_assert(offsetof(hknpActionManager, unk28) == 0x28);
}
