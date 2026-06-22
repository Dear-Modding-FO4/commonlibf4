#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Interface for planner-level direct control of actor movement.
	/// Embedded at MovementControllerNPC+0x140.
	///
	/// Full virtual function layout is not yet known.
	class __declspec(novtable) IMovementPlannerDirectControl :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementPlannerDirectControl };
		static constexpr auto VTABLE{ VTABLE::IMovementPlannerDirectControl };

		// TODO: Add virtual functions as they are discovered
	};
	static_assert(sizeof(IMovementPlannerDirectControl) == 0x8);
}
