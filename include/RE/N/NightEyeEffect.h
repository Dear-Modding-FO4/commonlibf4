#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) NightEyeEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::NightEyeEffect };
		static constexpr auto VTABLE{ VTABLE::NightEyeEffect };
	};
}
