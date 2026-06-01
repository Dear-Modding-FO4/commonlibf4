#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Interface for querying pathing state from the movement controller.
	/// Embedded at MovementControllerNPC+0x128.
	///
	/// Full virtual function layout is not yet known.
	class __declspec(novtable) IMovementQueryState :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryState };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryState };

		// TODO: Add virtual functions as they are discovered
	};
	static_assert(sizeof(IMovementQueryState) == 0x8);
}
