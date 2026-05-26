#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) InvisibilityEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::InvisibilityEffect };
		static constexpr auto VTABLE{ VTABLE::InvisibilityEffect };
	};
}
