#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateJumping :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateJumping };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateJumping };
	};
	static_assert(sizeof(bhkCharacterStateJumping) == 0x10);
}
