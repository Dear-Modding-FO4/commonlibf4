#pragma once

#include "RE/H/hkStreamReader.h"

namespace RE
{
	class __declspec(novtable) hkMemoryTrackStreamReader :
		public hkStreamReader  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkMemoryTrackStreamReader };
		inline static constexpr auto VTABLE{ VTABLE::hkMemoryTrackStreamReader };

		// members
		void* unk10;              // 0x10
		std::uint32_t unk18;      // 0x18
		std::uint32_t unk1C;  // 0x1C
		std::uint8_t unk20;       // 0x20
	};
	static_assert(sizeof(hkMemoryTrackStreamReader) == 0x28);
	static_assert(offsetof(hkMemoryTrackStreamReader, unk10) == 0x10);
	static_assert(offsetof(hkMemoryTrackStreamReader, unk18) == 0x18);
	static_assert(offsetof(hkMemoryTrackStreamReader, unk20) == 0x20);
	static_assert(offsetof(hkMemoryTrackStreamReader, unk1C) == 0x1C);
}
