#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Pure virtual interface for all movement planner agent types.
	///
	/// Provides ~14 virtual function slots that are shared across all
	/// MovementPlannerAgent subclasses. The exact function signatures
	/// are not yet fully identified.
	class __declspec(novtable) IMovementPlannerAgent :
		public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementPlannerAgent };
		static constexpr auto VTABLE{ VTABLE::IMovementPlannerAgent };

		// virtual ~IMovementPlannerAgent() = default;  // 00 - inherited from IMovementInterface

		// add
		/// [03] - Common function shared by all planner agents
		virtual void Func03() = 0;  // 03 - RVA 0x141E85E70 (common to all planners)

		/// [04] - Set goal type for this agent
		virtual void SetGoalType() = 0;  // 04

		// [05] through [13] - Additional update/process functions

		/// [14] - Data pointer function
		virtual void Func14() = 0;  // 14

		/// [15] - Final virtual
		virtual void Func15() = 0;  // 15
	};
	static_assert(sizeof(IMovementPlannerAgent) == 0x8);
}
