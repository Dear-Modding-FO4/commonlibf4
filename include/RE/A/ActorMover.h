#pragma once

#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class BSPathingAvoidNodeArray;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class __declspec(novtable) ActorMover
	{
	public:
		static constexpr auto RTTI{ RTTI::ActorMover };
		static constexpr auto VTABLE{ VTABLE::ActorMover };

		// Construction and lifetime belong to the owning actor.
		ActorMover() = delete;
		virtual ~ActorMover();  // 00

		[[nodiscard]] Actor* GetActor() const { return actor; }

		// Requires an actor with an initialized movement controller.
		void SetGoal(TESObjectREFR* a_target, float a_speed, BSPathingAvoidNodeArray* a_avoidNodes = nullptr)
		{
			using func_t = void(ActorMover*, TESObjectREFR*, float, BSPathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ ID::ActorMover::SetGoal };
			func(this, a_target, a_speed, a_avoidNodes);
		}

		void SetGoal(NiPoint3& a_position, TESObjectCELL* a_cell, TESWorldSpace* a_worldSpace, float a_speed, BSPathingAvoidNodeArray* a_avoidNodes = nullptr)
		{
			using func_t = void(ActorMover*, NiPoint3&, TESObjectCELL*, TESWorldSpace*, float, BSPathingAvoidNodeArray*);
			static REL::Relocation<func_t> func{ ID::ActorMover::SetGoalPos };
			func(this, a_position, a_cell, a_worldSpace, a_speed, a_avoidNodes);
		}

		void ClearPath()
		{
			using func_t = void(ActorMover*);
			static REL::Relocation<func_t> func{ ID::ActorMover::ClearPath };
			func(this);
		}

		[[nodiscard]] bool IsPathing()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ ID::ActorMover::IsPathing };
			return func(this);
		}

		[[nodiscard]] bool IsPathValid()
		{
			using func_t = bool(ActorMover*);
			static REL::Relocation<func_t> func{ ID::ActorMover::IsPathValid };
			return func(this);
		}

		// members
		Actor* actor;  // 08
	};
	static_assert(offsetof(ActorMover, actor) == 0x8);
	static_assert(sizeof(ActorMover) == 0x10);
}
