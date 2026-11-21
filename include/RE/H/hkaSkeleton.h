#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaBone;
	class hkaSkeletonLocalFrameOnBone;
	class hkaSkeletonPartition;

	class __declspec(novtable) hkaSkeleton :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaSkeleton };
		inline static constexpr auto VTABLE{ VTABLE::hkaSkeleton };

		// members
		hkStringPtr m_name;                                  // 0x10
		hkArray<std::int16_t> m_parentIndices;               // 0x18
		hkArray<hkaBone> m_bones;                            // 0x28
		hkArray<hkQsTransformf> m_referencePose;             // 0x38
		hkArray<float> m_referenceFloats;                    // 0x48
		hkArray<hkStringPtr> m_floatSlots;                   // 0x58
		hkArray<hkaSkeletonLocalFrameOnBone> m_localFrames;  // 0x68
		hkArray<hkaSkeletonPartition> m_partitions;          // 0x78
	};
	static_assert(sizeof(hkaSkeleton) == 0x88);
	static_assert(offsetof(hkaSkeleton, m_name) == 0x10);
	static_assert(offsetof(hkaSkeleton, m_parentIndices) == 0x18);
	static_assert(offsetof(hkaSkeleton, m_bones) == 0x28);
	static_assert(offsetof(hkaSkeleton, m_referencePose) == 0x38);
	static_assert(offsetof(hkaSkeleton, m_referenceFloats) == 0x48);
	static_assert(offsetof(hkaSkeleton, m_floatSlots) == 0x58);
	static_assert(offsetof(hkaSkeleton, m_localFrames) == 0x68);
	static_assert(offsetof(hkaSkeleton, m_partitions) == 0x78);
}
