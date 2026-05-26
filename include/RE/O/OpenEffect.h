#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) OpenEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::OpenEffect };
		static constexpr auto VTABLE{ VTABLE::OpenEffect };
	};
}
