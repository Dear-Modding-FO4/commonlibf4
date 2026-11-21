#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateInAir :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateInAir };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateInAir };

		// members
		std::uint32_t unk10;  // 0x10
	};
	static_assert(sizeof(bhkCharacterStateInAir) == 0x18);
	static_assert(offsetof(bhkCharacterStateInAir, unk10) == 0x10);
}
