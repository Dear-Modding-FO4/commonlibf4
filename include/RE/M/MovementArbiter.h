#pragma once

#include "RE/M/MemoryManager.h"

namespace RE
{
	/// Base class for all movement arbiter types.
	///
	/// Arbiters are registered via AutoRegisterMovementArbiterCreator<T>
	/// and managed through BSTCreateFactoryManager. They handle various
	/// aspects of pathing and movement arbitration.
	///
	/// Subclasses include:
	///   - MovementPathManagerArbiter  (path submission/clear)
	///   - MovementPlannerArbiter     (agent registration & orchestration)
	///   - MovementHandlerArbiter     (movement handler dispatch)
	///   - MovementTweenerArbiter     (tweener interpolation)
	///   - MovementPostUpdateArbiter  (post-update tasks)
	class __declspec(novtable) MovementArbiter
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementArbiter };

		virtual ~MovementArbiter() = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementArbiter);
	};
	static_assert(sizeof(MovementArbiter) == 0x8);
}
