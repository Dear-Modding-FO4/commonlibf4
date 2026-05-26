#pragma once

#include "RE/I/IMovementState.h"

namespace RE
{
	class __declspec(novtable) MovementStateTransformOverride : public IMovementState
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementStateTransformOverride };
		static constexpr auto VTABLE{ VTABLE::MovementStateTransformOverride };
	};
}
