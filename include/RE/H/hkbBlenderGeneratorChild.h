#pragma once

#include "RE/H/hkbBindable.h"

namespace RE
{
	class hkbBoneWeightArray;
	class hkbGenerator;

	class __declspec(novtable) hkbBlenderGeneratorChild :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBlenderGeneratorChild };
		inline static constexpr auto VTABLE{ VTABLE::hkbBlenderGeneratorChild };

		// members
		hkbGenerator* m_generator;          // 0x30
		hkbBoneWeightArray* m_boneWeights;  // 0x38
		float m_weight;                     // 0x40
		float m_worldFromModelWeight;       // 0x44
		std::uint8_t unk48[0x8];            // 0x48
	};
	static_assert(sizeof(hkbBlenderGeneratorChild) == 0x50);
	static_assert(offsetof(hkbBlenderGeneratorChild, m_generator) == 0x30);
	static_assert(offsetof(hkbBlenderGeneratorChild, m_boneWeights) == 0x38);
	static_assert(offsetof(hkbBlenderGeneratorChild, m_weight) == 0x40);
	static_assert(offsetof(hkbBlenderGeneratorChild, m_worldFromModelWeight) == 0x44);
}
