#pragma once

#include "RE/H/hkQuaternion.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkbModifier.h"
#include "RE/H/hkEnum.h"

namespace RE
{
	class __declspec(novtable) hkbAlignBoneModifier :
		public hkbModifier  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbAlignBoneModifier };
		inline static constexpr auto VTABLE{ VTABLE::hkbAlignBoneModifier };

		enum class AlignModeABAM : std::uint32_t
		{
			kAlignModeCharacterWorldFromModel = 0,
			kAlignModeAnimationSkeletonBone = 1
		};

		enum class AlignTargetMode : std::uint8_t
		{
			kAlignTargetModeCharacterWorldFromModel = 0,
			kAlignTargetModeRagdollSkeletonBone = 1,
			kAlignTargetModeAnimationSkeletonBone = 2,
			kAlignTargetModeUserSpecifiedFrameOfReference = 3
		};

		// members
		std::int8_t m_alignMode;              // 0x58
		hkEnum<AlignTargetMode, std::int8_t> m_alignTargetMode;        // 0x59
		bool m_alignSingleAxis;               // 0x5A
		std::uint8_t pad5B[0x5];              // 0x5B
		hkVector4f m_alignAxis;               // 0x60
		hkVector4f m_alignTargetAxis;         // 0x70
		hkQuaternionf m_frameOfReference;     // 0x80
		float m_duration;                     // 0x90
		std::int32_t m_alignModeIndex;        // 0x94
		std::int32_t m_alignTargetModeIndex;  // 0x98
		float m_time;                         // 0x9C
		float m_timeSinceLastModify;          // 0xA0
	};
	static_assert(sizeof(hkbAlignBoneModifier) == 0xB0);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignMode) == 0x58);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignTargetMode) == 0x59);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignSingleAxis) == 0x5A);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignAxis) == 0x60);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignTargetAxis) == 0x70);
	static_assert(offsetof(hkbAlignBoneModifier, m_frameOfReference) == 0x80);
	static_assert(offsetof(hkbAlignBoneModifier, m_duration) == 0x90);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignModeIndex) == 0x94);
	static_assert(offsetof(hkbAlignBoneModifier, m_alignTargetModeIndex) == 0x98);
	static_assert(offsetof(hkbAlignBoneModifier, m_time) == 0x9C);
	static_assert(offsetof(hkbAlignBoneModifier, m_timeSinceLastModify) == 0xA0);
}
