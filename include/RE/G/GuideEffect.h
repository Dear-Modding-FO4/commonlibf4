#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) GuideEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::GuideEffect };
		static constexpr auto VTABLE{ VTABLE::GuideEffect };
	};
}
