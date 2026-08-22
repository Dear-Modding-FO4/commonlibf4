#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementArbiter.h"
#include "REL/Relocation.h"

namespace RE
{
	/// Manages MovementPlannerAgent instances during movement planning.
	///
	/// Created during MovementControllerNPC::Activate via the setup function
	/// FUN_141e44c60 (ID 2301646). Maintains two arrays of planner agents:
	/// one for active agents and one for registered/lookup agents.
	///
	/// Registered via AutoRegisterMovementArbiterCreator<MovementPlannerArbiter>.
	///
	/// Size: ~0x80
	///   +0x00: vfptr (primary vtable, RVA 0x028987E0, 32 entries)
	///   +0x10: allocatorFlag (int32, initialized to 0x80000000)
	///   +0x18: First agent array (BSTArray<BSTSmartPointer<IMovementPlannerAgent>>)
	///   +0x30: allocatorFlag for second array
	///   +0x38: Second agent array (BSTArray<BSTSmartPointer<IMovementPlannerAgent>>)
	///   +0x68: Int array managed by FUN_141659160-style DWORD array
	class __declspec(novtable) MovementPlannerArbiter :
		public MovementArbiter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPlannerArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementPlannerArbiter };

		MovementPlannerArbiter() { REX::EMPLACE_VTABLE(this); }

		~MovementPlannerArbiter() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPlannerArbiter);

		// Setup function that registers planner agents.
		// FUN_141e44c60 (RVA 0x1E44C60, ID 2301646)

		// members
		// +0x00: vfptr (inherited from MovementArbiter, RVA 0x028987E0)
		// +0x08: base class data (from MovementArbiter)
		std::int32_t                                                      allocatorFlag1;        // 10 - initialized to 0x80000000
		char                                                              pad14[0x04];           // 14-17
		BSTArray<BSTSmartPointer<IMovementPlannerAgent>>                  agentArray1;           // 18 - First agent array (active/registered)
		std::int32_t                                                      allocatorFlag2;        // 30 - allocator flag for second array
		char                                                              pad34[0x04];           // 34-37
		BSTArray<BSTSmartPointer<IMovementPlannerAgent>>                  agentArray2;           // 38 - Second agent array (lookup)
		// +0x50-0x67: internal data / more fields
		char                                                              pad50[0x18];           // 50-67
		std::uint32_t                                                     intArray[6];           // 68 - DWORD array (0x18 bytes to +0x80)
	};
	static_assert(sizeof(MovementPlannerArbiter) == 0x80);
}
