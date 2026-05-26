#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) SpawnHazardEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::SpawnHazardEffect };
		static constexpr auto VTABLE{ VTABLE::SpawnHazardEffect };
	};
}
