#pragma once

#include "RE/I/IMovementInterface.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) IMovementPlannerDirectControl :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementPlannerDirectControl };
		static constexpr auto VTABLE{ VTABLE::IMovementPlannerDirectControl };

		// add
		virtual void SetPlannerDirectControl() = 0;                        // 01
		virtual void SetTargetDirection(const NiPoint3& a_direction) = 0;  // 02
		virtual void SetTargetSpeed(float a_speed) = 0;                    // 03
		virtual void SetTargetAngle(const NiPoint3& a_angle) = 0;          // 04
		virtual void ClearPlannerDirectControl() = 0;                      // 05
	};
	static_assert(sizeof(IMovementPlannerDirectControl) == 0x8);
}
