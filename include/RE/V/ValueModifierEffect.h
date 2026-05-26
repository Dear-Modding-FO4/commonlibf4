#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) ValueModifierEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::ValueModifierEffect };
	};
}
