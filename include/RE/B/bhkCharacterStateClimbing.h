#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateClimbing :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateClimbing };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateClimbing };
	};
	static_assert(sizeof(bhkCharacterStateClimbing) == 0x10);
}
