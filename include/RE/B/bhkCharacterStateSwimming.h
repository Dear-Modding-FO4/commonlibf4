#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateSwimming :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateSwimming };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateSwimming };
	};
	static_assert(sizeof(bhkCharacterStateSwimming) == 0x10);
}
