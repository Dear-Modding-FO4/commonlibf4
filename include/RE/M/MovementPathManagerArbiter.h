#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/I/IMovementQueryPathingState.h"
#include "RE/I/IMovementSetGoal.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementArbiter.h"
#include "REL/Relocation.h"

namespace RE
{
	class BSPathingRequest;
	class MovementControllerNPC;

	/// Manages path submission, clearing, and re-requesting.
	///
	/// Registered via AutoRegisterMovementArbiterCreator<MovementPathManagerArbiter>.
	/// Created during MovementControllerNPC::Activate alongside other arbiters.
	/// Handles the IMovementPathManager, IMovementSetGoal, and IMovementQueryPathingState
	/// interfaces via embedded sub-objects.
	///
	/// Size: 0x80
	///   +0x00: vfptr (primary vtable, RVA 0x02895228)
	///   +0x18: Embedded IMovementSetGoal interface vtable
	///   +0x20: Embedded IMovementQueryPathingState interface vtable
	///   +0x28: BSFixedString[2] array (0x20 bytes to +0x48)
	///   +0x40: Back-pointer to MovementControllerNPC
	///   +0x48: Pad / count
	///   +0x50: BSTSmartPointer<BSPathingRequest> (path request)
	///   +0x58: BSTSmartPointer<BSPathingRequest> (0xB0 byte allocation)
	///   +0x60: BSTSmartPointer<?> (0x38 byte allocation)
	///   +0x68: DWORD array (0x18 bytes to +0x80)
	class __declspec(novtable) MovementPathManagerArbiter :
		public MovementArbiter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementPathManagerArbiter };
		static constexpr auto VTABLE{ VTABLE::MovementPathManagerArbiter };

		MovementPathManagerArbiter() { REX::EMPLACE_VTABLE(this); }

		~MovementPathManagerArbiter() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementPathManagerArbiter);

		// Embedded interface accessors (offset-based reads)
		/// Get the embedded IMovementSetGoal interface (at +0x18).
		[[nodiscard]] IMovementSetGoal* GetSetGoal()
		{
			return reinterpret_cast<IMovementSetGoal*>(reinterpret_cast<std::uintptr_t>(this) + 0x18);
		}

		/// Get the embedded IMovementQueryPathingState interface (at +0x20).
		[[nodiscard]] IMovementQueryPathingState* GetQueryPathingState()
		{
			return reinterpret_cast<IMovementQueryPathingState*>(reinterpret_cast<std::uintptr_t>(this) + 0x20);
		}

		/// Get the MovementControllerNPC back-pointer (at +0x40).
		[[nodiscard]] MovementControllerNPC* GetParentMC() const
		{
			return parentMC;
		}

		// members
		// +0x00: vfptr (inherited from MovementArbiter, RVA 0x02895228)
		// +0x08: internal data
		char                               pad08[0x10];                      // 08-17
		void*                              imovementSetGoal_vtable;          // 18 - Embedded IMovementSetGoal vtable
		void*                              imovementQueryPathingState_vtable; // 20 - Embedded IMovementQueryPathingState vtable
		BSFixedString                      fixedStringArray[2];              // 28 - 2-entry BSFixedString array (0x20 bytes)
		MovementControllerNPC*             parentMC;                         // 40 - Back-pointer to MovementControllerNPC (used for QI)
		char                               pad48[0x08];                      // 48 - Pad / count area
		BSTSmartPointer<BSPathingRequest>  smartPtr1;                        // 50 - Pathing request reference
		BSTSmartPointer<BSPathingRequest>  smartPtr2;                        // 58 - BSPathingRequest (0xB0 byte allocation)
		BSTSmartPointer<void>              smartPtr3;                        // 60 - Generic (0x38 byte allocation)
		std::uint32_t                      dwordArray[6];                    // 68 - DWORD array (0x18 bytes to end)
	};
	static_assert(sizeof(MovementPathManagerArbiter) == 0x80);
}
