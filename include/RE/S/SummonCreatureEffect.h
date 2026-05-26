#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) SummonCreatureEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::SummonCreatureEffect };
		static constexpr auto VTABLE{ VTABLE::SummonCreatureEffect };
	};
}
