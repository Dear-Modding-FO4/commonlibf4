#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateOnGround :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateOnGround };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateOnGround };

		// members
		std::uint8_t unk10;  // 0x10
	};
	static_assert(sizeof(bhkCharacterStateOnGround) == 0x18);
	static_assert(offsetof(bhkCharacterStateOnGround, unk10) == 0x10);
}
