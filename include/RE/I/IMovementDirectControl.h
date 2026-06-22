#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementInterface.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	/// 28-byte goal structure passed to IMovementDirectControl::SetPositionGoal.
	/// Used by ActorMover::SetPathfindingGoalPos for quick "move to position" commands.
	struct MovementGoalDirect
	{
		std::uint32_t type;   // 00 - 2 = move_to_pos, 0 = stop, 1 = heading
		float         posX;   // 04
		float         posY;   // 08
		float         posZ;   // 0C
		std::uint32_t zero;   // 10 - Always 0
		float         speed;  // 14
		float         speedDup; // 18 - Duplicate of speed
	};
	static_assert(sizeof(MovementGoalDirect) == 0x1C);

	/// 28-byte goal structure passed to IMovementDirectControl::SetHeadingGoal.
	/// Used by FUN_140dc1330 for heading-based movement.
	struct MovementHeadingGoal
	{
		std::uint32_t type;     // 00 - 0 = stop, 1 = rotate to heading
		float         headingX; // 04 - FLT_MAX sentinel (or heading vector)
		float         headingY; // 08 - FLT_MAX
		float         headingZ; // 0C - FLT_MAX
		std::uint32_t zero;     // 10 - Always 0
		float         speed;    // 14 - FLT_MAX
		float         speedDup; // 18 - FLT_MAX
	};
	static_assert(sizeof(MovementHeadingGoal) == 0x1C);

	/// Interface for direct control of actor movement.
	/// Embedded at MovementControllerNPC+0x138.
	///
	/// Resolved via QueryInterface with GUID DAT_143dc3af8.
	/// Shares the same vtable as IMovementSetGoal but dispatches
	/// different behavior based on the `this` pointer offset.
	///
	/// Vtable layout (shared with IMovementSetGoal):
	///   +0x00: Destructor
	///   +0x08: SetPositionGoal(const MovementGoalDirect&) - takes position/heading struct
	///   +0x10: SetHeadingGoal(const MovementHeadingGoal&) - takes heading-based struct
	class __declspec(novtable) IMovementDirectControl :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementDirectControl };
		static constexpr auto VTABLE{ VTABLE::IMovementDirectControl };

		// add
		/// Set a position-based movement goal.
		/// When called through MC+0x138, interprets the parameter as a direct
		/// struct (MovementGoalDirect) rather than a BSFixedString*.
		/// @param a_goal The goal structure containing type, position, and speed
		virtual void SetPositionGoal(const MovementGoalDirect& a_goal) = 0;  // 01

		/// Set a heading-based movement goal.
		/// When called through MC+0x138, handles heading/rotation commands.
		/// @param a_goal The heading goal structure
		virtual void SetHeadingGoal(const MovementHeadingGoal& a_goal) = 0;  // 02
	};
	static_assert(sizeof(IMovementDirectControl) == 0x8);
}
