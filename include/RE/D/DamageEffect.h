#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) DamageEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DamageEffect };
		static constexpr auto VTABLE{ VTABLE::DamageEffect };
	};
}
