#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementInterface.h"
#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"
#include "REL/Relocation.h"

namespace RE
{
	/// Base class for all movement planner agent types.
	///
	/// Registered via AutoRegisterMovementAgentCreator<T> and managed
	/// through BSTCreateFactoryManager. Provides 16 virtual function slots
	/// shared across all planner agent variants.
	///
	/// Subclasses include:
	///   - MovementPlannerAgentDirectControl
	///   - MovementPlannerAgentWarp
	///   - MovementPlannerAgentNavmeshBounds
	///   - MovementPlannerAgentHorseControlsLoadScrapper
	///   - MovementPlannerAgentKeepOffsetLoadScrapper
	///   - MovementAgentPathFollowerVirtual
	///
	/// Size: ~0x40
	class __declspec(novtable) MovementPlannerAgent :
		public IMovementPlannerAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPlannerAgent };
		static constexpr auto VTABLE{ VTABLE::MovementPlannerAgent };

		MovementPlannerAgent() { REX::EMPLACE_VTABLE(this); }

		~MovementPlannerAgent() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPlannerAgent);

		// Override pure virtuals from IMovementPlannerAgent with base implementations:
		// [03] - FUN_141e85e70 - common to all planners
		// [04] - FUN_141e7fad0 - SetGoalType (overridden by DirectControl)
		// [05-13] - Various update/process functions
		// [14] - Data pointer function
		// [15] - Final virtual

		// members
		// Full member layout is not yet known.
		// The size is approximately 0x40 based on factory template parameter.
		char pad08[0x38];  // 08-3F
	};
	static_assert(sizeof(MovementPlannerAgent) == 0x40);
}
