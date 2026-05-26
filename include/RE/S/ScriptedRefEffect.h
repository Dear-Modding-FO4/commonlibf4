#pragma once

#include "RE/S/ScriptEffect.h"

namespace RE
{
	class __declspec(novtable) ScriptedRefEffect : public ScriptEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::ScriptedRefEffect };
		static constexpr auto VTABLE{ VTABLE::ScriptedRefEffect };
	};
}
