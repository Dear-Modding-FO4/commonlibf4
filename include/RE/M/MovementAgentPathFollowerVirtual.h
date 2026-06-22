#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementPlannerAgent.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MovementPlannerAgent.h"
#include "REL/Relocation.h"

namespace RE
{
	/// A MovementPlannerAgent variant that connects to the Havok path follower system.
	///
	/// Registered via AutoRegisterMovementAgentCreator<MovementAgentPathFollowerVirtual>.
	/// Reads from the Havok path follower state and feeds it into the movement system.
	///
	/// Vtable layout (16 entries, RVA 0x02899040):
	///   +0x00: Destructor
	///   +0x70 (vtable[14]): Returns pointer to Havok bhkPathFollower
	class __declspec(novtable) MovementAgentPathFollowerVirtual :
		public MovementPlannerAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MovementAgentPathFollowerVirtual };
		static constexpr auto VTABLE{ VTABLE::MovementAgentPathFollowerVirtual };

		MovementAgentPathFollowerVirtual() { REX::EMPLACE_VTABLE(this); }

		~MovementAgentPathFollowerVirtual() override = default;  // 00

		F4_HEAP_REDEFINE_NEW(MovementAgentPathFollowerVirtual);

		// members
		// Inherits MovementPlannerAgent layout (~0x40 bytes)
		// Full member layout is not yet known beyond the vtable overrides.
		char pad40[0x00];  // Placeholder for any additional members
	};
	static_assert(sizeof(MovementAgentPathFollowerVirtual) == 0x40);
}
