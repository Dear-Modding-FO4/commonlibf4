#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementQueryPathFollowing : public IMovementInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryPathFollowing };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryPathFollowing };
	};
}
