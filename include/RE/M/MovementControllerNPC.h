#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementDirectControl.h"
#include "RE/I/IMovementPlannerDirectControl.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementControllerAI.h"
#include "RE/M/MovementMessage.h"

namespace RE
{
	class Actor;

	class __declspec(novtable) MovementControllerNPC :
	    public MovementControllerAI  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementControllerNPC };
		static constexpr auto VTABLE{ VTABLE::MovementControllerNPC };

		MovementControllerNPC() = delete;

		~MovementControllerNPC() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementControllerNPC);

		[[nodiscard]] void* QueryInterface(const BSFixedString& a_name)
		{
			using func_t = decltype(&MovementControllerNPC::QueryInterface);
			static REL::Relocation<func_t> func{ ID::MovementControllerNPC::QueryInterface };
			return func(this, a_name);
		}

		[[nodiscard]] IMovementDirectControl* GetIMovementDirectControl()
		{
			return reinterpret_cast<IMovementDirectControl*>(unk120 + 0x18);
		}

		[[nodiscard]] const IMovementDirectControl* GetIMovementDirectControl() const
		{
			return reinterpret_cast<const IMovementDirectControl*>(unk120 + 0x18);
		}

		[[nodiscard]] IMovementPlannerDirectControl* GetIMovementPlannerDirectControl()
		{
			return reinterpret_cast<IMovementPlannerDirectControl*>(unk120 + 0x20);
		}

		[[nodiscard]] const IMovementPlannerDirectControl* GetIMovementPlannerDirectControl() const
		{
			return reinterpret_cast<const IMovementPlannerDirectControl*>(unk120 + 0x20);
		}

		[[nodiscard]] Actor* GetActor() const { return actor; }

		// members
		std::byte                                  unk120[0x30];      // 120
		BSSpinLock                                 messageQueueLock;  // 150
		BSTArray<BSTSmartPointer<MovementMessage>> messages;          // 158
		std::byte                                  unk170[0x18];      // 170
		std::byte                                  unk188[0x8];       // 188
		Actor*                                     actor;             // 190
		std::byte                                  unk198[0x10];      // 198
	};
	static_assert(offsetof(MovementControllerNPC, unk120) == 0x120);
	static_assert(offsetof(MovementControllerNPC, messageQueueLock) == 0x150);
	static_assert(offsetof(MovementControllerNPC, messages) == 0x158);
	static_assert(offsetof(MovementControllerNPC, unk170) == 0x170);
	static_assert(offsetof(MovementControllerNPC, unk188) == 0x188);
	static_assert(offsetof(MovementControllerNPC, actor) == 0x190);
	static_assert(offsetof(MovementControllerNPC, unk198) == 0x198);
	static_assert(sizeof(MovementControllerNPC) == 0x1A8);
}
