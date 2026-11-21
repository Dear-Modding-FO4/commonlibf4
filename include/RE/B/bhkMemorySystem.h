#pragma once

#include "RE/H/hkMemorySystem.h"

namespace RE
{
	class __declspec(novtable) bhkMemorySystem :
		public hkMemorySystem  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkMemorySystem };
		inline static constexpr auto VTABLE{ VTABLE::bhkMemorySystem };

		// add
		virtual void Unk_15();  // 0xA8 [15]

		// members
		std::uint8_t unk08[0xF0];    // 0x08
		std::uint32_t unkF8;         // 0xF8
		std::uint8_t unkFC[0x4];     // 0xFC
		std::uint32_t unk100;        // 0x100
		std::uint8_t unk104[0x6AC];  // 0x104
	};
	static_assert(sizeof(bhkMemorySystem) == 0x7B0);
	static_assert(offsetof(bhkMemorySystem, unkF8) == 0xF8);
	static_assert(offsetof(bhkMemorySystem, unk100) == 0x100);
}
