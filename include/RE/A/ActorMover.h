#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/M/MemoryManager.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESObjectREFR.h"
#include "REL/Relocation.h"
#include "REX/FModule.h"

namespace RE
{
	class Actor;

	struct BSPathingAvoidNodeArray;
	struct MovementMessage;

	/// Manages an actor's pathfinding requests and movement system integration.
	///
	/// ActorMover is the bridge between high-level AI pathfinding requests and the
	/// low-level PathfindingCore / MovementController system. Every Actor that is
	/// pathfinding has an ActorMover at Actor+0x308, created via Actor::CreateActorMover().
	///
	/// Size: 0x10
	///   +0x00: vfptr (vtable at VTABLE::ActorMover, REL::ID(334518))
	///   +0x08: Actor* actor (owning actor back-reference)
	///
	class ActorMover
	{
	public:
		inline static constexpr auto RTTI{ RTTI::ActorMover };
		inline static constexpr auto VTABLE{ VTABLE::ActorMover };

		struct PathingRequest;

		// 00: virtual destructor
		virtual ~ActorMover();  // 00

		// get owning actor
		Actor* GetActor() const { return actor; }

		// ==== Pathing query ====

		/// Check if this actor has an active pathing request.
		/// Returns true when a PathingRequest exists in the AIProcess event sink.
		/// @param a_request [out] Receives a reference-counted pointer to the active request.
		/// @return true if currently pathing
		bool IsActorPathing(BSTSmartPointer<PathingRequest>& a_request)
		{
			using func_t = bool(ActorMover*, BSTSmartPointer<PathingRequest>&);
			static REL::Relocation<func_t> func{ REL::ID(2234289) };
			return func(this, a_request);
		}

		/// Check if currently pathing (handles special fly-state cases).
		/// Also creates a new PathingRequest if the actor's fly state is valid.
		/// This is the main IsPathing check that the per-frame update uses.
		bool IsPathing(BSTSmartPointer<PathingRequest>& a_request)
		{
			using func_t = bool(ActorMover*, BSTSmartPointer<PathingRequest>&);
			static REL::Relocation<func_t> func{ REL::ID(2234290) };
			return func(this, a_request);
		}

		// ==== Pathfinding goal setters ====

		/// Set pathfinding goal to a target reference with speed override.
		/// NOTE: This ID is listed as `SetPathfindingGoal` in IDs.h but both
		/// overloads (with/without overrideSpeed) are handled by this function.
		void SetPathfindingGoal(TESObjectREFR* a_target, float a_speed, BSPathingAvoidNodeArray* a_avoidNodes)
		{
			using func_t = void(ActorMover*, TESObjectREFR*, float, BSPathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ ID::ActorMover::SetPathfindingGoal };
			return func(this, a_target, a_speed, a_avoidNodes);
		}

		/// Set pathfinding goal to a target reference with explicit speed override.
		void SetPathfindingGoal(TESObjectREFR* a_target, float a_speed, float a_overrideSpeed, BSPathingAvoidNodeArray* a_avoidNodes)
		{
			using func_t = void(ActorMover*, TESObjectREFR*, float, float, BSPathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ REL::ID(2234293) };
			return func(this, a_target, a_speed, a_overrideSpeed, a_avoidNodes);
		}

		/// Set pathfinding goal to a position.
		/// a_speed: FLT_MIN sentinel = auto-calculate from actor's movement controller
		/// NOTE: IDs.h mislabels this ID as ClearPath - RVA 0xDC0F30 is actually SetPathfindingGoalPos.
		void SetPathfindingGoalPos(NiPoint3* a_pos, float a_speed, float a_tolerance, float a_speedMult)
		{
			using func_t = void(ActorMover*, NiPoint3*, float, float, float);
			static REL::Relocation<func_t> func{ REL::ID(2234298) };
			return func(this, a_pos, a_speed, a_tolerance, a_speedMult);
		}

		/// Set pathfinding goal to a position (alternate variant).
		void SetPathfindingGoalPos(NiPoint3* a_pos, std::uint32_t a_flags, float a_speed1, float a_speed2,
			std::uint32_t a_tolerance)
		{
			using func_t = void(ActorMover*, NiPoint3*, std::uint32_t, float, float, std::uint32_t);
			static REL::Relocation<func_t> func{ REL::ID(2234299) };
			return func(this, a_pos, a_flags, a_speed1, a_speed2, a_tolerance);
		}

		/// Set pathfinding goal to another Actor's position via PathfindingCore.
		/// This reads target->data.location and target->parentCell, then calls
		/// PathfindingCore::RequestPath to create a BSPathingRequest (enables MOVEMENT).
		void SetPathfindingGoalPos_Inner(Actor* a_target, float a_speed, uint64_t a_flags)
		{
			using func_t = void(ActorMover*, Actor*, float, uint64_t);
			static REL::Relocation<func_t> func{ REL::ID(2234291) };
			return func(this, a_target, a_speed, a_flags);
		}

		/// Set pathfinding goal targeting an actor handle or form ID.
		void SetPathfindingGoal(Actor* a_target, float a_speed, float a_tolerance)
		{
			using func_t = void(ActorMover*, Actor*, float, float);
			static REL::Relocation<func_t> func{ REL::ID(2234300) };
			return func(this, a_target, a_speed, a_tolerance);
		}

		// ==== Extended pathing ====

		/// Set pathfinding goal via explicit parameter struct.
		/// ID 2234294 - Listed as SetPathfindingGoalEx in IDs.h
		/// @param a_params Pointer to extended pathfinding params (type unknown)
		/// @param a_out    Receives result/output
		/// @return true on success
		// TODO: FIXME
		bool SetPathfindingGoalEx(TESObjectREFR* a_targetHandle, void* a_params)
		{
			using func_t = bool(ActorMover*, TESObjectREFR*, void*);
			static REL::Relocation<func_t> func{ ID::ActorMover::SetPathfindingGoalEx };
			return func(this, a_targetHandle, a_params);
		}

		// ==== Path lifecycle ====

		/// Clear the current pathing request through the event sink.
		/// Returns true if a request was successfully cleared.
		bool ClearPath()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234295) };
			return func(this);
		}

		/// Per-frame pathing request processing and submission.
		/// Called each frame from Actor::Update to advance the pathing state machine.
		void UpdatePathing(float a_speedMult)
		{
			using func_t = void(ActorMover*, float);
			static REL::Relocation<func_t> func{ REL::ID(2234296) };
			return func(this, a_speedMult);
		}

		/// Immediately cancel any current path and request a new path computation.
		/// Called by many subsystems (combat, package, movement, etc.) when the
		/// actor's desired destination changes.
		void RequestPath()
		{
			using func_t = void(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234297) };
			return func(this);
		}

		/// Stop all actor movement by sending a MovementMessage type Stop (0).
		void StopMoving()
		{
			using func_t = void(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234302) };
			return func(this);
		}

		/// Check if the current path is still valid.
		/// Returns false if path has been invalidated (e.g., navmesh cut).
		bool IsPathValid()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234301) };
			return func(this);
		}

		// ==== Extended pathing: MovementController event sink interface ====
		// These methods access the AIProcess event sink directly rather than
		// routing through PathingRequest smart pointers.

		/// Set pathfinding goal with heading/speed. Computes heading angle from
		/// actor's current heading and schedules a BSPathingRequest.
		/// @param a_heading Target heading angle
		/// @param a_speed   Movement speed
		std::uint64_t SetPathfindingGoal(float a_heading, float a_speed)
		{
			using func_t = std::uint64_t(ActorMover*, float, float);
			static REL::Relocation<func_t> func{ REL::ID(2234303) };
			return func(this, a_heading, a_speed);
		}

		/// Set pathfinding goal to a NiPoint3 position via MovementController.
		/// This is the lower-level version that bypasses PathingRequest and
		/// directly schedules a BSPathingRequest through the event sink.
		/// @param a_pos    Target position
		/// @param a_speed  Movement speed
		bool SetPathfindingGoalPos(const NiPoint3& a_pos, float a_speed)
		{
			using func_t = bool(ActorMover*, const NiPoint3&, float);
			static REL::Relocation<func_t> func{ REL::ID(2234304) };
			return func(this, a_pos, a_speed);
		}

		/// Check whether the current destination matches, and only send a new
		/// pathfinding request if it changed. Route via DAT_143dc3ac0 event sink.
		bool SetPathfindingGoalCheckMoveOnly(std::uint32_t a_flags, void* a_dest, float a_speed)
		{
			using func_t = bool(ActorMover*, std::uint32_t, void*, float);
			static REL::Relocation<func_t> func{ REL::ID(2234305) };
			return func(this, a_flags, a_dest, a_speed);
		}

		/// Same as SetPathfindingGoalCheckMoveOnly but takes a NiPoint3 destination.
		bool SetPathfindingGoalPosCheckMoveOnly(const NiPoint3& a_pos, void* a_dest, float a_speed)
		{
			using func_t = bool(ActorMover*, const NiPoint3&, void*, float);
			static REL::Relocation<func_t> func{ REL::ID(2234306) };
			return func(this, a_pos, a_dest, a_speed);
		}

		/// Check if the pathing request is complete via the MovementController
		/// event sink (DAT_143dc3ac0 vtable+0x48).
		std::uint8_t IsPathingRequestComplete()
		{
			using func_t = std::uint8_t(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234307) };
			return func(this);
		}

		/// Check path status via MovementController event sink (vtable+0x50).
		/// Returns 1 if path is active, 0 otherwise.
		std::uint8_t CheckPathStatus()
		{
			using func_t = std::uint8_t(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234308) };
			return func(this);
		}

		/// Compare current path destination with expected destination.
		/// @param a_expected  Expected destination to compare against
		/// @param a_outStatus [out] Receives additional status info
		/// @return true if destinations match
		bool ComparePathDestination(void* a_expected, std::uint8_t* a_outStatus)
		{
			using func_t = bool(ActorMover*, void*, std::uint8_t*);
			static REL::Relocation<func_t> func{ REL::ID(2234309) };
			return func(this, a_expected, a_outStatus);
		}

		/// Compare and resend path if destination doesn't match.
		bool CompareAndResendPath(void* a_expected, std::uint8_t* a_outStatus)
		{
			using func_t = bool(ActorMover*, void*, std::uint8_t*);
			static REL::Relocation<func_t> func{ REL::ID(2234310) };
			return func(this, a_expected, a_outStatus);
		}

		/// Get current pathing state from MovementController event sink (vtable+0x68).
		std::uint8_t GetPathingState()
		{
			using func_t = std::uint8_t(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234311) };
			return func(this);
		}

		/// Check if actor is pathing via the MovementController (not PathingRequest).
		/// This is the low-level IsPathing that Actor::IsPathing uses internally.
		/// Returns true only if pathing is active through the event sink.
		bool IsPathingViaMovementController()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234312) };
			return func(this);
		}

		/// Extended IsPathing check that also validates current destination type.
		bool IsPathingViaMovementControllerChecked()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ REL::ID(2234313) };
			return func(this);
		}

		// members
		Actor* actor;  // 08 - owning actor back-reference
	};
	static_assert(sizeof(ActorMover) == 0x10);
}
