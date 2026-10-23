#pragma once

#include "RE/B/BSSpinLock.h"
#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementPlannerAgent.h"

namespace RE
{
	class IMovementControllerRegisterInterface;

	class __declspec(novtable) MovementAgentPathFollowerVirtual :
	    public MovementAgent,         // 00
	    public IMovementPlannerAgent  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementAgentPathFollowerVirtual };
		static constexpr auto VTABLE{ VTABLE::MovementAgentPathFollowerVirtual };

		MovementAgentPathFollowerVirtual() = delete;

		~MovementAgentPathFollowerVirtual() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementAgentPathFollowerVirtual);

		// members
		std::byte                             unk20[0x18];  // 20
		BSReadWriteLock                       lock;         // 38
		std::byte                             unk40[0x18];  // 40
		IMovementControllerRegisterInterface* controller;   // 58
	};
	static_assert(offsetof(MovementAgentPathFollowerVirtual, unk20) == 0x20);
	static_assert(offsetof(MovementAgentPathFollowerVirtual, lock) == 0x38);
	static_assert(offsetof(MovementAgentPathFollowerVirtual, unk40) == 0x40);
	static_assert(offsetof(MovementAgentPathFollowerVirtual, controller) == 0x58);
	static_assert(sizeof(MovementAgentPathFollowerVirtual) == 0x60);
}
