#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaSplineCompressedAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaSplineCompressedAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaSplineCompressedAnimation };

		// members
		std::int32_t m_numFrames;                    // 0x38
		std::int32_t m_numBlocks;                    // 0x3C
		std::int32_t m_maxFramesPerBlock;            // 0x40
		std::int32_t m_maskAndQuantizationSize;      // 0x44
		float m_blockDuration;                       // 0x48
		float m_blockInverseDuration;                // 0x4C
		float m_frameDuration;                       // 0x50
		std::uint8_t pad54[0x4];                     // 0x54
		hkArray<std::uint32_t> m_blockOffsets;       // 0x58
		hkArray<std::uint32_t> m_floatBlockOffsets;  // 0x68
		hkArray<std::uint32_t> m_transformOffsets;   // 0x78
		hkArray<std::uint32_t> m_floatOffsets;       // 0x88
		hkArray<std::uint8_t> m_data;                // 0x98
		std::int32_t m_endian;                       // 0xA8
	};
	static_assert(sizeof(hkaSplineCompressedAnimation) == 0xB0);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_numFrames) == 0x38);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_numBlocks) == 0x3C);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_maxFramesPerBlock) == 0x40);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_maskAndQuantizationSize) == 0x44);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_blockDuration) == 0x48);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_blockInverseDuration) == 0x4C);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_frameDuration) == 0x50);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_blockOffsets) == 0x58);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_floatBlockOffsets) == 0x68);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_transformOffsets) == 0x78);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_floatOffsets) == 0x88);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_data) == 0x98);
	static_assert(offsetof(hkaSplineCompressedAnimation, m_endian) == 0xA8);
}
