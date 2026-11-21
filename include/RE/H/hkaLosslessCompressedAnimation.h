#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaLosslessCompressedAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaLosslessCompressedAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaLosslessCompressedAnimation };

		enum class LosslessTrackType : std::uint32_t
		{
			kTrackTypeClear = 0,
			kTrackTypeStatic = 1,
			kTrackTypeDynamic = 2
		};

		// members
		hkArray<float> m_dynamicTranslations;                // 0x38
		hkArray<float> m_staticTranslations;                 // 0x48
		hkArray<std::uint64_t> m_translationTypeAndOffsets;  // 0x58
		hkArray<hkQuaternionf> m_dynamicRotations;           // 0x68
		hkArray<hkQuaternionf> m_staticRotations;            // 0x78
		hkArray<std::uint16_t> m_rotationTypeAndOffsets;     // 0x88
		hkArray<float> m_dynamicScales;                      // 0x98
		hkArray<float> m_staticScales;                       // 0xA8
		hkArray<std::uint64_t> m_scaleTypeAndOffsets;        // 0xB8
		hkArray<float> m_floats;                             // 0xC8
		std::int32_t m_numFrames;                            // 0xD8
	};
	static_assert(sizeof(hkaLosslessCompressedAnimation) == 0xE0);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_dynamicTranslations) == 0x38);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_staticTranslations) == 0x48);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_translationTypeAndOffsets) == 0x58);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_dynamicRotations) == 0x68);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_staticRotations) == 0x78);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_rotationTypeAndOffsets) == 0x88);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_dynamicScales) == 0x98);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_staticScales) == 0xA8);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_scaleTypeAndOffsets) == 0xB8);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_floats) == 0xC8);
	static_assert(offsetof(hkaLosslessCompressedAnimation, m_numFrames) == 0xD8);
}
