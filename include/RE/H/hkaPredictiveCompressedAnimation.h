#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkaAnimation.h"

namespace RE
{
	class __declspec(novtable) hkaPredictiveCompressedAnimation :
		public hkaAnimation  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaPredictiveCompressedAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaPredictiveCompressedAnimation };

		enum class StorageClass : std::uint32_t
		{
			kStorageStatic = 0,
			kStorageReference = 1,
			kStorageDynamicRange = 2,
			kStorageDynamicFixed = 3
		};

		enum class IntArrayID : std::uint32_t
		{
			kBlockOffsets = 0,
			kFirstFloatBlockOffsets = 1,
			kIsAnimatedBitmap = 2,
			kIsFixedRangeBitmap = 3,
			kDynamicBoneTrackIndex = 4,
			kDynamicFloatTrackIndex = 5,
			kStaticBoneTrackIndex = 6,
			kStaticFloatTrackIndex = 7,
			kRenormQuaternionIndex = 8,
			kNumIntArrays = 9
		};

		enum class FloatArrayID : std::uint32_t
		{
			kStaticValues = 0,
			kDynamicScales = 1,
			kDynamicOffsets = 2,
			kNumFloatArrays = 3
		};

		// members
		hkArray<std::uint8_t> m_compressedData;             // 0x38
		hkArray<std::uint16_t> m_intData;                   // 0x48
		std::int32_t m_intArrayOffsets[9];                  // 0x58
		std::uint8_t pad7C[0x4];                            // 0x7C
		hkArray<float> m_floatData;                         // 0x80
		std::int32_t m_floatArrayOffsets[3];                // 0x90
		std::int32_t m_numBones;                            // 0x9C
		std::int32_t m_numFloatSlots;                       // 0xA0
		std::int32_t m_numFrames;                           // 0xA4
		std::int32_t m_firstFloatBlockScaleAndOffsetIndex;  // 0xA8
		std::uint8_t padAC[0x4];                            // 0xAC
		void* m_skeleton;                                   // 0xB0
		std::int32_t m_maxCompressedBytesPerFrame;          // 0xB8
	};
	static_assert(sizeof(hkaPredictiveCompressedAnimation) == 0xC0);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_compressedData) == 0x38);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_intData) == 0x48);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_intArrayOffsets) == 0x58);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_floatData) == 0x80);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_floatArrayOffsets) == 0x90);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_numBones) == 0x9C);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_numFloatSlots) == 0xA0);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_numFrames) == 0xA4);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_firstFloatBlockScaleAndOffsetIndex) == 0xA8);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_skeleton) == 0xB0);
	static_assert(offsetof(hkaPredictiveCompressedAnimation, m_maxCompressedBytesPerFrame) == 0xB8);
}
