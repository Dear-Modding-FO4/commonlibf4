#pragma once

#include "RE/H/hkDataObjectImpl.h"

namespace RE
{
	class __declspec(novtable) hkDataObjectNative :
		public hkDataObjectImpl  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkDataObjectNative };
		inline static constexpr auto VTABLE{ VTABLE::hkDataObjectNative };

		// members
		void* unk10;         // 0x10
		void* unk18;         // 0x18
		void* unk20;         // 0x20
		std::uint8_t unk28;  // 0x28
	};
	static_assert(sizeof(hkDataObjectNative) == 0x30);
	static_assert(offsetof(hkDataObjectNative, unk10) == 0x10);
	static_assert(offsetof(hkDataObjectNative, unk18) == 0x18);
	static_assert(offsetof(hkDataObjectNative, unk20) == 0x20);
	static_assert(offsetof(hkDataObjectNative, unk28) == 0x28);
}
