#pragma once

#include "RE/B/bhkPhysicsSystem.h"

namespace RE
{
	class __declspec(novtable) bhkRagdollSystem :
		public bhkPhysicsSystem  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::bhkRagdollSystem };
		inline static constexpr auto VTABLE{ VTABLE::bhkRagdollSystem };
	};
	static_assert(sizeof(bhkRagdollSystem) == 0x28);
}
