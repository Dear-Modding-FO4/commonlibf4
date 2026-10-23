#pragma once

#include "RE/I/IMovementInterface.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class __declspec(novtable) IMovementDirectControl :
	    public IMovementInterface  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementDirectControl };
		static constexpr auto VTABLE{ VTABLE::IMovementDirectControl };

		// add
		virtual void SetDirectControl() = 0;                                                  // 01
		virtual void SetMovementDirection(const NiPoint3& a_direction) = 0;                   // 02
		virtual void SetMovementSpeed(float a_speed) = 0;                                     // 03
		virtual void SetMovementRotationSpeed(const NiPoint3& a_rotationSpeed) = 0;           // 04
		virtual void RampToMovementDirection(const NiPoint3& a_direction, float a_time) = 0;  // 05
		virtual void RampToMovementSpeed(float a_speed, float a_time) = 0;                    // 06
		virtual void RampToRotationSpeed(const NiPoint3& a_rotationSpeed, float a_time) = 0;  // 07
		virtual void ClearDirectControl() = 0;                                                // 08
	};
	static_assert(sizeof(IMovementDirectControl) == 0x8);
}
