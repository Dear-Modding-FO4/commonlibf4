#pragma once

#include "RE/H/hknpSpaceSplitter.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class __declspec(novtable) hknpGridSpaceSplitter :
		public hknpSpaceSplitter  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpGridSpaceSplitter };
		inline static constexpr auto VTABLE{ VTABLE::hknpGridSpaceSplitter };

		// members
		std::uint8_t unk28[0x8];  // 0x28
		hkVector4f unk30;  // 0x30
		std::uint8_t unk40[0x50];  // 0x40
	};
	static_assert(sizeof(hknpGridSpaceSplitter) == 0x90);
	static_assert(offsetof(hknpGridSpaceSplitter, unk28) == 0x28);
	static_assert(offsetof(hknpGridSpaceSplitter, unk30) == 0x30);
	static_assert(offsetof(hknpGridSpaceSplitter, unk40) == 0x40);
}
