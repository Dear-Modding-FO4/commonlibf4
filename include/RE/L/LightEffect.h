#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) LightEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::LightEffect };
		static constexpr auto VTABLE{ VTABLE::LightEffect };
	};
}
