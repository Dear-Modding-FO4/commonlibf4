#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaAnimationBinding;
	class hkaAnimationControlListener;
	class hkaSkeletonMapper;

	class __declspec(novtable) hkaAnimationControl :
		public hkReferencedObject  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkaAnimationControl };
		inline static constexpr auto VTABLE{ VTABLE::hkaAnimationControl };

		// add
		virtual void update(float a_stepDelta);  // 0x20 [04]
		virtual void getFutureTime(float a_stepDelta, float& a_localTimeOut, std::int32_t& a_loopsOut);  // 0x28 [05]
		virtual void sampleTracks();  // 0x30 [06] (hkQsTransformf__float_)
		virtual void samplePartialTracks();  // 0x38 [07] (uint_hkQsTransformf__uint_float_)
		virtual void getExtractedMotionDeltaReferenceFrame();  // 0x40 [08] (float_hkQsTransformf&)
		virtual std::int32_t getNumberOfTransformTracks();  // 0x48 [09]
		virtual std::int32_t getNumberOfFloatTracks();  // 0x50 [0A]
		virtual std::int32_t getNumTransformTrackToBoneIndices();  // 0x58 [0B]
		virtual const std::int16_t* getTransformTrackToBoneIndices();  // 0x60 [0C]
		virtual std::int32_t getNumFloatTrackToFloatSlotIndices();  // 0x68 [0D]
		virtual const std::int16_t* getFloatTrackToFloatSlotIndices();  // 0x70 [0E]
		virtual std::int32_t getNumPartitionIndices();  // 0x78 [0F]
		virtual const std::int16_t* getPartitionIndices();  // 0x80 [10]
		virtual const hkaSkeletonMapper* getSkeletonMapper();  // 0x88 [11]

		// members
		float m_localTime;                                  // 0x10
		float m_weight;                                     // 0x14
		hkArray<std::uint8_t> m_transformTrackWeights;      // 0x18
		hkArray<std::uint8_t> m_floatTrackWeights;          // 0x28
		hkaAnimationBinding* m_binding;                     // 0x38
		hkArray<hkaAnimationControlListener*> m_listeners;  // 0x40
		float m_motionTrackWeight;                          // 0x50
	};
	static_assert(sizeof(hkaAnimationControl) == 0x58);
	static_assert(offsetof(hkaAnimationControl, m_localTime) == 0x10);
	static_assert(offsetof(hkaAnimationControl, m_weight) == 0x14);
	static_assert(offsetof(hkaAnimationControl, m_transformTrackWeights) == 0x18);
	static_assert(offsetof(hkaAnimationControl, m_floatTrackWeights) == 0x28);
	static_assert(offsetof(hkaAnimationControl, m_binding) == 0x38);
	static_assert(offsetof(hkaAnimationControl, m_listeners) == 0x40);
	static_assert(offsetof(hkaAnimationControl, m_motionTrackWeight) == 0x50);
}
