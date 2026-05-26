#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) ImmunityEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ImmunityEffect };
		static constexpr auto VTABLE{ VTABLE::ImmunityEffect };
	};
}
