#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) StaggerEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::StaggerEffect };
		static constexpr auto VTABLE{ VTABLE::StaggerEffect };
	};
}
