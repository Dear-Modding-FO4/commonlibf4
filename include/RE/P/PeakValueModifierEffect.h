#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) PeakValueModifierEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::PeakValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::PeakValueModifierEffect };
	};
}
