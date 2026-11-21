#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkbBindable.h"

namespace RE
{
	class __declspec(novtable) hkbBoneIndexArray :
		public hkbBindable  // 0x00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::hkbBoneIndexArray };
		inline static constexpr auto VTABLE{ VTABLE::hkbBoneIndexArray };

		// members
		hkArray<std::int16_t> m_boneIndices;  // 0x30
	};
	static_assert(sizeof(hkbBoneIndexArray) == 0x40);
	static_assert(offsetof(hkbBoneIndexArray, m_boneIndices) == 0x30);
}
