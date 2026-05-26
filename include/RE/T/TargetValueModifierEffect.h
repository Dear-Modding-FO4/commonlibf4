#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) TargetValueModifierEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::TargetValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::TargetValueModifierEffect };
	};
}
