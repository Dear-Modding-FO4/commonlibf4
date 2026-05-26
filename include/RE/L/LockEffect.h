#pragma once

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class __declspec(novtable) LockEffect : public ActiveEffect
	{
	public:
		static constexpr auto RTTI{ RTTI::LockEffect };
		static constexpr auto VTABLE{ VTABLE::LockEffect };
	};
}
