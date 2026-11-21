#pragma once

#include "RE/H/hknpCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterState :
		public hknpCharacterState  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkCharacterState };
		inline static constexpr auto VTABLE{ VTABLE::bhkCharacterState };
	};
	static_assert(sizeof(bhkCharacterState) == 0x10);
}
