#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementQueryPathingState : public IMovementInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryPathingState };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryPathingState };
	};
}
