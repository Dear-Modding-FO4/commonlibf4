#pragma once

#include "RE/N/NiFrustum.h"
#include "RE/N/NiPlane.h"
#include "RE/N/NiTransform.h"

namespace RE
{
	class NiFrustumPlanes
	{
	public:
		enum class Plane
		{
			kNearPlane = 0x0,
			kFarPlane = 0x1,
			kLeftPlane = 0x2,
			kRightPlane = 0x3,
			kTopPlane = 0x4,
			kBottomPlane = 0x5
		};

		// Builds all six planes from a camera frustum and world transform.
		void Set(const NiFrustum& a_frustum, const NiTransform& a_transform)
		{
			using func_t = decltype(&NiFrustumPlanes::Set);
			static REL::Relocation<func_t> func{ ID::NiFrustumPlanes::Set };
			return func(this, a_frustum, a_transform);
		}

		// members
		NiPlane       cullingPlanes[6];  // 00
		std::uint32_t activePlanes;      // 60
		std::uint32_t basePlaneStates;   //64
		std::byte     pad[0x8];          // 68
	};
	static_assert(sizeof(NiFrustumPlanes) == 0x70);
}
