#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) DualValueModifierEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DualValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::DualValueModifierEffect };
	};
}
