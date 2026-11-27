#pragma once

#include "RE/I/IMovementInterface.h"

namespace RE
{
	class __declspec(novtable) IMovementMotionDrivenControl :
		public IMovementInterface
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementMotionDrivenControl };
		static constexpr auto VTABLE{ VTABLE::IMovementMotionDrivenControl };

		virtual void SetAnimationDriven() = 0;                    // 01
		virtual void SetMotionDriven() = 0;                       // 02
		virtual void SetAnimationDrivenAllowRotation() = 0;       // 03
		virtual bool IsMotionDriven() const = 0;                  // 04
		virtual bool IsAnimationDriven() const = 0;               // 05
		virtual bool IsAnimationDrivenAllowRotation() const = 0;  // 06
		virtual bool Unk_07() const = 0;                          // 07
		// Clears the actor's freeze-locomotion-channel flag when enabled.
		virtual void SetGraphLocomotionEnabled(bool a_enabled) = 0;  // 08
		virtual bool Unk_09() const = 0;                             // 09
	};
	static_assert(sizeof(IMovementMotionDrivenControl) == 0x8);
}
