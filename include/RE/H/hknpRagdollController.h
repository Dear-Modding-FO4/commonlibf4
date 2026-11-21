#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hknpRagdoll;

	class __declspec(novtable) hknpRagdollController :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hknpRagdollController };
		inline static constexpr auto VTABLE{ VTABLE::hknpRagdollController };

		// add
		virtual void driveToPose();  // 0x20 [04]

		// members
		hknpRagdoll* m_ragdoll;                 // 0x10
		float m_strength;                       // 0x18
		std::uint8_t pad1C[0x4];                // 0x1C
		hkArray<hkQsTransformf> m_desiredPose;  // 0x20
		hkArray<float> m_boneStrengths;         // 0x30
	};
	static_assert(sizeof(hknpRagdollController) == 0x40);
	static_assert(offsetof(hknpRagdollController, m_ragdoll) == 0x10);
	static_assert(offsetof(hknpRagdollController, m_strength) == 0x18);
	static_assert(offsetof(hknpRagdollController, m_desiredPose) == 0x20);
	static_assert(offsetof(hknpRagdollController, m_boneStrengths) == 0x30);
}
