#pragma once

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class __declspec(novtable) ParalysisEffect : public ValueModifierEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ParalysisEffect };
		static constexpr auto VTABLE{ VTABLE::ParalysisEffect };
	};
}
