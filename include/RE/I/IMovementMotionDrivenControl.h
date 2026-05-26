#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementMotionDrivenControl : public IMovementInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementMotionDrivenControl };
		static constexpr auto VTABLE{ VTABLE::IMovementMotionDrivenControl };
	};
}
