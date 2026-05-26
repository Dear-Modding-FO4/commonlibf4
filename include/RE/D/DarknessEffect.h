#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) DarknessEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DarknessEffect };
		static constexpr auto VTABLE{ VTABLE::DarknessEffect };
	};
}
