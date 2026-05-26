#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) CommandSummonedEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::CommandSummonedEffect };
		static constexpr auto VTABLE{ VTABLE::CommandSummonedEffect };
	};
}
