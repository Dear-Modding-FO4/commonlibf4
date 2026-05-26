#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) DisguiseEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DisguiseEffect };
		static constexpr auto VTABLE{ VTABLE::DisguiseEffect };
	};
}
