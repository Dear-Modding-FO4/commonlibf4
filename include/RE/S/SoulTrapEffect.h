#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) SoulTrapEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::SoulTrapEffect };
		static constexpr auto VTABLE{ VTABLE::SoulTrapEffect };
	};
}
