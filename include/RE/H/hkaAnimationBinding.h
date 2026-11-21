#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkaAnimation;

	class __declspec(novtable) hkaAnimationBinding :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimationBinding };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimationBinding };

		enum class BlendHint : std::int8_t
		{
			kNormal = 0,
			kAdditiveDeprecated = 1,
			kAdditive = 2
		};

		// members
		hkStringPtr m_originalSkeletonName;                    // 0x10
		hkaAnimation* m_animation;                             // 0x18
		hkArray<std::int16_t> m_transformTrackToBoneIndices;   // 0x20
		hkArray<std::int16_t> m_floatTrackToFloatSlotIndices;  // 0x30
		hkArray<std::int16_t> m_partitionIndices;              // 0x40
		hkEnum<BlendHint, std::int8_t> m_blendHint;            // 0x50
	};
	static_assert(sizeof(hkaAnimationBinding) == 0x58);
	static_assert(offsetof(hkaAnimationBinding, m_originalSkeletonName) == 0x10);
	static_assert(offsetof(hkaAnimationBinding, m_animation) == 0x18);
	static_assert(offsetof(hkaAnimationBinding, m_transformTrackToBoneIndices) == 0x20);
	static_assert(offsetof(hkaAnimationBinding, m_floatTrackToFloatSlotIndices) == 0x30);
	static_assert(offsetof(hkaAnimationBinding, m_partitionIndices) == 0x40);
	static_assert(offsetof(hkaAnimationBinding, m_blendHint) == 0x50);
}
