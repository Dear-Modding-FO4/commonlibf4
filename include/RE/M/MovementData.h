#pragma once

#include "RE/N/NiPoint3.h"

namespace RE
{
	class MovementData
	{
	public:
		// members
		// Direction in actor-local Euler angles (radians); z is relative to Actor::GetHeading().
		NiPoint3A movementRotation;  // 00
		NiPoint3A rotationSpeed;     // 10
		// Controller-requested speed in game/world units per second, before dt integration.
		float     movementSpeed;     // 20
	};
	static_assert(sizeof(MovementData) == 0x30);
}
