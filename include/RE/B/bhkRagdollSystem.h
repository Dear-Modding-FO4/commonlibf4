#pragma once

#include "RE/B/bhkPhysicsSystem.h"

namespace RE
{
	class __declspec(novtable) bhkRagdollSystem : public bhkPhysicsSystem
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkRagdollSystem };
		static constexpr auto VTABLE{ VTABLE::bhkRagdollSystem };
	};
}
