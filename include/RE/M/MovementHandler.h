#pragma once

#include "RE/P/PlayerInputHandler.h"

namespace RE
{
	class __declspec(novtable) MovementHandler : public PlayerInputHandler
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementHandler };
		static constexpr auto VTABLE{ VTABLE::MovementHandler };
	};
}
