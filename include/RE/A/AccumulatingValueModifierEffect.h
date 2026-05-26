#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) AccumulatingValueModifierEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::AccumulatingValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::AccumulatingValueModifierEffect };
	};
}
