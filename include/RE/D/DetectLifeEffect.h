#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) DetectLifeEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DetectLifeEffect };
		static constexpr auto VTABLE{ VTABLE::DetectLifeEffect };
	};
}
