#pragma once

#include "RE/H/hknpCharacterState.h"

namespace RE
{
	class __declspec(novtable) bhkCharacterState : public hknpCharacterState
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterState };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterState };
	};
}
