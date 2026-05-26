#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) ScriptEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ScriptEffect };
		static constexpr auto VTABLE{ VTABLE::ScriptEffect };
	};
}
