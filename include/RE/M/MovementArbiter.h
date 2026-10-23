#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	class IMovementState;

	class __declspec(novtable) MovementArbiter :
	    public BSIntrusiveRefCounted  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementArbiter };

		MovementArbiter() = delete;

		virtual ~MovementArbiter() = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementArbiter);

		// members
		std::byte       unk0C[0x4];  // 0C
		IMovementState* state;       // 10
	};
	static_assert(offsetof(MovementArbiter, refCount) == 0x8);
	static_assert(offsetof(MovementArbiter, unk0C) == 0xC);
	static_assert(offsetof(MovementArbiter, state) == 0x10);
	static_assert(sizeof(MovementArbiter) == 0x18);
}
