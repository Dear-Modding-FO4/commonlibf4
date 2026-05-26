#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) AbsorbEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::AbsorbEffect };
		static constexpr auto VTABLE{ VTABLE::AbsorbEffect };
	};
}
