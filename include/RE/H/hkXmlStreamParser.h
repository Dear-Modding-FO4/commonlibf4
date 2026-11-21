#pragma once

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkArray.h"

namespace RE
{
	class __declspec(novtable) hkXmlStreamParser :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkXmlStreamParser };
		inline static constexpr auto VTABLE{ VTABLE::hkXmlStreamParser };

		// members
		std::uint8_t unk10[0x18];  // 0x10
		hkArray<std::uint8_t> unk28;  // 0x28
		hkArray<std::uint8_t> unk38;  // 0x38
		void* unk48;               // 0x48
		std::uint8_t unk50[0x50];  // 0x50
		hkArray<std::uint8_t> unkA0;  // 0xA0
		std::uint32_t unkB0;  // 0xB0
		std::uint8_t padB4[0x4];  // 0xB4
	};
	static_assert(sizeof(hkXmlStreamParser) == 0xB8);
	static_assert(offsetof(hkXmlStreamParser, unk48) == 0x48);
	static_assert(offsetof(hkXmlStreamParser, unk28) == 0x28);
	static_assert(offsetof(hkXmlStreamParser, unk38) == 0x38);
	static_assert(offsetof(hkXmlStreamParser, unkA0) == 0xA0);
	static_assert(offsetof(hkXmlStreamParser, unkB0) == 0xB0);
	static_assert(offsetof(hkXmlStreamParser, padB4) == 0xB4);
}
