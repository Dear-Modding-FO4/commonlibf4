#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/I/IMovementDirectControl.h"
#include "RE/I/IMovementPathEvaluator.h"
#include "RE/I/IMovementPathManager.h"
#include "RE/I/IMovementPlannerDirectControl.h"
#include "RE/I/IMovementQueryState.h"
#include "RE/I/IMovementSetGoal.h"
#include "RE/I/IMovementSetSprinting.h"
#include "RE/M/MemoryManager.h"
#include "REL/Relocation.h"

namespace RE
{
	class Actor;

	/// Controls an actor's movement at the Havok/physics level.
	///
	/// MovementControllerNPC bridges the gap between pathfinding requests
	/// (via ActorMover) and the actual Havok character controller movement.
	/// Every NPC with an AIProcess has one at Actor+0x318 (BSTSmartPointer).
	///
	/// Size: 0x1A8
	///   +0x000: vfptr (MovementControllerNPC vtable)
	///   +0x008: RefCount (int32, BSTSmartPointer ref count)
	///   +0x050: Interface table (array of {BSFixedString, uint64_t} pairs) - used by QueryInterface
	///   +0x100: Interface count (int32)
	///   +0x108: SpinLock for interface table access
	///   +0x120: IMovementSetGoal interface vtable
	///   +0x128: IMovementQueryState interface vtable
	///   +0x130: IMovementPathEvaluator / IMovementPathManager vtable
	///   +0x138: IMovementDirectControl interface vtable
	///   +0x140: IMovementPlannerDirectControl interface vtable
	///   +0x148: IMovementSetSprinting interface vtable
	///   +0x150: Update spinlock counter
	///   +0x154: Update recursion counter
	///   +0x158: Pending goal queue head
	///   +0x160: Pending goal count
	///   +0x170: Active goal queue head
	///   +0x178: Active goal count
	///   +0x188: Handle pointer (cleaned up in dtor)
	///   +0x190: Actor* back-pointer
	///   +0x198: State (init to 2)
	///   +0x19C: Sub-state (0=idle, 1=active, 2=reset, 3=disable)
	///   +0x1A0: MoveMode (uint32, low byte: 0=walk, 1=run)
	///   +0x1A4: Activation flags (uint16)
	///   +0x1A6: Active flag (uint8)
	///
	/// Vtable layout:
	///   [0]: Destructor
	///   [1]: FUN_141E44880 (SetGoal/SetPositionGoal dispatcher)
	///   [2]: FUN_141E44A10 (RequestPath cancel?)
	///   [3]: QueryInterface (FUN_141E44940, RVA 0x1E44940, ID 2301643)
	///   [4]: FUN_141E44AE0 (RequestPath by name)
	///   [5]: FUN_141E44480 (interface cleanup)
	///   [6]: FUN_140DC6C20 (PostInit)
	///   [7]: FUN_141E44530 (SetGoal/SubmitGoal)
	///   [8]: FUN_141E44780 (ProcessGoal?)
	///
	/// NOTE: The class is NOT declared with virtual functions here because the
	/// vtable is set by the game's constructor at runtime. Use the raw memory
	/// offsets for field access.
	///
	/// The 6 sub-interfaces at +0x120 through +0x148 all share the same vtable
	/// as the primary class but dispatch differently based on `this` offset.
	///
	class MovementControllerNPC
	{
	public:
		inline static constexpr auto RTTI{ RTTI::MovementControllerNPC };
		inline static constexpr auto VTABLE{ VTABLE::MovementControllerNPC };

		/// State enum for +0x198.
		enum class State : std::int32_t
		{
			kUninitialized = 0,
			kInitialized = 2  // Value set by constructor
		};

		/// Sub-state enum for +0x19C.
		enum class SubState : std::int32_t
		{
			kIdle = 0,
			kActive = 1,
			kReset = 2,
			kDisable = 3
		};

		/// Move mode enum for +0x1A0 (low byte).
		enum class MoveMode : std::uint8_t
		{
		 kWalk = 0,
		 kRun = 1
		};

		// === QueryInterface (vtable[3], RVA 0x1E44940, ID 2301643) ===

		/// Query the movement controller for a named interface.
		/// Searches the BSFixedString-keyed table at +0x50 (count at +0x100).
		/// Returns the interface slot pointer (e.g. this+0x120, this+0x130, etc.)
		/// or nullptr if the GUID is not found.
		///
		/// Available GUIDs:
		///   DAT_143dc3ac0 (IMovementSetGoal)    → MC+0x120
		///   DAT_143dc3ab8 (IMovementPathManager) → MC+0x130
		///   DAT_143dc3af8 (IMovementDirectControl) → MC+0x138
		///
		/// @param a_guid The GUID BSFixedString to look up
		/// @return Pointer to the interface vtable slot, or nullptr
		void* QueryInterface(BSFixedString* a_guid)
		{
			using func_t = void*(MovementControllerNPC*, BSFixedString*);
			static REL::Relocation<func_t> func{ REL::ID(2301643) };
			return func(this, a_guid);
		}

		// === Interface accessors (offset-based reads from the sub-interface vtables) ===

		/// Get the IMovementSetGoal interface pointer (at +0x120).
		/// NOTE: Returns the ADDRESS of the vtable slot (this+0x120), NOT the
		/// vtable pointer value stored at that slot.  The slot address serves as
		/// the "interface object" because the first 8 bytes at that address ARE
		/// the vtable pointer (as set by the MC constructor).  The previous
		/// implementation dereferenced the slot and returned the raw vtable
		/// address, which would cause virtual function calls to read the destructor
		/// function address as the vtable pointer and then index into random code.
		[[nodiscard]] IMovementSetGoal* GetIMovementSetGoal() const
		{
			return reinterpret_cast<IMovementSetGoal*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x120));
		}

		/// Get the IMovementQueryState interface pointer (at +0x128).
		[[nodiscard]] IMovementQueryState* GetIMovementQueryState() const
		{
			return reinterpret_cast<IMovementQueryState*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x128));
		}

		/// Get the IMovementPathManager interface pointer (at +0x130).
		/// Note: This offset corresponds to IMovementPathEvaluator in the layout,
		/// but QueryInterface returns IMovementPathManager here.
		[[nodiscard]] IMovementPathManager* GetIMovementPathManager() const
		{
			return reinterpret_cast<IMovementPathManager*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x130));
		}

		/// Get the IMovementDirectControl interface pointer (at +0x138).
		[[nodiscard]] IMovementDirectControl* GetIMovementDirectControl() const
		{
			return reinterpret_cast<IMovementDirectControl*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x138));
		}

		/// Get the IMovementPlannerDirectControl interface pointer (at +0x140).
		[[nodiscard]] IMovementPlannerDirectControl* GetIMovementPlannerDirectControl() const
		{
			return reinterpret_cast<IMovementPlannerDirectControl*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x140));
		}

		/// Get the IMovementSetSprinting interface pointer (at +0x148).
		[[nodiscard]] IMovementSetSprinting* GetIMovementSetSprinting() const
		{
			return reinterpret_cast<IMovementSetSprinting*>(
				const_cast<std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x148));
		}

		// === Key accessors (offset-based reads) ===

		/// Returns the owning Actor, or nullptr if not set.
		[[nodiscard]] Actor* GetActor() const { return *reinterpret_cast<Actor* const*>(reinterpret_cast<const std::uint8_t*>(this) + 0x190); }

		/// Returns the current state. Initialized to 2.
		[[nodiscard]] std::int32_t GetState() const { return *reinterpret_cast<const std::int32_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x198); }

		/// Returns the sub-state (0=idle, 1=active, 2=reset, 3=disable).
		[[nodiscard]] std::int32_t GetSubState() const { return *reinterpret_cast<const std::int32_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x19C); }

		/// Returns the current move mode (0=walk, 1=run).
		[[nodiscard]] std::uint8_t GetMoveMode() const { return *reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x1A0); }

		/// Returns whether the controller is active.
		[[nodiscard]] bool IsActive() const { return *reinterpret_cast<const std::uint8_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x1A7) != 0; }

		/// Returns the activation flags at +0x1A4.
		[[nodiscard]] std::uint16_t GetActivationFlags() const { return *reinterpret_cast<const std::uint16_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x1A4); }

		/// Returns whether the interface vtables are all set (initialization check).
		[[nodiscard]] bool IsInitialized() const
		{
			auto base = reinterpret_cast<const std::uint8_t*>(this);
			return *reinterpret_cast<void* const*>(base + 0x120) != nullptr &&
			       *reinterpret_cast<void* const*>(base + 0x128) != nullptr &&
			       *reinterpret_cast<void* const*>(base + 0x130) != nullptr &&
			       *reinterpret_cast<void* const*>(base + 0x138) != nullptr &&
			       *reinterpret_cast<void* const*>(base + 0x140) != nullptr &&
			       *reinterpret_cast<void* const*>(base + 0x148) != nullptr &&
			       GetActor() != nullptr;
		}

		/// Returns the number of pending goals in the queue.
		[[nodiscard]] std::int32_t GetPendingGoalCount() const { return *reinterpret_cast<const std::int32_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x160); }

		/// Returns the number of active goals.
		[[nodiscard]] std::int32_t GetActiveGoalCount() const { return *reinterpret_cast<const std::int32_t*>(reinterpret_cast<const std::uint8_t*>(this) + 0x178); }

		/// Activate the MovementControllerNPC so it processes pathing requests.
		/// Both the update loop and queue processing require an active controller.
		/// Call after spawn and after GetOrCreateMovementController.
		/// ID 2234375 - Activates for 3D-loaded actors.
		/// ID 2234376 - Activates when 3D not yet loaded.
		static void Activate(RE::MovementControllerNPC* mc)
		{
			using func_t = void(RE::MovementControllerNPC*);
			static REL::Relocation<func_t> func{ ID::ActorMover::Activate3D };
			return func(mc);
		}

		// === Member fields (for direct offset-based access) ===
		// Note: declared here for documentation. Most fields are accessed
		// via the accessor methods above rather than directly.
		//
		// +0x000: void* vfptr
		// +0x008: char pad08[0x48] - ref count, internal state up to +0x50
		// +0x050: void* interfaceTable - BSFixedString-keyed interface table array
		// +0x100: std::int32_t interfaceCount - number of interfaces
		// +0x108: BSSpinLock interfaceLock - spinlock for interface table
		// +0x110: char pad110[0x10] - up to +0x120
		// +0x120: void* imovementSetGoal_vtable
		// +0x128: void* imovementQueryState_vtable
		// +0x130: void* imovementPathManager_vtable
		// +0x138: void* imovementDirectControl_vtable
		// +0x140: void* imovementPlannerDirectControl_vtable
		// +0x148: void* imovementSetSprinting_vtable
		// +0x150: std::uint32_t updateSpinLockCount
		// +0x154: std::uint32_t updateRecursionCount
		// +0x158: void* pendingGoalQueueHead
		// +0x160: std::int32_t pendingGoalCount
		// +0x164: char pad164[0x0C] - pad to +0x170
		// +0x170: void* activeGoalQueueHead
		// +0x178: std::int32_t activeGoalCount
		// +0x17C: char pad17C[0x0C] - pad to +0x188
		// +0x188: void* handlePtr
		// +0x190: Actor* actor
		// +0x198: std::int32_t state
		// +0x19C: std::int32_t subState
		// +0x1A0: std::uint32_t moveMode
		// +0x1A4: std::uint16_t activationFlags
		// +0x1A6: std::uint8_t activeFlag
		// +0x1A7: char pad1A7[0x01] - pad to +0x1A8
	};
	// NOTE: No static_assert for size here because the class has no declared
	// data members (it's a transparent offset-based access type). The runtime
	// size is 0x1A8 bytes, allocated by the game's constructor.
}
