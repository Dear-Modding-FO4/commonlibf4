#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbBindable.h"

namespace RE
{
	class __declspec(novtable) hkbBoneWeightArray :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBoneWeightArray };
		inline static constexpr auto VTABLE{ VTABLE::hkbBoneWeightArray };

		// members
		hkArray<float> m_boneWeights;  // 0x30
	};
	static_assert(sizeof(hkbBoneWeightArray) == 0x40);
	static_assert(offsetof(hkbBoneWeightArray, m_boneWeights) == 0x30);
}
