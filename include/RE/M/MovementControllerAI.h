#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	class __declspec(novtable) MovementControllerAI :
	    public BSIntrusiveRefCounted  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementControllerAI };
		static constexpr auto VTABLE{ VTABLE::MovementControllerAI };

		MovementControllerAI() = delete;

		virtual ~MovementControllerAI() = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementControllerAI);

		// members
		std::byte unk0C[0x114];  // 0C
	};
	static_assert(offsetof(MovementControllerAI, refCount) == 0x8);
	static_assert(offsetof(MovementControllerAI, unk0C) == 0xC);
	static_assert(sizeof(MovementControllerAI) == 0x120);
}
