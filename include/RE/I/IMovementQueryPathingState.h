#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Interface for querying pathing state from the movement controller.
	/// Embedded at MovementControllerNPC+0x128.
	///
	/// Shares the same vtable as IMovementSetGoal but dispatches different
	/// behavior based on the `this` pointer offset.
	///
	/// Vtable layout (shared with IMovementSetGoal):
	///   +0x00: Destructor
	///   +0x08: SetGoal(BSFixedString*, data) - same as IMovementSetGoal's SetGoal
	///   +0x10: QueryPathingState - specific to this interface
	class __declspec(novtable) IMovementQueryPathingState :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementQueryPathingState };
		static constexpr auto VTABLE{ VTABLE::IMovementQueryPathingState };

		// add
		/// Store a goal entry in the pathing state system.
		/// Behaves identically to IMovementSetGoal::SetGoal when called
		/// through this interface pointer.
		/// @param a_name Goal name string
		/// @param a_data Goal data payload
		/// @return 1 on success
		virtual std::int32_t SetGoal(BSFixedString* a_name, std::uint64_t a_data) = 0;  // 01

		/// Query the current pathing state information.
		virtual void QueryPathingState() = 0;  // 02
	};
	static_assert(sizeof(IMovementQueryPathingState) == 0x8);
}
