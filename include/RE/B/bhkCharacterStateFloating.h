#pragma once

#include "RE/B/bhkCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterStateFloating :
		public bhkCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterStateFloating };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterStateFloating };
	};
	static_assert(sizeof(bhkCharacterStateFloating) == 0x10);
}
