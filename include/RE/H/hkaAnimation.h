#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkQsTransformf.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaAnimatedReferenceFrame;
	class hkaAnnotationTrack;
	class hkaSkeleton;

	class __declspec(novtable) hkaAnimation :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimation };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimation };

		// add
		virtual void sampleTracks();  // 0x20 [04] (float_hkQsTransformf__float_)
		virtual void samplePartialTracks();  // 0x28 [05] (float_uint_hkQsTransformf__uint_float_)
		virtual void sampleIndividualTransformTracks();  // 0x30 [06] (float_short__uint_hkQsTransformf_)
		virtual void sampleIndividualFloatTracks();  // 0x38 [07] (float_short__uint_float_)
		virtual std::int32_t getSizeInBytes();  // 0x40 [08]
		virtual std::int32_t getNumOriginalFrames();  // 0x48 [09]
		virtual std::int32_t getNumDataChunks(std::uint32_t a_frame, float a_delta);  // 0x50 [0A]
		virtual void getDataChunks();  // 0x58 [0B] (uint_float_hkaAnimation::DataChunk__int)
		virtual std::int32_t getMaxSizeOfCombinedDataChunks();  // 0x60 [0C]
		virtual std::int32_t getMaxDecompressionTempBytes();  // 0x68 [0D]
		virtual void getExtractedMotionReferenceFrame(float a_time, hkQsTransformf& a_motionOut);  // 0x70 [0E]
		virtual void getExtractedMotionDeltaReferenceFrame(float a_time, float a_nextTime, std::int32_t a_loops, hkQsTransformf& a_deltaMotionOut, float a_cropStartAmount, float a_cropEndAmount);  // 0x78 [0F]
		virtual std::uint32_t getNumAnnotations(float a_startTime, float a_deltaTime);  // 0x80 [10]
		virtual void getAnnotations();  // 0x88 [11] (hkReal startTime, hkReal deltaTime, TrackAnnotation* annotationsOut, hkUint32 maxAnnotations = HK_INT32_MAX)
		virtual bool requiresSkeleton();  // 0x90 [12]
		virtual const hkaSkeleton* getSkeleton();  // 0x98 [13]
		virtual void setSkeleton();  // 0xA0 [14] (hkaSkeleton_)

		enum class AnimationType : std::int32_t
		{
			kUnknownAnimation = 0,
			kInterleavedAnimation = 1,
			kMirroredAnimation = 2,
			kSplineCompressedAnimation = 3,
			kQuantizedCompressedAnimation = 4,
			kPredictiveCompressedAnimation = 5,
			kReferencePoseAnimation = 6
		};

		// members
		hkEnum<AnimationType, std::int32_t> m_type;      // 0x10
		float m_duration;                                // 0x14
		std::int32_t m_numberOfTransformTracks;          // 0x18
		std::int32_t m_numberOfFloatTracks;              // 0x1C
		hkaAnimatedReferenceFrame* m_extractedMotion;    // 0x20
		hkArray<hkaAnnotationTrack> m_annotationTracks;  // 0x28
	};
	static_assert(sizeof(hkaAnimation) == 0x38);
	static_assert(offsetof(hkaAnimation, m_type) == 0x10);
	static_assert(offsetof(hkaAnimation, m_duration) == 0x14);
	static_assert(offsetof(hkaAnimation, m_numberOfTransformTracks) == 0x18);
	static_assert(offsetof(hkaAnimation, m_numberOfFloatTracks) == 0x1C);
	static_assert(offsetof(hkaAnimation, m_extractedMotion) == 0x20);
	static_assert(offsetof(hkaAnimation, m_annotationTracks) == 0x28);
}
