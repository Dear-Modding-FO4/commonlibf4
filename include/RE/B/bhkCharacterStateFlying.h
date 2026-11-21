#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateFlying :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateFlying };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateFlying };
	};
	static_assert(sizeof(bhkCharacterStateFlying) == 0x10);
}
