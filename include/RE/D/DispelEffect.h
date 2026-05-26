#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) DispelEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DispelEffect };
		static constexpr auto VTABLE{ VTABLE::DispelEffect };
	};
}
