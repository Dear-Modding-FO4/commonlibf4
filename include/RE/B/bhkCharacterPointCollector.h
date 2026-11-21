#pragma once

#include "RE/H/hknpAllHitsCollector.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterPointCollector :
		public hknpAllHitsCollector  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterPointCollector };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterPointCollector };

		// members
		std::uint8_t unk3F0[0x18];  // 0x3F0
		void* unk408;               // 0x408
		std::uint8_t unk410[0x8];   // 0x410
		std::uint32_t unk418;       // 0x418
	};
	static_assert(sizeof(bhkCharacterPointCollector) == 0x420);
	static_assert(offsetof(bhkCharacterPointCollector, unk408) == 0x408);
	static_assert(offsetof(bhkCharacterPointCollector, unk418) == 0x418);
}
