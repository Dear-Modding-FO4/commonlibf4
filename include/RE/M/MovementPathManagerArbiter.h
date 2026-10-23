#pragma once

#include "RE/B/BSActorPathingMessageQueue.h"
#include "RE/B/BSPathingRequest.h"
#include "RE/B/BSPathingSolution.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementQueryPathingState.h"
#include "RE/I/IMovementSetGoal.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementArbiter.h"

namespace RE
{
	class IMovementControllerRegisterInterface;

	class __declspec(novtable) MovementPathManagerArbiter :
	    public MovementArbiter,            // 00
	    public IMovementSetGoal,           // 18
	    public IMovementQueryPathingState  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPathManagerArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementPathManagerArbiter };

		MovementPathManagerArbiter() = delete;

		~MovementPathManagerArbiter() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPathManagerArbiter);

		[[nodiscard]] IMovementSetGoal*                 GetSetGoal() { return this; }
		[[nodiscard]] const IMovementSetGoal*           GetSetGoal() const { return this; }
		[[nodiscard]] IMovementQueryPathingState*       GetQueryPathingState() { return this; }
		[[nodiscard]] const IMovementQueryPathingState* GetQueryPathingState() const { return this; }

		// members
		std::byte                                   unk28[0x18];   // 28
		IMovementControllerRegisterInterface*       controller;    // 40
		std::byte                                   unk48[0x8];    // 48
		BSTSmartPointer<BSPathingRequest>           request;       // 50
		BSTSmartPointer<BSPathingSolution>          solution;      // 58
		BSTSmartPointer<BSActorPathingMessageQueue> messageQueue;  // 60
		BSReadWriteLock                             lock;          // 68
		std::byte                                   unk70[0x10];   // 70
	};
	static_assert(offsetof(MovementPathManagerArbiter, unk28) == 0x28);
	static_assert(offsetof(MovementPathManagerArbiter, controller) == 0x40);
	static_assert(offsetof(MovementPathManagerArbiter, unk48) == 0x48);
	static_assert(offsetof(MovementPathManagerArbiter, request) == 0x50);
	static_assert(offsetof(MovementPathManagerArbiter, solution) == 0x58);
	static_assert(offsetof(MovementPathManagerArbiter, messageQueue) == 0x60);
	static_assert(offsetof(MovementPathManagerArbiter, lock) == 0x68);
	static_assert(offsetof(MovementPathManagerArbiter, unk70) == 0x70);
	static_assert(sizeof(MovementPathManagerArbiter) == 0x80);
}
