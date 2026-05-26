#pragma once

#include "RE/S/StaggerEffect.h"

namespace RE
{
	class __declspec(novtable) DisarmEffect : public StaggerEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::DisarmEffect };
		static constexpr auto VTABLE{ VTABLE::DisarmEffect };
	};
}
