#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	class IMovementState;

	class __declspec(novtable) MovementAgent :
	    public BSIntrusiveRefCounted  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementAgent };
		static constexpr auto VTABLE{ VTABLE::MovementAgent };

		MovementAgent() = delete;

		virtual ~MovementAgent() = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementAgent);

		// members
		std::byte       unk0C[0x4];  // 0C
		IMovementState* state;       // 10
	};
	static_assert(offsetof(MovementAgent, refCount) == 0x8);
	static_assert(offsetof(MovementAgent, unk0C) == 0xC);
	static_assert(offsetof(MovementAgent, state) == 0x10);
	static_assert(sizeof(MovementAgent) == 0x18);

	class __declspec(novtable) MovementPlannerAgent :
	    public MovementAgent,         // 00
	    public IMovementPlannerAgent  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPlannerAgent };
		static constexpr auto VTABLE{ VTABLE::MovementPlannerAgent };

		MovementPlannerAgent() = delete;

		~MovementPlannerAgent() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPlannerAgent);
	};
	static_assert(sizeof(MovementPlannerAgent) == 0x20);
}
