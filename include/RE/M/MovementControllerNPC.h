#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementDirectControl.h"
#include "RE/I/IMovementMotionDrivenControl.h"
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

		[[nodiscard]] IMovementMotionDrivenControl* GetIMovementMotionDrivenControl()
		{
			return reinterpret_cast<IMovementMotionDrivenControl*>(unk120 + 0x8);
		}

		[[nodiscard]] const IMovementMotionDrivenControl* GetIMovementMotionDrivenControl() const
		{
			return reinterpret_cast<const IMovementMotionDrivenControl*>(unk120 + 0x8);
		}

		[[nodiscard]] bool GetControlsDriven() const noexcept { return controlsDriven; }
		[[nodiscard]] bool GetAIDriven() const noexcept { return !controlsDriven; }
		[[nodiscard]] bool IsPlannerDirectControl() const noexcept { return movementType == 8 && plannerDirectControl; }

		// members
		std::byte                                  unk120[0x30];      // 120
		BSSpinLock                                 messageQueueLock;  // 150
		BSTArray<BSTSmartPointer<MovementMessage>> messages;          // 158
		std::byte                                  unk170[0x18];      // 170
		std::byte                                  unk188[0x8];       // 188
		Actor*                                     actor;             // 190
		std::uint32_t                              movementType;      // 198
		std::uint32_t                              pendingMotionType;     // 19C
		std::byte                                  unk1A0;                // 1A0
		bool                                       controlsDriven;        // 1A1
		bool                                       directControl;         // 1A2
		bool                                       plannerDirectControl;  // 1A3
		std::byte                                  unk1A4;                // 1A4
		bool                                       motionDriven;          // 1A5
		std::byte                                  unk1A6;                // 1A6
		std::byte                                  unk1A7;                // 1A7
	};
	static_assert(offsetof(MovementControllerNPC, unk120) == 0x120);
	static_assert(offsetof(MovementControllerNPC, messageQueueLock) == 0x150);
	static_assert(offsetof(MovementControllerNPC, messages) == 0x158);
	static_assert(offsetof(MovementControllerNPC, unk170) == 0x170);
	static_assert(offsetof(MovementControllerNPC, unk188) == 0x188);
	static_assert(offsetof(MovementControllerNPC, actor) == 0x190);
	static_assert(offsetof(MovementControllerNPC, movementType) == 0x198);
	static_assert(offsetof(MovementControllerNPC, controlsDriven) == 0x1A1);
	static_assert(offsetof(MovementControllerNPC, plannerDirectControl) == 0x1A3);
	static_assert(sizeof(MovementControllerNPC) == 0x1A8);
}
