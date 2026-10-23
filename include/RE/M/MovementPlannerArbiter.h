#pragma once

#include "RE/B/BSTArray.h"
#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementArbiter.h"

namespace RE
{
	class IMovementControllerRegisterInterface;

	class __declspec(novtable) MovementPlannerArbiter :
	    public MovementArbiter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPlannerArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementPlannerArbiter };

		MovementPlannerArbiter() = delete;

		~MovementPlannerArbiter() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPlannerArbiter);

		// members
		std::byte                             unk18[0x18];  // 18
		BSTArray<IMovementPlannerAgent*>      agents;       // 30
		std::byte                             unk48[0x18];  // 48
		IMovementControllerRegisterInterface* controller;   // 60
		std::byte                             unk68[0x8];   // 68
	};
	static_assert(offsetof(MovementPlannerArbiter, unk18) == 0x18);
	static_assert(offsetof(MovementPlannerArbiter, agents) == 0x30);
	static_assert(offsetof(MovementPlannerArbiter, unk48) == 0x48);
	static_assert(offsetof(MovementPlannerArbiter, controller) == 0x60);
	static_assert(offsetof(MovementPlannerArbiter, unk68) == 0x68);
	static_assert(sizeof(MovementPlannerArbiter) == 0x70);
}
