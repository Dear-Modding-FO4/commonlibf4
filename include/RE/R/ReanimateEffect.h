#pragma once

#include "RE/C/CommandEffect.h"

namespace RE
{
	class __declspec(novtable) ReanimateEffect : public CommandEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ReanimateEffect };
		static constexpr auto VTABLE{ VTABLE::ReanimateEffect };
	};
}
