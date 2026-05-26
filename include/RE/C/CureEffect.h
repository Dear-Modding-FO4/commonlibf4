#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) CureEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::CureEffect };
		static constexpr auto VTABLE{ VTABLE::CureEffect };
	};
}
