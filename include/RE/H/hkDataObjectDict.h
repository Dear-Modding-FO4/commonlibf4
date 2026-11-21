#pragma once

#include "RE/H/hkDataObjectImpl.h"

namespace RE
{
	class __declspec(novtable) hkDataObjectDict :
		public hkDataObjectImpl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataObjectDict };
		inline static constexpr auto VTABLE{ VTABLE::hkDataObjectDict };

		// members
		void* unk10;          // 0x10
		void* unk18;          // 0x18
		std::uint32_t unk20;  // 0x20
		std::uint32_t unk24;  // 0x24
		std::uint32_t unk28;  // 0x28
	};
	static_assert(sizeof(hkDataObjectDict) == 0x30);
	static_assert(offsetof(hkDataObjectDict, unk10) == 0x10);
	static_assert(offsetof(hkDataObjectDict, unk18) == 0x18);
	static_assert(offsetof(hkDataObjectDict, unk20) == 0x20);
	static_assert(offsetof(hkDataObjectDict, unk24) == 0x24);
	static_assert(offsetof(hkDataObjectDict, unk28) == 0x28);
}
