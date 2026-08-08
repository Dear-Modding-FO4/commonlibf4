#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Interface for setting sprint state on the movement controller.
	/// Embedded at MovementControllerNPC+0x148.
	///
	/// Full virtual function layout is not yet known.
	class __declspec(novtable) IMovementSetSprinting :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementSetSprinting };
		static constexpr auto VTABLE{ VTABLE::IMovementSetSprinting };

		// TODO: Add virtual functions as they are discovered
	};
	static_assert(sizeof(IMovementSetSprinting) == 0x8);
}
