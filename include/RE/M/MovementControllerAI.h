#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementControllerOutputData.h"
#include "RE/M/MovementTweenerOutputData.h"

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

		void GetMovement(float a_deltaTime, MovementControllerOutputData& a_movement, MovementTweenerOutputData& a_tweenerOutput)
		{
			using func_t = void (*)(MovementControllerAI*, float, MovementControllerOutputData&, MovementTweenerOutputData&);
			const auto vtable = *reinterpret_cast<std::uintptr_t**>(this);
			reinterpret_cast<func_t>(vtable[0x7])(this, a_deltaTime, a_movement, a_tweenerOutput);
		}

		// members
		std::byte unk0C[0x114];  // 0C
	};
	static_assert(offsetof(MovementControllerAI, refCount) == 0x8);
	static_assert(offsetof(MovementControllerAI, unk0C) == 0xC);
	static_assert(sizeof(MovementControllerAI) == 0x120);
}
