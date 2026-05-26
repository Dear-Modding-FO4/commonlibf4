#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) CommandEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::CommandEffect };
		static constexpr auto VTABLE{ VTABLE::CommandEffect };
	};
}
