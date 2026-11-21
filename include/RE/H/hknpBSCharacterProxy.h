#pragma once

#include "RE/H/hknpCharacterProxy.h"

namespace RE
{
	class __declspec(novtable) hknpBSCharacterProxy :
		public hknpCharacterProxy  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpBSCharacterProxy };
		inline static constexpr auto VTABLE{ VTABLE::hknpBSCharacterProxy };

		// members
		std::uint8_t unk130[0x8];  // 0x130
		std::uint8_t unk138;       // 0x138
	};
	static_assert(sizeof(hknpBSCharacterProxy) == 0x140);
	static_assert(offsetof(hknpBSCharacterProxy, unk138) == 0x138);
}
