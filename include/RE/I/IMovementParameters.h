#pragma once

// Unstable, doesn't work 9/10 times, trying to use it WILL break your will to live.

#include "RE/I/IMovementInterface.h"

namespace RE
{
	/// Movement parameters used when submitting pathing requests.
	///
	/// Size: 0x30 bytes
	/// VTABLE: IMovementParameters (REL::ID(1136103))
	///
	/// Created in ActorMover::UpdatePathing and stored in the BSPathingRequest.
	/// Contains speed multipliers and movement constants.
	///
	/// Layout:
	///   +0x00: vfptr (IMovementParameters vtable)
	///   +0x08: refCount (int32, BSTSmartPointer ref count)
	///   +0x0C: field_0C (int32, initialized to 0)
	///   +0x10: speedMult (float)
	///   +0x14: speedMultSq (float, speedMult * speedMult)
	///   +0x18: speed (float)
	///   +0x1C: constant2 (float, always 2.0f)
	///   +0x20: constantField20 (float, from DAT_142f2a8f8)
	///   +0x24: constantField24 (float, from DAT_142f2a8fc)
	///   +0x28: constantField28 (float, from DAT_142f2a900)
	class __declspec(novtable) IMovementParameters
	{
	public:
		static constexpr auto RTTI{ RTTI::IMovementParameters };
		static constexpr auto VTABLE{ VTABLE::IMovementParameters };

		virtual ~IMovementParameters() = default;  // 00

		// members
		std::int32_t refCount;           // 08 - BSTSmartPointer reference count
		std::int32_t field_0C;           // 0C - initialized to 0
		float        speedMult;          // 10 - speed multiplier
		float        speedMultSq;        // 14 - speedMult * speedMult
		float        speed;              // 18 - movement speed
		float        constant2;          // 1C - always 2.0f
		float        constantField20;    // 20 - from DAT_142f2a8f8
		float        constantField24;    // 24 - from DAT_142f2a8fc
		float        constantField28;    // 28 - from DAT_142f2a900
	};
	static_assert(sizeof(IMovementParameters) == 0x30);
}
